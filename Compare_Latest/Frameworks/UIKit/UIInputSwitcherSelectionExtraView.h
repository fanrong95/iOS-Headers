/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIKeyboardMenuView;

@interface UIInputSwitcherSelectionExtraView : UIView
{
    float m_pointerOffset;
    UIKeyboardMenuView *_menu;
    struct CGRect _keyRect;
}

@property(nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;
@property(nonatomic) struct CGRect keyRect; // @synthesize keyRect=_keyRect;
@property(nonatomic) float pointerOffset; // @synthesize pointerOffset=m_pointerOffset;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

