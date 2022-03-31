# Install script for directory: /llvm-project-release-12.x/clang/lib/Headers

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/12.0.1/include" TYPE FILE FILES
    "/llvm-project-release-12.x/clang/lib/Headers/adxintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/altivec.h"
    "/llvm-project-release-12.x/clang/lib/Headers/ammintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/amxintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/arm_acle.h"
    "/llvm-project-release-12.x/clang/lib/Headers/arm_cmse.h"
    "/llvm-project-release-12.x/clang/lib/Headers/armintr.h"
    "/llvm-project-release-12.x/clang/lib/Headers/arm64intr.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx2intrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512bf16intrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512bwintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512bitalgintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vlbitalgintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512cdintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512dqintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512erintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512fintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512ifmaintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512ifmavlintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512pfintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vbmiintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vbmivlintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vbmi2intrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vlvbmi2intrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vlbf16intrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vlbwintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vlcdintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vldqintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vlintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vp2intersectintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vlvp2intersectintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vpopcntdqvlintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vnniintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avx512vlvnniintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avxintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/avxvnniintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/bmi2intrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/bmiintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_cuda_math.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_cuda_cmath.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_cuda_device_functions.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_cuda_libdevice_declares.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_hip_libdevice_declares.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_hip_cmath.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_hip_math.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__clang_hip_runtime_wrapper.h"
    "/llvm-project-release-12.x/clang/lib/Headers/cetintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/cet.h"
    "/llvm-project-release-12.x/clang/lib/Headers/cldemoteintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/clzerointrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/cpuid.h"
    "/llvm-project-release-12.x/clang/lib/Headers/clflushoptintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/clwbintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/emmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/enqcmdintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/f16cintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/float.h"
    "/llvm-project-release-12.x/clang/lib/Headers/fma4intrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/fmaintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/fxsrintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/gfniintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/hresetintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/htmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/htmxlintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/ia32intrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/immintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/intrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/inttypes.h"
    "/llvm-project-release-12.x/clang/lib/Headers/invpcidintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/iso646.h"
    "/llvm-project-release-12.x/clang/lib/Headers/keylockerintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/limits.h"
    "/llvm-project-release-12.x/clang/lib/Headers/lwpintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/lzcntintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/mm3dnow.h"
    "/llvm-project-release-12.x/clang/lib/Headers/mmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/mm_malloc.h"
    "/llvm-project-release-12.x/clang/lib/Headers/module.modulemap"
    "/llvm-project-release-12.x/clang/lib/Headers/movdirintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/msa.h"
    "/llvm-project-release-12.x/clang/lib/Headers/mwaitxintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/nmmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/opencl-c.h"
    "/llvm-project-release-12.x/clang/lib/Headers/opencl-c-base.h"
    "/llvm-project-release-12.x/clang/lib/Headers/pkuintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/pmmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/pconfigintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/popcntintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/prfchwintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/ptwriteintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/rdseedintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/rtmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/serializeintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/sgxintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/s390intrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/shaintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/smmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/stdalign.h"
    "/llvm-project-release-12.x/clang/lib/Headers/stdarg.h"
    "/llvm-project-release-12.x/clang/lib/Headers/stdatomic.h"
    "/llvm-project-release-12.x/clang/lib/Headers/stdbool.h"
    "/llvm-project-release-12.x/clang/lib/Headers/stddef.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__stddef_max_align_t.h"
    "/llvm-project-release-12.x/clang/lib/Headers/stdint.h"
    "/llvm-project-release-12.x/clang/lib/Headers/stdnoreturn.h"
    "/llvm-project-release-12.x/clang/lib/Headers/tbmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/tgmath.h"
    "/llvm-project-release-12.x/clang/lib/Headers/tmmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/tsxldtrkintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/uintrintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/unwind.h"
    "/llvm-project-release-12.x/clang/lib/Headers/vadefs.h"
    "/llvm-project-release-12.x/clang/lib/Headers/vaesintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/varargs.h"
    "/llvm-project-release-12.x/clang/lib/Headers/vecintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/vpclmulqdqintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/waitpkgintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/wasm_simd128.h"
    "/llvm-project-release-12.x/clang/lib/Headers/wbnoinvdintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/wmmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__wmmintrin_aes.h"
    "/llvm-project-release-12.x/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/llvm-project-release-12.x/clang/lib/Headers/x86gprintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/x86intrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/xmmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/xopintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/xsavecintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/xsaveintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/xsaveoptintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/xsavesintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/xtestintrin.h"
    "/llvm-project-release-12.x/build/tools/clang/lib/Headers/arm_neon.h"
    "/llvm-project-release-12.x/build/tools/clang/lib/Headers/arm_fp16.h"
    "/llvm-project-release-12.x/build/tools/clang/lib/Headers/arm_sve.h"
    "/llvm-project-release-12.x/build/tools/clang/lib/Headers/arm_bf16.h"
    "/llvm-project-release-12.x/build/tools/clang/lib/Headers/arm_mve.h"
    "/llvm-project-release-12.x/build/tools/clang/lib/Headers/arm_cde.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/12.0.1/include/cuda_wrappers" TYPE FILE FILES
    "/llvm-project-release-12.x/clang/lib/Headers/cuda_wrappers/algorithm"
    "/llvm-project-release-12.x/clang/lib/Headers/cuda_wrappers/complex"
    "/llvm-project-release-12.x/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/12.0.1/include/ppc_wrappers" TYPE FILE FILES
    "/llvm-project-release-12.x/clang/lib/Headers/ppc_wrappers/mmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/ppc_wrappers/xmmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/ppc_wrappers/mm_malloc.h"
    "/llvm-project-release-12.x/clang/lib/Headers/ppc_wrappers/emmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/ppc_wrappers/pmmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/ppc_wrappers/tmmintrin.h"
    "/llvm-project-release-12.x/clang/lib/Headers/ppc_wrappers/smmintrin.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/12.0.1/include/openmp_wrappers" TYPE FILE FILES
    "/llvm-project-release-12.x/clang/lib/Headers/openmp_wrappers/math.h"
    "/llvm-project-release-12.x/clang/lib/Headers/openmp_wrappers/cmath"
    "/llvm-project-release-12.x/clang/lib/Headers/openmp_wrappers/complex.h"
    "/llvm-project-release-12.x/clang/lib/Headers/openmp_wrappers/complex"
    "/llvm-project-release-12.x/clang/lib/Headers/openmp_wrappers/__clang_openmp_device_functions.h"
    "/llvm-project-release-12.x/clang/lib/Headers/openmp_wrappers/complex_cmath.h"
    "/llvm-project-release-12.x/clang/lib/Headers/openmp_wrappers/new"
    )
endif()

