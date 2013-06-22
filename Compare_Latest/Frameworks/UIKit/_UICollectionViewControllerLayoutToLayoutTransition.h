/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioningEx-Protocol.h"

@class UICollectionViewLayout, UIPercentDrivenInteractiveTransition;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioningEx>
{
    BOOL _crossFadeNavigationBar;
    BOOL _crossFadeBottomBars;
    BOOL _interactionAborted;
    float _transitionDuration;
    UICollectionViewLayout *_toLayout;
    UIPercentDrivenInteractiveTransition *_interactionController;
    int _operation;
}

+ (id)transitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
@property(nonatomic) int operation; // @synthesize operation=_operation;
@property(nonatomic) BOOL interactionAborted; // @synthesize interactionAborted=_interactionAborted;
@property(nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) BOOL crossFadeBottomBars; // @synthesize crossFadeBottomBars=_crossFadeBottomBars;
@property(nonatomic) BOOL crossFadeNavigationBar; // @synthesize crossFadeNavigationBar=_crossFadeNavigationBar;
@property(retain, nonatomic) UICollectionViewLayout *toLayout; // @synthesize toLayout=_toLayout;
@property(nonatomic) float transitionDuration; // @synthesize transitionDuration=_transitionDuration;
- (BOOL)_shouldCrossFadeBottomBars;
- (BOOL)_shouldCrossFadeNavigationBar;
- (void)dealloc;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;

@end

