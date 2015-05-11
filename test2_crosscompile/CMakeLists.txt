cmake_minimum_required(VERSION 2.8)

set(SOURCES
  main.cpp
)

add_definitions(-DBUILD_TARGET=\"${BUILD_TARGET}\")
if(MINGW)
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++")
	set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -static-libgcc -static-libstdc++")
endif()


add_executable(lektion1_test2 ${SOURCES})
