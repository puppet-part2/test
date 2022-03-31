# This file allows users to call find_package(LLD) and pick up our targets.



find_package(LLVM REQUIRED CONFIG
             HINTS "/llvm-project-release-12.x/build/lib/cmake/llvm")

set(LLD_EXPORTED_TARGETS "lldCommon;lldCore;lldDriver;lldMachO;lldYAML;lldReaderWriter;lld;lldCOFF;lldELF;lldMachO2;lldMinGW;lldWasm")
set(LLD_CMAKE_DIR "/llvm-project-release-12.x/build/lib/cmake/lld")
set(LLD_INCLUDE_DIRS "/llvm-project-release-12.x/lld/include;/llvm-project-release-12.x/build/tools/lld/include")

# Provide all our library targets to users.
include("/llvm-project-release-12.x/build/lib/cmake/lld/LLDTargets.cmake")
