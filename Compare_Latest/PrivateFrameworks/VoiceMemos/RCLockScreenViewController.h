/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VoiceMemos/RCMemoPlaybackViewController.h>

@class UILabel;

@interface RCLockScreenViewController : RCMemoPlaybackViewController
{
    UILabel *_recordingStateLabel;
}

- (void).cxx_destruct;
- (void)_setCanUseDoubleHeightStatusBar:(BOOL)arg1;
- (void)didFinishLoadingWaveform;
- (void)setDuration:(double)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (int)defaultControlsConfiguration;
- (void)dealloc;
- (id)init;

@end

