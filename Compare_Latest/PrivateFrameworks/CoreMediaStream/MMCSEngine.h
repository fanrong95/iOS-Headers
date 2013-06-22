/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSThread, NSTimer, NSURL;

@interface MMCSEngine : NSObject
{
    NSURL *_workPathURL;
    NSString *_appIDHeader;
    NSString *_dataClass;
    NSDictionary *_options;
    struct __MMCSEngine *_engine;
    struct {
        int version;
        void *context;
        void *getFileDescriptorAndContentTypeFromItemCallback;
        void *getItemProgressCallback;
        void *getItemDoneCallback;
        void *putItemProgressCallback;
        void *putItemDoneCallback;
        void *requestCompletedCallback;
    } _engineClientContext;
    NSMutableDictionary *_itemIDToAssetProxyMap;
    NSObject<OS_dispatch_queue> *_itemIDToAssetProxyMapQueue;
    NSMutableArray *_requestorContexts;
    NSObject<OS_dispatch_queue> *_reqestorContextQueue;
    NSMutableDictionary *_autoItemIDDictionary;
    NSURL *_autoItemIDPersistenceURL;
    NSObject<OS_dispatch_queue> *_autoItemIDDictionaryQueue;
    BOOL _autoGenerateItemID;
    BOOL _isMetricsGatheringEnabled;
    BOOL _isDone;
    id <MMCSEngineDelegate> _delegate;
    NSThread *_workThread;
    NSTimer *_threadKeepAliveTimer;
}

+ (id)logStringForPutItemState:(int)arg1;
+ (id)logStringForGetItemState:(int)arg1;
@property(nonatomic) BOOL isDone; // @synthesize isDone=_isDone;
@property(retain, nonatomic) NSTimer *threadKeepAliveTimer; // @synthesize threadKeepAliveTimer=_threadKeepAliveTimer;
@property(retain, nonatomic) NSThread *workThread; // @synthesize workThread=_workThread;
@property(nonatomic) BOOL isMetricsGatheringEnabled; // @synthesize isMetricsGatheringEnabled=_isMetricsGatheringEnabled;
@property(nonatomic) BOOL autoGenerateItemID; // @synthesize autoGenerateItemID=_autoGenerateItemID;
@property(nonatomic) __weak id <MMCSEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)_nextItemID;
- (void)_initItemIDPersistence;
- (void)_removeRequestorContext:(id)arg1;
- (void)_registerRequestorContext:(id)arg1;
- (void)_removeAssetProxyForItemID:(unsigned long long)arg1;
- (id)_assetProxyWithItemID:(unsigned long long)arg1;
- (void)_registerAssetProxy:(id)arg1;
- (void)_logLevel:(int)arg1 message:(id)arg2;
- (void)putAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4;
- (void)getAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4;
- (void)unregisterAssets:(id)arg1;
- (void)unregisterAsset:(id)arg1;
- (void)registerAssets:(id)arg1 forDownloadCompletionBlock:(id)arg2;
- (void)reregisterAssetForDownload:(id)arg1;
- (void)reregisterAssetForUpload:(id)arg1;
- (void)registerAssetForUpload:(id)arg1 completionBlock:(id)arg2;
- (BOOL)isActive;
- (void)shutDownCompletionBlock:(id)arg1;
- (void)cancelAllOperations;
- (void)cancelOperationsWithContext:(id)arg1;
- (void)_requestCompletedRequestorContext:(id)arg1;
- (void)_putItemDoneItemID:(unsigned long long)arg1 requestorContext:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)_putItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5;
- (void)_getItemDoneItemID:(unsigned long long)arg1 path:(id)arg2 requestorContext:(id)arg3 error:(id)arg4;
- (void)_getItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5;
- (BOOL)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)arg1 outFD:(int *)arg2 outItemType:(id *)arg3 outError:(id *)arg4;
- (void)threadMain:(id)arg1;
- (void)_doNothingTimerHandler:(id)arg1;
- (void)performBlockOnWorkThread:(id)arg1;
- (void)performBlockOnWorkThread:(id)arg1 waitUntilDone:(void)arg2;
- (void)performBlock:(id)arg1;
- (id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4;
- (id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4 modes:(id)arg5;
@property(readonly, nonatomic) BOOL hasOutstandingActivity;

@end

