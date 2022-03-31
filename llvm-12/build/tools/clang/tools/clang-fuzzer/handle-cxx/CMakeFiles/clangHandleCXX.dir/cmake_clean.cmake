file(REMOVE_RECURSE
  "../../../../../lib/libclangHandleCXX.pdb"
  "../../../../../lib/libclangHandleCXX.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangHandleCXX.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
