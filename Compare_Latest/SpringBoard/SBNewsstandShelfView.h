/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBGradientView.h"

@class SBHighlightView, UIColor, UIView;

@interface SBNewsstandShelfView : SBGradientView
{
    UIView *_tintView;
    float _tintAlpha;
    SBHighlightView *_highlightView;
    unsigned int _shelfIndex;
}

@property(nonatomic) unsigned int shelfIndex; // @synthesize shelfIndex=_shelfIndex;
- (void)layoutSubviews;
@property(nonatomic) float tintAlpha;
@property(retain, nonatomic) UIColor *tintColor;
- (void)dealloc;

@end

