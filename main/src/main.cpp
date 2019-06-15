#include <iostream>
#include <pybind11/embed.h>

namespace py = pybind11;

int main() {

    py::scoped_interpreter guard{}; // start python interpreter

    py::print("Hello!", 2); // use python function

    py::exec("message = \"Hello\" \n" //execute python code
             "print(message)");

    py::module math = py::module::import("math"); // import module math
    py::print(math.attr("ceil")(2.3)); //use function from module math

    return 0;
}