/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface EKEventDetailGroup : NSObject
{
    int _tag;
    NSArray *_items;
    NSString *_headerTitle;
}

@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) int tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasSubitemForIndexPathRow:(unsigned int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (id)itemAtIndex:(unsigned int)arg1 subitemIndex:(unsigned int *)arg2;
- (id)itemAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfRows;
- (id)initWithTag:(int)arg1 headerTitle:(id)arg2;

@end

