/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIAlertView;

@interface SBLockScreenModalAlertView : UIView
{
    UIAlertView *_alertView;
}

- (void)layoutSubviews;
- (void)removeAlertView;
- (BOOL)replaceAlertView:(id)arg1 withAlertView:(id)arg2;
- (void)showAlertView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

