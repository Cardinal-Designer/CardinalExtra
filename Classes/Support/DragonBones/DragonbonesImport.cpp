#include "DragonbonesImport.h"

ControlBox *DragonBonesImport::Control = NULL; // 初始化指针

void DragonBonesImport::_onStart(){
    const auto factory = dragonBones::CCFactory::getFactory();

    factory->loadDragonBonesData("Chen_Build_ske.json");
    factory->loadTextureAtlasData("Chen_Build_tex.json");

    const auto armatureDisplay = factory->buildArmatureDisplay("armatureName");
    armatureDisplay->getAnimation()->play("Move", 0);

    armatureDisplay->setPosition(-150.0f, -250.0f);
    addChild(armatureDisplay);

    armatureDisplay->setScale(1.0f);
}


