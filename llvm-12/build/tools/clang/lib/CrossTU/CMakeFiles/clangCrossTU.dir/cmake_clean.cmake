file(REMOVE_RECURSE
  "../../../../lib/libclangCrossTU.pdb"
  "../../../../lib/libclangCrossTU.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangCrossTU.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
