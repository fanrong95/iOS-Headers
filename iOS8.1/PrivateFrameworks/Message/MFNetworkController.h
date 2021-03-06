//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RadiosPreferencesDelegate.h"

@class NSLock, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSThread, RadiosPreferences;

@interface MFNetworkController : NSObject <RadiosPreferencesDelegate>
{
    NSLock *_lock;
    struct __CFRunLoop *_rl;
    NSThread *_thread;
    NSMutableArray *_observers;
    struct __SCNetworkReachability *_reachability;
    unsigned int _flags;
    struct __SCDynamicStore *_store;
    struct __CFRunLoopSource *_store_source;
    BOOL _dns;
    struct __CTServerConnection *_telephony;
    NSMutableSet *_calls;
    NSMutableSet *_backgroundWifiClients;
    long _interface;
    struct __SCPreferences *_wiFiPreferences;
    BOOL _hasCellDataCapability;
    BOOL _hasWiFiCapability;
    BOOL _isWiFiEnabled;
    BOOL _isRoamingAllowed;
    BOOL _data;
    NSString *_dataIndicator;
    RadiosPreferences *_radiosPreferences;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}

+ (id)networkAssertionWithIdentifier:(id)arg1;
+ (id)sharedInstance;
- (id)copyDiagnosticInformation;
- (void)removeBackgroundWifiClient:(id)arg1;
- (void)addBackgroundWifiClient:(id)arg1;
- (void)_updateWifiClientType;
- (void)removeNetworkObserver:(id)arg1;
- (id)addNetworkObserverBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)_networkAssertionWithIdentifier:(id)arg1;
- (void)_handleWiFiNotification:(unsigned int)arg1;
- (void)_handleNotification:(id)arg1 info:(id)arg2 forConnection:(struct __CTServerConnection *)arg3;
- (void)_setDataStatus_nts:(id)arg1;
- (void)_checkKeys:(id)arg1 forStore:(struct __SCDynamicStore *)arg2;
- (void)_setFlags:(unsigned int)arg1 forReachability:(struct __SCNetworkReachability *)arg2;
- (BOOL)is4GConnection;
- (BOOL)is3GConnection;
- (BOOL)inAirplaneMode;
- (BOOL)isOnWWAN;
- (BOOL)isFatPipe;
- (BOOL)isNetworkUp;
- (BOOL)_isNetworkUp_nts;
- (BOOL)isDataAvailable;
- (int)dataStatus;
- (BOOL)_simulationOverrideForType:(unsigned int)arg1 actualValue:(BOOL)arg2;
- (void)invalidate;
- (void)dealloc;
- (void)_tearDownTelephony_nts;
- (void)_setUpTelephony_nts;
- (CDStruct_dff5684f)_pollDataAndCallStatus_nts;
- (void)_inititializeWifiManager;
- (id)init;
- (void)airplaneModeChanged;

@end

