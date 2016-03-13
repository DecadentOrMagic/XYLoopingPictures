//
//  XY_CarouselFigure.h
//  XYLoopingPictures
//
//  Created by 薛尧 on 15/10/9.
//  Copyright © 2015年 薛尧. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImageView+WebCache.h"

@interface XY_CarouselFigure : UIScrollView

@property (nonatomic,strong)UIImage *bitmapImage; //占位图
@property (nonatomic, strong)NSArray *imageArray; //image的数组
#warning ~~~~~~~~~~~~~~~~~~~~~~~~
@property (nonatomic, strong)NSArray *sd_URLArray; //如果有SDWebImage使用这个数组加载视图
@property (nonatomic, assign)CGFloat carouselTime; //轮播时间
- (void)addTouchImageActionBlock:(void (^)(NSInteger index))block; //点击的回调
//如果是可视化编程使用此方法

@end
