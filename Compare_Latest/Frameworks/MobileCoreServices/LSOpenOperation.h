/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSDictionary, NSString, NSURL;

@interface LSOpenOperation : NSOperation
{
    BOOL _executing;
    BOOL _finished;
    BOOL _sourceIsManaged;
    NSURL *_resourceURL;
    NSString *_applicationIdentifier;
    NSString *_documentIdentifier;
    id _userInfoPlist;
    NSDictionary *_options;
    id _delegate;
    int _result;
}

- (void)start;
- (BOOL)didSucceed;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)completeOperation;
- (void)main;
- (void)dealloc;
- (id)initForOpeningResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7;

@end

