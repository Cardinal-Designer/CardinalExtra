#ifndef CARDINAL_DRAW
#define CARDINAL_DRAW

#include "cocos2d.h"

class Cardinal_draw : public cocos2d::LayerColor
{
protected:
	virtual void _onStart() = 0;

public:

	virtual bool init()
	{
		if (!LayerColor::initWithColor(cocos2d::Color4B(0, 0, 0, 0)))
		{
			return false;
		}

		const auto& stageSize = cocos2d::Director::getInstance()->getVisibleSize();
        setPosition(stageSize.width, stageSize.height);

        _onStart();

        return true;
	}
};

#endif