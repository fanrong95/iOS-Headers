/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class SKUIClientContext, SKUIProductPageItem;

@interface SKUIProductPageInformationViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}

@property(readonly, nonatomic) SKUIProductPageItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;

@end

