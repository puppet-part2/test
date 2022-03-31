file(REMOVE_RECURSE
  "../../../../../lib/libclangToolingASTDiff.pdb"
  "../../../../../lib/libclangToolingASTDiff.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangToolingASTDiff.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
