/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIButton.h>

@class CADisplayLink, CALayer, NSMutableArray, NSTimer, UIImageView;

@interface UIDictationMeterView : UIButton
{
    UIImageView *_background;
    UIImageView *_overlay;
    NSMutableArray *_micListeningImages;
    CALayer *_micImageLayer;
    CALayer *_animatingLayer;
    NSTimer *_fillTimer;
    int _phase;
    int _state;
    float _runningPowerLevels[5];
    unsigned int _powerPointer;
    CADisplayLink *_displayLink;
    double _releaseStart;
    float _releaseLevel;
    int _cachedViewMode;
}

- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_startListening;
- (void)_clearDisplayLink;
- (void)_updateListeningAnimation:(id)arg1;
- (void)_startRelease;
- (void)_updateReleaseAnimation:(id)arg1;
- (void)_startSustain;
- (id)_sustainKeyFrameAnimation;
- (void)_startDecay;
- (id)_decayKeyFrameAnimation;
- (void)_startAttack;
- (id)_attackKeyFrameAnimation;
- (id)imageForMicLevel:(float)arg1;
- (id)_keyframeAnimationForCGImages:(id)arg1 duration:(double)arg2;
- (void)_removeAnimationsAndClearLayers;
- (float)_adjustedDuration:(float)arg1;
- (float)_currentMicPowerLevel;
- (float)_powerLevelForMicPower:(float)arg1;
- (float)_updateMedianWithNewValue:(float)arg1;
- (void)_resetRunningPowerLevels;
- (void)_reset;
- (id)_emptyMicImage;
- (void)setState:(int)arg1;
- (double)_animationInterval;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

