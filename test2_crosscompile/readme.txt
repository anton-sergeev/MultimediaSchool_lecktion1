#!/bin/bash

#HOWTO run cmake:
mkdir -p build/lin32
cd build/lin32
cmake -DCMAKE_TOOLCHAIN_FILE=Toolchain-lin32.cmake ../..
