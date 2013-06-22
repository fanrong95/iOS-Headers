/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUICategoryTableViewControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class NSArray, NSOperationQueue, NSURL, SKUICategory, SKUICategoryArtworkLoader, SKUICategoryTableViewController, SKUIClientContext, SKUILoadURLOperation, SKUISegmentedControl, UIBarButtonItem, UIPopoverController, UISegmentedControl, UIViewController;

@interface SKUICategoryController : NSObject <SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate>
{
    SKUICategoryArtworkLoader *_artworkLoader;
    UIBarButtonItem *_button;
    SKUIClientContext *_clientContext;
    UIViewController *_contentsController;
    NSURL *_defaultURL;
    id <SKUICategoryControllerDelegate> _delegate;
    SKUILoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    UIPopoverController *_popover;
    SKUICategory *_rootCategory;
    NSURL *_selectedURL;
    SKUISegmentedControl *_segmentedControl;
    int _segmentedControlLength;
    NSArray *_segmentedControlSegments;
    SKUICategoryTableViewController *_tableViewController;
}

@property(retain, nonatomic) NSURL *selectedURL; // @synthesize selectedURL=_selectedURL;
@property(nonatomic) int segmentedControlLength; // @synthesize segmentedControlLength=_segmentedControlLength;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <SKUICategoryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *defaultURL; // @synthesize defaultURL=_defaultURL;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SKUICategory *category; // @synthesize category=_rootCategory;
- (void).cxx_destruct;
- (id)_tableViewControllerWithCategory:(id)arg1;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (void)_setCachedResponse:(id)arg1 error:(id)arg2;
- (void)_reloadSelectedSegment;
- (void)_precacheArtworkForCategory:(id)arg1;
- (void)_reloadSegmentedControl;
- (id)_artworkLoader;
- (void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)segmentedControlAction:(id)arg1;
- (void)buttonAction:(id)arg1;
@property(readonly, nonatomic) UISegmentedControl *segmentedControl;
- (void)loadFromURL:(id)arg1 withCompletionBlock:(id)arg2;
@property(readonly, nonatomic) BOOL isLoading;
- (void)dismiss;
@property(readonly, nonatomic) UIBarButtonItem *categoryButton;
- (void)dealloc;
- (id)initWithContentsController:(id)arg1;

@end

