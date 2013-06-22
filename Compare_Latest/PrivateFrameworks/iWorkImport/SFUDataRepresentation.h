/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface SFUDataRepresentation : NSObject
{
    BOOL mHasSha1Hash;
    NSData *mSha1Hash;
}

- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)sha1Hash;
- (unsigned int)uint32Hash;
- (unsigned int)hash;
- (unsigned long)readIntoData:(id)arg1;
- (struct CGDataProvider *)cgDataProvider;
- (struct _xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)arg1;
- (struct _xmlTextReader *)xmlReaderForGzippedData;
- (struct _xmlTextReader *)xmlReader;
- (struct _xmlDoc *)xmlDocument;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (BOOL)isEncrypted;
- (long long)encodedLength;
- (long long)dataLength;
- (BOOL)isReadable;

@end

