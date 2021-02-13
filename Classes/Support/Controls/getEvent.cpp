//
// Created by henryzeng on 2021/2/12.
//

#include "Controller.h"
using cocos2d::ControlBox;


std::string ControlBox::getSearchPath(){
    // 获取模型搜索路径
    return searchPath_;
}

cocos2d::dragonbones_info ControlBox::getDragonbonesInfo(){
    // 获取 龙骨 动画文件信息
    return dragonbones_info_;
}