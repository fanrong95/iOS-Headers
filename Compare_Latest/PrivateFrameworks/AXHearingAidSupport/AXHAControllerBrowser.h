//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXHADeviceControllerProtocol.h"
#import "AXHARemoteControllerDelegate.h"
#import "NSNetServiceBrowserDelegate.h"

@class AXHATimer, AXHearingSlaveController, NSMutableArray, NSMutableDictionary, NSNetServiceBrowser, NSString;

@interface AXHAControllerBrowser : NSObject <NSNetServiceBrowserDelegate, AXHARemoteControllerDelegate, AXHADeviceControllerProtocol>
{
    AXHATimer *_deviceUpdatesTimer;
    NSMutableDictionary *_deviceUpdatesDescription;
    int _state;
    AXHearingSlaveController *_slaveController;
    id <AXHAControllerBrowserDelegateProtocol> _delegate;
    NSNetServiceBrowser *_browser;
    NSMutableArray *_remoteControllers;
    NSMutableArray *_updateDeviceBlocks;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *updateDeviceBlocks; // @synthesize updateDeviceBlocks=_updateDeviceBlocks;
@property(retain, nonatomic) NSMutableArray *remoteControllers; // @synthesize remoteControllers=_remoteControllers;
@property(retain, nonatomic) NSNetServiceBrowser *browser; // @synthesize browser=_browser;
@property(nonatomic) id <AXHAControllerBrowserDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AXHearingSlaveController *slaveController; // @synthesize slaveController=_slaveController;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)writePayload:(id)arg1 toControllers:(id)arg2;
- (void)writeValue:(id)arg1 forProperty:(int)arg2 forControllers:(id)arg3;
- (void)writeValue:(id)arg1 forProperty:(int)arg2 forDeviceID:(id)arg3;
- (void)updateProperty:(int)arg1 forDeviceID:(id)arg2;
- (void)device:(id)arg1 didUpdateProperty:(int)arg2;
- (void)stopPropertyUpdates;
- (void)registerForPropertyUpdates:(CDUnknownBlockType)arg1;
- (void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
- (void)controllerDidFinishConnecting:(id)arg1;
- (void)controller:(id)arg1 didFinishSendingData:(id)arg2;
- (void)controller:(id)arg1 didReceiveData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)stop;
- (BOOL)shouldRelinquishConnection;
- (id)remoteControllerForHostname:(id)arg1;
- (void)transitionToSlaveWithCompletion:(CDUnknownBlockType)arg1;
- (void)resolveMasterWithCompletion:(CDUnknownBlockType)arg1;
- (void)becomeMaster;
- (void)sendObject:(id)arg1 toController:(id)arg2 withSendCompletion:(CDUnknownBlockType)arg3 andAckCompletion:(CDUnknownBlockType)arg4;
- (void)sendObject:(id)arg1 toController:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)clearControllers;
- (id)availableRemoteControllers;
- (id)availableControllers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
