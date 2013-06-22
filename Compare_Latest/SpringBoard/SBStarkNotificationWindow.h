/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBWindow.h"

#import "SBStarkNotificationViewControllerDelegate-Protocol.h"

@class SBStarkNotificationViewController, SBStarkScreenFocusController;

@interface SBStarkNotificationWindow : SBWindow <SBStarkNotificationViewControllerDelegate>
{
    id _starkScreenBorrowingToken;
    SBStarkScreenFocusController *_focusController;
}

@property(retain, nonatomic) SBStarkScreenFocusController *focusController; // @synthesize focusController=_focusController;
- (void)notificationViewController:(id)arg1 stateDidChangeFrom:(int)arg2;
@property(retain, nonatomic) SBStarkNotificationViewController *rootViewController;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 jailBehavior:(int)arg2;

@end

