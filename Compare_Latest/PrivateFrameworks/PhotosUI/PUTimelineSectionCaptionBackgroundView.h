/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionReusableView.h"

@class PUGradientView, UIImage, UIImageView;

@interface PUTimelineSectionCaptionBackgroundView : UICollectionReusableView
{
    PUGradientView *_gradientView;
    UIImageView *_imageView;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateBackground;
- (id)initWithFrame:(struct CGRect)arg1;

@end

