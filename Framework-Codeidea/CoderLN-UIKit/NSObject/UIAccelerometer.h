/*
 * UIAccelerometer.h
 *
 * UIKit (c) 2007-2017
 *
 * 不知名刘先生
 * Public - CoderLN / https://githubidea.github.io / https://github.com/CoderLN
 * Welcome your star|fork, Our sharing can be combined; Convenient to review and help others.
 *
 * 🏃🏻‍♂️ ◕ 尊重熬夜整理的作者，该模块将系统化学习，后续替换、补充文章内容 ~
 */
 
#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

/* UIAcceleration and UIAccelerometer are deprecated as of iOS 5.0. These classes have been replaced by the Core Motion framework.
 */

NS_ASSUME_NONNULL_BEGIN

typedef double UIAccelerationValue;

@protocol UIAccelerometerDelegate;

NS_CLASS_DEPRECATED_IOS(2_0, 5_0, "UIAcceleration has been replaced by the CoreMotion framework") __TVOS_PROHIBITED
@interface UIAcceleration : NSObject

@property(nonatomic,readonly) NSTimeInterval timestamp;
@property(nonatomic,readonly) UIAccelerationValue x;
@property(nonatomic,readonly) UIAccelerationValue y;
@property(nonatomic,readonly) UIAccelerationValue z;

@end

NS_CLASS_DEPRECATED_IOS(2_0, 5_0, "UIAccelerometer has been replaced by the CoreMotion framework") __TVOS_PROHIBITED
@interface UIAccelerometer : NSObject

+ (UIAccelerometer *)sharedAccelerometer;

@property(nonatomic) NSTimeInterval updateInterval; //May be capped at a minimum interval
@property(nullable,nonatomic,weak) id<UIAccelerometerDelegate> delegate;

@end

__TVOS_PROHIBITED
@protocol UIAccelerometerDelegate<NSObject>
@optional

- (void)accelerometer:(UIAccelerometer *)accelerometer didAccelerate:(UIAcceleration *)acceleration NS_DEPRECATED_IOS(2_0, 5_0)  __TVOS_PROHIBITED;

@end

NS_ASSUME_NONNULL_END
