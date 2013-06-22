/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKColoredBalloonView.h>

@class CKBalloonTextView, NSAttributedString;

@interface CKTextBalloonView : CKColoredBalloonView
{
    CKBalloonTextView *_textView;
    NSAttributedString *_attributedText;
}

@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) CKBalloonTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) BOOL containsHyperlink;
@property(readonly, nonatomic) BOOL isInteractingWithLink;
- (void)touchCanceled:(id)arg1;
- (void)touchDraggedInside:(id)arg1 forEvent:(id)arg2;
- (void)touchUpOutside:(id)arg1 forEvent:(id)arg2;
- (void)touchUpInside:(id)arg1 forEvent:(id)arg2;
- (void)doubleTap:(id)arg1 forEvent:(id)arg2;
- (void)longPress:(id)arg1 forEvent:(id)arg2;
- (void)tap:(id)arg1 forEvent:(id)arg2;
- (void)touchDown:(id)arg1 forEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (struct UIEdgeInsets)entryFieldInsets;
- (void)prepareForDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)description;
- (void)dealloc;
- (void)configureForMessagePart:(id)arg1;

@end

