/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString;

@interface SLRequestMultiPart : NSObject
{
    NSData *_payload;
    NSString *_name;
    NSString *_type;
    NSString *_uniqueIdentifier;
    NSString *_multiPartBoundary;
    NSString *_filename;
}

+ (id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3 multiPartBoundary:(id)arg4;
@property(copy, nonatomic) NSString *multiPartBoundary; // @synthesize multiPartBoundary=_multiPartBoundary;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (unsigned int)length;
- (id)payloadEpilogue;
- (id)payloadPreamble;
- (id)multiPartHeader;
- (id)partData;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;

@end

