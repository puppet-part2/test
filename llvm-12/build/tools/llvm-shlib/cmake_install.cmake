# Install script for directory: /llvm-project-release-12.x/llvm/tools/llvm-shlib

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xLLVMx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/llvm-project-release-12.x/llvm/cmake/modules/LLVMInstallSymlink.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xLLVMx" OR NOT CMAKE_INSTALL_COMPONENT)
  install_symlink(libLLVM-12.0.1.so libLLVM-12.so lib)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xLLVMx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/llvm-project-release-12.x/llvm/cmake/modules/LLVMInstallSymlink.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xLLVMx" OR NOT CMAKE_INSTALL_COMPONENT)
  install_symlink(libLLVM.so libLLVM-12.so lib)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xLLVMx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/llvm-project-release-12.x/build/lib/libLLVM-12.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLLVM-12.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLLVM-12.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLLVM-12.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xLLVMx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

