//
//  JGACAlertController.h
//  JGAlertController
//
//  Created by 梅继高 on 2018/6/12.
//  Copyright © 2018年 MeiJigao. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<JGAlertController/UIAlertController+JGACAlertController.h>)
#import <JGAlertController/UIAlertController+JGACAlertController.h>
#else
#import "UIAlertController+JGACAlertController.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface JGACAlertController : NSObject

#pragma mark - Alert
/**
 隐藏弹出的实现
 
 @return 是否需要隐藏
 */
+ (BOOL)hideAlert;

/**
 Alert 单个按钮，无点击响应
 
 @param title 标题，默认“提示”
 @param message 提示内容
 @return UIAlertView / UIAlertController
 */
+ (UIAlertController *)alertWithTitle:(nullable NSString *)title message:(nullable NSString *)message;

/**
 Alert 单个按钮，无点击响应
 
 @param title 标题，默认“提示”
 @param message 提示内容
 @param cancel 取消按钮标题
 @return UIAlertView / UIAlertController
 */
+ (UIAlertController *)alertWithTitle:(nullable NSString *)title message:(nullable NSString *)message cancel:(nullable NSString *)cancel;

/**
 Alert 单个按钮，有点击响应
 
 @param title 标题，默认“提示”
 @param message 提示内容
 @param cancel 取消按钮标题
 @param btnAction 点击响应block
 @return UIAlertView / UIAlertController
 */
+ (UIAlertController *)alertWithTitle:(nullable NSString *)title message:(nullable NSString *)message cancel:(nullable NSString *)cancel action:(nullable JGACAlertControllerAction)btnAction;

/**
 * Alert 双按钮
 
 @param title 标题，默认“提示”
 @param message 提示内容
 @param cancel 取消按钮标题
 @param other 确定按钮标题
 @param btnAction 点击响应block
 @return UIAlertView / UIAlertController
 */
+ (UIAlertController *)alertWithTitle:(nullable NSString *)title message:(nullable NSString *)message cancel:(nullable NSString *)cancel other:(nullable NSString *)other action:(nullable JGACAlertControllerAction)btnAction;

/**
 * Alert 双按钮，红色警告destructive按钮
 
 @param title 标题，默认“提示”
 @param message 提示内容
 @param cancel 取消按钮标题
 @param destructive 警告按钮标题
 @param btnAction 点击响应block
 @return UIAlertView / UIAlertController
 */
+ (UIAlertController *)alertWithTitle:(nullable NSString *)title message:(nullable NSString *)message cancel:(nullable NSString *)cancel destructive:(nullable NSString *)destructive action:(nullable JGACAlertControllerAction)btnAction;

/**
 Alert 多按钮
 
 @param title 标题，默认“提示”
 @param message 提示内容
 @param cancel 取消按钮标题
 @param others 目前仅支持不多于20个，多余不显示
 @param btnAction 点击响应block
 @return UIAlertView / UIAlertController
 */
+ (UIAlertController *)alertWithTitle:(nullable NSString *)title message:(nullable NSString *)message cancel:(nullable NSString *)cancel others:(nullable NSArray<NSString *> *)others action:(nullable JGACAlertControllerAction)btnAction;

/**
 Alert 多按钮，红色警告destructive按钮
 
 @param title 标题，默认“提示”
 @param message 提示内容
 @param cancel 取消按钮标题
 @param destructive 警告按钮标题
 @param others 目前仅支持不多于20个，多余不显示
 @param btnAction 点击响应block
 @return UIAlertView / UIAlertController
 */
+ (UIAlertController *)alertWithTitle:(nullable NSString *)title message:(nullable NSString *)message cancel:(nullable NSString *)cancel destructive:(nullable NSString *)destructive others:(nullable NSArray<NSString *> *)others action:(nullable JGACAlertControllerAction)btnAction;

#pragma mark - Actionsheet
/**
 Actionsheet
 
 @param title 标题，默认“提示”
 @param cancel 提示内容
 @param others 目前仅支持不多于20个，多余不显示
 @param btnAction 点击响应block
 @return UIActionSheet / UIAlertController
 */
+ (UIAlertController *)actionSheetWithTitle:(nullable NSString *)title cancel:(nullable NSString *)cancel others:(nullable NSArray<NSString *> *)others action:(nullable JGACAlertControllerAction)btnAction;

/**
 Actionsheet，红色警告destructive按钮
 
 @param title 标题，默认“提示”
 @param cancel 提示内容
 @param destructive 警告按钮标题
 @param others 目前仅支持不多于20个，多余不显示
 @param btnAction 点击响应block
 @return UIActionSheet / UIAlertController
 */
+ (UIAlertController *)actionSheetWithTitle:(nullable NSString *)title cancel:(nullable NSString *)cancel destructive:(nullable NSString *)destructive others:(nullable NSArray<NSString *> *)others action:(nullable JGACAlertControllerAction)btnAction;

@end

DEPRECATED_MSG_ATTRIBUTE("Use JGACAlertController instead") @interface JGAlertController : JGACAlertController

@end

NS_ASSUME_NONNULL_END
