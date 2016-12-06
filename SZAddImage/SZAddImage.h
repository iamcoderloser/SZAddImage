//
//  SZAddImage.h
//  图片上传选择
//
//  Created by 唯你 on 16/12/2.
//  Copyright © 2016年 唯你. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SZAddImage;

@protocol SZAddImageDelegate <NSObject>
/**
 *  SZAddImage 显示区域的改变
 *  @param szImgView 显示的区域
 *  @param expand 扩张还是收缩  YES扩张    NO收缩
 *  @param heigt 改变的高度
 */
-(void) addImageView:(SZAddImage *) szImgView isExpand:(BOOL) expand  withHeigth:(CGFloat) heigt;

/**
 *  SZAddImage 添加的图片超过了最多数目
 *  @param szImgView 显示的区域
 */
-(void) addImageViewOutOfMaxImages:(SZAddImage *) szImgView;

@end

/**
 * 使用说明:直接创建此view添加到你需要放置的位置即可.
 * 属性images可以获取到当前选中的所有图片对象.
 */

@interface SZAddImage : UIView

/**
 *  存储所有的照片(UIImage)
 */
@property (nonatomic, strong) NSMutableArray *images;
///**
// *  显示最多的图片
// */
//@property (nonatomic, assign) NSInteger maxImageCount;

@property (nonatomic, strong) id<SZAddImageDelegate> delegate;

@end
