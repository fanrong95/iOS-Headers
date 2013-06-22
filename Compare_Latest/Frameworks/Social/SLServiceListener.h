/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCInterface, NSXPCListener, Protocol;

@interface SLServiceListener : NSObject <NSXPCListenerDelegate>
{
    Class _sessionClass;
    Protocol *_serviceProtocol;
    NSXPCInterface *_clientInterface;
    NSXPCListener *_listener;
    NSString *_persistentStoreName;
    NSString *_managedObjectModelPath;
    NSString *_serviceName;
}

@property(retain) NSString *managedObjectModelPath; // @synthesize managedObjectModelPath=_managedObjectModelPath;
@property(retain) NSString *persistentStoreName; // @synthesize persistentStoreName=_persistentStoreName;
@property(retain) NSXPCInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property(retain) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)beginAcceptingConnections;
- (id)initWithExportedSessionClass:(Class)arg1 serviceProtocol:(id)arg2;

@end

