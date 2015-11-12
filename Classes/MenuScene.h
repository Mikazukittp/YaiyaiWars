//
//  MenuScene.h
//  YaiyaiWars
//
//  Created by 松山勇輝 on 2015/11/12.
//
//

#ifndef __YaiyaiWars__MenuScene__
#define __YaiyaiWars__MenuScene__

#include "cocos2d.h"

class MenuScene :public cocos2d::Layer
{
protected:
    MenuScene();
    virtual ~MenuScene();
    bool init() override;
    
public:
    static cocos2d::Scene* createScene();
    CREATE_FUNC(MenuScene);
    
private:
    void onClickSelectStageBtnCallback(Ref* pSender);
};


#endif /* defined(__YaiyaiWars__MenuScene__) */
