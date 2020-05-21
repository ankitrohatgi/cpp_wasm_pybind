#include <iostream>
#include "../../thirdparty/json.hpp"

using json = nlohmann::json;

int main(int argc, char *argv[]) {
    std::cout << "WASM Main" << std::endl;
    auto j3 = json::parse("{ \"happy\": true, \"pi\": 3.141 }");
    std::cout << j3["pi"] << std::endl;
    return 0;
}
