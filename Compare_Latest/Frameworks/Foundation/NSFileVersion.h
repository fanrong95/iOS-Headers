/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface NSFileVersion : NSObject
{
    NSURL *_fileURL;
    id _library;
    NSString *_clientID;
    NSString *_name;
    NSURL *_contentsURL;
    BOOL _isBackup;
    NSString *_localizedName;
    NSString *_localizedComputerName;
    NSDate *_modificationDate;
    BOOL _isResolved;
    BOOL _contentsURLIsAccessed;
    id _reserved1;
    id _reserved2;
    BOOL _discardable;
}

+ (BOOL)removeOtherVersionsOfItemAtURL:(id)arg1 error:(id *)arg2;
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)arg1;
+ (id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1;
+ (id)addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned int)arg3 error:(id *)arg4;
+ (id)versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2;
+ (id)otherVersionsOfItemAtURL:(id)arg1;
+ (id)currentVersionOfItemAtURL:(id)arg1;
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (id)_versionOfItemAtURL:(id)arg1 forClientID:(id)arg2 name:(id)arg3 temporaryStorageIdentifier:(id)arg4 evenIfDeleted:(BOOL)arg5;
+ (BOOL)_removeOtherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 error:(id *)arg3;
+ (id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned int)arg3 temporaryStorageIdentifier:(id *)arg4 error:(id *)arg5;
+ (id)_versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 temporaryStorageIdentifier:(id)arg3;
+ (id)_otherNonpurgeableVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_libraryForURL:(id)arg1 clientID:(id)arg2 temporaryStorageIdentifier:(id *)arg3;
+ (id)_supportedGenerationalStorageClientIDs;
+ (id)_temporaryStorageLocationForIdentifier:(id)arg1;
+ (id)_autosaveDirectoryURLCreateIfNecessary:(BOOL)arg1;
+ (void)_removeConflictObserver:(void *)arg1;
+ (void *)_addConflictObserverForItemAtURL:(id)arg1 statusChangedHandler:(id)arg2;
+ (void)_markConflicts:(id)arg1 asHandledForItemAtURL:(id)arg2;
+ (BOOL)_conflictsExistForItemAtURL:(id)arg1;
+ (BOOL)unresolvedConflictsExistForItemAtURL:(id)arg1;
+ (id)versionsOfItemAtURL:(id)arg1;
@property(getter=isDiscardable) BOOL discardable; // @synthesize discardable=_discardable;
- (BOOL)removeAndReturnError:(id *)arg1;
- (id)replaceItemAtURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
@property(getter=isResolved) BOOL resolved;
@property(readonly, getter=isConflict) BOOL conflict;
@property(readonly) id <NSCoding> persistentIdentifier;
@property(readonly) NSDate *modificationDate;
@property(readonly) NSString *localizedNameOfSavingComputer;
@property(readonly) NSString *localizedName;
@property(readonly) NSURL *URL;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)_preserveConflictVersionLocally;
@property(readonly, getter=_isBackup) BOOL _isBackup;
- (void)_overrideModificationDateWithDate:(id)arg1;
- (BOOL)_setDocumentInfo:(id)arg1;
- (id)_documentInfo;
- (id)_initWithFileURL:(id)arg1 library:(id)arg2 clientID:(id)arg3 generationInfo:(id)arg4;
- (id)_initWithFileURL:(id)arg1 library:(id)arg2 clientID:(id)arg3 name:(id)arg4 contentsURL:(id)arg5 isBackup:(BOOL)arg6 revision:(id)arg7;
- (id)restoreOverItemAtURL:(id)arg1 error:(id *)arg2;

@end

