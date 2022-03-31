file(REMOVE_RECURSE
  "../../../../../lib/libclangStaticAnalyzerCheckers.pdb"
  "../../../../../lib/libclangStaticAnalyzerCheckers.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangStaticAnalyzerCheckers.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
