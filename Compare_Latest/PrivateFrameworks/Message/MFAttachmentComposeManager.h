//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFAttachmentManager.h>

@class NSMutableArray;

@interface MFAttachmentComposeManager : MFAttachmentManager
{
    NSMutableArray *_composeAttachments;
}

- (void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;
- (void)removeAttachmentForURL:(id)arg1;
- (void)updateAttachment:(id)arg1 withNewData:(id)arg2;
- (id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5;
- (id)_composeAttachmentDataProviderForContext:(id)arg1;
- (id)attachmentsForContext:(id)arg1;
- (id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2;
- (void)dealloc;

@end

