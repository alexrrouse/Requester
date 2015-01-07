//
//  RZRApp.h
//  Requester
//
//  Created by alex.rouse on 1/7/15.
//  Copyright (c) 2015 Raizlabs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RZRService;

@interface RZRApp : NSManagedObject

@property (nonatomic, retain) NSSet *services;
@end

@interface RZRApp (CoreDataGeneratedAccessors)

- (void)addServicesObject:(RZRService *)value;
- (void)removeServicesObject:(RZRService *)value;
- (void)addServices:(NSSet *)values;
- (void)removeServices:(NSSet *)values;

@end
