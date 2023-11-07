test:
	export GLOG_logtostderr=1 && \
	export GLOG_colorlogtostderr=1 && \
	bazel run //cpp_pybind:run
testa:
	export GLOG_logtostderr=1 && \
	export GLOG_colorlogtostderr=1 && \
	bazel run //cpp:protocol_a_test
run:
	bazel run  src_cpp:number_arr_test
	bazel run  src_cpp:data_owner_test
	bazel run  src_cpp:operation_test
	bazel run  src_cpp:wrapper_test
proto: 
	bazel run //cpp:protocol_a_test
	# bazel run //cpp:protocol_b_test
pybind:
	bazel run //cpp_pybind:run
.PHONY: build
