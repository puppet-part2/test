file(REMOVE_RECURSE
  "../../../../../lib/libclangDynamicASTMatchers.pdb"
  "../../../../../lib/libclangDynamicASTMatchers.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangDynamicASTMatchers.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
