//
//  FactBook.h
//  FunFacts
//
//  Created by Sambit Chatterjee on 3/31/15.
//  Copyright (c) 2015 Sambit Chatterjee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong,nonatomic) NSArray *facts;
-(NSString *)randomFact;

@end
