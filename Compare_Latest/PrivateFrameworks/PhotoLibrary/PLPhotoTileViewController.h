/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLCommentsViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSObject<OS_dispatch_source>, PLCommentsViewController, PLExpandableImageView, PLImageScrollView, PLManagedAsset, PLPhotoTilePlaceholderView, PLVideoView, UIGestureRecognizer, UIImage, UIImageView;

@interface PLPhotoTileViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, PLCommentsViewControllerDelegate>
{
    UIImage *_image;
    UIImage *_pendingImage;
    UIImage *_unscaledImage;
    PLManagedAsset *_modelPhoto;
    PLImageScrollView *_scrollView;
    PLExpandableImageView *_imageView;
    PLVideoView *_videoView;
    UIImageView *_gradientView;
    UIImageView *_hdrBadgeImageView;
    PLPhotoTilePlaceholderView *_placeholderView;
    PLCommentsViewController *_commentsViewController;
    UIGestureRecognizer *_singleTapGestureRecognizer;
    UIGestureRecognizer *_doubleTapGestureRecognizer;
    id <PLPhotoTileViewControllerDelegate> _tileDelegate;
    int _imageOrientation;
    struct CGSize _imageSize;
    struct CGRect _tileFrame;
    BOOL _zoomToFillInsteadOfToFit;
    BOOL _useLessThanMinZoomForZoomedOutTest;
    BOOL _allowZoomToFill;
    id _orientationDelegate;
    float _cropRectZoomScale;
    struct CGRect _cropOverlayRect;
    struct CGRect _cropRect;
    float _doubleTapZoomScale;
    float _minZoomScale;
    float _zoomToFillScale;
    int _mode;
    int _lastDisplayedOrientation;
    BOOL _clientIsTemporarilyWallpaper;
    BOOL _userDidAdjustWallpaper;
    float _wallpaperPortraitZoomScale;
    float _wallpaperLandscapeZoomScale;
    float _zoomScaleBeforeZooming;
    struct CGRect _cropRectBeforeDragging;
    BOOL _force1XCroppedImage;
    BOOL _forceNativeScreenScale;
    BOOL _centerContentVertically;
    id _didEndZoomingBlock;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    double _dispatchStartTime;
    double _dispatchTimeElapsed;
    BOOL _hasNotedZoom;
    unsigned int _imageIsThumbnail:1;
    unsigned int _isTVOut:1;
    unsigned int _zooming:1;
    unsigned int _autoZooming:1;
    unsigned int _zoomGesturesEnabled:1;
    unsigned int _userDidZoom:1;
    unsigned int _ignoreZoomChange:1;
    unsigned int _tileParentIsPageController:1;
    unsigned int _lockedUnderCropOverlay:1;
    unsigned int _viewDidAppear:1;
    unsigned int _viewWillAppear:1;
    unsigned int _didRequestFullSizeImage:1;
    unsigned int _useZoomScaleForCropRect:1;
    unsigned int _photoShouldBeHDRBadged:1;
    unsigned int _hdrBadgeShouldBeVisible:1;
    unsigned int _didSetHDRForModelPhoto:1;
    unsigned int _commentsTableVisible:1;
}

