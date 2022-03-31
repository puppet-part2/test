file(REMOVE_RECURSE
  "../../../../lib/libclangFormat.pdb"
  "../../../../lib/libclangFormat.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangFormat.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
