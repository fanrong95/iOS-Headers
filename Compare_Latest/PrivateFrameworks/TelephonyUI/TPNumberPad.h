/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

@class NSArray, NSMutableArray;

@interface TPNumberPad : UIControl
{
    NSMutableArray *_buttons;
}

- (void)buttonLongPressed:(id)arg1;
- (void)buttonCancelled:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)buttonLongPressedViaGesture:(id)arg1;
- (void)_addButton:(id)arg1;
- (void)_layoutGrid;
- (void)_setBackgroundAlphaOnButton:(id)arg1 alpha:(float)arg2;
- (float)_backgroundAlphaOfButton:(id)arg1;
@property(nonatomic) float buttonBackgroundAlpha;
- (void)replaceButton:(id)arg1 atIndex:(unsigned int)arg2;
@property(retain) NSArray *buttons; // @dynamic buttons;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithButtons:(id)arg1;

@end

