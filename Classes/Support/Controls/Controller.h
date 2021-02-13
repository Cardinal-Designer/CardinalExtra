#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "cocos2d.h"
#include "dragonBones/cocos2dx/CCDragonBonesHeaders.h"

using cocos2d::EventListenerMouse;

namespace cocos2d {
    struct dragonbones_info {
        std::string DragonBonesData; // 龙骨数据路径 json
        std::string TextureAtlasData; // 纹理数据路径 json
        std::string armatureName; // 骨架名称
    };

    struct dragonbones_obj {
        dragonBones::CCFactory *factory = nullptr; // 龙骨的工厂模式对应指针
        dragonBones::CCArmatureDisplay *armatureDisplay = nullptr; // 龙骨的动画显示对象指针
    };
}

namespace cocos2d {
    class ControlBox {
    protected:
        GLFWwindow *MainWindow_; // GLFW窗口对象
        dragonbones_obj dragonbones_; // 龙骨对象指针集合
        dragonbones_info dragonbones_info_; // 龙骨模型文件信息集合
        int mode_; // 解释引擎的模式
        std::string searchPath_; // 文件搜索路径
        float scale_ = 1.0; // 缩放系数

    public:
        static ControlBox *controlbox; // ControlBox 单例

        static ControlBox *getInstance() { // 获取 或 创建 ControlBox 单例
            if (!controlbox) {
                controlbox = new(std::nothrow) ControlBox;
            }

            return controlbox;
        }
        void StaticInit();

        void setMode(int m_);

        void setSearchPath(std::string path);

        void setMainWindow(GLFWwindow *Window_);

        void setDragonBones_info(dragonbones_info dbi);

        void setDragonBones(dragonBones::CCFactory *Db_factory_, dragonBones::CCArmatureDisplay *Db_armatureDisplay_);

        // Api
        void setWindowsOnTop(bool key_);

        void setScale(float scale);
        // Api

        // Mouse Event
        void Mouse_onMouseUp(cocos2d::EventMouse *event);

        void Mouse_onMouseMove(cocos2d::EventMouse *event);

        void Mouse_onMouseDown(cocos2d::EventMouse *event);
        // Mouse Event

        std::string getSearchPath();

        dragonbones_info getDragonbonesInfo();

    };

    namespace MouseData {};
    namespace Link {};

    namespace Mode{}
}

#endif