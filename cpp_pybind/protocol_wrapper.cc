#include <pybind11/pybind11.h>
#include "src_cpp/DataOwner.h"
#include "cpp/protocol_a.h"
#include <iostream>
namespace py = pybind11;

struct ProtocolWrapper {
 public:
  ProtocolWrapper() { std::cout << "create ProtocolWrapper"; }
  void createData(int length, std::string name) { dataOwner.create_array(length, name); }
  void setValue(int value, std::string name) {
    auto left = dataOwner.get_array(name);
    left->set_value(value);
  }
  void add(std::string name_left, std::string name_right, std::string name_res) {
    auto left = dataOwner.get_array(name_left);
    auto right = dataOwner.get_array(name_right);
    auto res = dataOwner.get_array(name_res);
    protocol.add(left, right, res);
  }
  void print_value(std::string name) {
    auto left = dataOwner.get_array(name);
    left->print_value();
  }

 private:
  DataOwner<int> dataOwner;
  ProtocolA protocol;
};

PYBIND11_MODULE(protocol, m) {
  py::class_<ProtocolWrapper>(m, "ProtocolWrapper")
      .def(py::init())
      .def("setValue", &ProtocolWrapper::setValue)
      .def("createData", &ProtocolWrapper::createData, "create array")
      .def("add", &ProtocolWrapper::add, "add array")
      .def("print_value", &ProtocolWrapper::print_value, "print array");
}
