//
//  Welcome.cpp
//  YaiyaiWars
//
//  Created by 松山勇輝 on 2015/11/10.
//
//

#include "Welcome.h"

USING_NS_CC;

WelcomeScene::WelcomeScene()
{
    
}

WelcomeScene::~WelcomeScene()
{
    
}

Scene* WelcomeScene::createScene()
{
    log("クリエイトされていれば呼ばれるはず");
    auto scene = Scene::create();
    auto layer = WelcomeScene::create();
    scene->addChild(layer);
    return scene;
}

bool WelcomeScene::init()
{
    if (!Layer::init()) {
        return false;
    }
    
    // 初期化処理を記入する
    return true;
}