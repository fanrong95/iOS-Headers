/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ImageCapture/ICCameraFile.h>

@class NSString;

@interface ExFATCameraFile : ICCameraFile
{
    void *_exFATCameraFileProperties;
}

- (void)updateBasicMetadata;
- (id)metadataDict;
- (id)thumbData;
- (long)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long *)arg3;
- (struct CGDataProviderSequentialCallbacks)dpCallbacks;
- (void)setdpOffset:(long long)arg1;
- (long long)dpOffset;
@property BOOL updatedBasicMetadata;
@property int bitsPerPixel;
@property int imgHeight;
@property int imgWidth;
@property int thmHeight;
@property int thmWidth;
@property int thmOffset;
@property int thmSize;
@property(copy) NSString *exifModificationDateTime;
@property(copy) NSString *exifCreationDateTime;
@property unsigned int type;
- (id)fsStream;
@property(readonly) long long fsSize;
@property(readonly) struct timespec fsModificationTime;
@property(readonly) struct timespec fsCreationTime;
@property(readonly) id object;
- (void)releaseProvider;
- (void)rewind;
- (long long)skipBytes:(long long)arg1;
- (unsigned long)getBytes:(void *)arg1 ofSize:(unsigned long)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 object:(id)arg4 fsCreationTime:(struct timespec)arg5 fsModificationTime:(struct timespec)arg6 fsSize:(long long)arg7;

@end

