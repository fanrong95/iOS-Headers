//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GEOServer.h"

@class NSObject<OS_dispatch_queue>;

@interface GEOCacheManagerServer : GEOServer
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)identifier;
- (void)replyToMessage:(id)arg1 withErrorType:(int)arg2;
- (void)checkHasExpiredWithMessage:(id)arg1;
- (void)versionsForDomainsWithMessage:(id)arg1;
- (id)init;

@end

