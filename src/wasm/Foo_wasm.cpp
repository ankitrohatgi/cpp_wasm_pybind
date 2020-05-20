#include "../Foo.h"
#include <emscripten/bind.h>

using namespace emscripten;

EMSCRIPTEN_BINDINGS(c) {
    register_vector<int>("VectorInt");

    class_<Foo>("Foo")
        .constructor()
        .function("printString", &Foo::printString)
        .function("printNums", &Foo::printNums);
}

