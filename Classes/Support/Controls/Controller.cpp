#include "Controller.h"

using cocos2d::ControlBox;

ControlBox *ControlBox::controlbox = nullptr;
namespace cocos2d {
    namespace Mode {
        // 解析引擎模式编号对应
        const int DragonBones = 0;
        const int Spine = 1;
        const int Live2D = 2;
    }
}

void ControlBox::StaticInit(){
    // ControlBox 初始化
    setScale(scale_);
    CCLOG("StaticInit Finish");
}


// 指针设定


void ControlBox::setMainWindow(GLFWwindow *Window_) {
    // 设置GLFW窗口对象指针
    MainWindow_ = Window_;
}

void ControlBox::setDragonBones(dragonBones::CCFactory *Db_f, dragonBones::CCArmatureDisplay *Db_a) {
    // 记录龙骨的工厂模式和动画显示对象的指针
    dragonbones_.armatureDisplay = Db_a;
    dragonbones_.factory = Db_f;
}

void ControlBox::setMode(int m_) {
    // 设置解析引擎的模式
    mode_ = m_;
}

void ControlBox::setSearchPath(std::string path) {
    // 设置搜索路径
    searchPath_ = std::move(path);
}

void ControlBox::setDragonBones_info(dragonbones_info dbi) {
    // 设置龙骨模型文件信息
    dragonbones_info_ = std::move(dbi);
}

// 参数设定

void ControlBox::setWindowsOnTop(bool key_) {
    // 设置窗口是否置顶
    glfwSetWindowAttrib(MainWindow_, GLFW_FLOATING, key_);
}

void ControlBox::setScale(float scale) {
    scale_ = scale;

    if(!dragonbones_.armatureDisplay){ // 防止不当初始化
        return;
    }

    switch (mode_) { // 根据引擎设置缩放系数
        case cocos2d::Mode::DragonBones:
            dragonbones_.armatureDisplay->setScale(scale_);
            break;
    }
}