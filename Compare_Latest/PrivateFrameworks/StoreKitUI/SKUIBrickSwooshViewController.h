/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUISwooshViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableIndexSet, NSString, SKUISwooshView, UICollectionView;

@interface SKUIBrickSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_bricks;
    UICollectionView *_collectionView;
    BOOL _delegateWantsWillDisplay;
    NSMutableIndexSet *_hiddenImageIndexSet;
    BOOL _showBrickTitles;
    NSString *_swooshTitle;
    SKUISwooshView *_swooshView;
}

@property(copy, nonatomic) NSArray *bricks; // @synthesize bricks=_bricks;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)loadView;
- (void)unhideImages;
- (void)setImage:(id)arg1 forItemAtIndex:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)popImageViewForItemAtIndex:(int)arg1;
- (id)indexPathsForVisibleItems;
- (struct CGRect)frameForItemAtIndex:(int)arg1;
- (void)dealloc;
- (id)initWithSwoosh:(id)arg1;

@end

