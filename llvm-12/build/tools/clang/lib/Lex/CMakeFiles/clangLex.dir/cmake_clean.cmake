file(REMOVE_RECURSE
  "../../../../lib/libclangLex.pdb"
  "../../../../lib/libclangLex.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangLex.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
