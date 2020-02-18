//
//  ServerURLModel.h
//  iOSTour
//
//  Created by wesly on 2020/2/18.
//  Copyright © 2020 wesly. All rights reserved.
//

#import <Foundation/Foundation.h>


// 服务器地址类
@interface ServerURLModel : NSObject

@property (strong, nonatomic) NSString *hostName;
@property (strong, nonatomic) NSString *ip;
@property (strong, nonatomic) NSString *port;

@property (assign, nonatomic) UInt32 loadFactor;    // 负载因子
@property (assign, nonatomic) UInt32 connectCount;  // 连接数
@property (assign, nonatomic) UInt32 delay;         // 延迟

- (instancetype)init;
- (instancetype)initWithDictionary:(NSDictionary *)dic;

@end


