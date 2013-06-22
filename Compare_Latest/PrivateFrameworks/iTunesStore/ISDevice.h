/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ISSingleton-Protocol.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface ISDevice : NSObject <ISSingleton>
{
    unsigned int _daemonLaunchCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guid;
    double _lastFreeSpaceRequest;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (int)_deviceClass;
- (id)supportedOfferDeviceForDevices:(id)arg1;
- (void)resetLocationAndPrivacy;
- (void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(id)arg4;
- (BOOL)takePowerAssertion:(id)arg1;
@property(readonly) NSString *systemName;
@property(readonly) NSString *serialNumber;
- (BOOL)releasePowerAssertion:(id)arg1;
@property(readonly) NSString *hardwareName;
@property(readonly) NSString *guid;
@property(readonly) NSString *deviceName;
- (id)copyProtocolConditionalContext;
- (BOOL)checkCapabilities:(id)arg1 withMismatches:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

