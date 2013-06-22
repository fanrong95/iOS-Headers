/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABCardGroupItem.h>

@class NSArray, NSMutableArray;

@interface ABCardActionGroupItem : ABCardGroupItem
{
    NSMutableArray *_actions;
}

+ (id)actionGroupItemWithActions:(id)arg1;
+ (id)actionGroupItemWithAction:(id)arg1;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void)addAction:(id)arg1;
- (Class)cellClass;
- (void)dealloc;
- (id)initWithAction:(id)arg1;
- (id)init;

@end

