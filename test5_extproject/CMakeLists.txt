cmake_minimum_required(VERSION 2.8)
include(ExternalProject)

set(EXT_LIB_VERSION "0.2")
set(EXT_LIB_URI http://172.16.1.59/test5_ext_lib-${EXT_LIB_VERSION}.zip)
set(EXT_LIB_SRCDIR ${CMAKE_CURRENT_BINARY_DIR}/test5_ext_lib-${EXT_LIB_VERSION})
set(EXT_LIB_BUILDDIR ${CMAKE_CURRENT_BINARY_DIR}/test5_ext_lib-${EXT_LIB_VERSION}.build)

ExternalProject_Add(
    ext_lib_proj
    URL ${EXT_LIB_URI}
    SOURCE_DIR ${EXT_LIB_SRCDIR}
    BINARY_DIR ${EXT_LIB_BUILDDIR}
    INSTALL_COMMAND ""
)

find_library(ext_lib_proj ext_lib)

add_subdirectory(src)
