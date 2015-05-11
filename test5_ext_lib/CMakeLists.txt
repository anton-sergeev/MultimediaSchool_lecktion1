cmake_minimum_required(VERSION 2.8)

set(SOURCES
  src/ext_lib.cpp
)

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_library(ext_lib SHARED ${SOURCES})
# add_library(ext_lib STATIC ${SOURCES})

