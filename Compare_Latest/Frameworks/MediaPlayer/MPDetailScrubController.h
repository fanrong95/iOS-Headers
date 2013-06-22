/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIControl<MPDetailedScrubbing>;

@interface MPDetailScrubController : NSObject
{
    BOOL _didBeginTracking;
    BOOL _needsCommit;
    BOOL _canCommit;
    struct CGPoint _previousLocationInView;
    struct CGPoint _beginLocationInView;
    struct CGPoint _lastCommittedLocationInView;
    float _currentValue;
    BOOL _detailedScrubbingEnabled;
    BOOL _isTracking;
    UIControl<MPDetailedScrubbing> *_scrubbingControl;
    id <MPDetailScrubControllerDelegate> _delegate;
    float _scrubbingVerticalRange;
    int _currentScrubSpeed;
    double _duration;
}

@property(readonly, nonatomic) int currentScrubSpeed; // @synthesize currentScrubSpeed=_currentScrubSpeed;
@property(readonly, nonatomic) BOOL isTracking; // @synthesize isTracking=_isTracking;
@property(nonatomic) BOOL detailedScrubbingEnabled; // @synthesize detailedScrubbingEnabled=_detailedScrubbingEnabled;
@property(nonatomic) float scrubbingVerticalRange; // @synthesize scrubbingVerticalRange=_scrubbingVerticalRange;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <MPDetailScrubControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIControl<MPDetailedScrubbing> *scrubbingControl; // @synthesize scrubbingControl=_scrubbingControl;
- (void).cxx_destruct;
- (void)_commitValue:(float)arg1;
- (float)_scaleForIdealValueForVerticalPosition:(float)arg1;
- (float)_minimumScale;
- (float)scaleForVerticalPosition:(float)arg1;
@property(readonly, nonatomic) BOOL durationAllowsForDetailedScrubbing;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithScrubbingControl:(id)arg1;

@end

