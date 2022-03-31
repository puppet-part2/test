file(REMOVE_RECURSE
  "Opcodes.inc"
  "../../../../lib/libclangAST.pdb"
  "../../../../lib/libclangAST.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangAST.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
