#include "AppDelegate.h"
#include "./Support/DragonBones/DragonbonesImport.h"

USING_NS_CC;

AppDelegate::AppDelegate()
{
}

AppDelegate::~AppDelegate()
{
}

//if you want a different context,just modify the value of glContextAttrs
//it will takes effect on all platforms
void AppDelegate::initGLContextAttrs()
{
	//set OpenGL context attributions,now can only set six attributions:
	//red,green,blue,alpha,depth,stencil
	

	GLContextAttrs glContextAttrs = {8, 8, 8, 0, 0, 0};;

	GLView::setGLContextAttrs(glContextAttrs);
	
}

bool AppDelegate::applicationDidFinishLaunching()
{
	// initialize director
	auto director = Director::getInstance();

	auto glview = director->getOpenGLView();
	GLViewImpl* ret;

	if (!glview)
	{
		ret = GLViewImpl::createWithRect("CardinalExtra", cocos2d::Rect(0, 0, 300, 300));
		glview = ret;
		director->setOpenGLView(glview);
		Control->setMainWindow(ret->getMainwindow());	// 导入Window句柄
	}

	director->setClearColor(cocos2d::Color4F(0.0f, 0.0f, 0.0f, 0.0f));	// 窗口透明化设定
	director->setDisplayStats(false);	// 禁用 FPS信息
	director->setAnimationInterval(1.0f / 60.f);	// 设定FPS速率


	FileUtils::getInstance()->addSearchPath(Control->getSearchPath());

	auto Dragonbones_scene = DragonBonesImport::CreateScene(); // 创建场景

	director->runWithScene(Dragonbones_scene);

	
	return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{

	Director::getInstance()->stopAnimation();

	// if you use SimpleAudioEngine, it must be pause
	// SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
	Director::getInstance()->startAnimation();

	// if you use SimpleAudioEngine, it must resume here
	// SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}
