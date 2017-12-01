/*
 * UILongPressGestureRecognizer.h
 * UIKit
 * 白开水ln（https://github.com/CustomPBWaters）
 *
 * (c) 2008-2017
 *
 * Created by 【WechatPublic-Codeidea】 on Elegant programming16.
 * Copyright © Reprinted（https://githubidea.github.io）Please indicate the source.Mustbe.
 *
 * @HEADER_WELCOME YOU TO JOIN_GitHub & Codeidea_END@
 */

#import <Foundation/Foundation.h>

#import <UIKit/UIGestureRecognizer.h>
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

// Begins:  when numberOfTouchesRequired have tapped numberOfTapsRequired times and been held for minumPressDuration
// Changes: when a finger moves
// Ends:    when a finger is lifted

NS_CLASS_AVAILABLE_IOS(3_2) @interface UILongPressGestureRecognizer : UIGestureRecognizer

@property (nonatomic) NSUInteger numberOfTapsRequired;      // Default is 0. The number of full taps required before the press for gesture to be recognized
@property (nonatomic) NSUInteger numberOfTouchesRequired __TVOS_PROHIBITED;   // Default is 1. Number of fingers that must be held down for the gesture to be recognized

@property (nonatomic) CFTimeInterval minimumPressDuration; // Default is 0.5. Time in seconds the fingers must be held down for the gesture to be recognized
@property (nonatomic) CGFloat allowableMovement;           // Default is 10. Maximum movement in pixels allowed before the gesture fails. Once recognized (after minimumPressDuration) there is no limit on finger movement for the remainder of the touch tracking

@end

START_COPYRIGHT__JIANSHU_BAIKAISHUILN__WechatPublic_Codeidea__END
NS_ASSUME_NONNULL_END
