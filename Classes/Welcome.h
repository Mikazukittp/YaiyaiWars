//
//  Welcome.h
//  YaiyaiWars
//
//  Created by 松山勇輝 on 2015/11/10.
//
//

#ifndef __YaiyaiWars__Welcome__
#define __YaiyaiWars__Welcome__

#include "cocos2d.h"

class WelcomeScene :public cocos2d::Layer
{
protected:
    WelcomeScene();
    virtual ~WelcomeScene();
    bool init() override;
    
public:
    static cocos2d::Scene* createScene();
    void update(float dt);
    void touchCallback(Ref* pSender);
    CREATE_FUNC(WelcomeScene);
    
private:
};

#endif /* defined(__YaiyaiWars__Welcome__) */
