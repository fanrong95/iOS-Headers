/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsExitEvent : SSMetricsBaseEvent
{
}

- (id)description;
@property(retain, nonatomic) NSString *exitURL;
- (void)setExitTypeWithSuspendReason:(int)arg1;
@property(retain, nonatomic) NSString *exitType;
- (id)init;

@end

