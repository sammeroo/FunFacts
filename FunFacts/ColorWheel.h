//
//  ColorWheel.h
//  FunFacts
//
//  Created by Sambit Chatterjee on 4/1/15.
//  Copyright (c) 2015 Sambit Chatterjee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong,nonatomic) NSArray *colors;

-(UIColor *)randomColor;

@end
