/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ADAdSpace_RPC-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class ADAdImpressionPublicAttributes, NSString, NSURL, _ADRemoteViewController, _UIAsyncInvocation;

@interface ADAdSpace : NSObject <UIViewControllerTransitioningDelegate, ADAdSpace_RPC>
{
    id <ADAdRecipient> _recipient;
    BOOL _visibilityCheckScheduled;
    BOOL _shouldPresentActionViewControllerWhenReady;
    BOOL _actionViewControllerReadyForPresentation;
    id <ADSAdSpace_RPC><NSObject> _serviceAdSpace;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    ADAdImpressionPublicAttributes *_currentAdImpressionPublicAttributes;
    int _visibility;
    _UIAsyncInvocation *_remoteViewControllerRequestCancelationInvocation;
    _ADRemoteViewController *_remoteViewController;
    _ADRemoteViewController *_portraitOnlyViewController;
    double _lastSlowCheck;
    struct CGRect _viewFrame;
}

@property(nonatomic) BOOL actionViewControllerReadyForPresentation; // @synthesize actionViewControllerReadyForPresentation=_actionViewControllerReadyForPresentation;
@property(nonatomic) BOOL shouldPresentActionViewControllerWhenReady; // @synthesize shouldPresentActionViewControllerWhenReady=_shouldPresentActionViewControllerWhenReady;
@property(retain, nonatomic) _ADRemoteViewController *portraitOnlyViewController; // @synthesize portraitOnlyViewController=_portraitOnlyViewController;
@property(retain, nonatomic) _ADRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) _UIAsyncInvocation *remoteViewControllerRequestCancelationInvocation; // @synthesize remoteViewControllerRequestCancelationInvocation=_remoteViewControllerRequestCancelationInvocation;
@property(nonatomic) double lastSlowCheck; // @synthesize lastSlowCheck=_lastSlowCheck;
@property(nonatomic) BOOL visibilityCheckScheduled; // @synthesize visibilityCheckScheduled=_visibilityCheckScheduled;
@property(nonatomic) int visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) ADAdImpressionPublicAttributes *currentAdImpressionPublicAttributes; // @synthesize currentAdImpressionPublicAttributes=_currentAdImpressionPublicAttributes;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id <ADSAdSpace_RPC><NSObject> serviceAdSpace; // @synthesize serviceAdSpace=_serviceAdSpace;
- (void)_remote_dismissPortraitOnlyViewController;
- (void)_remote_requestPortraitOnlyViewController;
- (void)_remote_dismissViewController;
- (void)_remote_actionViewControllerReadyForPresentation;
- (void)_remote_setStatusBarHidden:(BOOL)arg1;
- (void)_remote_updateViewControllerSupportedOrientations:(unsigned int)arg1;
- (void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2;
- (void)_considerPresentingActionViewController;
- (void)_remote_openURL:(id)arg1;
- (void)_remote_creativeDidFailWithError:(id)arg1;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1;
- (void)_remote_creativeWillLoad;
- (void)_remote_setRemoteWindowContextID:(unsigned int)arg1;
- (void)interstitialWasRemovedFromSuperview;
- (void)presentInterstitialStoryboard;
- (void)cancelBannerViewAction;
- (void)refuseBannerViewAction;
- (void)executeBannerViewActionFrom:(struct CGRect)arg1 withTapLocation:(struct CGPoint)arg2;
- (void)_updateAllProperties;
- (void)updateVisibility;
- (void)_clientApplicationDidBecomeActive;
- (void)_clientApplicationDidEnterBackground;
- (void)close;
- (void)_closeConnectionIfNecessary;
@property(readonly, nonatomic) id <ADAdRecipient> recipient;
- (void)_serviceConnectionLost;
- (void)_requestServiceAdSpace;
- (id)initForRecipient:(id)arg1;
- (void)dealloc;

@end

