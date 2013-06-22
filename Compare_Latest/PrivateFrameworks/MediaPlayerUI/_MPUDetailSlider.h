/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UISlider.h"

#import "MPDetailedScrubbing-Protocol.h"
#import "_MPUSliderScrubForwarding-Protocol.h"

@class MPDetailScrubController;

@interface _MPUDetailSlider : UISlider <MPDetailedScrubbing, _MPUSliderScrubForwarding>
{
    MPDetailScrubController *_scrubController;
}

@property(nonatomic) __weak MPDetailScrubController *scrubController; // @synthesize scrubController=_scrubController;
- (void).cxx_destruct;
- (struct CGRect)thumbViewRect;
- (struct CGRect)thumbHitRect;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

@end

