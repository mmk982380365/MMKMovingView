//
//  MovingView.h
//  Anime
//
//  Created by 马鸣坤 on 15/11/2.
//  Copyright (c) 2015年 wkf. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MMKMovingViewDelegate;

@interface MMKMovingView : UIView
/**
 *  按钮
 */
@property (strong,nonatomic) UIButton *btn;
/**
 *  是否在拖动
 */
@property (assign,nonatomic,readonly) BOOL isDrag;
/**
 *  代理
 */
@property (assign,nonatomic) id<MMKMovingViewDelegate> delegate;
/**
 *  是否允许贴边
 */
@property (assign,nonatomic) BOOL allowAdsorption;
/**
 *  初始化视图
 *
 *  @param frame 视图大小
 *  @param type  按钮类型
 *
 *  @return 实例对象
 */
-(instancetype)initWithFrame:(CGRect)frame buttonType:(UIButtonType)type;
/**
 *  设置图片
 *
 *  @param image 图片
 *  @param state 状态
 */
-(void)setImage:(UIImage *)image forState:(UIControlState)state;
/**
 *  设置标题
 *
 *  @param title 标题
 *  @param state 状态
 */
-(void)setTitle:(NSString *)title forState:(UIControlState)state;
/**
 *  设置背景图片
 *
 *  @param image 图片
 *  @param state 状态
 */
-(void)setBackgroundImage:(UIImage *)image forState:(UIControlState)state;

@end
/**
 *  协议
 */
@protocol MMKMovingViewDelegate <NSObject>
/**
 *  点击按钮动作
 *
 *  @param moving 执行操作的该视图
 */
-(void)buttonAction:(MMKMovingView *)moving;

@end