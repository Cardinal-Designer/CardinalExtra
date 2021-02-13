#include "DragonbonesImport.h"

void DragonBonesImport::Init_Layer(){
    SceneInit();

    auto Control = cocos2d::ControlBox::getInstance();
    Control->setDragonBones(factory,armatureDisplay);
}

void DragonBonesImport::SceneInit(){
    auto Control = cocos2d::ControlBox::getInstance();
    auto Dragonbones_info = Control->getDragonbonesInfo(); // 从ControlBox实例中获取dragonbones模型信息

    factory->loadDragonBonesData(Dragonbones_info.DragonBonesData);
    factory->loadTextureAtlasData(Dragonbones_info.TextureAtlasData);

    armatureDisplay = factory->buildArmatureDisplay(Dragonbones_info.armatureName);
    
    addChild(armatureDisplay);

    auto MouseEvents = EventListenerMouse::create();
    MouseEvents->onMouseUp = CC_CALLBACK_1(DragonBonesImport::Mouse_onMouseUp,this);
    MouseEvents->onMouseMove = CC_CALLBACK_1(DragonBonesImport::Mouse_onMouseMove,this);
    MouseEvents->onMouseDown = CC_CALLBACK_1(DragonBonesImport::Mouse_onMouseDown,this);

    _eventDispatcher->addEventListenerWithSceneGraphPriority(MouseEvents,this);

    Control->setDragonBones(factory,armatureDisplay);

    Control->StaticInit(); // 执行 Control 类初始化设定函数
}


void DragonBonesImport::Mouse_onMouseUp(cocos2d::Event *event) {
    auto *e = (cocos2d::EventMouse*)event;
    auto Control = cocos2d::ControlBox::getInstance();
    Control->Mouse_onMouseUp(e);
}

void DragonBonesImport::Mouse_onMouseMove(cocos2d::Event *event) {
    auto *e = (cocos2d::EventMouse*)event;
    auto Control = cocos2d::ControlBox::getInstance();
    Control->Mouse_onMouseMove(e);
}

void DragonBonesImport::Mouse_onMouseDown(cocos2d::Event *event) {
    auto *e = (cocos2d::EventMouse*)event;
    auto Control = cocos2d::ControlBox::getInstance();
    Control->Mouse_onMouseDown(e);
}