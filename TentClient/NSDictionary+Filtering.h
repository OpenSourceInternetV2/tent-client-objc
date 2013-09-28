//
//  NSDictionary+Filtering.h
//  TentClient
//
//  Created by Jesse Stuart on 9/27/13.
//  Copyright (c) 2013 Tent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Filtering)

- (NSDictionary *)filterObjectsUsingKeepBlock:(BOOL (^)(id key, id obj))keepBlock
                                   valueBlock:(id (^)(id key, id obj))valueBlock;

@end