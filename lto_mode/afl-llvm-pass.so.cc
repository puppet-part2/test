/*
   american fuzzy lop - LLVM-mode instrumentation pass
   ---------------------------------------------------

   Written by Laszlo Szekeres <lszekeres@google.com> and
              Michal Zalewski <lcamtuf@google.com>

   LLVM integration design comes from Laszlo Szekeres. C bits copied-and-pasted
   from afl-as.c are Michal's fault.

   Copyright 2015, 2016 Google Inc. All rights reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at:

     http://www.apache.org/licenses/LICENSE-2.0

   This library is plugged into LLVM when invoking clang through afl-clang-lto.
   It tells the compiler to add code roughly equivalent to the bits discussed
   in ../afl-as.h.

 */

#define AFL_LLVM_PASS

#include "../config.h"
#include "../debug.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fnmatch.h>

#include "llvm/ADT/Statistic.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/Debug.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"


#include "llvm/IR/CFG.h"
#include "llvm/Analysis/Interval.h"
#include "llvm/Transforms/Utils/BasicBlockUtils.h"

using namespace llvm;

namespace {

  class AFLCoverage : public ModulePass {

    public:

      static char ID;
      AFLCoverage() : ModulePass(ID) {
      }

      void getAnalysisUsage(AnalysisUsage &AU) const override {

        ModulePass::getAnalysisUsage(AU);
        AU.addRequired<DominatorTreeWrapperPass>();
        AU.addRequired<LoopInfoWrapperPass>();

      }

      bool runOnModule(Module &M) override;

      // StringRef getPassName() const override {
      //  return "American Fuzzy Lop Instrumentation";
      // }
      protected:
        uint32_t     afl_global_edge_id = 1;
        uint32_t     function_minimum_size = 1;
  };

}


static std::list<std::string> allowListFiles;
static std::list<std::string> allowListFunctions;
static std::list<std::string> denyListFiles;
static std::list<std::string> denyListFunctions;


/* Function that we never instrument or analyze */
/* Note: this ignore check is also called in isInInstrumentList() */
bool isIgnoreFunction(const llvm::Function *F) {

  // Starting from "LLVMFuzzer" these are functions used in libfuzzer based
  // fuzzing campaign installations, e.g. oss-fuzz

  static constexpr const char *ignoreList[] = {

      "asan.",
      "llvm.",
      "sancov.",
      "__ubsan",
      "ign.",
      "__afl",
      "_fini",
      "__libc_",
      "__asan",
      "__msan",
      "__cmplog",
      "__sancov",
      "__san",
      "__cxx_",
      "__decide_deferred",
      "_GLOBAL",
      "_ZZN6__asan",
      "_ZZN6__lsan",
      "msan.",
      "LLVMFuzzerM",
      "LLVMFuzzerC",
      "LLVMFuzzerI",
      "maybe_duplicate_stderr",
      "discard_output",
      "close_stdout",
      "dup_and_close_stderr",
      "maybe_close_fd_mask",
      "ExecuteFilesOnyByOne"

  };

  for (auto const &ignoreListFunc : ignoreList) {

    if (F->getName().startswith(ignoreListFunc)) { return true; }

  }

  static constexpr const char *ignoreSubstringList[] = {

      "__asan", "__msan",       "__ubsan",    "__lsan",  "__san", "__sanitize",
      "__cxx",  "DebugCounter", "DwarfDebug", "DebugLoc"

  };

  for (auto const &ignoreListFunc : ignoreSubstringList) {

    // hexcoder: F->getName().contains() not avaiilable in llvm 3.8.0
    if (StringRef::npos != F->getName().find(ignoreListFunc)) { return true; }

  }

  return false;

}



