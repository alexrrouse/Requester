//
//  RZRHeader.h
//  Requester
//
//  Created by alex.rouse on 1/7/15.
//  Copyright (c) 2015 Raizlabs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "RZRKeyValue.h"

@class RZREndpoint, RZRService;

@interface RZRHeader : RZRKeyValue

@property (nonatomic, retain) RZRService *noReadService;
@property (nonatomic, retain) RZREndpoint *noReadEndpoint;

@end
