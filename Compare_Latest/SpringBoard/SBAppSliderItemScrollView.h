/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIScrollView.h"

@class SBAppSwitcherPageView;

@interface SBAppSliderItemScrollView : UIScrollView
{
    SBAppSwitcherPageView *_item;
    int _layoutOrientation;
}

@property(nonatomic) int layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(retain, nonatomic) SBAppSwitcherPageView *item; // @synthesize item=_item;
- (void)layoutSubviews;
- (void)dealloc;

@end

