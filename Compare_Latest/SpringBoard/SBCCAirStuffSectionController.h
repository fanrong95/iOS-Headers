/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBControlCenterSectionViewController.h"

#import "MPAudioVideoRoutingViewControllerDelegate-Protocol.h"
#import "SFAirDropDiscoveryActionSheetDelegate-Protocol.h"
#import "SFAirDropDiscoveryControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class BKSTimer, MPAudioVideoRoutingActionSheet, MPAudioVideoRoutingPopoverController, MPAudioVideoRoutingViewController, SBCCButtonLikeSectionView, SFAirDropDiscoveryController;

@interface SBCCAirStuffSectionController : SBControlCenterSectionViewController <MPAudioVideoRoutingViewControllerDelegate, UIPopoverControllerDelegate, SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryActionSheetDelegate>
{
    SBCCButtonLikeSectionView *_airPlaySection;
    SBCCButtonLikeSectionView *_airDropSection;
    MPAudioVideoRoutingActionSheet *_airPlayActionSheet;
    MPAudioVideoRoutingViewController *_airPlayViewController;
    MPAudioVideoRoutingPopoverController *_airPlayPopoverController;
    SFAirDropDiscoveryController *_airDropDiscoveryController;
    BOOL _isVisible;
    BOOL _airPlayWasPreviouslyEnabled;
    BKSTimer *_resetTimer;
    BOOL _airPlayEnabled;
    BOOL _airDropEnabled;
}

+ (Class)viewClass;
@property(nonatomic) BOOL airDropEnabled; // @synthesize airDropEnabled=_airDropEnabled;
@property(nonatomic) BOOL airPlayEnabled; // @synthesize airPlayEnabled=_airPlayEnabled;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)discoveryController:(id)arg1 actionSheetDidDismiss:(id)arg2;
- (void)discoveryController:(id)arg1 actionSheetWillDismiss:(id)arg2;
- (void)discoveryControllerSettingsDidChange:(id)arg1;
- (void)viewControllerRequestsDismissal:(id)arg1;
- (void)_dismissAirplayControllerAnimated:(BOOL)arg1;
- (void)_debugAirplaneStateDidChangeNotification:(id)arg1;
- (void)_debugWifiStateDidChangeNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_updateAirDropControlAsEnabled:(BOOL)arg1;
- (void)_updateForAirDropStateChange;
- (void)_updateAirPlayControlAsEnabled:(BOOL)arg1;
- (void)_updateForAirPlayStateChange;
- (void)_airDropTapped:(id)arg1;
- (void)_airPlayTapped:(id)arg1;
- (void)_showAirPlayView;
- (void)_noteSectionEnabledStateDidChange;
- (void)_updateSubsectionVisibilityAnimated:(BOOL)arg1;
- (void)noteControlCenterDidDismiss;
- (void)noteControlCenterWillPresent;
- (void)viewDidLoad;
- (id)view;
- (BOOL)enabledForOrientation:(int)arg1;
- (struct CGSize)contentSizeForOrientation:(int)arg1;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)init;

@end

