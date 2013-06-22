/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CBPeripheralManagerDelegate-Protocol.h"
#import "TRBTServerPairingSessionDelegate-Protocol.h"

@class CBCentral, CBMutableCharacteristic, CBPeripheralManager, NSMutableSet;

@interface TRBTServer : NSObject <CBPeripheralManagerDelegate, TRBTServerPairingSessionDelegate>
{
    CBMutableCharacteristic *_cancellationCharacteristic;
    CBCentral *_exclusiveAccessCentral;
    CBMutableCharacteristic *_pairingCharacteristic;
    NSMutableSet *_pairingSessions;
    CBPeripheralManager *_peripheralManager;
    BOOL _started;
    BOOL _requiresExclusiveAccess;
    id <TRBTServerDelegate> _serverDelegate;
}

+ (id)_serviceUUID;
+ (id)_characteristicUUID;
+ (id)_cancellationCharacteristicUUID;
+ (id)_advertisementUUID;
+ (id)_advertisementBeaconData;
@property(nonatomic, getter=_serverDelegate, setter=_setServerDelegate:) __weak id <TRBTServerDelegate> serverDelegate; // @synthesize serverDelegate=_serverDelegate;
@property(nonatomic) BOOL requiresExclusiveAccess; // @synthesize requiresExclusiveAccess=_requiresExclusiveAccess;
- (void).cxx_destruct;
- (id)_pairingSessionForCentral:(id)arg1;
- (void)stop;
- (void)start;
- (void)cancelExclusiveConnection;
- (id)pairingSession:(id)arg1 didReceiveData:(id)arg2;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)dealloc;
- (id)init;

@end

