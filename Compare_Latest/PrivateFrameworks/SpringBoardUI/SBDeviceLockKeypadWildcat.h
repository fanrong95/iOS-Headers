/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpringBoardUI/SBDeviceLockKeypad.h>

@class UIView;

@interface SBDeviceLockKeypadWildcat : SBDeviceLockKeypad
{
    UIView *_glowView;
}

+ (id)pressedImage;
+ (id)keypadImage;
- (BOOL)cancelKeyChar;
- (BOOL)deleteKeyChar;
- (struct CGRect)_rectForKey:(unsigned int)arg1;
- (float)_yFudge;
- (void)setHighlighted:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

