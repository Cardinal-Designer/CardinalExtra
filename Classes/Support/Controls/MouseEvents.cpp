#include "Controller.h"

using cocos2d::ControlBox;

namespace cocos2d {
    namespace MouseData {
        float Index_x, Index_y; //指针当前相对画布的坐标
    }
};

void ControlBox::Mouse_onMouseUp(cocos2d::EventMouse *event) {
    CCLOG("x");
}

void ControlBox::Mouse_onMouseMove(cocos2d::EventMouse *event) {
    MouseData::Index_x = event->getCursorX();
    MouseData::Index_y = event->getCursorY();
    dragonbones_.armatureDisplay->getAnimation()->play("Sit", 0);

    dragonbones_.armatureDisplay->setPosition(MouseData::Index_x, 300 + MouseData::Index_y);
    CCLOG("x: %lf y: %lf", MouseData::Index_x, 300 + MouseData::Index_y);
}

void ControlBox::Mouse_onMouseDown(cocos2d::EventMouse *event) {
    CCLOG("Down");
}