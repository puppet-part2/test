file(REMOVE_RECURSE
  "../../../../../lib/libclangToolingInclusions.pdb"
  "../../../../../lib/libclangToolingInclusions.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangToolingInclusions.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
