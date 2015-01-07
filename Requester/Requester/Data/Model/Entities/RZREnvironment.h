//
//  RZREnvironment.h
//  Requester
//
//  Created by alex.rouse on 1/7/15.
//  Copyright (c) 2015 Raizlabs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RZRService;

@interface RZREnvironment : NSManagedObject

@property (nonatomic, retain) NSString * baseURL;
@property (nonatomic, retain) NSString * displayName;
@property (nonatomic, retain) RZRService *service;

@end
