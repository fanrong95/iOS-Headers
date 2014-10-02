//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, SKUISearchAppBundleView, UIImage, UIImageView, UILabel;

@interface SKUICardCellLayout : SKUIItemCellLayout
{
    SKUISearchAppBundleView *_appBundleView;
    UILabel *_artistLabel;
    int _numberOfUserRatings;
    UIImageView *_screenshotImageView;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
    UILabel *_hasInAppPurchasesLabel;
    BOOL _appBundle;
    BOOL _hasInAppPurchases;
}

@property(readonly, nonatomic) SKUISearchAppBundleView *appBundleView; // @synthesize appBundleView=_appBundleView;
@property(nonatomic) BOOL hasInAppPurchases; // @synthesize hasInAppPurchases=_hasInAppPurchases;
@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(nonatomic) int numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(nonatomic) BOOL appBundle; // @synthesize appBundle=_appBundle;
- (void).cxx_destruct;
- (void)layoutForItemOfferChange;
- (void)setBackgroundColor:(id)arg1;
- (void)resetLayout;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *screenshotImage;
@property(copy, nonatomic) NSString *artistName;

@end
