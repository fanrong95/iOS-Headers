/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "TPStarkPhoneCallViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, UILabel;

@interface TPStarkPhoneCallGalleryView : UIView <TPStarkPhoneCallViewDelegate>
{
    id <TPStarkPhoneCallGalleryViewDelegate> _delegate;
    NSMutableArray *_phoneCallViewsArray;
    UILabel *_mergedCallNameLabel;
    UILabel *_mergedCallNumberTypeOrDurationLabel;
    UIView *_mergedCallPostioningContainerView;
    NSArray *_constraintsForMergedCallContainerView;
}

@property(retain) NSArray *constraintsForMergedCallContainerView; // @synthesize constraintsForMergedCallContainerView=_constraintsForMergedCallContainerView;
@property(retain) UIView *mergedCallPostioningContainerView; // @synthesize mergedCallPostioningContainerView=_mergedCallPostioningContainerView;
@property(retain) UILabel *mergedCallNumberTypeOrDurationLabel; // @synthesize mergedCallNumberTypeOrDurationLabel=_mergedCallNumberTypeOrDurationLabel;
@property(retain) UILabel *mergedCallNameLabel; // @synthesize mergedCallNameLabel=_mergedCallNameLabel;
@property(retain) NSMutableArray *phoneCallViewsArray; // @synthesize phoneCallViewsArray=_phoneCallViewsArray;
@property id <TPStarkPhoneCallGalleryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateClockTickNotification:(id)arg1;
- (void)setIsShowingCallFailure:(BOOL)arg1;
- (id)conferencePhoneCallViews;
- (id)phoneCallViewForPhoneCall:(id)arg1;
- (id)anchorViewForRightCall;
- (id)anchorViewForLeftCall;
- (void)swapHeldPhoneCallsAnimated:(BOOL)arg1;
- (void)removeMergedCallLabels;
- (void)updateAndShowMergedCallLabelsIfNecessary;
- (void)endPhoneCall:(id)arg1 animated:(BOOL)arg2;
- (void)unmergePhoneCallFromConference:(id)arg1 animated:(BOOL)arg2;
- (void)mergePrimaryPhoneCallsAnimated:(BOOL)arg1;
- (void)addPrimaryPhoneCall:(id)arg1 animated:(BOOL)arg2;
- (void)addPhoneCall:(id)arg1 asParticipantToPrimaryPhoneCall:(id)arg2 animated:(BOOL)arg3;
- (void)phoneCallViewWasTapped:(id)arg1;
- (void)resetGalleryData;
- (void)reloadPhoneCallData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

