/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol VSSpeechConnectionDelegate
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(int)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
@end

