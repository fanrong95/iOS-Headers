/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ACAccountStore, NSArray, NoteContext;

@interface AccountUtilities : NSObject
{
    ACAccountStore *_accountStore;
    NSArray *_accountIDsEnabledForNotes;
    NoteContext *_noteContext;
}

+ (id)sharedAccountUtilities;
- (void).cxx_destruct;
- (BOOL)localNotesExist;
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1;
- (id)accountIDsEnabledForNotes;
- (id)accountsEnabledForNotes;
- (void)dealloc;
- (id)init;
- (void)_accountStoreDidChange:(id)arg1;
- (id)accountStore;

@end