+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect)arg1 modelPhoto:(id)arg2 mode:(int)arg3;
+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect)arg1 image:(id)arg2 allowZoomToFill:(BOOL)arg3 mode:(int)arg4;
+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect)arg1 imageRef:(struct CGImage *)arg2 imageOrientation:(int)arg3 allowZoomToFill:(BOOL)arg4 mode:(int)arg5;
+ (struct CGSize)tvOutTileSize;
+ (struct CGSize)tileSize;
+ (BOOL)shouldShowPlaceholderForAssetKind:(int)arg1;
@property(nonatomic) BOOL force1XCroppedImage; // @synthesize force1XCroppedImage=_force1XCroppedImage;
@property(nonatomic) BOOL forceNativeScreenScale; // @synthesize forceNativeScreenScale=_forceNativeScreenScale;
@property(retain, nonatomic) UIImage *unscaledImage; // @synthesize unscaledImage=_unscaledImage;
@property(readonly, nonatomic) PLCommentsViewController *commentsViewController; // @synthesize commentsViewController=_commentsViewController;
@property(nonatomic) BOOL centerContentVertically; // @synthesize centerContentVertically=_centerContentVertically;
- (void)setLockedUnderCropOverlay:(BOOL)arg1;
- (void)_adjustZoomForEnteringMode:(BOOL)arg1;
- (void)updateAfterCollapse;
- (int)imageOrientation;
- (void)setAllowsZoomToFill:(BOOL)arg1;
- (void)updateZoomScales;
- (void)_setDefaultZoomScale;
- (void)setOrientationDelegate:(id)arg1;
- (BOOL)isZoomedOut;
- (float)currentToDefaultZoomRatio;
- (float)currentToMinZoomRatio;
- (float)defaultZoomScale;
- (float)zoomToFitScale;
- (float)zoomToFillScale;
- (float)minZoomScale;
- (float)_calculateZoomScale:(BOOL)arg1 inView:(id)arg2;
- (float)minRotatedScale;
- (void)_performDidEndZoomBlock;
- (void)_setDidEndZoomingBlock:(id)arg1;
- (void)zoomToScale:(float)arg1 completionBlock:(id)arg2;
- (id)dictionaryWithCroppedImageForRect:(struct CGRect)arg1 withOptions:(int)arg2;
- (id)newImageWithCropRect:(struct CGRect)arg1 croppedImageData:(id *)arg2 fullScreenImageData:(id *)arg3 fullScreenImage:(struct CGImage **)arg4 imageCropRect:(struct CGRect *)arg5 intersectCropWithFullRect:(BOOL)arg6;
- (void)_handleDoubleTap:(id)arg1;
- (void)_requestFullSizeImage;
- (void)_handleSingleTap:(id)arg1;
- (void)ensureFullSizeImageLoaded;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)resetZoom;
- (void)viewDidLayoutSubviews;
- (void)_resetZoomCommon;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (struct CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(float)arg2 withProposedSize:(struct CGSize)arg3;
- (void)noteParentViewControllerDidDisappear;
- (void)commentsControllerWillBeginScrolling:(id)arg1;
- (void)commentsControllerDidDisplayUnreadComment:(id)arg1;
- (void)commentsControllerDidExitEditMode:(id)arg1;
- (void)commentsControllerWillEnterEditMode:(id)arg1;
- (void)commentsControllerInactiveAreaWasTapped:(id)arg1;
- (void)setCommentsTableVisibility:(BOOL)arg1 duration:(float)arg2;
@property(readonly, nonatomic) BOOL commentsTableIsVisible;
- (void)initializeCommentsTable;
- (void)updateForVisibleOverlays:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (BOOL)didRequestFullSizeImage;
- (BOOL)hasFullSizeImage;
- (void)setFullSizeImage:(id)arg1;
- (void)refreshTileWithFullScreenImage:(id)arg1;
- (void)_setImage:(id)arg1 isThumbnail:(BOOL)arg2;
- (void)_updateAggdKeys;
- (void)_updateModelPhotoWithImage:(id)arg1;
- (void)_updateContentInset;
- (void)_adjustScrollViewContentOffsetForInsets;
- (void)_centerImageInScrollView;
- (void)_updatePlaceholderViewAnimated:(BOOL)arg1;
- (void)_installSubview:(id)arg1;
- (void)_configureViews;
- (void)setHDRBadgeVisible:(BOOL)arg1;
- (void)_showHDRBadgeIfAppropriate;
- (void)_setupHDRBadge;
- (BOOL)photoShouldHaveHDRBadge;
- (void)_repositionHDRBadge;
- (void)setGesturesEnabled:(BOOL)arg1;
- (BOOL)gesturesEnabled;
- (BOOL)allowsEditing;
- (void)setClientIsWallpaper:(BOOL)arg1;
- (BOOL)_clientIsWallpaper;
- (BOOL)userDidAdjustWallpaper;
- (void)setTVOut:(BOOL)arg1;
- (BOOL)isTVOut;
- (void)setTileDelegate:(id)arg1;
- (id)tileDelegate;
- (void)showContentView;
- (void)hideContentView;
- (void)setVideoView:(id)arg1;
- (id)videoView;
- (id)scrollView;
- (id)newCGImageBackedUIImage;
- (id)image;
- (id)imageView;
- (id)expandableImageView;
- (void)forceZoomingGesturesEnabled;
- (void)setZoomingGesturesEnabled:(BOOL)arg1;
- (void)setCropOverlayRect:(struct CGRect)arg1 forCropRect:(struct CGRect)arg2;
- (void)setZoomScale:(float)arg1;
- (id)description;
@property(nonatomic) struct CGRect tileFrame;
@property(retain, nonatomic) UIImage *thumbnailImage;
@property(readonly, nonatomic) PLManagedAsset *photo;
- (void)_setPhoto:(id)arg1;
- (BOOL)tileIsOnScreen;
- (void)dealloc;
- (void)_teardownDispatchTimer;
- (id)initWithPhoto:(id)arg1 thumbnailImage:(id)arg2 size:(struct CGSize)arg3;
- (id)initForPageController;
- (id)initWithPhoto:(id)arg1 image:(id)arg2 frame:(struct CGRect)arg3 isThumbnail:(BOOL)arg4 imageOrientation:(int)arg5 allowZoomToFill:(BOOL)arg6 mode:(int)arg7;
- (id)init;
- (int)_imageOrientation;
- (id)_newOriginalImageForPickerFromCachedData;

@end

