
/*!
 *  @header BAKit.h
 *          BABaseProject
 *
 *  @brief  BAKit
 *
 *  @author 博爱
 *  @copyright    Copyright © 2016年 博爱. All rights reserved.
 *  @version    V1.0
 */

//                            _ooOoo_
//                           o8888888o
//                           88" . "88
//                           (| -_- |)
//                            O\ = /O
//                        ____/`---'\____
//                      .   ' \\| |// `.
//                       / \\||| : |||// \
//                     / _||||| -:- |||||- \
//                       | | \\\ - /// | |
//                     | \_| ''\---/'' | |
//                      \ .-\__ `-` ___/-. /
//                   ___`. .' /--.--\ `. . __
//                ."" '< `.___\_<|>_/___.' >'"".
//               | | : `- \`.;`\ _ /`;.`/ - ` : | |
//                 \ \ `-. \_ __\ /__ _/ .-` / /
//         ======`-.____`-.___\_____/___.-`____.-'======
//                            `=---='
//
//         .............................................
//                  佛祖镇楼                  BUG辟易
//          佛曰:
//                  写字楼里写字间，写字间里程序员；
//                  程序人员写程序，又拿程序换酒钱。
//                  酒醒只在网上坐，酒醉还来网下眠；
//                  酒醉酒醒日复日，网上网下年复年。
//                  但愿老死电脑间，不愿鞠躬老板前；
//                  奔驰宝马贵者趣，公交自行程序员。
//                  别人笑我忒疯癫，我笑自己命太贱；
//                  不见满街漂亮妹，哪个归得程序员？

/*
 
 *********************************************************************************
 *
 * 在使用BAKit的过程中如果出现bug请及时以以下任意一种方式联系我，我会及时修复bug
 *
 * QQ     : 可以添加ios开发技术群 479663605 在这里找到我(博爱1616【137361770】)
 * 微博    : 博爱1616
 * Email  : 137361770@qq.com
 * GitHub : https://github.com/boai
 * 博客园  : http://www.cnblogs.com/boai/
 * 博客    : http://boai.github.io
 
 *********************************************************************************
 
 */



#ifndef BAKit_h
#define BAKit_h


#pragma mark - ****** 系统类
/*! 系统类 */
#import "BALog.h"
#import "BAApp.h"

#pragma mark - ****** UIKit类
/*! UIKit类 */
// 控件类
#import "BAPickerView.h"
#import "BATextView.h"
/*! 自定义 TextField */
#import "BATextField.h"

/*! 自定义alertView */
#import "BAAlertView.h"


// 扩展类
#import "UIButton+BAKit.h"
#import "UIImage+BAKit.h"
#import "UIImageView+BAKit.h"
#import "UILabel+BAKit.h"
#import "UIScrollView+BAKit.h"
#import "UITableView+BAKit.h"
#import "UITableViewCell+Reuse.h"

#import "UITextField+BAKit.h"
#import "UIView+BAKit.h"
#import "UIWebView+BAKit.h"
#import "UICollectionView+ARDynamicCacheHeightLayoutCell.h"

#import "UIColor+BAKit.h"
#import "UIFont+BAKit.h"
#import "UIWindow+BAKit.h"
#import "UIDevice+BAKit.h"


#import "UINavigationBar+BAKit.h"
#import "UINavigationController+BAKit.h"
#import "UINavigationItem+CustomItem.h"

#import "UIApplication+AppInfo.h"
/*! UIAlertController 类 */
#import "UIAlertController+Blocks.h"

/*! 带富文本属性的 UILabel 封装 */
#import "UILabel+BAAttributeTextTapAction.h"


#pragma mark - ****** Foundation类
/*! Foundation类 */
#import "NSArray+BAKit.h"
#import "NSMutableArray+BAKit.h"
/*! 排序算法 */
#import "NSMutableArray+BASort.h"

#import "NSDictionary+BAKit.h"
#import "NSMutableDictionary+BAKit.h"
/*! 日常 NSString 类型处理 */
#import "NSString+BAKit.h"
/*! 特殊字符处理 */
#import "NSString+Trims.h"
/*! 数字格式化 */
#import "NSString+NSNumber.h"
/*! 富文本 */
#import "NSMutableAttributedString+BAKit.h"

#import "NSFileManager+BAKit.h"
#import "NSNumber+BAKit.h"
#import "NSDate+BAKit.h"
#import "NSProcessInfo+BAKit.h"
#import "NSThread+BAKit.h"
/*! RunTime */
#import "NSObject+BARunTime.h"

/*! 阴影 */
#import "NSShadow+BAKit.h"

/*! app跳转到系统的各种基本设置选项 */
#import "BASystermSetting.h"


#pragma mark - ****** BAKitManager类
/*! BAKitManager */
#import "BAKitManager.h"
#import "BAKitManager+BALabel.h"


#pragma mark - ****** 其他封装
/*! GCD */
#import "GCD/GCD.h"
/*! 清理系统缓存 */
#import "BAClearCacheManager.h"
/*! 系统服务权限的封装 */
#import "BASystemService.h"

/*! 正则表达式 */
#import "BARegularExpression.h"

/*! 自定义上下拉刷新 */
#import "BACustomMJFooter.h"
#import "BACustomMJHeader.h"

/*! 自定义加载动画 */
#import "BALoadingHubView.h"

/*! hook */
//#import "NSObject+BAHook.h"

/*! 公共方法类 */
#import "BACommon.h"

/*! 公共跳转类 */
#import "BAJumpManager.h"


#endif /* BAKit_h */
