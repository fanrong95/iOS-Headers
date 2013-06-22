/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventDetailCell.h>

@class NSString, UILabel;

@interface EKEventDetailOrganizerCell : EKEventDetailCell
{
    NSString *_organizerName;
    UILabel *_organizerView;
    UILabel *_titleView;
}

- (void).cxx_destruct;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (id)_organizerView;
- (id)_titleView;
- (BOOL)update;
- (BOOL)shouldDisplayForEvent;
- (BOOL)hasCustomLayout;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;

@end

