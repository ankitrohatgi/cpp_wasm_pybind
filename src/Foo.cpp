#include "Foo.h"
#include <iostream>

void Foo::printString() {
    std::cout << "Foo::printString called" << std::endl;
}

void Foo::printNums(const std::vector<int>& nums) {
    for (auto v : nums) {
        std::cout << v << std::endl;
    }
}

