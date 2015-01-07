//
//  RZRKeyValue.h
//  Requester
//
//  Created by alex.rouse on 1/7/15.
//  Copyright (c) 2015 Raizlabs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface RZRKeyValue : NSManagedObject

@property (nonatomic, retain) NSString * lookupKey;
@property (nonatomic, retain) NSString * lookupValue;

@end
