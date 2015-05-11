cmake_minimum_required(VERSION 2.8)

add_definitions(-DBUILD_TARGET=\"${BUILD_TARGET}\")
if(MINGW)
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++")
	set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -static-libgcc -static-libstdc++")
endif()

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11")
endif()

set(SOURCES
  main.cpp
)

set(PROJECT lektion1_test7)
add_executable(${PROJECT} ${SOURCES})
target_link_libraries(${PROJECT} pthread)
