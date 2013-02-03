//
//  Continent.h
//  CDSimple
//
//  Created by Alexander on 03.02.13.
//  Copyright (c) 2013 Alexander. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Continent : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *countries;
@end

@interface Continent (CoreDataGeneratedAccessors)

- (void)addCountriesObject:(NSManagedObject *)value;
- (void)removeCountriesObject:(NSManagedObject *)value;
- (void)addCountries:(NSSet *)values;
- (void)removeCountries:(NSSet *)values;

@end
