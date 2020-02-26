//
//  WE_AdManager.h
//  iOSTour
//
//  Created by wesly on 2020/2/26.
//  Copyright © 2020 Wesly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WE_AdDisplayConfig.h"
NS_ASSUME_NONNULL_BEGIN

@interface WE_AdManager : NSObject

+ (void)showBannerAdWithConfig:(WE_AdDisplayConfig *)config;
+ (void)showFullSceenAdWithConfig:(WE_AdDisplayConfig *)config;

@end

NS_ASSUME_NONNULL_END
