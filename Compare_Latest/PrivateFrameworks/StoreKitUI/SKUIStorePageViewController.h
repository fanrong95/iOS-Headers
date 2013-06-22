/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SKUIArtworkRequestDelegate-Protocol.h"
#import "SKUIProductPageOverlayDelegate-Protocol.h"
#import "SKUIResourceLoaderDelegate-Protocol.h"
#import "SKUIStorePageCollectionViewDelegate-Protocol.h"
#import "SKUITextLayoutCacheDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UIViewControllerRestoration-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSOperationQueue, NSString, NSURLRequest, SKUIArtworkRequest, SKUIClientContext, SKUIColorScheme, SKUILoadURLOperation, SKUIMetricsController, SKUIProductPageOverlayController, SKUIResourceLoader, SKUIStorePage, SKUITextLayoutCache, UICollectionView, UIImage, UIRefreshControl, UIView;

@interface SKUIStorePageViewController : UIViewController <SKUIArtworkRequestDelegate, SKUIProductPageOverlayDelegate, SKUIResourceLoaderDelegate, SKUIStorePageCollectionViewDelegate, SKUITextLayoutCacheDelegate, UICollectionViewDataSource, UIViewControllerRestoration>
{
    SKUIProductPageOverlayController *_activeOverlayController;
    SKUIArtworkRequest *_backgroundArtworkRequest;
    UIImage *_backgroundImage;
    SKUIClientContext *_clientContext;
    UICollectionView *_collectionView;
    struct UIEdgeInsets _contentInsetAdjustments;
    id <SKUIStorePageDataSource> _dataSource;
    id <SKUIStorePageDelegate> _delegate;
    int _disappearOrientation;
    NSArray *_initialOverlayURLs;
    NSString *_lastDataConsumerClassName;
    NSURLRequest *_lastRequest;
    BOOL _loadOnAppear;
    SKUILoadURLOperation *_loadOperation;
    NSMapTable *_menuSectionContexts;
    NSOperationQueue *_operationQueue;
    SKUIMetricsController *_metricsController;
    SKUIProductPageOverlayController *_overlayController;
    SKUIColorScheme *_placeholderColorScheme;
    UIView *_pinnedHeaderView;
    UIRefreshControl *_refreshControl;
    SKUIResourceLoader *_resourceLoader;
    NSMutableArray *_sections;
    SKUIStorePage *_storePage;
    SKUITextLayoutCache *_textLayoutCache;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(copy, nonatomic) SKUIStorePage *storePage; // @synthesize storePage=_storePage;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <SKUIStorePageDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SKUIStorePageDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (id)_textLayoutCache;
- (void)_setStorePage:(id)arg1 error:(id)arg2;
- (void)_setMetricsController:(id)arg1;
- (void)_setBackgroundImage:(id)arg1;
- (id)_sectionWithPageComponent:(id)arg1;
- (id)_sections;
- (id)_resourceLoader;
- (void)_reloadStorePage;
- (void)_reloadCollectionView;
- (void)_recordMetricsPageEvent:(id)arg1 forStorePage:(id)arg2;
- (void)_prefetchArtworkForVisibleSections;
- (id)_newStorePageSectionContext;
- (id)_menuContextForMenuComponent:(id)arg1;
- (void)_enumerateVisibleSectionsUsingBlock:(id)arg1;
- (id)_defaultSectionForSwooshComponent:(id)arg1;
- (id)_defaultSectionForGridComponent:(id)arg1;
- (id)_colorScheme;
- (id)_collectionView;
- (id)_childSectionsForMenuComponent:(id)arg1 selectedIndex:(int)arg2;
- (id)_visibleMetricsImpressionsDictionary;
- (void)_setSelectedIndex:(int)arg1 forMenuSection:(id)arg2;
- (void)_setActiveProductPageOverlayController:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)textLayoutCacheDidFinishBatch:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 pageSectionForIndexPath:(id)arg3;
- (void)artworkLoaderDidIdle:(id)arg1;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)loadView;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)loadURLRequest:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(id)arg3;
- (void)loadURLRequest:(id)arg1 withCompletionBlock:(id)arg2;
- (void)loadURL:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(id)arg3;
- (void)loadURL:(id)arg1 withCompletionBlock:(id)arg2;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
- (id)defaultSectionForComponent:(id)arg1;
- (void)cancelPageLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

