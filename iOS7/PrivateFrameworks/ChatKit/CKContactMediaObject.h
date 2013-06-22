/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKCardMediaObject.h>

@class ABVCardRecord, UIImage;

@interface CKContactMediaObject : CKCardMediaObject
{
    ABVCardRecord *_vCard;
    UIImage *_vCardImage;
}

+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
@property(retain, nonatomic) UIImage *vCardImage; // @synthesize vCardImage=_vCardImage;
@property(retain, nonatomic) ABVCardRecord *vCard; // @synthesize vCard=_vCard;
- (id)vCardImageOfSize:(struct CGSize)arg1;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1;
- (struct CGSize)bbSize;
- (id)subtitle;
- (id)icon;
- (id)title;
- (Class)balloonViewClass;
- (int)mediaType;
- (void)dealloc;

@end
