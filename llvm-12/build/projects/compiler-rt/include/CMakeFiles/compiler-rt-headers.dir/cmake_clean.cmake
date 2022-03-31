file(REMOVE_RECURSE
  "CMakeFiles/compiler-rt-headers"
  "../../../lib/clang/12.0.1/include/sanitizer/allocator_interface.h"
  "../../../lib/clang/12.0.1/include/sanitizer/asan_interface.h"
  "../../../lib/clang/12.0.1/include/sanitizer/common_interface_defs.h"
  "../../../lib/clang/12.0.1/include/sanitizer/coverage_interface.h"
  "../../../lib/clang/12.0.1/include/sanitizer/dfsan_interface.h"
  "../../../lib/clang/12.0.1/include/sanitizer/hwasan_interface.h"
  "../../../lib/clang/12.0.1/include/sanitizer/linux_syscall_hooks.h"
  "../../../lib/clang/12.0.1/include/sanitizer/lsan_interface.h"
  "../../../lib/clang/12.0.1/include/sanitizer/msan_interface.h"
  "../../../lib/clang/12.0.1/include/sanitizer/netbsd_syscall_hooks.h"
  "../../../lib/clang/12.0.1/include/sanitizer/scudo_interface.h"
  "../../../lib/clang/12.0.1/include/sanitizer/tsan_interface.h"
  "../../../lib/clang/12.0.1/include/sanitizer/tsan_interface_atomic.h"
  "../../../lib/clang/12.0.1/include/sanitizer/ubsan_interface.h"
  "../../../lib/clang/12.0.1/include/fuzzer/FuzzedDataProvider.h"
  "../../../lib/clang/12.0.1/include/sanitizer/memprof_interface.h"
  "../../../lib/clang/12.0.1/include/xray/xray_interface.h"
  "../../../lib/clang/12.0.1/include/xray/xray_log_interface.h"
  "../../../lib/clang/12.0.1/include/xray/xray_records.h"
  "../../../lib/clang/12.0.1/include/profile/InstrProfData.inc"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/compiler-rt-headers.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
