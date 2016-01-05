//
//  FactBook.h
//  FunFacts
//
//  Created by Thiago Heitling on 2015-12-29.
//  Copyright © 2015 Thiago Heitling. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property(strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
