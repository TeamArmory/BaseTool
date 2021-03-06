//
//  UIAlertController+EX.h
//  MyTool
//
//  Created by df on 16/6/13.
//  Copyright © 2016年 Dyf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertController (EX)
/**
 *  标准的弹出带确定取消
 */
+ (void)presentAlertControllerWithTitle:(NSString *)title andMessage:(NSString *)message andStyle:(UIAlertControllerStyle)style andClass:(UIViewController *)cls andSureBlock:(void (^)(void))sureBlock andCancleBlock:(void (^)(void))cancleBlock;
/**
 *  只有确定
 */
+ (void)presentAlertControllerWithTitle:(NSString *)title andMessage:(NSString *)message andStyle:(UIAlertControllerStyle)style andClass:(UIViewController *)cls andSureBlock:(void (^)(void))sureBlock;
/**
 *  多个action的时候
 *  @param block   action 点击的回调
 *  @param actionT 多个参数 eg:@"1",@"2"
 */
+ (void)presentAlertControllerWithTitle:(NSString *)title andMessage:(NSString *)message andStyle:(UIAlertControllerStyle)style andClass:(UIViewController *)cls andBlock:(void (^)(NSInteger index))block andAction:(NSString *)actionT, ...;
@end
