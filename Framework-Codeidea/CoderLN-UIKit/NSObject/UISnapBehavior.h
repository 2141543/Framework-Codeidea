/*
 * UISnapBehavior.h
 *
 * UIKit (c) 2012-2017
 *「Public_不知名开发者 | https://github.com/CoderLN | https://www.jianshu.com/u/fd745d76c816」
 *
 * 各位厂友, 由于「时间 & 知识」有限, 总结的文章难免有「未全、不足」, 该模块将系统化学习, 后续「坚持新增文章, 替换、补充文章内容」
 */
 

#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIDynamicBehavior.h>

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE_IOS(7_0) @interface UISnapBehavior : UIDynamicBehavior

// The point argument is expressed in the reference coordinate system
- (instancetype)initWithItem:(id <UIDynamicItem>)item snapToPoint:(CGPoint)point NS_DESIGNATED_INITIALIZER;

@property (nonatomic, assign) CGPoint snapPoint NS_AVAILABLE_IOS(9_0);
@property (nonatomic, assign) CGFloat damping; // damping value from 0.0 to 1.0. 1.0 is the least oscillation.

@end
NS_ASSUME_NONNULL_END
