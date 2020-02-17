//
//  UIButton+XYButton.h
//  iOSTour
//
//  Created by Wesly on 2017/6/1.
//  Copyright © 2017年 Wesly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (XYButton)

@property(nonatomic ,copy)void(^block)(UIButton*);

-(void)addTapBlock:(void(^)(UIButton*btn))block;

@end
