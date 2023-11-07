
package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "protocol",
    srcs = [ 
    ],
    hdrs=[
      "protocol.h",
    ],
    deps = [
      "//src_cpp:number_arr",
    ],
)
cc_library(
    name = "protocol_a",
    srcs = [ 
      "protocol_a.cc",
    ],
    hdrs=[
      "protocol_a.h",
    ],
    deps = [
      "//cpp:protocol",
      "//src_cpp:number_arr",
    ],
)
cc_binary(
    name = "protocol_a_test",
    srcs = [
        "protocol_a_test.cc",
    ],
    deps = [
        "//cpp:protocol_a",
    ],
)
cc_library(
    name = "protocol_b",
    srcs = [ 
      "protocol_b.cc",
    ],
    hdrs=[
      "protocol_b.h",
    ],
    deps = [
      "//cpp:protocol",
    ],
)
cc_binary(
    name = "protocol_b_test",
    srcs = [
        "protocol_b_test.cc",
    ],
    deps = [
        "//cpp:protocol_b",
    ],
)