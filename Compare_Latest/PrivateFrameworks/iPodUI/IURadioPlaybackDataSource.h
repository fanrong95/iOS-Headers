/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUPlaybackDataSource.h>

#import "NSCoding-Protocol.h"

@class MPAVItem, RadioStation;

@interface IURadioPlaybackDataSource : IUPlaybackDataSource <NSCoding>
{
    BOOL _playImmediately;
    RadioStation *_station;
    MPAVItem *_prefixItem;
    unsigned int _initialTrackIndex;
}

+ (Class)queueFeederClass;
@property(nonatomic) BOOL playImmediately; // @synthesize playImmediately=_playImmediately;
@property(nonatomic) unsigned int initialTrackIndex; // @synthesize initialTrackIndex=_initialTrackIndex;
@property(retain, nonatomic) MPAVItem *prefixItem; // @synthesize prefixItem=_prefixItem;
@property(retain, nonatomic) RadioStation *station; // @synthesize station=_station;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPAVItem *initialItem;
- (int)playbackMode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

