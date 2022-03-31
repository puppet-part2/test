file(REMOVE_RECURSE
  "../../../../lib/libclangAnalysis.pdb"
  "../../../../lib/libclangAnalysis.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangAnalysis.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
