/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUAbstractNavigationBanner.h>

@class NSArray, UISegmentedControl, UIView;

@interface PUSwitcherBanner : PUAbstractNavigationBanner
{
    UIView *_view;
    NSArray *_itemTitles;
    int _selectedItemIndex;
    UISegmentedControl *__segmentedControl;
}

@property(retain, nonatomic, setter=_setSegmentedControl:) UISegmentedControl *_segmentedControl; // @synthesize _segmentedControl=__segmentedControl;
@property(nonatomic) int selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
- (void)_setItemTitles:(id)arg1;
@property(copy, nonatomic) NSArray *itemTitles; // @synthesize itemTitles=_itemTitles;
- (void).cxx_destruct;
- (void)_segmentedControlAction:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forItemAtIndex:(int)arg2;
- (BOOL)isEnabledForItemAtIndex:(int)arg1;
- (id)view;
- (float)height;
- (id)initWithItemTitles:(id)arg1;

@end

