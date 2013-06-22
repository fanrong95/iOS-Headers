/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLLibraryViewController.h>

@interface PLUILibraryViewController : PLLibraryViewController
{
    struct NSObject *_allPhotosAlbumList;
    int _previousStatusBarStyle;
    int _newStatusBarStyle;
    unsigned int _didSetPreviousStatusBarStyle:1;
}

- (void)_setImagePickerMediaTypes:(id)arg1;
- (int)_imagePickerStatusBarStyle;
- (void)_updateFilteredAlbumListWithFilter:(int)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (BOOL)shouldShowUnreadIndicatorForAlbum:(struct NSObject *)arg1;
- (int)accessoryTypeForAlbum:(struct NSObject *)arg1;
- (void)updateNavigationItemButtons;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)fixContentInsetIfNeeded;
- (BOOL)subtitleForAlbumAllowsEmail;
- (void)navigateToAlbum:(struct NSObject *)arg1 animated:(BOOL)arg2 completion:(id)arg3;

@end

