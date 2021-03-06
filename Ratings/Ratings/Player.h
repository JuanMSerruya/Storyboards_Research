//
//  Player.h
//  Ratings
//
//  Created by Juan Manuel Serruya on 12/27/12.
//  Copyright (c) 2012 Juan Manuel Serruya. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
