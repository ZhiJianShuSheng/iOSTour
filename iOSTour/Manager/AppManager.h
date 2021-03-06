//
//  AppManager.h
//  iOSTour
//
//  Created by Wesly on 2017/5/21.
//  Copyright © 2017年 Wesly. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 包含应用层的相关服务
 */
@interface AppManager : NSObject

#pragma mark ————— APP启动接口 —————
+(void)appStart;

#pragma mark ————— FPS 监测 —————
+(void)showFPS;

@end
