/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUTableViewController.h>

@interface IUSearchResultListViewController : IUTableViewController
{
    id <IUSearchResultListViewControllerDelegate> _searchResultListDelegate;
}

@property(nonatomic) __weak id <IUSearchResultListViewControllerDelegate> searchResultListDelegate; // @synthesize searchResultListDelegate=_searchResultListDelegate;
- (void).cxx_destruct;
- (void)performDefaultActionForRow:(int)arg1;
- (BOOL)hasSearchBar;
- (BOOL)allowsDisclosureInCells;
- (BOOL)isCurrentController;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (BOOL)isViewLoaded;

@end

