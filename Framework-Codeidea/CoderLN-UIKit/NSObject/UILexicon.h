/*
 * UILexicon.h
 *
 * UIKit (c) 2014-2017
 *
 * 不知名刘先生
 * Public - CoderLN / https://githubidea.github.io / https://github.com/CoderLN
 * Welcome your star|fork, Our sharing can be combined; Convenient to review and help others.
 *
 * 🏃🏻‍♂️ ◕ 尊重熬夜整理的作者，该模块将系统化学习，后续替换、补充文章内容 ~
 */

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE_IOS(8_0) __TVOS_PROHIBITED @interface UILexiconEntry : NSObject <NSCopying>
// -documentText returns the intended text to be inserted into the document for a given -userInput.
// -userInput represents the expected typed string, which need not match the actual typed string.
// for example, if the -documentText were "iPhone", the corresponsing -userInput could be "iphone"
// -the documentText may also be in a different text script from the -userInput
@property (nonatomic, readonly) NSString *documentText;
@property (nonatomic, readonly) NSString *userInput;
@end

NS_CLASS_AVAILABLE_IOS(8_0) __TVOS_PROHIBITED @interface UILexicon : NSObject <NSCopying>
@property (nonatomic, readonly) NSArray<UILexiconEntry *> *entries;
@end

NS_ASSUME_NONNULL_END_START_COPYRIGHT__JIANSHU_BAIKAISHUILN__WechatPublic_Codeidea__END
