/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PLAlbumViewDataSource <NSObject>
- (id)albumView:(id)arg1 badgeImageForPhotoAtIndexPath:(id)arg2;
- (id)albumView:(id)arg1 textBadgeForPhotoAtIndexPath:(id)arg2;
- (id)footerAccessoryViewForAlbumView:(id)arg1;
- (BOOL)footerSubtitleAllowsEmail:(id)arg1;
- (id)footerSubtitleForAlbumView:(id)arg1;
- (void)albumView:(id)arg1 imageCount:(unsigned int *)arg2 videoCount:(unsigned int *)arg3 otherCount:(unsigned int *)arg4 pendingCount:(unsigned int *)arg5 importOperation:(int *)arg6;
- (id)albumView:(id)arg1 imageForPhotoAtIndexPath:(id)arg2;
- (unsigned int)albumView:(id)arg1 numberOfPhotosInSection:(unsigned int)arg2;

@optional
- (void)albumView:(id)arg1 getUnreadStartMarkerCount:(unsigned int *)arg2 showsProgress:(char *)arg3;
- (void)albumViewPhotoMoveDidComplete:(id)arg1;
- (void)albumView:(id)arg1 movePhotoAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)albumView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (unsigned int)numberOfSectionsInAlbumView:(id)arg1;
@end

