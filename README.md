# CardinalExtra 核心显示组件 [回Readme页](../README.md)

## 介绍

>这是Cardinal新一代显示主体，从帧序列动画切换到对dragonbones动画的原生支持，大大降低图包体积，方便图包分发。使用cocos2dx引擎，对GPU渲染原生支持，可以提升性能并且方便后期扩展。
## 编译支持
### Setp 1
+ 很重要 ： 需要自行下载[cocos2dx V4.0](http://cocos2d-x.org/filedown/cocos2d-x-v4.0)

    如果失效请到 [cocos2dx官方发布](https://www.cocos2d-x.org/cocos2dx) 寻找 V4.0版本下载

+ 将引擎的数据包解压到项目中 **cocos2d** 目录，**请务必不覆盖项目中引擎文件夹中的原有文件**

### Step 2
+ 配置编译环境自行编译，cmake项目编译方法Baidu一搜一堆

+ 或 下载Vscode安装 CMake Tools 插件并打开工程主目录，进行编译。

### Step 3
+ 项目使用用 Boost 1.75.0 版本，下载后编译，并且修改CMakeLists.txt的[Boost库]段内容

+ 编译Boost库 ：[方法](https://www.cnblogs.com/mingzhang/p/11349808.html)

### Step 4
+ 项目采用Python3.7作为标准包装环境，安装指定版本Python后修改CMakeLists.txt中[Python库]段内容

## 架构
|底层绘图引擎|代码组织工具|编写语言|编译环境|
|-|-|-|-|
|OpenGL (from Cocos2dx)|Cocos2dx 4|C++|见[附录1](Doc/More1.md)|

## 对引擎的修改
见[修改清单](Doc/Change.md)