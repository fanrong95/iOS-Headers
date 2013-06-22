/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableString;

@interface MKTripRecorder : NSObject
{
    NSMutableString *_buffer;
    BOOL _isRecording;
    NSDate *_startDate;
    NSDate *_lastRecordingDate;
    NSDate *_timeStampDate;
}

@property(retain, nonatomic) NSMutableString *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) NSDate *lastRecordingDate; // @synthesize lastRecordingDate=_lastRecordingDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) BOOL isRecording; // @synthesize isRecording=_isRecording;
@property(retain, nonatomic) NSDate *timeStampDate; // @synthesize timeStampDate=_timeStampDate;
- (void)stop;
- (void)writeTripToPath:(id)arg1;
- (void)recordError:(id)arg1;
- (void)recordLocation:(id)arg1;
- (void)addAbsoluteTimeCommentIfNeeded;
- (void)start;
- (void)_writeVersion;
- (void)dealloc;

@end
