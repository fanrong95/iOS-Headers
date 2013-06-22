/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "FudConnection-Protocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface FudInternalConnection : NSObject <FudConnection>
{
    NSString *clientIdentifier;
    NSObject<OS_dispatch_queue> *handlerQueue;
    id messageHandler;
    NSMutableDictionary *pendingRequests;
    BOOL didStop;
}

- (void)sendMessageToFud:(id)arg1 reply:(id)arg2;
- (void)sendMessageToFud:(id)arg1;
- (void)stop;
- (void)handleInboundNotification:(id)arg1;
- (long long)getNextMessageID;
- (void)dealloc;
- (id)initWithClientIdentifier:(id)arg1 handlerQueue:(id)arg2 messageHandler:(id)arg3;

@end

