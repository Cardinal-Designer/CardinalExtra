#include "Controller.h"

namespace MouseData{
    float Index_x,Index_y; //指针当前相对画布的坐标
};

void ControlBox::Mouse_onMouseUp(cocos2d::EventMouse *event){
    CCLOG("x");
}

void ControlBox::Mouse_onMouseMove(cocos2d::EventMouse *event){
    MouseData::Index_x = event->getCursorX();
    MouseData::Index_y = event->getCursorY();
    _Db_armatureDisplay->getAnimation()->play("Sit",0);

    _Db_armatureDisplay->setPosition(MouseData::Index_x,300+MouseData::Index_y);
    CCLOG("x: %lf y: %lf",MouseData::Index_x,300+MouseData::Index_y);
}

