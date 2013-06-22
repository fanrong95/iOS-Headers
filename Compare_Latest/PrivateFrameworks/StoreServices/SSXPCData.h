/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@class NSObject<OS_xpc_object>;

@interface SSXPCData : NSData
{
    NSObject<OS_xpc_object> *_xpcData;
}

@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcData; // @synthesize xpcData=_xpcData;
- (unsigned int)length;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithXPCData:(id)arg1;

@end

