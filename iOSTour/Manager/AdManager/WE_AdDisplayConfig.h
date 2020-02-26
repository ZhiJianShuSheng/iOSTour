//
//  WE_AdDisplayConfig.h
//  iOSTour
//
//  Created by wesly on 2020/2/26.
//  Copyright © 2020 Wesly. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, WE_AdType) {
    WE_AdGoogleType,
    WE_AdFaceBookType,
};




@interface WE_AdDisplayConfig : NSObject
@property (nonatomic, assign) WE_AdType adType;

@property (nonatomic, weak) UIView *attachView;
@property (nonatomic, weak) UIViewController *attachViewController;

@property (nonatomic, weak) id delegate;
@property (nonatomic, weak) id adItem;

@end

NS_ASSUME_NONNULL_END
