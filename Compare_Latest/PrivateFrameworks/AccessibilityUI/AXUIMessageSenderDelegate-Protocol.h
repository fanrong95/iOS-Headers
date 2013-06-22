/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol AXUIMessageSenderDelegate <NSObject>
- (void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void *)arg2 usingBlock:(id)arg3;

@optional
- (void)messageSender:(id)arg1 processCustomDataFromXPCReply:(void *)arg2;
- (void *)messageSender:(id)arg1 extractCustomDataFromXPCReply:(id)arg2 numberOfKeyValuePairsForCustomData:(unsigned int *)arg3;
- (void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void *)arg3;
@end

