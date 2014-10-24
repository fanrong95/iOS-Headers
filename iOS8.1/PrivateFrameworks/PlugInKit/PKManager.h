//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKDaemonClient;

@interface PKManager : NSObject
{
    PKDaemonClient *_client;
}

+ (id)defaultManager;
@property(retain) PKDaemonClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)releaseHold:(id)arg1;
- (void)holdRequest:(id)arg1 flags:(unsigned long long)arg2 result:(CDUnknownBlockType)arg3;
- (void)forceHoldPlugIn:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)holdPlugInsInApplication:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)containingAppForExtensionProperties:(id)arg1;
- (id)containingAppForPlugInWithPid:(int)arg1;
- (id)containingAppForPlugInConnectedTo:(id)arg1;
- (id)informationForPlugInWithPid:(int)arg1;
- (void)unregisterPlugInsInBundle:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)registerPlugInsInBundle:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)unregisterPlugInAtURL:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)registerPlugInAtURL:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)initForService:(const char *)arg1;

@end
