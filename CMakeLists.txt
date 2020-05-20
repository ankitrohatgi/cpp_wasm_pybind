cmake_minimum_required(VERSION 2.8.12)
project(wasm)
set(CMAKE_CXX_STANDARD 17)
add_subdirectory(thirdparty/pybind11)
pybind11_add_module(wasm src/Foo.cpp src/pybind/Foo_pybind.cpp)

