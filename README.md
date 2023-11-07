# Dispatcher

> **背景** 现有多套计算系统，每套系统有自己的计算算子，比如加法、乘法、卷积等操作（底层协议不同）。

```mermaid
flowchart TB
    direction TB
    subgraph python层
        direction TB
        subgraph python算法层
            direction TB
            逻辑回归
            随机森林
            决策树
        end
        python算法层==>python算子层
        subgraph python算子层
            direction TB
            python_mul
            python_sub
            python_add
            python_div
        end
    end
    python算子层==>pybind转换层
    subgraph pybind转换层
        subgraph pybind算子层
            direction TB
            pybind_mul
            pybind_sub
            pybind_add_
            pybind_div
        end
    end

    pybind转换层==>dispatcher层
    subgraph dispatcher层
        direction TB
        subgraph dispatcher算子层
            direction TB
            dispatcher_mul
            dispatcher_sub
            dispatcher_add
            dispatcher_div
        end
        dispatcher算子层==>dispatcherRunner层
        subgraph dispatcherRunner层
            direction TB
            Runner_protocolA
            Runner_protocolB
            Runner_protocolC
        end
    end
    dispatcher层-->CPP层

    subgraph CPP层
        direction TB
        subgraph CPPRunner层
            direction TB
            CPPRunner_protocolA
            CPPRunner_protocolB
            CPPRunner_protocolC
        end
    end


```

### 代理

```shell
export https_proxy="http://127.0.0.1:1080"
export http_proxy="http://127.0.0.1:1080"
```

### bazel install

```shell
wget  https://github.com/bazelbuild/bazel/releases/download/6.1.1/bazel-6.1.1-installer-linux-x86_64.sh
sudo bash bazel-6.1.1-installer-linux-x86_64.sh
which bazel
```

### 虚函数 & 模版

**模版类可以有虚函数，但类的模版成员函数不能是虚函数**

首先，如果你想将模板函数声明为虚函数，你需要将它声明为类模板的一部分，而不是一个独立的函数模板。这是因为虚函数必须属于类的成员函数。

```cpp
template<typename T>
class Protocol {
  virtual bool add(const NumberArr<T>* left); // 模版类的成员函数可以为虚函数
};
```

```cpp
class Protocol {
  template <typename T>
  bool add(const NumberArr<T>* left);  // 类的模版函数不能声明为虚函数
};
```
