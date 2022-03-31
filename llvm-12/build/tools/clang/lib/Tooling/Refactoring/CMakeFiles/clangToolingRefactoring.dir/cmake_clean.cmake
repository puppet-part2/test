file(REMOVE_RECURSE
  "../../../../../lib/libclangToolingRefactoring.pdb"
  "../../../../../lib/libclangToolingRefactoring.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangToolingRefactoring.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
