/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface SBManagerClientCache : NSObject
{
    BOOL _behaviorBundleSupport;
    BOOL _behaviorBundleSupportKnown;
    NSMutableDictionary *_keyValueCache;
    NSLock *_cacheLock;
    struct dispatch_queue_s *_queue;
    struct map<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *>>>>> fCallbacks;
}

+ (id)sharedInstance;
@property struct dispatch_queue_s *queue; // @synthesize queue=_queue;
@property NSLock *cacheLock; // @synthesize cacheLock=_cacheLock;
@property NSMutableDictionary *keyValueCache; // @synthesize keyValueCache=_keyValueCache;
@property BOOL behaviorBundleSupportKnown; // @synthesize behaviorBundleSupportKnown=_behaviorBundleSupportKnown;
@property BOOL behaviorBundleSupport; // @synthesize behaviorBundleSupport=_behaviorBundleSupport;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)callCallbacksForEvent:(id)arg1;
- (_Bool)deregisterCallbackForEvent:(struct EventCallbackData *)arg1;
- (void)registerCallbackForEvent:(id)arg1 with:(struct EventCallbackData *)arg2;
- (void)cacheValue:(id)arg1 forKey:(id)arg2;
- (id)copyCachedValueFor:(id)arg1;
- (void)saveBehaviorBundleSupport:(BOOL)arg1 withValue:(BOOL)arg2;
- (void)resetKeyValueCache;
- (id)init;

@end

