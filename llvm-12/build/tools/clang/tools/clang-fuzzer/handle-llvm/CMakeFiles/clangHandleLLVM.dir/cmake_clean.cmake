file(REMOVE_RECURSE
  "../../../../../lib/libclangHandleLLVM.pdb"
  "../../../../../lib/libclangHandleLLVM.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangHandleLLVM.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
