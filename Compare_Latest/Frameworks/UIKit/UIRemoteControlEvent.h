/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIInternalEvent.h>

@interface UIRemoteControlEvent : UIInternalEvent
{
    int _subtype;
}

- (void)_simpleRemoteActionNotification:(id)arg1;
- (void)_sendEventToResponder:(id)arg1;
- (id)_windows;
- (void)_setSubtype:(int)arg1;
- (int)subtype;
- (int)type;
- (void)dealloc;
- (id)_init;

@end

