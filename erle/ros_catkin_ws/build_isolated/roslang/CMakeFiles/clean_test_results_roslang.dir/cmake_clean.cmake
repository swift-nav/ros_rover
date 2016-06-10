FILE(REMOVE_RECURSE
  "CMakeFiles/clean_test_results_roslang"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/clean_test_results_roslang.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
