/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPSmartField.h>

@class NSString;

// Not exported
@interface TSWPRubyField : TSWPSmartField
{
    NSString *_rubyText;
}

@property(copy, nonatomic) NSString *rubyText; // @synthesize rubyText=_rubyText;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct RubyFieldArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct RubyFieldArchive *)arg1 archiver:(id)arg2;
- (_Bool)canCopy:(struct _NSRange)arg1;
- (_Bool)allowsEditing;
- (int)styleAttributeArrayKind;
- (int)attributeArrayKind;
- (int)elementKind;
- (id)text;
@property(readonly, nonatomic) int baseTextScript;
@property(readonly, nonatomic) NSString *baseText;
- (void)dealloc;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 rubyText:(id)arg2;

@end

