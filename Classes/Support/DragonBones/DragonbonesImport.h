#include "../Base/CardinalScene.h"
#include "../Controls/Controller.h"
#include "dragonBones/cocos2dx/CCDragonBonesHeaders.h"

class DragonBonesImport : Cardinal_draw
{
public:
    CREATE_FUNC(DragonBonesImport);
    static ControlBox *Control; // ControlBox 指针
    static cocos2d::Scene *createScene()
    {
        auto scene = cocos2d::Scene::create();
        auto layer = DragonBonesImport::create();

        scene->addChild(layer);
        return scene;
    }

protected:
    virtual void _onStart();
};