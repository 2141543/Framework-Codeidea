/*
 * LNConst.m
 *
 * 不知名刘先生
 * Public - CoderLN / https://githubidea.github.io / https://github.com/CoderLN
 * Welcome your star|fork, Our sharing can be combined; Convenient to review and help others.
 *
 * 🏃🏻‍♂️ ◕ 尊重熬夜整理的作者，该模块将系统化学习，后续替换、补充文章内容 ~
 */

#import <UIKit/UIKit.h>

/** UITabBar的高度 */
CGFloat const LNTabBarH = 49;

/** 导航栏的最大Y值 */
CGFloat const LNNavMaxY = 64;

/** 标题栏的高度 */
CGFloat const LNTitlesViewH = 35;

/** 全局统一的间距10 */
CGFloat const LNMarin = 10;

/** TabBarBtn被重复点击的通知 */
NSString * const LNTabBarButtonDidRepeatClickNotification = @"tabBarButtonDidRepeatClickNotification";

/** TitleBtn被重复点击的通知 */
NSString * const LNTitleButtonDidRepeatClickNotification = @"titleButtonDidRepeatClickNotification";

/** 发布按钮被重复点击的通知 */
NSString * const LNPublishBtnClickNotification = @"publishBtnClickNotification";

/** 统一的请求基本URL */
NSString * const LNbasicURL = @"http://api.budejie.com/api/api_open.php";
