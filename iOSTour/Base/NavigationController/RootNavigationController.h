//
//  RootNavigationController.h
//  iOSTour
//
//  Created by Wesly on 2017/5/18.
//  Copyright © 2017年 Wesly. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RTRootNavigationController/RTRootNavigationController.h>
/**
 导航控制器基类
 */
@interface RootNavigationController : RTRootNavigationController

/*!
 *  返回到指定的类视图
 *
 *  @param ClassName 类名
 *  @param animated  是否动画
 */
-(BOOL)popToAppointViewController:(NSString *)ClassName animated:(BOOL)animated;


@end
