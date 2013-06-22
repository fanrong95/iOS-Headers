/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ACDAccountStoreDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class ACDAccessPluginManager, ACDAuthenticationPluginManager, ACDDataclassOwnersManager, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSXPCListener;

@interface ACDServer : NSObject <NSXPCListenerDelegate, ACDAccountStoreDelegate>
{
    NSXPCListener *_accountStoreListener;
    NSXPCListener *_oauthSignerListener;
    NSMutableArray *_accountStoreClients;
    NSMutableArray *_oauthSignerClients;
    NSObject<OS_dispatch_queue> *_deferredConnectionResumeQueue;
    NSObject<OS_dispatch_semaphore> *_deferredConnectionResumeQueueSemaphore;
    NSObject<OS_dispatch_queue> *_performMigrationQueue;
    BOOL _shouldExit;
    ACDAuthenticationPluginManager *_authenticationPluginManager;
    ACDAccessPluginManager *_accessPluginManager;
    ACDDataclassOwnersManager *_dataclassOwnersManager;
}

+ (id)sharedServer;
@property(nonatomic) BOOL shouldExit; // @synthesize shouldExit=_shouldExit;
@property(retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager; // @synthesize dataclassOwnersManager=_dataclassOwnersManager;
@property(retain, nonatomic) ACDAccessPluginManager *accessPluginManager; // @synthesize accessPluginManager=_accessPluginManager;
@property(retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager; // @synthesize authenticationPluginManager=_authenticationPluginManager;
- (void).cxx_destruct;
- (void)credentialsDidChangeForAccountWithIdentifier:(id)arg1;
- (void)accountStoreDidSaveAccounts;
- (void)_stopObservingLanguageChangeNotification;
- (void)_beginObservingLanguageChangeNotfication;
- (void)_signalDeferredConnectionResumeQueueSemaphore;
- (id)_newOAuthSignerForClient:(id)arg1;
- (id)_newDaemonAccountStoreFilterForClient:(id)arg1;
- (id)clientForConnection:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)shutdown;
- (void)setUpWithAccountStoreConnectionListener:(id)arg1 oauthSignerConnectionListener:(id)arg2;
- (void)dealloc;
- (id)init;

@end

