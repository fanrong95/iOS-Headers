/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Social/SLSheetPreviewImageView.h>

@class UIImageView, UILabel, UIView;

@interface SLSheetVideoPreviewView : SLSheetPreviewImageView
{
    UIView *_infoBar;
    UIImageView *_videoGlyphView;
    UILabel *_durationLabel;
}

- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)_applyConstraints;
- (void)setVideoDuration:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

