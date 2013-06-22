/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SKUIProductPageChildViewController-Protocol.h"

@class NSError, SKUIClientContext, SKUIProductPageHeaderViewController, UIScrollView;

@interface SKUINetworkErrorViewController : UIViewController <SKUIProductPageChildViewController>
{
    SKUIClientContext *_clientContext;
    id <SKUINetworkErrorDelegate> _delegate;
    NSError *_error;
}

+ (BOOL)canDisplayError:(id)arg1;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_networkTypeChanged:(id)arg1;
@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)loadView;
- (void)dealloc;
- (id)initWithError:(id)arg1;
- (id)init;

@end

