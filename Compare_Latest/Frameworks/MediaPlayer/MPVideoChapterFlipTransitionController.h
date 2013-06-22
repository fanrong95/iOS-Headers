/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPFlipTransitionController.h>

@class UINavigationBar, UINavigationItem, UITextLabel;

@interface MPVideoChapterFlipTransitionController : MPFlipTransitionController
{
    UINavigationBar *_navigationBar;
    UINavigationItem *_originalNavigationItem;
    UITextLabel *_chapterGuideTitleLabel;
    BOOL _shouldPlayAfterFlip;
    BOOL _tvOutEnabled;
}

@property(nonatomic) BOOL TVOutEnabled; // @synthesize TVOutEnabled=_tvOutEnabled;
@property(nonatomic) BOOL playAfterFlip; // @synthesize playAfterFlip=_shouldPlayAfterFlip;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)_showChapterGuideNavigationViews;
- (void)_restoreOriginalNavigationViewsDidStop:(id)arg1;
- (void)_restoreOriginalNavigationViews:(BOOL)arg1;
- (int)_interfaceOrientation;
- (void)_hideNavigationAndStatusBars;
- (id)_copySwizzledNavigationViews;
- (id)_chapterGuideTitleLabel;
- (void)_done:(id)arg1;
- (void)performTransition:(unsigned int)arg1;
- (void)dealloc;

@end

