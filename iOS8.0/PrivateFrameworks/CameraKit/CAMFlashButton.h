//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CAMExpandableMenuButton.h>

@class UIImageView;

@interface CAMFlashButton : CAMExpandableMenuButton
{
    BOOL _allowsAutomaticFlash;
    BOOL _unavailable;
    UIImageView *__glyphView;
    UIImageView *__warningIndicatorView;
}

@property(readonly, nonatomic) UIImageView *_warningIndicatorView; // @synthesize _warningIndicatorView=__warningIndicatorView;
@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic, getter=isUnavailable) BOOL unavailable; // @synthesize unavailable=_unavailable;
@property(nonatomic) BOOL allowsAutomaticFlash; // @synthesize allowsAutomaticFlash=_allowsAutomaticFlash;
- (void).cxx_destruct;
- (BOOL)shouldIgnoreMenuInteraction;
- (void)reloadData;
- (id)hiddenIndexesWhileCollapsed;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(int)arg1;
- (int)numberOfMenuItems;
- (int)indexForMode:(int)arg1;
- (int)modeForIndex:(int)arg1;
@property(nonatomic) int flashMode;
- (id)initWithExpansionOrientation:(int)arg1;
- (void)_commonCAMFlashButtonInitialization;

@end

