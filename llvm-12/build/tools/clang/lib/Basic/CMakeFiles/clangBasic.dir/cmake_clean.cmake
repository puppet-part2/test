file(REMOVE_RECURSE
  "../../../../lib/libclangBasic.pdb"
  "../../../../lib/libclangBasic.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangBasic.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
