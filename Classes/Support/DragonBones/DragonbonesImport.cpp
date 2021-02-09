#include "DragonbonesImport.h"

void DragonBonesImport::Init_Layer(std::string DragonBonesData_,std::string TextureAtlasData_,std::string armatureName_){
    DragonBonesData = DragonBonesData_;
    TextureAtlasData = TextureAtlasData_;
    armatureName = armatureName_;

    SceneInit();

    Control->setDragonBones(factory,armatureDisplay);
}

void DragonBonesImport::SceneInit(){

    factory->loadDragonBonesData(DragonBonesData);
    factory->loadTextureAtlasData(TextureAtlasData);

    armatureDisplay = factory->buildArmatureDisplay(armatureName);
    
    addChild(armatureDisplay);

    armatureDisplay->setScale(1.0f);
    Control->setWindowsOnTop(true);

    auto _MouseEvents = EventListenerMouse::create();
    _MouseEvents->onMouseUp = CC_CALLBACK_1(DragonBonesImport::Mouse_onMouseUp,this);
    _MouseEvents->onMouseMove = CC_CALLBACK_1(DragonBonesImport::Mouse_onMouseMove,this);

    _eventDispatcher->addEventListenerWithSceneGraphPriority(_MouseEvents,this);
}


void DragonBonesImport::Mouse_onMouseUp(cocos2d::Event *event){
    cocos2d::EventMouse *e = (cocos2d::EventMouse*)event;
    Control->Mouse_onMouseUp(e);
}

void DragonBonesImport::Mouse_onMouseMove(cocos2d::Event *event){
    cocos2d::EventMouse *e = (cocos2d::EventMouse*)event;
    Control->Mouse_onMouseMove(e);
}