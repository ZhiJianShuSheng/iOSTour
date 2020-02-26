//
//  SpeedDectectManager.h
//  iOSTour
//
//  Created by wesly on 2020/2/18.
//  Copyright © 2020 wesly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ServerURLModel.h"


typedef void (^serverURL)(ServerURLModel *response, NSString *error);
typedef void (^serverURLs)(NSArray *response, NSString *error);

NS_ASSUME_NONNULL_BEGIN
// 测速服务类，客户端负载均衡
@interface SpeedDectectManager : NSObject

+ (SpeedDectectManager *)instance;

- (void)startDectect:(serverURL)complete;              // 寻找最快的服务器，默认缓存 300 秒
- (void)requestServiceListsWithCache:(serverURLs)complete;   // 获取服务器列表，默认缓存1天

@end


NS_ASSUME_NONNULL_END
