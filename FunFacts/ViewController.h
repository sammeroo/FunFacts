//
//  ViewController.h
//  FunFacts
//
//  Created by Sambit Chatterjee on 3/29/15.
//  Copyright (c) 2015 Sambit Chatterjee. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong,nonatomic) FactBook *factBook;
@property (strong,nonatomic) ColorWheel *colorWheel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;

@end

