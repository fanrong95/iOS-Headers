/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBStarkWorkspaceTransaction.h"

@class SBAlert;

@interface SBStarkAlertToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction
{
    SBAlert *_activatingAlert;
    SBAlert *_deactivatingAlert;
    BOOL _activation;
}

- (BOOL)selfStarkAlertDidDeactivate:(id)arg1;
- (BOOL)selfStarkAlertWillDeactivate:(id)arg1;
- (BOOL)selfStarkAlertDidActivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfStarkAlertWillActivate:(id)arg1 overAlerts:(id)arg2;
- (void)_commit;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 activatingAlert:(id)arg4 deactivatingAlert:(id)arg5 activation:(BOOL)arg6;
- (id)initDeactivationWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 from:(id)arg4 to:(id)arg5;
- (id)initActivationWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 from:(id)arg4 to:(id)arg5;

@end

