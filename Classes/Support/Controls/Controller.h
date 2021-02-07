#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "cocos2d.h"
#include "dragonBones/cocos2dx/CCDragonBonesHeaders.h"
using cocos2d::EventListenerMouse;

class ControlBox
{
protected:
    GLFWwindow *_MainWindow;
    EventListenerMouse *_MouseEvents;
    dragonBones::CCFactory * dbFactory;
    int key;
public:
    void setMainWindow(GLFWwindow *Window);
    void setMouseEvent(EventListenerMouse *Mouse);

    void setWindowsOnTop(bool key);

};

#endif