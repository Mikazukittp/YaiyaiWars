//
//  WelcomeScene.h
//  YaiyaiWars
//
//  Created by 松山勇輝 on 2015/11/10.
//
//

#ifndef __YaiyaiWars__WelcomeScene__
#define __YaiyaiWars__WelcomeScene__

#include "cocos2d.h"

class WelcomeScene :public cocos2d::Layer
{
protected:
    WelcomeScene();
    virtual ~WelcomeScene();
    bool init() override;
    
public:
    static cocos2d::Scene* createScene();
    CREATE_FUNC(WelcomeScene);
    
private:
    void onClickStartBtnCallback(Ref* pSender);
};

#endif /* defined(__YaiyaiWars__WelcomeScene__) */
