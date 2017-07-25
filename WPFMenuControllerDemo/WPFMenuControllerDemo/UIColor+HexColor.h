//
//  UIColor+HexColor.h
//  WPFMenuControllerDemo
//
//  Created by Leon on 2017/7/25.
//  Copyright © 2017年 Leon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HexColor)

+ (UIColor *)randomColor;

+ (instancetype)colorWithHexaString:(NSString *)hexaString;

@end
