/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFContactsSearchOperation.h>

@class NSSet, NSString;

@interface MFCorecipientSearchOperation : MFContactsSearchOperation
{
    NSString *_bundleIdentifier;
    NSSet *_otherRecipients;
}

+ (id)operationWithAddressBook:(void *)arg1 owner:(id)arg2 otherRecipients:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6;
- (void)main;
- (void)dealloc;

@end

