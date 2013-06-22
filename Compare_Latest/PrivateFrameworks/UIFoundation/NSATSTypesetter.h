/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIFoundation/NSTypesetter.h>

@class NSArray, NSAttributedString, NSLayoutManager, NSParagraphStyle, NSTextContainer;

@interface NSATSTypesetter : NSTypesetter
{
    NSAttributedString *attributedString;
    struct _NSRange paragraphGlyphRange;
    struct _NSRange paragraphSeparatorGlyphRange;
    float lineFragmentPadding;
    NSLayoutManager *layoutManager;
    NSArray *textContainers;
    NSTextContainer *currentTextContainer;
    unsigned int currentTextContainerIndex;
    struct CGSize currentTextContainerSize;
    NSParagraphStyle *currentParagraphStyle;
    void *_atsReserved[8];
    id _private;
}

+ (BOOL)_allowsScreenFontKerning;
+ (id)sharedTypesetter;
+ (id)sharedInstance;
+ (void)initialize;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 remainingRect:(struct CGRect *)arg2;
- (CDUnion_a04c68c6 *)_lineFragmentRectForProposedRectArgs;
- (CDStruct_6c9b9d05 *)_allocateAuxData;
- (float)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned int)arg2;
- (struct _NSRange)layoutCharactersInRange:(struct _NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned int)arg3;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned int)arg2 maxNumberOfLineFragments:(unsigned int)arg3 nextGlyphIndex:(unsigned int *)arg4;
- (unsigned long)hyphenCharacterForGlyphAtIndex:(unsigned int)arg1;
- (struct CGRect)boundingBoxForControlGlyphAtIndex:(unsigned int)arg1 forTextContainer:(id)arg2 proposedLineFragment:(struct CGRect)arg3 glyphPosition:(struct CGPoint)arg4 characterIndex:(unsigned int)arg5;
- (float)hyphenationFactorForGlyphAtIndex:(unsigned int)arg1;
- (BOOL)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned int)arg1;
- (BOOL)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned int)arg1;
- (unsigned int)layoutParagraphAtPoint:(struct CGPoint *)arg1;
- (unsigned int)actionForControlCharacterAtIndex:(unsigned int)arg1;
- (void)endLineWithGlyphRange:(struct _NSRange)arg1;
- (void)beginLineWithGlyphAtIndex:(unsigned int)arg1;
- (void)endParagraph;
- (void)beginParagraph;
- (unsigned int)_sweepDirectionForGlyphAtIndex:(long)arg1;
- (BOOL)_usesScreenFonts;
- (void)_flushCachedObjects;
- (BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned int *)arg1 characterIndex:(unsigned int *)arg2 atPoint:(struct CGPoint *)arg3 renderingContext:(id *)arg4;
- (void)_setForceWordWrapping:(BOOL)arg1;
- (BOOL)_forceWordWrapping;
- (void)_setBaselineRenderingMode:(BOOL)arg1;
- (BOOL)_baselineRenderingMode;
- (id)_getATSTypesetterGuts;
- (struct __CTTypesetter *)_ctTypesetter;
- (const char *)_bidiLevels;
- (int)_baseWritingDirection;
- (void)_doBidiProcessing;
- (void)dealloc;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;

@end

