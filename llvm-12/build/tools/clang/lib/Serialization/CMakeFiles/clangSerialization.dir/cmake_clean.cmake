file(REMOVE_RECURSE
  "../../../../lib/libclangSerialization.pdb"
  "../../../../lib/libclangSerialization.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangSerialization.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
