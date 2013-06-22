/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SBLockScreenNotificationCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CADisplayLink, NSTimer, SBLockScreenNotificationCell, UIImageView, UITableView;

@interface SBLockScreenNotificationListView : UIView <UITableViewDataSource, UITableViewDelegate, SBLockScreenNotificationCellDelegate>
{
    UITableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    UIImageView *_topDropShadowView;
    UIView *_bottomFadeMaskContainer;
    UIImageView *_bottomFadeMaskImageView;
    id <SBLockScreenNotificationViewDelegate> _delegate;
    id <SBLockScreenNotificationModel> _model;
    CADisplayLink *_displayLink;
    float _currentTextAlpha;
    double _fadeStartTimestamp;
    NSTimer *_oldTextDisabledTimer;
    unsigned int _indexOfNewItem;
    SBLockScreenNotificationCell *_currentCellForUnlock;
    BOOL _notificationCellIsScrollingToPasscode;
    float _notificationScrollDecelerationRatio;
}

@property(nonatomic) id <SBLockScreenNotificationModel> model; // @synthesize model=_model;
@property(nonatomic) id <SBLockScreenNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cellTextFadeTimerFired:(id)arg1;
- (void)_textDisabledTimerFired:(id)arg1;
- (void)_clearTextFadeTimer;
- (void)_clearTextDisabledTimer;
- (void)_resetAllFadeTimers;
- (void)_disableExistingContent;
- (void)updateForRemovalOfItems;
- (void)updateForRemovalOfItemAtIndex:(unsigned int)arg1;
- (void)_postludeForUpdateForRemoval:(BOOL)arg1;
- (void)updateForModificationOfItemWithOldIndex:(unsigned int)arg1 andNewIndex:(unsigned int)arg2;
- (void)updateForAdditionOfItemAtIndex:(unsigned int)arg1;
- (int)_rowAnimationForDelete;
- (int)_rowAnimationForInsert;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollingEndedInScrollView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_setNonSelectedCellsToVisible:(BOOL)arg1 withSelectedCell:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_setContentForTableCell:(id)arg1 withItem:(id)arg2 atIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (double)lastSlideToUnlockAnimationStartTime;
- (void)lockScreenDidEndScrollingOnPage:(int)arg1;
- (void)setInScreenOffMode:(BOOL)arg1;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (void)layoutSubviews;
- (void)prepareForRemoval;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

