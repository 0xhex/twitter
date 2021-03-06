//
//  Tweet.h
//  Twitter
//
//  Created by Ken Szubzda on 2/19/15.
//  Copyright (c) 2015 Ken Szubzda. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface Tweet : NSObject

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSDate *createdAt;
@property (nonatomic, strong) User *user;
@property (nonatomic, assign) NSInteger tweetId;
@property (nonatomic, assign) NSInteger retweetsCount;
@property (nonatomic, assign) BOOL retweeted;
@property (nonatomic, assign) NSInteger favoritesCount;
@property (nonatomic, assign) BOOL favorited;
@property (nonatomic, assign) NSInteger retweetId;
@property (nonatomic, strong) NSString *retweetedScreenname;



- (id)initWithDictionary:(NSDictionary *)dictionary;

+ (NSMutableArray *)tweetsWithArray:(NSArray *)array;

@end
