/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIBackdropView.h>

@class NSArray;

@interface _UIDimmingBackdropView : _UIBackdropView
{
    BOOL _inPassthroughHitTest;
    BOOL _ignoresTouches;
    id <_UIDimmingBackdropViewDelegate> _delegate;
    NSArray *_passthroughViews;
}

@property(nonatomic) BOOL ignoresTouches; // @synthesize ignoresTouches=_ignoresTouches;
@property(retain, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) id <_UIDimmingBackdropViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)autosizesToFitSuperview;
- (void)removeMaskViews;
- (void)addCircleMaskForRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)addMaskViewForView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

