file(REMOVE_RECURSE
  "../../../../lib/libclangFrontendTool.pdb"
  "../../../../lib/libclangFrontendTool.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangFrontendTool.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
