/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SportsWorkout/SWAccessory.h>

@interface SWRemote : SWAccessory
{
    BOOL _isListeningToRemote;
}

@property(readonly, nonatomic) BOOL isListeningToRemote; // @synthesize isListeningToRemote=_isListeningToRemote;
- (void)stopListeningToRemoteCommands;
- (void)beginListeningToRemoteCommands;

@end
