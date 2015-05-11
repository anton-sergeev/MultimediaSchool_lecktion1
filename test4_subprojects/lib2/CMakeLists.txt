cmake_minimum_required(VERSION 2.8)

set(SOURCES
  lib2.cpp
)

include_directories(
  ${LIB1_DIR}
)

set(PROJECT lib2)
add_library(${PROJECT} SHARED ${SOURCES})
target_link_libraries(${PROJECT} lib1)
