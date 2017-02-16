//
//  CZCrashAvoid.h
//  CZCrashDemo
//
//  Created by Chen on 2016/12/21.
//  Copyright © 2016年 ChenZhuo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

#define AvoidCrashNotification @"AvoidCrashNotification"
#define  AvoidCrashLog(...) NSLog(@"%@",[NSString stringWithFormat:__VA_ARGS__])

#define AvoidCrashDefaultReturnNil  @"This framework default is to return nil to avoid crash."
#define AvoidCrashDefaultIgnore     @"This framework default is to ignore this operation to avoid crash."

@interface CZCrashAvoid : NSObject

+ (void)crashAvoidBecomeEffective;

+ (void)exchangeClassMethod:(Class)anClass method1Sel:(SEL)method1Sel method2Sel:(SEL)method2Sel;

+ (void)exchangeInstanceMethod:(Class)anClass method1Sel:(SEL)method1Sel method2Sel:(SEL)method2Sel;

+ (void)noteErrorWithException:(NSException *)exception defaultToDo:(NSString *)defaultToDo;

@end
