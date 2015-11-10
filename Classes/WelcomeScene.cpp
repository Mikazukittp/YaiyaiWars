//
//  WelcomeScene.cpp
//  YaiyaiWars
//
//  Created by 松山勇輝 on 2015/11/10.
//
//

#include "WelcomeScene.h"

USING_NS_CC;

WelcomeScene::WelcomeScene()
{
    
}

WelcomeScene::~WelcomeScene()
{
    
}

Scene* WelcomeScene::createScene()
{
    log("createしたタイミング");
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
    auto director = Director::getInstance();
    
    //画面サイズを取得
    auto size = director->getWinSize();
    
    //背景を設定
    auto background = Sprite::create("background.png");
    background->setPosition(Vec2(size.width / 2.0, size.height / 2.0));
    this->addChild(background);
    
    
    //タップ前のスプライト
    auto pNormalSprite = Sprite::create("startBtn.png");
    pNormalSprite->setOpacity(200);
    
    //タップ時のスプライト
    auto pSelectedSprite = Sprite::create("startBtn.png");
    
    //メニューアイテムの作成
    auto pBtnItem = MenuItemSprite::create(pNormalSprite, pSelectedSprite, CC_CALLBACK_1(WelcomeScene::onClickStartBtnCallback, this));
    
    //メニューの作成　pMenuの中にpBtnItemを入れる
    auto pMenu = Menu::create(pBtnItem, NULL);
    
    //pMenuを画面中央に配置
    pMenu->setPosition(Vec2(size.width*.5, size.height*.5));
    this->addChild(pMenu);
    
    return true;
}

void WelcomeScene::onClickStartBtnCallback(Ref* pSender)
{
    log("タップされました。");
}