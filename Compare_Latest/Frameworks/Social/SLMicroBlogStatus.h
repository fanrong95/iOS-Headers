/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface SLMicroBlogStatus : NSObject <NSSecureCoding>
{
    NSString *_statusText;
    NSArray *_imageData;
    NSString *_maskedApplicationID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *maskedApplicationID; // @synthesize maskedApplicationID=_maskedApplicationID;
@property(nonatomic) __weak NSArray *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

