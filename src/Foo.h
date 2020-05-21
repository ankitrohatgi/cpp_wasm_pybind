#pragma once
#include <vector>

class Foo {
public:
    Foo() {}
    void printString();
    void printNums(const std::vector<int>& nums);
    void parseJSON();
};

