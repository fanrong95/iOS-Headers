/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIItemCellLayout.h>

@class SKUICellLayoutView, SKUILockupItemCellLayout, SKUITextBoxView;

@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout
{
    struct UIEdgeInsets _contentInsets;
    SKUILockupItemCellLayout *_lockupLayout;
    SKUICellLayoutView *_lockupView;
    SKUITextBoxView *_textBoxView;
    float _textBoxViewHeight;
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (id)_lockupView;
- (void)setIconImageHidden:(BOOL)arg1;
- (void)setIconImage:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)layoutForItemOfferChange;
- (BOOL)isIconImageHidden;
- (id)iconImageView;
- (id)iconImage;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView;
- (void)setColoringWithColorScheme:(id)arg1;
@property(readonly, nonatomic) SKUILockupItemCellLayout *lockupLayout;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(int)arg2;

@end

