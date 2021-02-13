//
// Created by henryzeng on 2021/2/12.
//

#ifndef CARDINALEXTRA_WRAPPER_H
#define CARDINALEXTRA_WRAPPER_H

#include "../Classes/AppDelegate.h"
#include "../Classes/Support/Controls/Controller.h"
#include <thread>
#include <boost/python.hpp>

USING_NS_CC;
using namespace boost::python;

ControlBox *Control = ControlBox::getInstance();
AppDelegate *app = new AppDelegate;

void graph_thread(){
    app->Control = Control;
    Application::getInstance()->run();
};


void Init_Main()
{
    std::thread Graph_Thread(graph_thread);
    Graph_Thread.join();
}

void setWindowsOnTop(bool key_){
    Control->setWindowsOnTop(key_);
}

void setMode(int m_){
    Control->setMode(m_);
}

void setSearchPath(std::string path){
    Control->setSearchPath(std::move(path));
}

void setDragonBones(std::string Db_data,std::string TA_data,std::string aN){
    // 设置必要的人物模型数据
    cocos2d::dragonbones_info info;
    info.DragonBonesData = Db_data;
    info.TextureAtlasData = TA_data;
    info.armatureName = aN;
    Control->setDragonBones_info(std::move(info));
}

void setScale(float s){
    Control->setScale(std::move(s));
}
#endif //CARDINALEXTRA_WRAPPER_H
