//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKMicaView.h>

@class CAGradientLayer, CAShapeLayer, UIColor;

@interface PKCheckGlyphView : PKMicaView
{
    CAShapeLayer *_shapeLayer;
    CAGradientLayer *_maskLayer;
    BOOL _covered;
    struct CATransform3D _uncoveredTransform;
    struct CATransform3D _coveredTransform;
    BOOL _revealed;
    UIColor *_primaryColor;
}

+ (id)defaultActions;
@property(nonatomic) BOOL revealed; // @synthesize revealed=_revealed;
@property(copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (double)_updateCovered:(BOOL)arg1;
- (double)setCovered:(BOOL)arg1 animated:(BOOL)arg2;
- (double)setRevealed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPrimaryColor:(id)arg1 animated:(BOOL)arg2;
- (void)_createMask;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 package:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
