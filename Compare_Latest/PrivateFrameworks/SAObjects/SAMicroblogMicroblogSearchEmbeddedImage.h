/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SAMicroblogMicroblogSearchResultPost.h>

@class NSNumber, NSURL;

@interface SAMicroblogMicroblogSearchEmbeddedImage : SAMicroblogMicroblogSearchResultPost
{
}

+ (id)microblogSearchEmbeddedImageWithDictionary:(id)arg1 context:(id)arg2;
+ (id)microblogSearchEmbeddedImage;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSNumber *width;
@property(copy, nonatomic) NSURL *imageURL;
@property(copy, nonatomic) NSNumber *height;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

