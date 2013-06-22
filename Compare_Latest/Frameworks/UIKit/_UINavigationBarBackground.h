/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIBarBackgroundImageView.h>

@class UIColor, UIImageView, UIView, _UIBackdropView, _UINavigationBarAppearanceStorage;

@interface _UINavigationBarBackground : _UIBarBackgroundImageView
{
    UIColor *_barTintColor;
    _UINavigationBarAppearanceStorage *_appearanceStorage;
    UIImageView *_shadowView;
    _UIBackdropView *_adaptiveBackdrop;
    struct {
        unsigned int barTranslucence:3;
        unsigned int barStyle:3;
        unsigned int backgroundImageNeedsUpdate:1;
        unsigned int isContainedInPopover:1;
        unsigned int barWantsAdaptiveBackdrop:1;
        unsigned int barForcesOpaqueBackground:1;
    } _navbarFlags;
}

@property(retain, nonatomic, setter=_setShadowView:) UIView *_shadowView; // @synthesize _shadowView;
@property(retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage; // @synthesize appearanceStorage=_appearanceStorage;
- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setFrame:(struct CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)_customShadowImageForSearchBar;
- (void)didMoveToSuperview;
- (void)updateBackgroundImage;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(char *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 barStyle:(int)arg2 barTintColor:(id)arg3 appearance:(id)arg4 barTranslucence:(int)arg5;
- (void)_setIsContainedInPopover:(BOOL)arg1;
@property(nonatomic) BOOL barForcesOpaqueBackground;
@property(nonatomic) BOOL barWantsAdaptiveBackdrop;
@property(nonatomic, getter=isTranslucent) BOOL translucent;
@property(nonatomic) int barStyle;
@property(retain, nonatomic) UIColor *barTintColor;

@end

