file(REMOVE_RECURSE
  "../../../../lib/libclangRewrite.pdb"
  "../../../../lib/libclangRewrite.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangRewrite.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
