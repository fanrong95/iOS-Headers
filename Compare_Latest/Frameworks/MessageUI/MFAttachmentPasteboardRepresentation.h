/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <MessageUI/MFAttachmentPasteboardRepresentation-Protocol.h>
#import "NSCoding-Protocol.h"

@class NSData, NSString;

@interface MFAttachmentPasteboardRepresentation : NSObject <NSCoding, MFAttachmentPasteboardRepresentation>
{
    NSData *_data;
    NSString *_name;
    NSString *_mimeType;
}

@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithMFAttachment:(id)arg1;
- (id)initWithAttachment:(id)arg1;

@end

