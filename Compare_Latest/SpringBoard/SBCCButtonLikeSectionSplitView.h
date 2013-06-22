/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBControlCenterSectionView.h"

@class SBCCButtonLikeSectionView, SBControlCenterSeparatorView;

@interface SBCCButtonLikeSectionSplitView : SBControlCenterSectionView
{
    SBControlCenterSeparatorView *_separatorView;
    float _separatorWidth;
    BOOL _leftHidden;
    BOOL _rightHidden;
    BOOL _needsUpdate;
    SBCCButtonLikeSectionView *_leftSection;
    SBCCButtonLikeSectionView *_rightSection;
}

@property(nonatomic) SBCCButtonLikeSectionView *rightSection; // @synthesize rightSection=_rightSection;
@property(nonatomic) SBCCButtonLikeSectionView *leftSection; // @synthesize leftSection=_leftSection;
- (void)layoutSubviews;
- (struct CGRect)_separatorFrame;
- (struct CGRect)_frameForSectionSlot:(int)arg1;
- (id)_viewForSectionSlot:(int)arg1;
- (void)_updateLabelParameters;
- (void)setRightSectionHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLeftSectionHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_relayoutAnimated:(BOOL)arg1;
- (BOOL)_useLandscapeBehavior;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

