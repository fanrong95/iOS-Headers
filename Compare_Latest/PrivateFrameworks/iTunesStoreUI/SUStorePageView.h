/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@interface SUStorePageView : UIView
{
    UIView *_backdropView;
    UIView *_contentView;
    UIView *_headerView;
    UIView *_previewOverlayView;
}

@property(retain, nonatomic) UIView *previewOverlayView; // @synthesize previewOverlayView=_previewOverlayView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backdropView; // @synthesize backdropView=_backdropView;
- (void)layoutSubviews;
- (void)dealloc;

@end

