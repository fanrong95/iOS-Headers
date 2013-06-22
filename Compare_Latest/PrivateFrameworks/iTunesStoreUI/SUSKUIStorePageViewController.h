/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

#import "SKUIIPhoneProductPageDelegate-Protocol.h"

@class SKUIIPhoneProductPageViewController, SKUIStorePageViewController, UIViewController;

@interface SUSKUIStorePageViewController : SUViewController <SKUIIPhoneProductPageDelegate>
{
    UIViewController *_activeChildViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    SKUIStorePageViewController *_storePageViewController;
}

- (void)_showStorePageWithPageDictionary:(id)arg1;
- (void)_showProductPageWithPageDictionary:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1;
- (BOOL)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;
- (BOOL)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;
- (void)loadView;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)dealloc;
- (id)initWithSection:(id)arg1;

@end

