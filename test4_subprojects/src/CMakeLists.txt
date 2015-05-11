cmake_minimum_required(VERSION 2.8)

add_definitions(-DBUILD_TARGET=\"${BUILD_TARGET}\")
if(MINGW)
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++")
	set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -static-libgcc -static-libstdc++")
endif()

include_directories(
  ${LIB2_DIR}
)

set(SOURCES
  main.cpp
)

set(PROJECT lektion1_test4)
add_executable(${PROJECT} ${SOURCES})
target_link_libraries(${PROJECT} lib2)
