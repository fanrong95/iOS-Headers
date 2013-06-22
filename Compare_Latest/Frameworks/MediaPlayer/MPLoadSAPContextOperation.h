/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSData, NSLock, NSURL;

@interface MPLoadSAPContextOperation : NSOperation
{
    NSData *_certificateData;
    NSURL *_certURL;
    NSLock *_lock;
    id _outputBlock;
    NSURL *_setupURL;
}

- (void).cxx_destruct;
- (id)_performSetupWithData:(id)arg1 error:(id *)arg2;
- (id)_loadCertificateData:(id *)arg1;
- (void)main;
@property(copy) id outputBlock;
@property(retain) NSData *certificateData;
- (id)initWithSetupURL:(id)arg1 certificateURL:(id)arg2;

@end

