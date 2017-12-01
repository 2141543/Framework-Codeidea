/*
 * UIRegion.h
 * UIKit
 * 白开水ln（https://github.com/CustomPBWaters）
 *
 * (c) 2015-2016
 *
 * Created by 【WechatPublic-Codeidea】 on Elegant programming16.
 * Copyright © Reprinted（https://githubidea.github.io）Please indicate the source.Mustbe.
 *
 * http://www.jianshu.com/u/fd745d76c816
 *
 * @HEADER_WELCOME YOU TO JOIN_GitHub & Codeidea_END@
 */
 

#import <Foundation/Foundation.h>
#import <UIKit/UIGeometry.h>

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE_IOS(9_0) @interface UIRegion : NSObject <NSCopying, NSCoding>

/*! A shared infinite region
 */
#if UIKIT_DEFINE_AS_PROPERTIES
@property(class, nonatomic, readonly) UIRegion *infiniteRegion;
#else
+ (UIRegion *)infiniteRegion;
#endif

/*! Create a circular region with radius
 */
- (instancetype)initWithRadius:(CGFloat)radius;

/*! Create a rectangular region of size.
 */
- (instancetype)initWithSize:(CGSize)size;

/*! Create a new region that is the inverse of the current region.
 The inverse of the infiniteRegion is an empty region.
 Subclasses of UIRegion need to provide an implementation of inverseRegion.
 */
- (instancetype)inverseRegion;

/*! Create a new region that is the original region plus the supplied region
 */
- (instancetype)regionByUnionWithRegion:(UIRegion *)region;

/*! Create a new region that is the original region minus the supplied region
 */
- (instancetype)regionByDifferenceFromRegion:(UIRegion *)region;

/*! Create a new region that is the region covered by the original region and the supplied region
 */
- (instancetype)regionByIntersectionWithRegion:(UIRegion *)region;

/*! Test for containment
 */
- (BOOL)containsPoint:(CGPoint)point;

@end


NS_ASSUME_NONNULL_END_START_COPYRIGHT__JIANSHU_BAIKAISHUILN__WechatPublic_Codeidea__END
