/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ADAdRecipient-Protocol.h"

@class ADAdSpace, ADInterstitialView, UIView, UIViewController;

@interface ADInterstitialAd : NSObject <ADAdRecipient>
{
    id <ADInterstitialAdDelegate> _delegate;
    id <ADInterstitialAdDelegate> _internalDelegate;
    BOOL _loaded;
    BOOL _actionInProgress;
    BOOL _canLoadMoreThanOnce;
    BOOL _hasLoadedFirstAd;
    int _options;
    ADInterstitialView *_interstitialView;
    UIViewController *_internalPresentingViewController;
    ADAdSpace *_adSpace;
}

@property(nonatomic) BOOL hasLoadedFirstAd; // @synthesize hasLoadedFirstAd=_hasLoadedFirstAd;
@property(nonatomic) BOOL canLoadMoreThanOnce; // @synthesize canLoadMoreThanOnce=_canLoadMoreThanOnce;
@property(retain, nonatomic) ADAdSpace *adSpace; // @synthesize adSpace=_adSpace;
@property(retain, nonatomic) UIViewController *internalPresentingViewController; // @synthesize internalPresentingViewController=_internalPresentingViewController;
@property(retain, nonatomic) ADInterstitialView *interstitialView; // @synthesize interstitialView=_interstitialView;
@property(nonatomic, getter=isActionInProgress) BOOL actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(readonly, nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) int options; // @synthesize options=_options;
- (void)storyboardViewControllerDidPresent;
- (void)serverStoryboardDidTransitionOut;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (BOOL)_considerClosingAdSpace;
- (void)serverBannerViewWillLoad;
- (void)setRemoteWindowContextId:(unsigned int)arg1;
@property(readonly, nonatomic) int internalAdType;
- (void)handleTapOnInterstitialViewAtLocation:(struct CGPoint)arg1;
- (BOOL)canPresentWithInterfaceOrientation:(int)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setServerURL:(id)arg1;
- (id)serverURL;
- (id)identifier;
@property(nonatomic) __weak id <ADInterstitialAdDelegate> internalDelegate;
@property(nonatomic) __weak id <ADInterstitialAdDelegate> delegate;
- (void)presentAsStoryboardFromViewController:(id)arg1;
- (void)presentFromViewController:(id)arg1;
- (BOOL)presentInView:(id)arg1;
- (void)cancelAction;
- (void)setLoaded:(BOOL)arg1;
@property(readonly, nonatomic) UIViewController *presentingViewController;
@property(readonly, nonatomic) UIView *adSpaceView;
- (id)_initWithOptions:(int)arg1;
- (id)init;
- (void)dealloc;

@end

