/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "MPAudioAndSubtitlesControllerDelegate-Protocol.h"
#import "MPDetailSliderDelegate-Protocol.h"
#import <MediaPlayer/MPVideoOverlay-Protocol.h>

@class MPAVController, MPAVItem, MPAudioAndSubtitlesController, MPDetailSlider, MPKnockoutButton, MPVolumeSlider, UIButton, UILabel, UINavigationBar, UIStatusBar, _UIBackdropView;

@interface MPVideoPlaybackOverlayView : UIView <MPAudioAndSubtitlesControllerDelegate, MPVideoOverlay, MPDetailSliderDelegate>
{
    int _style;
    id <MPVideoOverlayDelegate> _delegate;
    MPAVController *_player;
    MPAVItem *_item;
    MPDetailSlider *_scrubber;
    UIView *_bottomBarView;
    _UIBackdropView *_bottomBarBackdropView;
    UIButton *_playPauseButton;
    float _auxButtonsLeftEdge;
    MPKnockoutButton *_airplayButton;
    BOOL _allowsWirelessPlayback;
    BOOL _automaticallyHandleTransportControls;
    BOOL _ticking;
    UIView *_topBarView;
    _UIBackdropView *_topBarBackdropView;
    UIStatusBar *_statusBar;
    UIButton *_doneButton;
    UIButton *_scaleButton;
    UILabel *_scrubInstructions1;
    UILabel *_scrubInstructions2;
    MPVolumeSlider *_volumeSlider;
    UIButton *_leftButton;
    UIButton *_rightButton;
    MPKnockoutButton *_audioAndSubtitlesButton;
    MPAudioAndSubtitlesController *_audioAndSubtitlesController;
    BOOL _ignoreTouchUp;
    BOOL _isAnimatingScrubInstructions;
    BOOL _isShowingScrubInstructions;
    BOOL _shouldResumePlayback;
    int _seekDirection;
    MPKnockoutButton *_fullscreenButton;
    id <MPVideoControllerProtocol> _videoViewController;
    BOOL _navigationBarHidden;
    MPAVItem *_unimplementedItem;
    unsigned long long _desiredParts;
    unsigned long long _visibleParts;
    unsigned long long _disabledParts;
}

@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts=_disabledParts;
@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts=_visibleParts;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts=_desiredParts;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_unimplementedItem;
@property(nonatomic) BOOL navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(nonatomic) __weak id <MPVideoControllerProtocol> videoViewController; // @synthesize videoViewController=_videoViewController;
@property(nonatomic) BOOL automaticallyHandleTransportControls; // @synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(nonatomic) __weak id <MPVideoOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL allowsWirelessPlayback; // @synthesize allowsWirelessPlayback=_allowsWirelessPlayback;
- (void).cxx_destruct;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
@property(readonly, nonatomic) UINavigationBar *navigationBar;
- (void)_updateVolumeSlider;
- (BOOL)updateTimeBasedValues;
- (void)_updateScaleButton;
- (void)_updateAirplayButton;
- (void)_unregisterForPlayerNotifications:(id)arg1;
- (void)_unregisterForItemNotifications:(id)arg1;
- (void)_startSeeking;
- (void)_showScrubInstructions;
- (void)_setAuxiliaryButton:(id)arg1 hidden:(BOOL)arg2 atX:(float *)arg3;
- (void)_notifyDelegateOfUserEventEnd:(int)arg1;
- (void)_notifyDelegateOfUserEventBegin:(int)arg1;
- (void)_notifyDelegateOfUserEvent:(int)arg1;
- (void)_registerForPlayerNotifications:(id)arg1;
- (void)_registerForItemNotifications:(id)arg1;
- (id)_newFrostedGlassBackdropView;
- (id)_imageNamed:(id)arg1;
- (void)_hideScrubInstructions;
- (void)_configureTransportControls;
- (void)_configureAuxiliaryButtons;
- (void)_videoViewDidMoveToWindow:(id)arg1;
- (void)_tick:(id)arg1;
- (void)_seekabilityChanged:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (void)_availableRoutesChanged:(id)arg1;
- (void)_alternateTracksAvailable:(id)arg1;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)_skipButtonTouchUpOutside:(id)arg1;
- (void)_skipButtonTouchUpInside:(id)arg1;
- (void)_skipButtonTouchCancel:(id)arg1;
- (void)_skipButtonTouchDown:(id)arg1;
- (void)_scaleButtonTapped:(id)arg1;
- (void)_playPauseButtonTapped:(id)arg1;
- (void)_fullscreenButtonTapped:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_audioAndSubtitlesButtonTapped:(id)arg1;
- (void)_airplayButtonTapped:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)audioAndSubtitleControllerRequestsDismissal:(id)arg1;
- (void)stopTicking;
- (void)startTicking;
@property(nonatomic) BOOL allowsDetailScrubbing;
@property(readonly, nonatomic) struct UIEdgeInsets contentAreaInsets;
- (void)setHidden:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

