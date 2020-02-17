//
//  AppDelegate+PushService.h
//  iOSTour
//
//  Created by Wesly on 2017/5/25.
//  Copyright © 2017年 Wesly. All rights reserved.
//

#import "AppDelegate.h"
#import <UserNotifications/UserNotifications.h>
/**
 推送相关在这里处理
 */
@interface AppDelegate (PushService)<UNUserNotificationCenterDelegate>

@end
