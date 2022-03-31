file(REMOVE_RECURSE
  "../../../../lib/libclangASTMatchers.pdb"
  "../../../../lib/libclangASTMatchers.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangASTMatchers.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
