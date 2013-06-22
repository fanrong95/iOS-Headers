/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface SAClassRegistry : NSObject
{
    NSMutableDictionary *_classesByAceClassNameByGroupIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedClassRegistry;
@property(readonly, nonatomic, getter=_queue) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic, getter=_classesByAceClassNameByGroupIdentifier) NSMutableDictionary *classesByAceClassNameByGroupIdentifier; // @synthesize classesByAceClassNameByGroupIdentifier=_classesByAceClassNameByGroupIdentifier;
- (void)_accessMutableStateWithBlock:(id)arg1;
- (Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3;
- (void)dealloc;
- (id)init;

@end

