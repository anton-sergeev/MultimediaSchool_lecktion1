cmake_minimum_required(VERSION 2.8)

set(SOURCES
  lib1.cpp
)

# add_library(lib1 SHARED ${SOURCES})
add_library(lib1 STATIC ${SOURCES})

