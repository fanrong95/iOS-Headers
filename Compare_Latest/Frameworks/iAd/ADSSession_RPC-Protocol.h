/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol ADSSession_RPC
- (void)_priv_removeRecordForAccountWithIdentifier:(id)arg1;
- (void)_remote_reportStationTileImpression:(id)arg1;
- (void)_remote_reportListeningPresenceEvent:(int)arg1;
- (void)_remote_optimalTransmissionWindowDidOpen;
- (void)_remote_setSponsoredStationIDs:(id)arg1;
- (void)_remote_setStationData:(id)arg1 initialTrackBlobs:(id)arg2 reply:(id)arg3;
- (void)_remote_songSkipped;
- (void)_remote_songStopped;
- (void)_remote_songBegan:(id)arg1 reply:(id)arg2;
- (void)_remote_setVisuallyEngaged:(BOOL)arg1;
- (void)_remote_disablePolicyEngine;
- (void)_remote_enablePolicyEngine;
- (void)_remote_forwardDeviceOrientation:(int)arg1 statusBarOrientation:(int)arg2;
- (void)_remote_createProxyForAdSpace:(id)arg1 type:(int)arg2 options:(int)arg3 reply:(id)arg4;
- (void)_remote_setClientLinkedOnVersion:(id)arg1;
- (void)_priv_setServerURL:(id)arg1;
- (void)_remote_didBecomeActive;
- (void)_remote_willResignActive;
@end

