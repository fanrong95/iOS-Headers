/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "SSDownloadManagerObserver-Protocol.h"

@class NSArray, NSMutableSet, NSString, NSURL;

@interface MPItemDownloadProperties : NSObject <SSDownloadManagerObserver, NSCopying>
{
    long long _assetFileSize;
    NSURL *_destinationURL;
    BOOL _downloadExists;
    NSString *_downloadIdentifier;
    long long _downloadSizeLimit;
    unsigned long long _downloadToken;
    NSMutableSet *_downloadTokenCompletionHandlers;
    NSArray *_sinfs;
    NSURL *_sourceURL;
}

@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(nonatomic) unsigned long long downloadToken; // @synthesize downloadToken=_downloadToken;
@property(readonly, nonatomic) long long downloadSizeLimit; // @synthesize downloadSizeLimit=_downloadSizeLimit;
@property(readonly, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(readonly, nonatomic) BOOL downloadExists; // @synthesize downloadExists=_downloadExists;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) long long assetFileSize; // @synthesize assetFileSize=_assetFileSize;
- (void).cxx_destruct;
- (void)_reloadNetworkConstraints;
- (id)newAVAssetOptionsWithDownloadStyle:(int)arg1;
- (void)acquireDownloadTokenWithCompletionHandler:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)initWithDownload:(id)arg1;

@end

