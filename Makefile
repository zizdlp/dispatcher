build:
	bazel build ...
test:
	bazel run src_pybind:run # python level time consume
	bazel run src_cpp:wrapper_test # cpp level time consume
run:
	bazel run  src_cpp:number_arr_test
	bazel run  src_cpp:data_owner_test
	bazel run  src_cpp:operation_test
	bazel run  src_cpp:wrapper_test
proto:
	bazel run //cpp:protocol_a_test
.PHONY: build
