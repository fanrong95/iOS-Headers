/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MPAVControllerNode-Protocol.h"
#import "MPControllerProtocol-Protocol.h"

@class MPAVController, MPAVItem, MPTransitionController, NSTimer, UIView;

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode>
{
    id _delegate;
    NSTimer *_idleTimerDisablerTimer;
    int _interfaceOrientation;
    MPAVItem *_item;
    MPAVController *_player;
    MPViewController *_pushedViewController;
    MPTransitionController *_pushedTransitionController;
    id _popViewControllerHandler;
    unsigned int _appearing:1;
    unsigned int _observesApplicationSuspendResumeEventsOnly:1;
    unsigned int _showOverlayWhileAppearingDisabled:1;
    BOOL _registeredForPlayerNotifications;
    int _playerLockedCount;
}

@property(nonatomic) BOOL registeredForPlayerNotifications; // @synthesize registeredForPlayerNotifications=_registeredForPlayerNotifications;
@property(copy, nonatomic) id popViewControllerHandler; // @synthesize popViewControllerHandler=_popViewControllerHandler;
@property(nonatomic) int orientation; // @synthesize orientation=_interfaceOrientation;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_pushTransitionEnded:(id)arg1;
- (void)_popTransitionEnded:(id)arg1;
- (BOOL)_canReloadView;
- (void)removeChildViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setView:(id)arg1;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
@property(nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) BOOL idleTimerDisabled;
- (void)incrementAggregateStatisticsDisplayCount;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)unlockPlayer;
- (void)lockPlayer;
- (void)setAppearing:(BOOL)arg1;
- (void)willChangeToInterfaceOrientation:(int)arg1;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 withTransition:(id)arg2;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
@property(nonatomic) BOOL observesApplicationSuspendResumeEventsOnly;
- (void)applicationResumed;
- (void)applicationDidResumeEventsOnly;
- (void)applicationDidSuspendEventsOnly;
- (void)stopTicking;
- (void)startTicking;
- (BOOL)isAppearing;
- (void)endIgnoringChangeTypes:(unsigned int)arg1;
- (int)displayableInterfaceOrientationForInterfaceOrientation:(int)arg1;
- (void)didChangeToInterfaceOrientation:(int)arg1;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1;
- (void)beginTransitionOverlayHidding;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (void)beginIgnoringChangeTypes:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) UIView *view;

@end

