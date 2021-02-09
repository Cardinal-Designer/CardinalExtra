#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "cocos2d.h"
#include "dragonBones/cocos2dx/CCDragonBonesHeaders.h"

using cocos2d::EventListenerMouse;

#define _


class ControlBox
{
protected:
    GLFWwindow *_MainWindow;
    EventListenerMouse *_MouseEvents;

    dragonBones::CCFactory *_Db_factory;
    dragonBones::CCArmatureDisplay *_Db_armatureDisplay;

    int _Mode;
public:
    void setMainWindow(GLFWwindow *_Window_);
    void setWindowsOnTop(bool _key_);
    void setRuntimeMode();
    void setDragonBones(dragonBones::CCFactory *_Db_factory_,dragonBones::CCArmatureDisplay *_Db_armatureDisplay_);

    // Mouse Event
    void Mouse_onMouseUp(cocos2d::EventMouse *event);
    void Mouse_onMouseMove(cocos2d::EventMouse *event);
    // Mouse Event

};

namespace MouseData{};
namespace Link{};

#endif