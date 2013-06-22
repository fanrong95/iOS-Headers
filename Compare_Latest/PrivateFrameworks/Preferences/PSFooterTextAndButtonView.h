/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "PSHeaderFooterView-Protocol.h"

@class UIButton, UILabel;

@interface PSFooterTextAndButtonView : UIView <PSHeaderFooterView>
{
    UIButton *_button;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly) UIButton *button; // @synthesize button=_button;
- (float)preferredHeightForWidth:(float)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setDescriptionString:(id)arg1;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;

@end

