file(REMOVE_RECURSE
  "../../../../lib/libclangTesting.pdb"
  "../../../../lib/libclangTesting.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTesting.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
