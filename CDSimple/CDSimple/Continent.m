//
//  Continent.m
//  CDSimple
//
//  Created by Alexander on 03.02.13.
//  Copyright (c) 2013 Alexander. All rights reserved.
//

#import "Continent.h"
#import "CoreData.h"

@implementation Continent

@dynamic name;
@dynamic countries;

+ (Continent*)insertContinent
{
    NSManagedObjectContext *context = [[CoreData defaultCoreData] managedObjectContext];
    Continent *continent = [NSEntityDescription insertNewObjectForEntityForName:@"Continent"
                                                         inManagedObjectContext:context];
    return continent;
}

@end
