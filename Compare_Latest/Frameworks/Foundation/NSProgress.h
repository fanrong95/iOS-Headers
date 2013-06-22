/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSProgressPublisher-Protocol.h"

@class NSMutableDictionary, NSString, NSXPCConnection;

@interface NSProgress : NSObject <NSProgressPublisher>
{
    NSProgress *_parent;
    long long _portionOfParentUnitCount;
    id _values;
    id _valuesSeenFromMainThread;
    id _cancellationHandler;
    id _pausingHandler;
    id _prioritizationHandler;
    long long _pendingUnitCount;
    id _userInfoProxy;
    NSString *_publisherID;
    NSXPCConnection *_connection;
    int _unpublishingBlockageCount;
    int _disconnectingBlockageCount;
    int _remoteObserverCount;
    NSMutableDictionary *_acknowledgementHandlersByBundleID;
    NSMutableDictionary *_lastNotificationTimesByKey;
    NSMutableDictionary *_userInfoLastNotificationTimesByKey;
    id _reserved1;
    id _reserved2;
}

+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(id)arg2;
+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(id)arg2;
+ (id)_addGeneralSubscriberUsingBlock:(id)arg1;
+ (void)removeSubscriber:(id)arg1;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id)arg2;
+ (id)keyPathsForValuesAffectingFractionCompleted;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (id)currentProgress;
+ (id)_registrarInterface;
+ (id)_subscriberInterface;
+ (id)_publisherInterface;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(id)arg2;
- (oneway void)prioritize;
- (void)_prioritize;
- (id)prioritizationHandler;
- (void)setPrioritizationHandler:(id)arg1;
- (BOOL)isPrioritizable;
- (void)setPrioritizable:(BOOL)arg1;
- (id)_publishingAppBundleIdentifier;
@property(readonly, getter=isOld) BOOL old;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (oneway void)stopProvidingValues;
- (oneway void)startProvidingValuesWithInitialAcceptor:(id)arg1;
- (id)acknowledgementHandlerForAppBundleIdentifier:(SEL)arg1;
- (void)setAcknowledgementHandler:(id)arg1 forAppBundleIdentifier:(void)arg2;
- (void)unpublish;
- (void)_unblockUnpublishing;
- (void)_unblockDisconnecting;
- (void)publish;
@property(copy) NSString *kind;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (id)ownedDictionaryKeyEnumerator;
- (unsigned int)ownedDictionaryCount;
- (id)userInfo;
- (void)pause;
- (void)_pause;
- (void)cancel;
- (void)_cancel;
@property(readonly) double fractionCompleted;
- (double)_fractionCompletedUsingValuesFinder:(id)arg1;
@property(readonly, getter=isIndeterminate) BOOL indeterminate;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
@property(copy) id pausingHandler;
@property(copy) id cancellationHandler;
@property(readonly, getter=isPaused) BOOL paused;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(getter=isPausable) BOOL pausable;
@property(getter=isCancellable) BOOL cancellable;
@property(copy) NSString *localizedAdditionalDescription;
@property(copy) NSString *localizedDescription;
@property long long completedUnitCount;
@property long long totalUnitCount;
- (void)_getValueUsingBlock:(id)arg1;
- (void)_setValueForKey:(id)arg1 usingBlock:(id)arg2;
- (void)__setValueForKey:(id)arg1 usingBlock:(id)arg2;
- (void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)dealloc;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (void)_setValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3;
- (id)_initWithValues:(id)arg1;
- (void)acknowledge;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(id)arg2;

@end

