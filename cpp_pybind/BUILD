package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")

load("@rules_python//python:defs.bzl", "py_binary")
load("@my_deps//:requirements.bzl", "requirement")

pybind_extension(
    name = "protocol",  # This name is not actually created!
    srcs = ["protocol_wrapper.cc"],
    deps = [
        "//src_cpp:number_arr",
        "//src_cpp:data_owner",
        "//src_cpp:operation",
        "//cpp:protocol_a",
        "//cpp:protocol_b",
        ],
)

py_library(
    name = "protocol",
    data = [":protocol.so"],
)

py_binary(
    name = "run",
    srcs = ["run.py"],
    main = "run.py",
    deps = [":protocol"
    ],
    imports = ['protocol']
)