//
//  AppDelegate.h
//  微信支付
//
//  Created by 宋浩文 on 15/12/22.
//  Copyright (c) 2015年 麦芽田. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CommonUtil : NSObject

+ (NSString *)md5:(NSString *)input;

+ (NSString *)sha1:(NSString *)input;

+ (NSString *)getIPAddress:(BOOL)preferIPv4;

+ (NSDictionary *)getIPAddresses;

@end
