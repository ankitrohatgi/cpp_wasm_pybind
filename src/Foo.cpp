#include "Foo.h"
#include "../thirdparty/json.hpp"
#include <iostream>

using json = nlohmann::json;

void Foo::printString() {
    std::cout << "Foo::printString called" << std::endl;
}

void Foo::printNums(const std::vector<int>& nums) {
    for (auto v : nums) {
        std::cout << v << std::endl;
    }
}

void Foo::parseJSON() {
    auto j3 = json::parse("{ \"happy\": true, \"pi\": 3.141 }");
    std::cout << j3["pi"] << std::endl;
}

