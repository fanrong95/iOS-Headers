//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, PUValueFilter, UIView;

@interface PUTransitionViewAnimator : NSObject
{
    struct {
        unsigned int respondsToDidUpdate:1;
        unsigned int respondsToWillEnd:1;
        unsigned int respondsToDidEnd:1;
    } _delegateFlags;
    BOOL _autoUpdates;
    BOOL _appliesScaleViaTransform;
    BOOL _shouldFinish;
    BOOL _shouldUseTargetAspectRatio;
    BOOL __isAutoUpdating;
    BOOL __isEnding;
    unsigned int _direction;
    id <PUTransitionViewAnimatorDelegate> _delegate;
    float _progress;
    float _unfilteredProgress;
    UIView *_view;
    float __desiredRotation;
    float __desiredScale;
    float __desiredSizeMixFactor;
    float __currentRotation;
    float __currentScale;
    float __currentSizeMixFactor;
    float __targetScale;
    CADisplayLink *__autoUpdateDisplayLink;
    PUValueFilter *__rampUpFilter;
    PUValueFilter *__progressFilter;
    PUValueFilter *__shouldFinishFilter;
    struct CGPoint _currentTranslation;
    struct CGPoint _anchorPoint;
    double _rampUpDuration;
    struct CGPoint __desiredTranslation;
    struct CGRect _sourceFrame;
    struct CGRect _targetFrame;
    struct CGRect __targetAspectRatioSourceFrame;
}

@property(nonatomic, setter=_setEnding:) BOOL _isEnding; // @synthesize _isEnding=__isEnding;
@property(retain, nonatomic, setter=_setShouldFinishFilter:) PUValueFilter *_shouldFinishFilter; // @synthesize _shouldFinishFilter=__shouldFinishFilter;
@property(retain, nonatomic, setter=_setProgressFilter:) PUValueFilter *_progressFilter; // @synthesize _progressFilter=__progressFilter;
@property(retain, nonatomic, setter=_setRampUpFilter:) PUValueFilter *_rampUpFilter; // @synthesize _rampUpFilter=__rampUpFilter;
@property(retain, nonatomic, setter=_setAutoUpdateDisplayLink:) CADisplayLink *_autoUpdateDisplayLink; // @synthesize _autoUpdateDisplayLink=__autoUpdateDisplayLink;
@property(nonatomic, setter=_setAutoUpdating:) BOOL _isAutoUpdating; // @synthesize _isAutoUpdating=__isAutoUpdating;
@property(nonatomic, setter=_setTargetScale:) float _targetScale; // @synthesize _targetScale=__targetScale;
@property(nonatomic, setter=_setTargetAspectRatioSourceFrame:) struct CGRect _targetAspectRatioSourceFrame; // @synthesize _targetAspectRatioSourceFrame=__targetAspectRatioSourceFrame;
@property(nonatomic, setter=_setCurrentSizeMixFactor:) float _currentSizeMixFactor; // @synthesize _currentSizeMixFactor=__currentSizeMixFactor;
@property(nonatomic, setter=_setCurrentScale:) float _currentScale; // @synthesize _currentScale=__currentScale;
@property(nonatomic, setter=_setCurrentRotation:) float _currentRotation; // @synthesize _currentRotation=__currentRotation;
@property(nonatomic, setter=_setDesiredSizeMixFactor:) float _desiredSizeMixFactor; // @synthesize _desiredSizeMixFactor=__desiredSizeMixFactor;
@property(nonatomic, setter=_setDesiredScale:) float _desiredScale; // @synthesize _desiredScale=__desiredScale;
@property(nonatomic, setter=_setDesiredRotation:) float _desiredRotation; // @synthesize _desiredRotation=__desiredRotation;
@property(nonatomic, setter=_setDesiredTranslation:) struct CGPoint _desiredTranslation; // @synthesize _desiredTranslation=__desiredTranslation;
@property(nonatomic, setter=_setRampUpDuration:) double rampUpDuration; // @synthesize rampUpDuration=_rampUpDuration;
@property(nonatomic, setter=_setShouldUseTargetAspectRatio:) BOOL shouldUseTargetAspectRatio; // @synthesize shouldUseTargetAspectRatio=_shouldUseTargetAspectRatio;
@property(nonatomic, setter=_setAnchorPoint:) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic, setter=_setTargetFrame:) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic, setter=_setSourceFrame:) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(retain, nonatomic, setter=_setView:) UIView *view; // @synthesize view=_view;
- (void)_setCurrentTranslation:(struct CGPoint)arg1;
@property(nonatomic) struct CGPoint currentTranslation; // @synthesize currentTranslation=_currentTranslation;
- (void)_setShouldFinish:(BOOL)arg1;
@property(nonatomic) BOOL shouldFinish; // @synthesize shouldFinish=_shouldFinish;
- (void)_setUnfilteredProgress:(float)arg1;
@property(nonatomic) float unfilteredProgress; // @synthesize unfilteredProgress=_unfilteredProgress;
- (void)_setProgress:(float)arg1;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <PUTransitionViewAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setDirection:(unsigned int)arg1;
@property(nonatomic) unsigned int direction; // @synthesize direction=_direction;
@property(nonatomic) BOOL appliesScaleViaTransform; // @synthesize appliesScaleViaTransform=_appliesScaleViaTransform;
@property(nonatomic) BOOL autoUpdates; // @synthesize autoUpdates=_autoUpdates;
- (void).cxx_destruct;
- (void)_endWithTranslationVelocity:(struct CGPoint)arg1 rotationVelocity:(float)arg2 scaleVelocity:(float)arg3 shouldBounce:(BOOL)arg4 finish:(BOOL)arg5 animated:(BOOL)arg6;
- (void)_autoUpdate:(id)arg1;
- (void)_updateAutoUpdateDisplayLink;
- (void)_update;
- (void)cancelWithoutAnimation;
- (void)cancelWithTranslationVelocity:(struct CGPoint)arg1 rotationVelocity:(float)arg2 scaleVelocity:(float)arg3 shouldBounce:(BOOL)arg4;
- (void)finishWithTranslationVelocity:(struct CGPoint)arg1 rotationVelocity:(float)arg2 scaleVelocity:(float)arg3 shouldBounce:(BOOL)arg4;
- (void)updateWithTranslation:(struct CGPoint)arg1 rotation:(float)arg2 scale:(float)arg3;
- (id)initWithView:(id)arg1 sourceFrame:(struct CGRect)arg2 targetFrame:(struct CGRect)arg3 anchorPoint:(struct CGPoint)arg4 shouldUseTargetAspectRatio:(BOOL)arg5 rampUpDuration:(double)arg6 direction:(unsigned int)arg7;

@end
