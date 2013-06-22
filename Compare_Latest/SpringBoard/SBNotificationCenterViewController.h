/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SBBulletinActionHandler-Protocol.h"
#import "SBBulletinViewControllerDelegate-Protocol.h"
#import "SBNotificationCenterWidgetHost-Protocol.h"

@class SBBulletinObserverViewController, SBChevronView, SBModeViewController, UIStatusBar, UIView, _UIBackdropView;

@interface SBNotificationCenterViewController : UIViewController <SBBulletinViewControllerDelegate, SBNotificationCenterWidgetHost, SBBulletinActionHandler>
{
    id <SBNotificationCenterViewControllerDelegate> _delegate;
    UIView *_clippingView;
    UIView *_containerView;
    UIView *_contentView;
    UIView *_backgroundView;
    SBModeViewController *_modeController;
    SBBulletinObserverViewController *_todayViewController;
    SBBulletinObserverViewController *_allModeViewController;
    SBBulletinObserverViewController *_missedModeViewController;
    UIStatusBar *_statusBar;
    SBChevronView *_grabberView;
    UIView *_grabberContentView;
    UIView *_registeredGrabberView;
    struct CGRect _grabberContentViewFrameForRegisteredGrabber;
    UIView *_initialSnapshot;
    UIView *_finalSnapshot;
    struct {
        unsigned int blursBackground:1;
        unsigned int showsBackground:1;
        unsigned int isBackgroundValid:1;
        unsigned int isGrabberEnabled:1;
        unsigned int isGrabberLockEngaged:1;
    } _notificationCenterViewControllerFlags;
}

+ (id)_localizableTitleForBulletinViewControllerOfClass:(Class)arg1;
+ (id)grayControlInteractionTintColor;
@property(nonatomic) id <SBNotificationCenterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBChevronView *grabberView; // @synthesize grabberView=_grabberView;
- (BOOL)handleActionForBulletin:(id)arg1;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
@property(nonatomic) id <SBWidgetViewControllerHostDelegate> widgetDelegate;
@property(readonly, nonatomic) struct CGRect contentFrame;
- (void)_setContainerFrame:(struct CGRect)arg1;
- (struct CGRect)_containerFrame;
@property(nonatomic) struct UIEdgeInsets clippingInsets;
@property(nonatomic) float contentViewAlpha;
- (void)dismissGrabberView;
- (void)presentGrabberView;
- (void)_positionContentForRegisteredGrabber;
- (struct CGRect)_grabberContentViewFrameForRegisteredGrabber;
- (struct CGRect)positionContentForTouchAtLocation:(struct CGPoint)arg1;
- (void)_reloadAllWidgets;
- (void)disableGrabberLock;
- (BOOL)isGrabberLocked;
@property(nonatomic, getter=isGrabberViewEnabled) BOOL grabberViewEnabled;
- (id)unregisterSharedGrabberView;
- (void)registerSharedGrabberView:(id)arg1;
- (void)_register:(BOOL)arg1 grabberView:(id)arg2;
- (struct CGRect)revealRectForBulletin:(id)arg1;
@property(nonatomic, getter=isSuppressingNotificationUpdates) BOOL suppressesNotificationUpdates;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_restoreContentViewAndClearSnapshotViews;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)_configureModeControllerView;
- (void)_loadBottomSeparator;
- (void)_loadGrabberContentView;
- (id)_newGrabberView;
- (void)_loadStatusBar;
- (void)_loadContentView;
- (void)_loadContainerView;
- (void)_loadClippingView;
- (void)_configureView;
- (void)_validateBackgroundViewIfNecessary;
@property(readonly, nonatomic) _UIBackdropView *backdropView;
@property(nonatomic) BOOL blursBackground;
@property(nonatomic) BOOL showsBackground;
- (id)_newBackgroundView;
- (void)_loadContentViewControllersForCurrentState;
- (id)_missedModeViewControllerCreateIfNecessary:(BOOL)arg1;
- (id)_allModeViewControllerCreateIfNecessary:(BOOL)arg1;
- (id)_todayViewControllerCreateIfNecessary:(BOOL)arg1;
- (id)_newBulletinObserverViewControllerOfClass:(Class)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

