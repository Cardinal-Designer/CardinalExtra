# 修改清单 [回Readme页](../README.md)

|*修改方式*|内容|*修饰关系*|内容|
|-|-|-|-|
|增加代码|Add|在对象中|In|
|注释代码|Mask|新对象|New|
|删除代码|Del|

## 单独修改关系

|函数|涉及文件|修改方式|目的|
|-|-|-|-|
|[bool GLViewImpl::initWithRect()](###-bool-GLViewImpl::initWithRect()-[Add]-[In])|CCGLViewImpl-desktop.cpp|Add In|创建可以透明的无边框窗口|

## 同步修改关系

|函数 暴露获取创建的GLFWwindow句柄|涉及文件|修改方式|
|-|-|-|
|[GLFWwindow* getMainwindow()](###-GLFWwindow*-getMainwindow()-[Add]-[In])|CCGLViewImpl-desktop.cpp|Add In|
|[GLFWwindow* GLViewImpl::getMainwindow()](###-GLFWwindow*-GLViewImpl::getMainwindow()-[Add]-[New])|CCGLViewImpl-desktop.h|Add In|

## 对 Cocos2dx 4 的引擎更改

### bool GLViewImpl::initWithRect() [Add] [In]
> 创建可以透明的无边框窗口

|路径|行数|
|-|-|
|CardinalExtra > cocos2d > cocos > platform > desktop > CCGLViewLmpl-desktop.cpp|290 - 293|

```C++
    // Cardinal_Extra Special Set
    glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, GLFW_TRUE);
    glfwWindowHint(GLFW_DECORATED, GL_FALSE);
    // End
```


### GLFWwindow* getMainwindow() [Add] [In]
> 暴露创建的GLFWwindow句柄的方法(定义)

|路径|行数|
|-|-|
|CardinalExtra > cocos2d > cocos > platform > desktop > CCGLViewImpl-desktop.h|61|

```C++
GLFWwindow* getMainwindow();
```

### GLFWwindow* GLViewImpl::getMainwindow() [Add] [New]
> 暴露创建的GLFWwindow句柄的方法(实现)

|路径|行数|
|-|-|
|CardinalExtra > cocos2d > cocos > platform > desktop > CCGLViewImpl-desktop.cpp|394 - 396|

```C++
GLFWwindow* GLViewImpl::getMainwindow(){
    return _mainWindow;
}
```