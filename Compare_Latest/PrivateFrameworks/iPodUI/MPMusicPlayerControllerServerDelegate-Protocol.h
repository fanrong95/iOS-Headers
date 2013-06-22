/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MPMusicPlayerControllerServerDelegate <NSObject>
- (void)musicPlayerServer:(id)arg1 prepareQueueWithRadioStation:(id)arg2;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithGeniusMixPlaylist:(id)arg2;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithQuery:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setShuffleMode:(int)arg2;
- (void)musicPlayerServer:(id)arg1 setFirstItem:(id)arg2;
- (id)currentRadioStationForMusicPlayerServer:(id)arg1;
- (id)currentMediaQueryForMusicPlayerServer:(id)arg1;
- (BOOL)isNowPlayingItemFromGeniusMixForMusicPlayerServer:(id)arg1;
- (unsigned int)unshuffledIndexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
- (unsigned int)indexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
- (void)musicPlayerServer:(id)arg1 setNowPlayingItem:(id)arg2;
- (id)nowPlayingItemForMusicPlayerServer:(id)arg1;
- (void)musicPlayerServer:(id)arg1 setPlaybackSpeed:(int)arg2;
- (int)playbackSpeedForMusicPlayerServer:(id)arg1;
- (id)playerForMusicPlayerServer:(id)arg1 usingApplicationSpecificQueue:(BOOL)arg2;
- (void)musicPlayerServer:(id)arg1 registerForShuffleModeChangesWithChangeHandler:(id)arg2;
- (void)musicPlayerServer:(id)arg1 registerForRepeatModeChangesWithChangeHandler:(id)arg2;
@end

