#include "Controller.h"

// 指针设定

void ControlBox::setMainWindow(GLFWwindow *Window){
	_MainWindow = Window;
}

void ControlBox::setMouseEvent(EventListenerMouse *Mouse){
	_MouseEvents = Mouse;
}

// 参数设定

void ControlBox::setWindowsOnTop(bool key){
	glfwSetWindowAttrib(_MainWindow, GLFW_FLOATING, key);
}