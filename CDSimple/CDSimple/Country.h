//
//  Country.h
//  CDSimple
//
//  Created by Alexander on 03.02.13.
//  Copyright (c) 2013 Alexander. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Continent;

@interface Country : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSNumber * area;
@property (nonatomic, retain) Continent *continent;

@end
