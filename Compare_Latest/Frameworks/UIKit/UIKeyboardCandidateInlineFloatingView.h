/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIKeyboardCandidateGridCollectionViewControllerDelegate-Protocol.h"
#import "UIKeyboardCandidateList-Protocol.h"
#import "UIKeyboardCandidateListDelegate-Protocol.h"

@class NSString, TIKeyboardCandidateResultSet, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl;

@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate>
{
    BOOL _reducedWidth;
    TIKeyboardCandidateResultSet *_candidateSet;
    NSString *_inlineText;
    float _maxX;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    int _position;
    UIKeyboardCandidateSortControl *_sortSelectionBar;
    struct CGRect _inlineRect;
    struct CGRect _previousCollapsedFrame;
}

@property(nonatomic) struct CGRect previousCollapsedFrame; // @synthesize previousCollapsedFrame=_previousCollapsedFrame;
@property(nonatomic) int position; // @synthesize position=_position;
@property(nonatomic) id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property(readonly, nonatomic, getter=isReducedWidth) BOOL reducedWidth; // @synthesize reducedWidth=_reducedWidth;
@property(nonatomic) float maxX; // @synthesize maxX=_maxX;
@property(nonatomic) struct CGRect inlineRect; // @synthesize inlineRect=_inlineRect;
@property(copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
@property(readonly, nonatomic) UIKeyboardCandidateSortControl *sortSelectionBar; // @synthesize sortSelectionBar=_sortSelectionBar;
@property(readonly, nonatomic) UIKeyboardCandidateGridCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (void)sortSelectionBarAction;
- (void)padInlineFloatingViewExpand:(id)arg1;
- (BOOL)padInlineFloatingViewIsExpanded:(id)arg1;
- (unsigned int)gridCollectionViewNumberOfColumns:(id)arg1;
- (unsigned int)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (id)keyboardBehaviors;
- (BOOL)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)layout;
- (void)candidatesDidChange;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 maxX:(float)arg3;
- (struct CGRect)adjustedFrameFromDesiredFrame:(struct CGRect)arg1 textHeight:(float)arg2;
- (BOOL)isAcceptableFrame:(struct CGRect)arg1 afterScrollBy:(float)arg2;
- (struct CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect)arg2;
- (BOOL)isExtendedList;
- (void)expand;
- (struct CGSize)size;
- (void)setFrame:(struct CGRect)arg1;
- (id)activeCandidateList;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

