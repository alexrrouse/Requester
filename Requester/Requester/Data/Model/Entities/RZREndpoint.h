//
//  RZREndpoint.h
//  Requester
//
//  Created by alex.rouse on 1/7/15.
//  Copyright (c) 2015 Raizlabs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RZRHeader;

@interface RZREndpoint : NSManagedObject

@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) NSNumber * method;
@property (nonatomic, retain) NSSet *headers;
@end

@interface RZREndpoint (CoreDataGeneratedAccessors)

- (void)addHeadersObject:(RZRHeader *)value;
- (void)removeHeadersObject:(RZRHeader *)value;
- (void)addHeaders:(NSSet *)values;
- (void)removeHeaders:(NSSet *)values;

@end
