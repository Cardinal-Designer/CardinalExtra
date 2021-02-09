#ifndef CARDINAL_DRAW
#define CARDINAL_DRAW

#include "cocos2d.h"

class Cardinal_draw : public cocos2d::LayerColor
{
protected:
	virtual void SceneInit() = 0;

public:

	virtual bool init()
	{
		if (!LayerColor::initWithColor(cocos2d::Color4B(0, 0, 0, 0)))
		{
			return false;
		}
		
        setPosition(0, 0);

        return true;
	}
};

#endif