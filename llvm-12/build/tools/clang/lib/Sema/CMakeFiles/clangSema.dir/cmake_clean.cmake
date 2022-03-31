file(REMOVE_RECURSE
  "OpenCLBuiltins.inc"
  "../../../../lib/libclangSema.pdb"
  "../../../../lib/libclangSema.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangSema.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
