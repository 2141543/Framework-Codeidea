/*
 * UIVibrancyEffect.h
 *
 * UIKit (c) 2016-2017
 *
 * 不知名刘先生
 * Public - CoderLN / https://githubidea.github.io / https://github.com/CoderLN
 * Welcome your star|fork, Our sharing can be combined; Convenient to review and help others.
 *
 * 🏃🏻‍♂️ ◕ 尊重熬夜整理的作者，该模块将系统化学习，后续替换、补充文章内容 ~
 */
 
#import <UIKit/UIVisualEffect.h>

@class UIBlurEffect;

NS_ASSUME_NONNULL_BEGIN

/* UIVibrancyEffect amplifies and adjusts the color of content layered behind the view, allowing content placed inside the contentView to become more vivid. It is intended to be placed over, or as a subview of, a UIVisualEffectView that has been configured with a UIBlurEffect. This effect only affects content added to the contentView. Because the vibrancy effect is color dependent, subviews added to the contentView need to be tintColorDidChange aware and must be prepared to update themselves accordingly. UIImageView will need its image to have a rendering mode of UIImageRenderingModeAlwaysTemplate to receive the proper effect.
 */
NS_CLASS_AVAILABLE_IOS(8.0) @interface UIVibrancyEffect : UIVisualEffect

+ (UIVibrancyEffect *)effectForBlurEffect:(UIBlurEffect *)blurEffect;

@end

NS_ASSUME_NONNULL_END

