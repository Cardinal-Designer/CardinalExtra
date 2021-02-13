#ifndef DRAGON_BONES_IMPORT_
#define DRAGON_BONES_IMPORT_

#include "dragonBones/cocos2dx/CCDragonBonesHeaders.h"
#include "../Base/CardinalScene.h"
#include "../Controls/Controller.h"

class DragonBonesImport : Cardinal_draw
{
public:

    CREATE_FUNC(DragonBonesImport);

    static cocos2d::Scene *CreateScene(){
        auto scene = cocos2d::Scene::create();
        auto layer = DragonBonesImport::create();

        layer->Init_Layer();

        scene->addChild(layer);
        return scene;
    }

    void Init_Layer();

    dragonBones::CCFactory *factory = dragonBones::CCFactory::getFactory();
    dragonBones::CCArmatureDisplay *armatureDisplay = nullptr;

    void SceneInit() override;
protected:
    

    void Mouse_onMouseUp(cocos2d::Event *event);
    void Mouse_onMouseMove(cocos2d::Event *event);
    void Mouse_onMouseDown(cocos2d::Event *event);
};

#endif