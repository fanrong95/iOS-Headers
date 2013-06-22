/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSSet, NSString, NSTimeZone, NSURL;

@protocol CalDAVCalendar <NSObject>
@property(readonly) NSSet *allItemURLs;
@property(readonly) NSDictionary *hrefsToModDeleteActions;
@property(readonly) NSDictionary *uuidsToAddActions;
@property(readonly) NSArray *shareeActions;
@property(readonly) NSArray *syncActions;
@property(readonly) BOOL needsPublishUpdate;
@property(retain) NSString *syncToken;
@property(retain) NSString *ctag;
@property BOOL needsResync;
@property BOOL wasModifiedLocally;
@property BOOL canBeShared;
@property BOOL canBePublished;
@property BOOL isAffectingAvailability;
@property BOOL isPublished;
@property BOOL isEnabled;
@property BOOL isRenameable;
@property BOOL isEditable;
@property BOOL isPoll;
@property BOOL isNotification;
@property BOOL isScheduleOutbox;
@property BOOL isScheduleInbox;
@property BOOL isSubscribed;
@property BOOL isEventContainer;
@property BOOL isTaskContainer;
@property(retain) NSSet *sharees;
@property int sharingStatus;
@property int order;
@property(retain) NSDictionary *bulkRequests;
@property(retain) NSTimeZone *timeZone;
@property(retain) NSURL *prePublishURL;
@property(retain) NSURL *publishURL;
@property(retain) NSSet *calendarUserAddresses;
@property(retain) NSString *ownerDisplayName;
@property(retain) NSURL *owner;
@property(retain) NSString *pushKey;
@property(retain) NSString *color;
@property(retain) NSString *notes;
@property(retain) NSString *title;
@property(retain) NSURL *calendarURL;
@property(retain) NSString *guid;
@property(readonly) id <CalDAVPrincipal> principal;
- (BOOL)hasCalendarUserAddressEquivalentToURL:(id)arg1;
- (BOOL)deleteResourcesAtURLs:(id)arg1;
- (BOOL)updateResourcesFromServer:(id)arg1;
- (BOOL)setURL:(id)arg1 forResourceWithUUID:(id)arg2;
- (BOOL)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2;
- (BOOL)setEtag:(id)arg1 forItemAtURL:(id)arg2;
- (id)etagsForItemURLs:(id)arg1;

@optional
- (void)deleteAction:(id)arg1 completedWithError:(id)arg2;
- (void)putAction:(id)arg1 completedWithError:(id)arg2;
- (void)syncDidFinishWithError:(id)arg1;
- (void)clearShareeActions;
- (void)prepareMergeSyncActionsWithCompletionBlock:(id)arg1;
- (void)prepareSyncActionsWithCompletionBlock:(id)arg1;
- (Class)appSpecificCalendarItemClass;
@end

