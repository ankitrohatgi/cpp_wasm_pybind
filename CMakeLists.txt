cmake_minimum_required(VERSION 2.8.12)
project(wasm)
set(CMAKE_CXX_STANDARD 17)

if(${CMAKE_SYSTEM_NAME} MATCHES "Emscripten")
    # Build WASM module
    file(GLOB LIB_SRC src/*.cpp)
    file(GLOB LIB_HDR src/*.h)
    file(GLOB WASM_SRC src/wasm/*.cpp)
    add_executable(mymodule ${LIB_SRC} ${LIB_HDR} ${WASM_SRC})
    set_target_properties(mymodule PROPERTIES LINK_FLAGS "--bind") 
else()
    # Build PyBind Lib
    add_subdirectory(thirdparty/pybind11)
    pybind11_add_module(mymodule src/Foo.cpp src/pybind/Foo_pybind.cpp)
endif()
