/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPTransitionController.h>

@class UIView;

@interface MPFlipTransitionController : MPTransitionController
{
    UIView *_fromView;
    struct CGRect _toFrame;
    double _topMargin;
}

@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
- (void).cxx_destruct;
- (id)_subtypeForTransitionType:(unsigned long long)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)performTransition:(unsigned long long)arg1;
- (id)init;

@end

