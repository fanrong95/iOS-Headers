/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CADisplayLink, NSString;

@interface UIScrollTestParameters : NSObject
{
    int _iterations;
    int _yDelta;
    int _scrollLength;
    float _startOffset;
    NSString *_currentTest;
    CADisplayLink *_displayLink;
}

@property(nonatomic) float startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) int scrollLength; // @synthesize scrollLength=_scrollLength;
@property(nonatomic) int yDelta; // @synthesize yDelta=_yDelta;
@property(retain, nonatomic) NSString *currentTest; // @synthesize currentTest=_currentTest;
@property(nonatomic) int iterations; // @synthesize iterations=_iterations;
@property(readonly, nonatomic) float endOffset;
- (void)dealloc;
- (id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5;

@end

