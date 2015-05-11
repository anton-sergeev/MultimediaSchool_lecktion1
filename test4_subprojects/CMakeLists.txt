cmake_minimum_required(VERSION 2.8)

set(LIB1_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib1)
set(LIB2_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib2)

add_subdirectory(${LIB1_DIR})
add_subdirectory(${LIB2_DIR})

add_subdirectory(src)
