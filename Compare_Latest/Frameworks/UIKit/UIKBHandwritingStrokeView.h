/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIKBHandwritingView;

@interface UIKBHandwritingStrokeView : UIView
{
    UIKBHandwritingView *_keyView;
    struct CGContext *_bitmapContext;
    struct CGPoint _currentPoint;
}

@property(nonatomic) struct CGPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property(nonatomic) struct CGContext *bitmapContext; // @synthesize bitmapContext=_bitmapContext;
@property(retain, nonatomic) UIKBHandwritingView *keyView; // @synthesize keyView=_keyView;
- (id).cxx_construct;
- (void)clear;
- (void)drawCurveToPoint:(struct CGPoint)arg1 controlPoint:(struct CGPoint)arg2;
- (void)drawLineToPoint:(struct CGPoint)arg1;
- (void)drawPoint:(struct CGPoint)arg1;
- (void)refreshOffscreenBuffer;
- (void)createOffscreenBuffer;
- (void)clearOffscreenBuffer;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

