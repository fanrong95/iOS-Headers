//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicSongTableViewCell.h>

@class NSString;

@interface MusicCollectionTrackTableViewCell : MusicSongTableViewCell
{
}

+ (Class)contentViewClass;
- (id)_collectionTrackCellContentView;
@property(copy, nonatomic) NSString *trackNumberText;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *subtitle;
@property(nonatomic) float maximumDurationWidth;
@property(copy, nonatomic) NSString *durationText;
- (void)setDisplayAsDisabled:(BOOL)arg1;

@end
