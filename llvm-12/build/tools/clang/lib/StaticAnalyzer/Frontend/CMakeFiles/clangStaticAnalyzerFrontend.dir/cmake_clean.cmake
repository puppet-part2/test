file(REMOVE_RECURSE
  "../../../../../lib/libclangStaticAnalyzerFrontend.pdb"
  "../../../../../lib/libclangStaticAnalyzerFrontend.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangStaticAnalyzerFrontend.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