void scanForDangerousFunctions(llvm::Module *M) {

  if (!M) return;



  for (GlobalIFunc &IF : M->ifuncs()) {

    StringRef ifunc_name = IF.getName();
    Constant *r = IF.getResolver();
    StringRef r_name = cast<Function>(r->getOperand(0))->getName();
    
    denyListFunctions.push_back(r_name.str());

  }

  GlobalVariable *GV = M->getNamedGlobal("llvm.global_ctors");
  if (GV && !GV->isDeclaration() && !GV->hasLocalLinkage()) {

    ConstantArray *InitList = dyn_cast<ConstantArray>(GV->getInitializer());

    if (InitList) {

      for (unsigned i = 0, e = InitList->getNumOperands(); i != e; ++i) {

        if (ConstantStruct *CS =
                dyn_cast<ConstantStruct>(InitList->getOperand(i))) {

          if (CS->getNumOperands() >= 2) {

            if (CS->getOperand(1)->isNullValue())
              break;  // Found a null terminator, stop here.

            ConstantInt *CI = dyn_cast<ConstantInt>(CS->getOperand(0));
            int          Priority = CI ? CI->getSExtValue() : 0;

            Constant *FP = CS->getOperand(1);
            if (ConstantExpr *CE = dyn_cast<ConstantExpr>(FP))
              if (CE->isCast()) FP = CE->getOperand(0);
            if (Function *F = dyn_cast<Function>(FP)) {

              if (!F->isDeclaration() &&
                  strncmp(F->getName().str().c_str(), "__afl", 5) != 0) {

                denyListFunctions.push_back(F->getName().str());

              }

            }

          }

        }

      }

    }

  }


}


std::string getSourceName(llvm::Function *F) {

    return DECL_SOURCE_FILE(F->decl);

  }


bool isInInstrumentList(llvm::Function *F) {

  bool return_default = true;

  // is this a function with code? If it is external we don't instrument it
  // anyway and it can't be in the instrument file list. Or if it is it is
  // ignored.
  if (!F->size() || isIgnoreFunction(F)) return false;

  if (!denyListFiles.empty() || !denyListFunctions.empty()) {

    if (!denyListFunctions.empty()) {

      std::string instFunction = F->getName().str();

      for (std::list<std::string>::iterator it = denyListFunctions.begin();
           it != denyListFunctions.end(); ++it) {

        /* We don't check for filename equality here because
         * filenames might actually be full paths. Instead we
         * check that the actual filename ends in the filename
         * specified in the list. We also allow UNIX-style pattern
         * matching */

        if (instFunction.length() >= it->length()) {

          if (fnmatch(("*" + *it).c_str(), instFunction.c_str(), 0) == 0) {

            return false;

          }

        }

      }

    }

    if (!denyListFiles.empty()) {

      std::string source_file = getSourceName(F);

      if (!source_file.empty()) {

        for (std::list<std::string>::iterator it = denyListFiles.begin();
             it != denyListFiles.end(); ++it) {

          /* We don't check for filename equality here because
           * filenames might actually be full paths. Instead we
           * check that the actual filename ends in the filename
           * specified in the list. We also allow UNIX-style pattern
           * matching */

          if (source_file.length() >= it->length()) {

            if (fnmatch(("*" + *it).c_str(), source_file.c_str(), 0) == 0) {

              return false;

            }

          }

        }

      } 
    }

  }

  // if we do not have a instrument file list return true
  if (!allowListFiles.empty() || !allowListFunctions.empty()) {

    return_default = false;

    if (!allowListFunctions.empty()) {

      std::string instFunction = F->getName().str();

      for (std::list<std::string>::iterator it = allowListFunctions.begin();
           it != allowListFunctions.end(); ++it) {

        /* We don't check for filename equality here because
         * filenames might actually be full paths. Instead we
         * check that the actual filename ends in the filename
         * specified in the list. We also allow UNIX-style pattern
         * matching */

        if (instFunction.length() >= it->length()) {

          if (fnmatch(("*" + *it).c_str(), instFunction.c_str(), 0) == 0) {

            
            return true;

          }

        }

      }

    }

    if (!allowListFiles.empty()) {

      std::string source_file = getSourceName(F);

      if (!source_file.empty()) {

        for (std::list<std::string>::iterator it = allowListFiles.begin();
             it != allowListFiles.end(); ++it) {

          /* We don't check for filename equality here because
           * filenames might actually be full paths. Instead we
           * check that the actual filename ends in the filename
           * specified in the list. We also allow UNIX-style pattern
           * matching */

          if (source_file.length() >= it->length()) {

            if (fnmatch(("*" + *it).c_str(), source_file.c_str(), 0) == 0) {

              
              return true;

            }

          }

        }

      } 

    }

  }

  return return_default;

}


struct bb{    
  BasicBlock* bb_p;                             /* Basic block pointer                         */
	struct bb *next;                   	        	/* Next element, if any                        */
};

