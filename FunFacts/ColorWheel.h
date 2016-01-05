//
//  ColorWheel.h
//  FunFacts
//
//  Created by Thiago Heitling on 2015-12-29.
//  Copyright © 2015 Thiago Heitling. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;

@end
