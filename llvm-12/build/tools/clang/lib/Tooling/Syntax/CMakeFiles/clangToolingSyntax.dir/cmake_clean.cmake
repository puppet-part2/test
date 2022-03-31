file(REMOVE_RECURSE
  "../../../../../lib/libclangToolingSyntax.pdb"
  "../../../../../lib/libclangToolingSyntax.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangToolingSyntax.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
