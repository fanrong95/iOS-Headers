/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SFUInputStream-Protocol.h"

@interface SFUZipInflateInputStream : NSObject <SFUInputStream>
{
    struct z_stream_s mStream;
    long long mOffset;
    id <SFUBufferedInputStream> mInput;
    char *mOutBuffer;
    unsigned int mOutBufferSize;
    BOOL mReachedEnd;
    BOOL mIsFromZip;
    unsigned int mCalculatedCrc;
    unsigned int mCheckCrc;
}

- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long)arg4 dataRepresentation:(id)arg5;
- (id)initWithInput:(id)arg1;
- (void)dealloc;
- (unsigned long)readToOwnBuffer:(const char **)arg1 size:(unsigned long)arg2;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (long long)offset;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (void)close;
- (id)closeLocalStream;
- (long long)totalCompressedBytesConsumed;

@end

