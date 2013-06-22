/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class PLCommentTextView, UIButton, UILabel, UIScrollView, _UIBackdropView;

@interface PLPhotoCommentEntryView : UIView
{
    UIScrollView *_scrollview;
    UILabel *placeholderLabel;
    _UIBackdropView *_backdropView;
    UILabel *_placeholderLabel;
    PLCommentTextView *_textView;
    UIButton *_postButton;
}

@property(readonly, nonatomic) UIButton *postButton; // @synthesize postButton=_postButton;
@property(readonly, nonatomic) PLCommentTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
- (void)layoutSubviews;
- (float)preferredHeightForOrientation:(int)arg1;
- (float)heightForTextContentHeight:(float)arg1 orientation:(int)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

