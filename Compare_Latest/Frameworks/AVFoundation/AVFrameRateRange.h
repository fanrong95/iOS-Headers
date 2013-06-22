/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject
{
    AVFrameRateRangeInternal *_internal;
}

+ (id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2;
- (BOOL)includesFrameDuration:(CDStruct_1b6d18a9)arg1;
- (BOOL)includesFrameRate:(double)arg1;
@property(readonly) CDStruct_1b6d18a9 minFrameDuration;
@property(readonly) CDStruct_1b6d18a9 maxFrameDuration;
@property(readonly) double maxFrameRate;
@property(readonly) double minFrameRate;
- (void)dealloc;
- (id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

