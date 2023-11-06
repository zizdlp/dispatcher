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