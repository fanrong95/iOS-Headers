/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImage;

@interface SBBatteryReflectionView : UIView
{
    UIImage *_image;
    UIImage *_maskImage;
    float _bottomMargin;
}

- (id)initWithImage:(id)arg1 bottomMargin:(float)arg2;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
