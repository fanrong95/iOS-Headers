//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, DAStatusReport, DATaskManager, NSArray, NSData, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, NSURL;

@interface DAAccount : NSObject
{
    ACAccount *_backingAccountInfo;
    BOOL _hasInitted;
    BOOL _shouldUseOpportunisticSockets;
    BOOL _wasUserInitiated;
    NSMutableDictionary *_haveWarnedAboutCertDict;
    DAStatusReport *_statusReport;
    NSMapTable *_consumers;
    struct __CFURLStorageSession *_storageSession;
    NSString *_clientToken;
    DATaskManager *_taskManager;
    BOOL _shouldFailAllTasks;
    BOOL _isValidating;
    NSArray *_appIdsForPasswordPrompt;
    NSMutableArray *_pendingQueries;
    NSObject<OS_dispatch_queue> *_pendingQueryQueue;
    NSMutableDictionary *_dataclassPropertyURLsByDataclass;
    unsigned long long _lastQueryStartedTime;
}

+ (id)daAccountSubclassWithBackingAccountInfo:(id)arg1;
+ (void)reacquireClientRestrictions:(id)arg1;
+ (id)oneshotListOfAccountIDs;
+ (id)_leafAccountTypes;
@property(retain, nonatomic) NSMutableDictionary *dataclassPropertyURLsByDataclass; // @synthesize dataclassPropertyURLsByDataclass=_dataclassPropertyURLsByDataclass;
@property(nonatomic) unsigned long long lastQueryStartedTime; // @synthesize lastQueryStartedTime=_lastQueryStartedTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pendingQueryQueue; // @synthesize pendingQueryQueue=_pendingQueryQueue;
@property(retain, nonatomic) NSMutableArray *pendingQueries; // @synthesize pendingQueries=_pendingQueries;
@property(nonatomic) BOOL isValidating; // @synthesize isValidating=_isValidating;
@property(readonly, nonatomic) NSArray *appIdsForPasswordPrompt; // @synthesize appIdsForPasswordPrompt=_appIdsForPasswordPrompt;
@property(readonly, nonatomic) DATaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(nonatomic) BOOL wasUserInitiated; // @synthesize wasUserInitiated=_wasUserInitiated;
@property(nonatomic) BOOL shouldUseOpportunisticSockets; // @synthesize shouldUseOpportunisticSockets=_shouldUseOpportunisticSockets;
@property(retain, nonatomic) DAStatusReport *statusReport; // @synthesize statusReport=_statusReport;
@property(readonly, nonatomic) ACAccount *backingAccountInfo; // @synthesize backingAccountInfo=_backingAccountInfo;
- (void).cxx_destruct;
- (id)protocolVersion;
- (void)reload;
- (void)shutdown;
- (id)description;
- (struct __CFURLStorageSession *)copyStorageSession;
- (BOOL)isSubscribedCalendarAccount;
- (BOOL)isGoogleAccount;
- (BOOL)isHotmailAccount;
- (BOOL)isCalDAVChildAccount;
- (BOOL)isCardDAVAccount;
- (BOOL)isCalDAVAccount;
- (BOOL)isBookmarkDAVAccount;
- (BOOL)isLDAPAccount;
- (BOOL)isActiveSyncAccount;
- (BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1;
- (BOOL)isEqualToAccount:(id)arg1;
@property(readonly, nonatomic) BOOL shouldFailAllTasks; // @synthesize shouldFailAllTasks=_shouldFailAllTasks;
- (void)resetStatusReport;
- (BOOL)resetCertWarnings;
- (void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (BOOL)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
@property(readonly, nonatomic) BOOL isChildAccount;
- (void)cleanupAccountFiles;
- (void)setExceptions:(struct __CFData *)arg1 forDigest:(id)arg2;
- (struct __CFData *)exceptionsForDigest:(id)arg1;
- (id)exceptionsDict;
- (BOOL)_isIdentityManagedByProfile;
- (void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSData *identityPersist;
- (id)addUsernameToURL:(id)arg1;
@property(readonly, nonatomic) int keychainAccessibilityType;
- (void)saveAccountProperties;
- (void)saveAccountPropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeClientCertificateData;
- (id)defaultContainerIdentifierForDADataclass:(int)arg1;
- (void)stopMonitoringFolders;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (BOOL)monitorFolderWithID:(id)arg1;
- (BOOL)monitorFoldersWithIDs:(id)arg1;
- (void)tearDown;
- (id)oauthInfoProvider;
- (id)oauth2Token;
- (id)customConnectionProperties;
- (id)additionalHeaderValues;
- (BOOL)handleCertificateError:(id)arg1;
@property(readonly, nonatomic) NSSet *serverComplianceClasses;
@property(readonly, nonatomic) NSString *serverRoot;
@property(readonly, nonatomic) NSString *userAgentHeader;
- (void)accountDidChangeFromOldAccountInfo:(id)arg1;
- (void)removeDBSyncData;
- (BOOL)shouldRemoveDBSyncDataOnAccountChange;
- (id)onBehalfOfBundleIdentifier;
@property(readonly, nonatomic) BOOL shouldAutodiscoverAccountProperties;
@property(nonatomic) BOOL shouldDoInitialAutodiscovery;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (BOOL)saveModifiedPropertiesOnBackingAccount;
- (void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2;
@property(copy, nonatomic) NSURL *principalURL;
@property(readonly, copy, nonatomic) NSString *scheme;
@property(copy, nonatomic) NSString *principalPath;
@property(nonatomic) int port;
@property(retain, nonatomic) NSData *encryptionIdentityPersistentReference;
@property(retain, nonatomic) NSData *signingIdentityPersistentReference;
- (BOOL)accountContainsEmailAddress:(id)arg1;
@property(copy, nonatomic) NSArray *emailAddresses;
@property(copy, nonatomic) NSString *emailAddress;
@property(nonatomic) BOOL useSSL;
@property(copy, nonatomic) NSString *host;
- (id)domainOnly;
- (id)usernameWithoutDomain;
- (int)portFromDataclassPropertiesForDataclass:(id)arg1;
- (BOOL)useSSLFromDataclassPropertiesForDataclass:(id)arg1;
- (id)hostFromDataclassPropertiesForDataclass:(id)arg1;
- (id)urlFromDataclassPropertiesForDataclass:(id)arg1;
@property(copy, nonatomic) NSString *password;
- (id)passwordWithExpected:(BOOL)arg1;
- (void)clientTokenRequestedByServer;
@property(readonly, copy, nonatomic) NSString *clientToken;
- (void)removeConsumerForTask:(id)arg1;
- (id)consumerForTask:(id)arg1;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (id)stateString;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)setAccountIntProperty:(int)arg1 forKey:(id)arg2;
- (int)accountIntPropertyForKey:(id)arg1;
- (void)setAccountBoolProperty:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)accountBoolPropertyForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountPropertyForKey:(id)arg1;
- (id)spinnerIdentifiers;
- (id)dataclassProperties;
@property(readonly, nonatomic) int enabledDataclassesBitmask;
- (void)setEnabled:(BOOL)arg1 forDADataclass:(int)arg2;
- (BOOL)enabledForDADataclass:(int)arg1;
- (BOOL)enabledForAnyDADataclasses:(int)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)isDisabled;
@property(copy, nonatomic) NSString *user;
@property(copy, nonatomic) NSString *username;
- (id)displayName;
@property(copy, nonatomic) NSString *accountDescription;
@property(readonly, nonatomic) NSString *changeTrackingID;
- (void)_setPersistentUUID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *persistentUUID;
@property(readonly, nonatomic) NSString *scheduleIdentifier;
- (id)syncStoreIdentifier;
@property(readonly, nonatomic) NSString *accountID;
- (void)resetAccountID;
- (BOOL)upgradeAccount;
@property(nonatomic, setter=setDAAccountVersion:) int daAccountVersion;
- (void)ingestBackingAccountInfoProperties;
- (id)initWithBackingAccountInfo:(id)arg1;
- (void)dealloc;
- (BOOL)handleTrustChallenge:(id)arg1;
- (void)handleTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_serverSuffixesToAlwaysFail;
- (int)_actionForTrust:(struct __SecTrust *)arg1 host:(id)arg2 service:(id)arg3;
- (void)handleValidationError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)dropAssertionsAndRenewCredentialsWithHandler:(CDUnknownBlockType)arg1;
- (id)localizedInvalidPasswordMessage;
- (id)localizedIdenticalAccountFailureMessage;
- (void)cancelShareResponseInstance:(id)arg1 error:(id)arg2;
- (id)respondToShareRequestForCalendar:(id)arg1 withResponse:(int)arg2 consumer:(id)arg3;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (id)performCalendarDirectorySearchForTerms:(id)arg1 recordTypes:(id)arg2 resultLimit:(unsigned int)arg3 consumer:(id)arg4;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (id)requestCalendarAvailabilityForStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 consumer:(id)arg5;
- (void)cancelDownloadingInstance:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2;
- (BOOL)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 moreLocalChangesAvailable:(BOOL)arg7 consumer:(id)arg8;
- (id)eventsFolders;
- (id)defaultEventsFolder;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(id)arg5 isInitialUberSync:(BOOL)arg6 isResyncAfterConnectionFailed:(BOOL)arg7 previousTagIsSuspect:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 consumer:(id)arg10;
- (id)contactsFolders;
- (id)defaultContactsFolder;
- (id)draftsFolder;
- (id)deletedItemsFolder;
- (id)sentItemsFolder;
- (id)inboxFolder;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id *)arg3;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (void)retrieveOofSettingsForConsumer:(id)arg1;
- (void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (BOOL)searchQueriesRunning;
- (void)cancelAllSearchQueries;
- (void)cancelSearchQuery:(id)arg1;
- (void)performSearchQuery:(id)arg1;
- (void)_dequeueQuery;
- (id)getPendingQueryQueue;
- (BOOL)_reallySearchQueriesRunning;
- (void)_reallyCancelAllSearchQueries;
- (void)_reallyCancelPendingSearchQuery:(id)arg1;
- (void)_reallyCancelSearchQuery:(id)arg1;
- (void)_reallyPerformSearchQuery:(id)arg1;
- (void)setToDosNumberOfPastDaysToSync:(int)arg1;
- (int)toDosNumberOfPastDaysToSync;
- (void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 moreLocalChangesAvailable:(BOOL)arg7 consumer:(id)arg8;
- (id)toDosFolders;
- (id)defaultToDosFolder;
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(BOOL)arg7 isResyncAfterConnectionFailed:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 consumer:(id)arg10;
- (id)notesFolders;
- (id)defaultNotesFolder;
- (void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(BOOL)arg2;
- (void)getRootFolderWithConsumer:(id)arg1;

@end
