#ifndef DRAGON_BONES_IMPORT_
#define DRAGON_BONES_IMPORT_

#include "../Base/CardinalScene.h"
#include "../Controls/Controller.h"
#include "dragonBones/cocos2dx/CCDragonBonesHeaders.h"

class DragonBonesImport : Cardinal_draw
{
public:

    CREATE_FUNC(DragonBonesImport);

    static cocos2d::Scene *CreateScene(ControlBox *Control_,std::string DragonBonesData_,std::string TextureAtlasData_,std::string armatureName_){
        auto scene = cocos2d::Scene::create();
        auto layer = DragonBonesImport::create();

        layer->Control = Control_;
        layer->Init_Layer(DragonBonesData_,TextureAtlasData_,armatureName_);

        scene->addChild(layer);
        return scene;
    }

    ControlBox *Control; // ControlBox 指针

    void Init_Layer(std::string DragonBonesData_,std::string TextureAtlasData_,std::string armatureName_);

    dragonBones::CCFactory *factory = dragonBones::CCFactory::getFactory();
    dragonBones::CCArmatureDisplay *armatureDisplay;

    std::string DragonBonesData; // 龙骨数据路径 json
    std::string TextureAtlasData; // 纹理数据路径 json
    std::string armatureName; // 骨架名称

    virtual void SceneInit();
protected:
    

    void Mouse_onMouseUp(cocos2d::Event *event);
    void Mouse_onMouseMove(cocos2d::Event *event);

    void Db_init();
};

#endif