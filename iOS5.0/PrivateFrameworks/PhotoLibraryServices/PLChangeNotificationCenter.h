/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSNotificationCenter, NSNumber, PLManagedObjectContext;

@interface PLChangeNotificationCenter : NSObject
{
    BOOL _isPostingChanges;
    NSMutableDictionary *_delayedBlocks;
    BOOL _isProcessingRemoteDidSave;
    struct dispatch_queue_s *_thumbnailIndexIsolation;
    NSMutableIndexSet *_changedThumbnailIndexes;
    unsigned int _thumbnailIndexesChangeCounter;
    int _cameraPreviewChangeListenerCount;
    NSNumber *_cameraPreviewChangedToken;
    int _stackViewImageChangeListenerCount;
    NSMutableArray *_snapshots;
    struct changeList_s _changedAlbumLists;
    struct contentChanges_s _albumListsContent;
    struct changeList_s _changedAlbums;
    struct contentChanges_s _albumsContent;
    struct changeList_s _changedAssets;
    PLManagedObjectContext *_moc;
    NSMutableArray *_enqueuedNotifications;
}

+ (id)defaultCenter;
- (void)setPostProcessingHandlerForIdentifier:(id)arg1 block:(id)arg2;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id)arg4;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)removeShouldReloadObserver:(id)arg1;
- (void)addShouldReloadObserver:(id)arg1;
- (void)removeAlbumListChangeObserver:(id)arg1 albumList:(struct NSObject *)arg2;
- (void)addAlbumListChangeObserver:(id)arg1 albumList:(struct NSObject *)arg2;
- (void)removeAlbumChangeObserver:(id)arg1 album:(struct NSObject *)arg2;
- (void)addAlbumChangeObserver:(id)arg1 album:(struct NSObject *)arg2;
@property(readonly, nonatomic) NSNotificationCenter *backingCenter;
- (void)enqueueNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
