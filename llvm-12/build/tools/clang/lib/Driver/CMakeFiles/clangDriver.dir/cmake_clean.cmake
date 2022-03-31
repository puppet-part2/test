file(REMOVE_RECURSE
  "../../../../lib/libclangDriver.pdb"
  "../../../../lib/libclangDriver.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangDriver.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
