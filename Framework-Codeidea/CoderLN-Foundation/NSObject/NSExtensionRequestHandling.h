/*
 * NSExtensionRequestHandling.h
 *
 * Foundation (c) 2013-2017
 *
 * 不知名刘先生
 * Public - CoderLN / https://githubidea.github.io / https://github.com/CoderLN
 * Welcome your star|fork, Our sharing can be combined; Convenient to review and help others.
 *
 * 🏃🏻‍♂️ ◕ 尊重熬夜整理的作者，该模块将系统化学习，后续替换、补充文章内容 ~
 */
 

#import <Foundation/Foundation.h>

#if __OBJC2__
NS_ASSUME_NONNULL_BEGIN

@class NSExtensionContext;

// The basic NSExtensionRequestHandling protocol defines a lifecycle hook into the extension. Non view-controller-based services might keep track of the current request using this method. Implemented by the principal object of the extension.
@protocol NSExtensionRequestHandling <NSObject>

@required

// Tells the extension to prepare its interface for the requesting context, and request related data items. At this point [(NS|UI)ViewController extensionContext] returns a non-nil value. This message is delivered after initialization, but before the conforming object will be asked to "do something" with the context (i.e. before -[(NS|UI)ViewController loadView]). Subclasses of classes conforming to this protocol are expected to call [super beginRequestWithExtensionContext:] if this method is overridden.
- (void)beginRequestWithExtensionContext:(NSExtensionContext *)context;

@end

NS_ASSUME_NONNULL_END
#endif

