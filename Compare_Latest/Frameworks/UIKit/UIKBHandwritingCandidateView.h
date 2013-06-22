/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKBKeyView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIKeyboardCandidateList-Protocol.h"

@class NSArray, TIKeyboardCandidateResultSet, UICollectionView;

@interface UIKBHandwritingCandidateView : UIKBKeyView <UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <UIKeyboardCandidateListDelegate> _delegate;
    TIKeyboardCandidateResultSet *_candidateResultSet;
    UICollectionView *_candidatesCollectionView;
    CDStruct_961fb75c _visualStyling;
}

@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;
@property(retain, nonatomic) UICollectionView *candidatesCollectionView; // @synthesize candidatesCollectionView=_candidatesCollectionView;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // @synthesize candidateResultSet=_candidateResultSet;
@property(nonatomic) id <UIKeyboardCandidateListDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *candidates;
@property(readonly, nonatomic) id <UIKeyboardCandidateList> candidateList;
- (void)_setRenderConfig:(id)arg1;
- (id)_inheritedRenderConfig;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (unsigned int)dummyCellsCount;
- (void)reloadData;
- (id)keyboardBehaviors;
- (BOOL)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (BOOL)hasPreviousPage;
- (BOOL)hasNextPage;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (BOOL)isExtendedList;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)jumpToCompositions;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end

