//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "NSCoding.h"
#import "_UIBasicAnimationFactory.h"

@class NSMutableArray, UIColor, UIView;

@interface UISegmentedControl : UIControl <_UIBasicAnimationFactory, NSCoding>
{
    NSMutableArray *_segments;
    int _selectedSegment;
    int _highlightedSegment;
    UIView *_removedSegment;
    int _barStyle;
    id _appearanceStorage;
    UIView *_backgroundBarView;
    float _enabledAlpha;
    struct {
        unsigned int style:3;
        unsigned int size:2;
        unsigned int delegateAlwaysNotifiesDelegateOfSegmentClicks:1;
        unsigned int momentaryClick:1;
        unsigned int tracking:1;
        unsigned int autosizeToFitSegments:1;
        unsigned int isSizingToFit:1;
        unsigned int autosizeText:1;
        unsigned int transparentBackground:1;
        unsigned int useProportionalWidthSegments:1;
        unsigned int translucentBackground:1;
        unsigned int appearanceNeedsUpdate:1;
        unsigned int contentTextPaddingEnabled:1;
    } _segmentedControlFlags;
    BOOL __hasTranslucentOptionsBackground;
}

+ (id)_modernDividerImage;
+ (id)_modernBackgroundSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
+ (float)defaultHeightForStyle:(int)arg1;
+ (float)defaultHeightForStyle:(int)arg1 size:(int)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (float)defaultHeight;
@property(nonatomic, setter=_setTranslucentOptionsBackground:) BOOL _hasTranslucentOptionsBackground; // @synthesize _hasTranslucentOptionsBackground=__hasTranslucentOptionsBackground;
- (void)_updateDividerImageForSegmentAtIndex:(unsigned int)arg1;
- (void)_removeSegmentAnimationFinished:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_clearSelectedSegment;
- (void)_insertSegment:(int)arg1 withInfo:(id)arg2 animated:(BOOL)arg3;
- (id)_createAndAddSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (id)_createSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (BOOL)_isInTranslucentToolbar;
- (BOOL)_isInMiniBar;
- (float)_barHeight;
- (void)_setBadgeValue:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (id)_badgeValueForSegmentAtIndex:(unsigned int)arg1;
- (struct UIOffset)contentPositionAdjustmentForSegmentType:(int)arg1 barMetrics:(int)arg2;
- (void)setContentPositionAdjustment:(struct UIOffset)arg1 forSegmentType:(int)arg2 barMetrics:(int)arg3;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 barMetrics:(int)arg4;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 barMetrics:(int)arg4;
- (id)backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)_optionsBackgroundImage;
- (void)_setOptionsBackgroundImage:(id)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)removedSegment;
- (void)setRemovedSegment:(id)arg1;
- (void)setAlpha:(float)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1 forcePropagateToSegments:(BOOL)arg2;
- (BOOL)useBlockyMagnificationInClassic;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_tapSegmentAtPoint:(struct CGPoint)arg1;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)highlightSegment:(int)arg1;
- (void)_setHighlightedSegmentHighlighted:(BOOL)arg1;
- (BOOL)shouldTrack;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)viewForBaselineLayout;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)_setSelected:(BOOL)arg1 forSegmentAtIndex:(int)arg2 forceInfoDisplay:(BOOL)arg3;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_animateContentChangeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setSelectedSegmentIndex:(int)arg1 notify:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_setSelectedSegmentIndex:(int)arg1 notify:(BOOL)arg2;
@property(nonatomic) int selectedSegmentIndex;
@property(readonly, nonatomic) unsigned int numberOfSegments;
- (BOOL)_shouldSelectSegmentAtIndex:(int)arg1;
- (BOOL)isEnabledForSegmentAtIndex:(unsigned int)arg1;
- (void)setEnabled:(BOOL)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (struct CGSize)contentOffsetForSegmentAtIndex:(unsigned int)arg1;
- (void)setContentOffset:(struct CGSize)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (float)widthForSegmentAtIndex:(unsigned int)arg1;
- (void)setWidth:(float)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (id)imageForSegmentAtIndex:(unsigned int)arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (id)_attributedTitleForSegmentAtIndex:(unsigned int)arg1;
- (void)_setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (id)titleForSegmentAtIndex:(unsigned int)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)removeAllSegments;
- (void)removeSegmentAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_insertSegmentWithAttributedTitle:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)_setUsesNewAnimations:(BOOL)arg1;
- (BOOL)_usesNewAnimations;
- (BOOL)transparentBackground;
- (void)setTransparentBackground:(BOOL)arg1;
- (int)barStyle;
- (void)setBarStyle:(int)arg1;
- (void)_setContentTextPaddingEnabled:(BOOL)arg1;
- (void)_setAutosizeText:(BOOL)arg1;
@property(nonatomic, getter=isMomentary) BOOL momentary;
- (void)setSegmentControlStyle:(int)arg1;
- (int)segmentControlStyle;
- (void)setControlSize:(int)arg1;
- (void)_setControlSize:(int)arg1 andInvalidate:(BOOL)arg2;
- (int)controlSize;
@property(nonatomic) int segmentedControlStyle;
- (void)_setAppearanceIsTiled:(BOOL)arg1 leftCapWidth:(unsigned int)arg2 rightCapWidth:(unsigned int)arg3;
- (void)_setSegmentedControlAppearance:(CDStruct_a542d031 *)arg1;
- (void)_setNeedsAppearanceUpdate;
- (void)_resetForAppearanceChange;
- (void)_setOptionsShadowHidden:(BOOL)arg1;
- (BOOL)_optionsShadowHidden;
- (void)_updateOptionsBackground;
- (void)_setCurrentBackgroundImage:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)dealloc;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_tintColorArchivingKey;
- (id)initWithItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonSegmentedControlInit;
- (void)updateForMiniBarState:(BOOL)arg1;
@property(nonatomic) BOOL apportionsSegmentWidthsByContent;
- (id)infoViewForSegment:(int)arg1;
- (int)selectedSegment;
- (void)setSelectedSegment:(int)arg1;
- (BOOL)isEnabledForSegment:(unsigned int)arg1;
- (void)setEnabled:(BOOL)arg1 forSegment:(unsigned int)arg2;
- (struct CGSize)contentOffsetForSegment:(unsigned int)arg1;
- (void)setContentOffset:(struct CGSize)arg1 forSegment:(unsigned int)arg2;
- (float)widthForSegment:(unsigned int)arg1;
- (void)setWidth:(float)arg1 forSegment:(unsigned int)arg2;
- (id)imageForSegment:(unsigned int)arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned int)arg2;
- (id)titleForSegment:(unsigned int)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned int)arg2;
- (void)removeSegment:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)insertSegment:(unsigned int)arg1 withImage:(id)arg2 animated:(BOOL)arg3;
- (void)insertSegment:(unsigned int)arg1 withTitle:(id)arg2 animated:(BOOL)arg3;
- (void)addSegmentWithTitle:(id)arg1;
- (void)selectSegment:(int)arg1;
- (void)setImagePadding:(struct CGSize)arg1 forSegment:(unsigned int)arg2;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withStyle:(int)arg2 withItems:(id)arg3;
- (id)scriptingInfoWithChildren;

@end

