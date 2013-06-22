/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSTableCell.h>

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class PSListController, UIColor;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate>
{
    UIColor *_textColor;
    id _delegate;
    BOOL _forceFirstResponder;
    BOOL _delaySpecifierRelease;
    SEL _targetSetter;
    id _realTarget;
    BOOL _valueChanged;
    BOOL _isEditing;
    BOOL _returnKeyTapped;
    PSListController *_controllerDelegate;
}

+ (int)cellStyle;
@property(nonatomic) PSListController *controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(readonly, nonatomic) BOOL returnKeyTapped; // @synthesize returnKeyTapped=_returnKeyTapped;
- (id)textField;
- (void)setPlaceholderText:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
@property(readonly, nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setCellEnabled:(BOOL)arg1;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_saveForExit;
- (void)_setValueChanged;
- (void)cellRemovedFromView;
- (void)endEditingAndSave;
- (void)controlChanged:(id)arg1;
- (BOOL)canReload;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

