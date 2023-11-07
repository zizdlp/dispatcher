import time
from cpp_pybind.protocol import ProtocolWrapper


def testLargeDataWrapper():
    dataWrapper = ProtocolWrapper()
    length = 10
    dataWrapper.createData(length, "left")
    dataWrapper.createData(length, "right")
    dataWrapper.createData(length, "res")
    dataWrapper.setValue(3, "left")
    dataWrapper.setValue(7, "right")
    loop = 1
    start_time = time.time()
    for i in range(loop):
        dataWrapper.add("left", "right", "res")
    end_time = time.time()
    dataWrapper.print_value("res")
    print(
        f"python large data:规模向量 level add:{length} loop:{loop} time consume:{end_time-start_time}"
    )


if __name__ == "__main__":
    testLargeDataWrapper()
    print("run is done")
