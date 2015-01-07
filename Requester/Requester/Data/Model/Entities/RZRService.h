//
//  RZRService.h
//  Requester
//
//  Created by alex.rouse on 1/7/15.
//  Copyright (c) 2015 Raizlabs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RZRApp, RZREnvironment, RZRHeader;

@interface RZRService : NSManagedObject

@property (nonatomic, retain) RZRApp *app;
@property (nonatomic, retain) NSSet *environments;
@property (nonatomic, retain) NSSet *baseHeaders;
@end

@interface RZRService (CoreDataGeneratedAccessors)

- (void)addEnvironmentsObject:(RZREnvironment *)value;
- (void)removeEnvironmentsObject:(RZREnvironment *)value;
- (void)addEnvironments:(NSSet *)values;
- (void)removeEnvironments:(NSSet *)values;

- (void)addBaseHeadersObject:(RZRHeader *)value;
- (void)removeBaseHeadersObject:(RZRHeader *)value;
- (void)addBaseHeaders:(NSSet *)values;
- (void)removeBaseHeaders:(NSSet *)values;

@end
