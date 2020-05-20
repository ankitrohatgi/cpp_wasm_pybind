#!/bin/bash

# load emsdk environment
source thirdparty/emsdk/emsdk_env.sh > debug.out

# build wasm
em++ --bind -std=c++17 -O3 src/*.cpp src/wasm/*.cpp -I /usr/local/include/eigen3 -o wasm.js
