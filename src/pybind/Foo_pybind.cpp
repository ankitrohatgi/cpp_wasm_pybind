#include "../Foo.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(wasm, m) {
    py::class_<Foo>(m, "Foo")
        .def(py::init<>())
        .def("printString", &Foo::printString)
        .def("parseJSON", &Foo::parseJSON);
}
