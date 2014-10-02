//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBAlert, SBApplication;

@interface SBStarkAppToImpersonatedAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
{
    SBAlert *_activatingAlert;
    _Bool _animatedAppDeactivation;
    SBApplication *_mainScreenAppThatWillBeActivated;
    id _mainScreenAppThatWillBeActivatedObserver;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (_Bool)_shouldDisallowSuspension;
- (_Bool)selfStarkAlertDidActivate:(id)arg1 overAlerts:(id)arg2;
- (_Bool)selfStarkAlertWillActivate:(id)arg1 overAlerts:(id)arg2;
- (id)_newAnimationFromAppToNowPlaying;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromAppToApp;
- (int)_setupMilestonesFrom:(id)arg1 to:(id)arg2;
- (void)_finishCommit;
- (void)_doCommit;
- (id)swizzledToDisplayIfNecessary;
- (void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(_Bool)arg2;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 from:(id)arg4 to:(id)arg5;

@end
