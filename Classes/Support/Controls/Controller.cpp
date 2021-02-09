#include "Controller.h"


// 指针设定

void ControlBox::setMainWindow(GLFWwindow *_Window_){
	_MainWindow = _Window_;
}

void ControlBox::setDragonBones(dragonBones::CCFactory *_Db_factory_,dragonBones::CCArmatureDisplay *_Db_armatureDisplay_){
	_Db_factory = _Db_factory_;
	_Db_armatureDisplay = _Db_armatureDisplay_;
}


// 参数设定

void ControlBox::setWindowsOnTop(bool _key_){
	glfwSetWindowAttrib(_MainWindow, GLFW_FLOATING, _key_);
}