static struct bb *bb_queue; 





bool AFLCoverage::runOnModule(Module &M) {

  LLVMContext &C = M.getContext();

  IntegerType *Int8Ty  = IntegerType::getInt8Ty(C);
  IntegerType *Int32Ty = IntegerType::getInt32Ty(C);

  ConstantInt *One = ConstantInt::get(Int8Ty, 1);

  /* Show a banner */

  char be_quiet = 0;

  if (isatty(2) && !getenv("AFL_QUIET")) {

    SAYF(cCYA "afl-llvm-pass " cBRI VERSION cRST " by <lszekeres@google.com>\n");

  } else be_quiet = 1;

  /* Decide instrumentation ratio */

  char* inst_ratio_str = getenv("AFL_INST_RATIO");
  unsigned int inst_ratio = 100;

  if (inst_ratio_str) {

    if (sscanf(inst_ratio_str, "%u", &inst_ratio) != 1 || !inst_ratio ||
        inst_ratio > 100)
      FATAL("Bad value of AFL_INST_RATIO (must be between 1 and 100)");

  }


  GlobalVariable *AFLMapPtr =
      new GlobalVariable(M, PointerType::get(Int8Ty, 0), false,
                         GlobalValue::ExternalLinkage, 0, "__afl_area_ptr");

  


  //FILE * aa_file = NULL;
  //aa_file = fopen("/testlto.txt", "a");
  //fprintf(aa_file,"test1: %u\t\n", afl_global_edge_id);
  //fclose(aa_file);

  /*
  bool bb_first = true;
  struct bb *bb_cur = NULL; 
  for (auto &F : M){
    if (F.size() < function_minimum_size) continue;
    if (isIgnoreFunction(&F)) continue;

    for (auto &BB : F) {
      struct bb *bb_now = (struct bb *)malloc(sizeof(struct bb));
      bb_now->bb_p = &BB;
      bb_now->next = NULL;
      if(bb_first) {
        bb_first = false;
        bb_queue = bb_now;
        bb_cur = bb_now;
      }else{  
			  bb_cur->next = bb_now;
			  bb_cur = bb_now;
      }
    }
  }*/

  /*
  bb_cur = bb_queue;
  while(bb_cur){
    for (auto it = succ_begin(bb_cur->bb_p), et = succ_end(bb_cur->bb_p); it != et; ++it){

      BasicBlock *  newBB = NULL;
      BasicBlock *succ = *it;
      newBB = llvm::SplitEdge(bb_cur->bb_p, succ);
      BasicBlock::iterator IP = newBB->getFirstInsertionPt();
      IRBuilder<>          IRB(&(*IP));
      ConstantInt *CurLoc = ConstantInt::get(Int32Ty, afl_global_edge_id++);
      Value *MapPtrIdx;
      LoadInst *MapPtr = IRB.CreateLoad(AFLMapPtr);
      MapPtr->setMetadata(M.getMDKindID("nosanitize"),
                              MDNode::get(C, None));
      MapPtrIdx = IRB.CreateGEP(MapPtr, CurLoc);
      // Update bitmap 
      LoadInst *Counter = IRB.CreateLoad(MapPtrIdx);
      Counter->setMetadata(M.getMDKindID("nosanitize"),
                                 MDNode::get(C, None));                  
      ConstantInt *One = ConstantInt::get(Int8Ty, 1);
      Value *Incr = IRB.CreateAdd(Counter, One);
      IRB.CreateStore(Incr, MapPtrIdx)
                ->setMetadata(M.getMDKindID("nosanitize"),
                              MDNode::get(C, None));
      inst_blocks++;

    }
    bb_cur = bb_cur->next;
    
  }*/


  uint32_t inst_blocks = 0;

  scanForDangerousFunctions(&M);

  for (auto &F : M){
    if (F.size() < function_minimum_size) continue;
    if (isIgnoreFunction(&F)) continue;
    std::vector<BasicBlock *> InsBlocks;

    for (auto &BB : F) {
      if (F.size() == 1) {
        InsBlocks.push_back(&BB);
        continue;
      }

      uint32_t succ = 0;
      for (succ_iterator SI = succ_begin(&BB), SE = succ_end(&BB); SI != SE; ++SI)
        if ((*SI)->size() > 0) succ++;
      if (succ < 2)  // no need to instrument
        continue;

      InsBlocks.push_back(&BB);
    }
    if (InsBlocks.size() > 0) {

      uint32_t i = InsBlocks.size();

      do {

        --i;
        BasicBlock *              newBB = NULL;
        BasicBlock *              origBB = &(*InsBlocks[i]);
        std::vector<BasicBlock *> Successors;
        Instruction *             TI = origBB->getTerminator();
        uint32_t                  fs = origBB->getParent()->size();
        uint32_t                  countto;

        for (succ_iterator SI = succ_begin(origBB), SE = succ_end(origBB);
             SI != SE; ++SI) {

          BasicBlock *succ = *SI;
          Successors.push_back(succ);

        }

        if (fs == 1) {

          newBB = origBB;
          countto = 1;

        } else {

          if (TI == NULL || TI->getNumSuccessors() < 2) continue;
          countto = Successors.size();

        }

        // if (Successors.size() != TI->getNumSuccessors())
        //  FATAL("Different successor numbers %lu <-> %u\n", Successors.size(),
        //        TI->getNumSuccessors());

        for (uint32_t j = 0; j < countto; j++) {

          if (fs != 1) newBB = llvm::SplitEdge(origBB, Successors[j]);

          if (!newBB) {
            continue;
          }

          BasicBlock::iterator IP = newBB->getFirstInsertionPt();
          IRBuilder<>          IRB(&(*IP));

          /* Set the ID of the inserted basic block */

          ConstantInt *CurLoc = ConstantInt::get(Int32Ty, afl_global_edge_id++);

          /* Load SHM pointer */

          Value *MapPtrIdx;

          {
            LoadInst *MapPtr = IRB.CreateLoad(AFLMapPtr);
            MapPtr->setMetadata(M.getMDKindID("nosanitize"),
                                MDNode::get(C, None));
            MapPtrIdx = IRB.CreateGEP(MapPtr, CurLoc);

          }

          /* Update bitmap */

          {

            LoadInst *Counter = IRB.CreateLoad(MapPtrIdx);
            Counter->setMetadata(M.getMDKindID("nosanitize"),
                                 MDNode::get(C, None));
            
            Value *Incr = IRB.CreateAdd(Counter, One);

            IRB.CreateStore(Incr, MapPtrIdx)
                ->setMetadata(M.getMDKindID("nosanitize"),
                              MDNode::get(C, None));

          }

          // done :)

          inst_blocks++;

        }

      } while (i > 0);

    }
  }




  FILE * bb_file = NULL;
  char * bb_file_ptr;  
  u32 record_map_size = 0;
  u32 test_area_ptr = 0;

  if((bb_file_ptr = getenv("AFL_LLVM_DOCUMENT_IDS")) != NULL){
    if ((bb_file = fopen(bb_file_ptr, "r+")) == NULL){
      if((bb_file = fopen(bb_file_ptr, "w")) == NULL){
        FATAL("Cannot access document file.");
      }
    }else if(fscanf(bb_file,"%u",&record_map_size)==-1) {
     FATAL("Error in fscanf function.\n");
    }  
  }
  #ifdef __x86_64__
  test_area_ptr = ((afl_global_edge_id>>3)+1)<<3;
  if(record_map_size < test_area_ptr){
    fseek(bb_file, 0, SEEK_SET);
    fprintf(bb_file, "%u\n", test_area_ptr);
  }
#else
  test_area_ptr = ((afl_global_edge_id>>2)+1)<<2;
  if(record_map_size < test_area_ptr){
    fseek(bb_file, 0, SEEK_SET);
    fprintf(bb_file, "%u\n", test_area_ptr);
  }
#endif /* ^__x86_64__ */

fclose(bb_file);


  return true;

}

char AFLCoverage::ID = 0;

static void registerAFLPass(const PassManagerBuilder &,
                            legacy::PassManagerBase &PM) {

  PM.add(new AFLCoverage());

}


static RegisterPass<AFLCoverage> X("afl-llvm-pass", "afl++ LTO instrumentation pass",
                                  false, false);

static RegisterStandardPasses RegisterAFLPass(
    PassManagerBuilder::EP_FullLinkTimeOptimizationLast, registerAFLPass);
