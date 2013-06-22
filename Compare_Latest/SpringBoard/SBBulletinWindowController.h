/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBUIActiveOrientationObserver-Protocol.h"

@class NSMutableSet, SBBulletinRootViewController, UIViewController, UIWindow;

@interface SBBulletinWindowController : NSObject <SBUIActiveOrientationObserver>
{
    UIWindow *_bulletinWindow;
    int _trueBulletinWindowOrientation;
    int _overrideBulletinWindowOrientation;
    BOOL _rotatingKeyboard;
    BOOL _aboveAssistant;
    BOOL _uiLocked;
    NSMutableSet *_windowClients;
    NSMutableSet *_keyClients;
    NSMutableSet *_busyClients;
    NSMutableSet *_busyReasons;
    SBBulletinRootViewController *_rootVC;
}

+ (BOOL)shouldSuppressAlertForBulletin:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic, getter=isWindowAboveAssistant) BOOL windowAboveAssistant; // @synthesize windowAboveAssistant=_aboveAssistant;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_bulletinWindow;
@property(readonly, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootVC;
- (BOOL)_hasKeyWindowClients;
- (void)activeInterfaceOrientationDidChangeToOrientation:(int)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(int)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(int)arg1;
- (void)_lockStateChanged:(id)arg1;
- (BOOL)_shouldAllowRotation:(BOOL)arg1;
- (void)_setTrueWindowOrientation:(int)arg1;
- (void)_setOverrideWindowOrientation:(int)arg1;
- (void)_cleanUpAfterRotatingFromOrientation:(int)arg1;
- (void)_doRotationToOrientation:(int)arg1 duration:(double)arg2;
- (void)_prepareToRotateToOrientation:(int)arg1 duration:(double)arg2;
- (void)clearOverrideWindowOrientation;
- (BOOL)_hasOrientationOverride;
- (void)overrideWindowOrientation:(int)arg1;
- (void)updateBulletinWindowOrientation;
- (int)windowOrientationWithoutOverrides;
- (int)windowOrientation;
- (void)removeBusyClient:(id)arg1;
- (void)addBusyClient:(id)arg1;
- (void)removeWindowClient:(id)arg1;
- (void)removeWindowClient:(id)arg1 withChildViewController:(id)arg2;
- (void)_rotateIfNecessaryTo:(int)arg1 withDuration:(double)arg2 forOverride:(BOOL)arg3;
- (void)addWindowClient:(id)arg1 withChildViewController:(id)arg2;
- (void)addWindowClient:(id)arg1;
- (void)_didResignKeyWindow:(id)arg1;
- (void)_didBecomeKeyWindow:(id)arg1;
- (void)_resignAsKeyWindow;
- (void)_becomeKeyWindow;
- (BOOL)allowsDismissBannerGesture;
- (BOOL)allowsHideNotificationsGesture;
- (BOOL)allowsShowNotificationsGesture;
- (BOOL)allowsShowNotificationsGestureFromBanner;
- (BOOL)_allowsShowNotificationsGestureFromBanner:(BOOL)arg1;
- (BOOL)_isBusyForReason:(id)arg1;
- (BOOL)isBusy;
- (void)_assignWindowLevel;
- (void)setBusy:(BOOL)arg1 forReason:(id)arg2;
- (void)dealloc;
- (id)init;

@end

