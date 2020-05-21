#!/bin/bash

wget https://github.com/juj/emsdk/archive/master.zip
unzip master.zip
mv emsdk-master emsdk
cd emsdk
./emsdk install latest
./emsdk activate latest
source ./emsdk_env.sh
cd ..

git clone https://github.com/pybind/pybind11.git

wget https://raw.githubusercontent.com/nlohmann/json/develop/single_include/nlohmann/json.hpp

rm *.zip
