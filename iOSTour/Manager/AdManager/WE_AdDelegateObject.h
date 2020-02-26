//
//  WE_AdDelegateObject.h
//  iOSTour
//
//  Created by wesly on 2020/2/26.
//  Copyright © 2020 Wesly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WE_AdDisplayConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface WE_AdDelegateObject : NSObject

@property (nonatomic, weak) WE_AdDisplayConfig *adConfig;

@end

NS_ASSUME_NONNULL_END
