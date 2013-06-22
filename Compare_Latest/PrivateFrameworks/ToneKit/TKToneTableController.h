/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPMediaPickerControllerDelegate-Protocol.h"
#import "TKVibrationPickerViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MPMediaPickerController, MPMusicPlayerController, NSIndexPath, NSMutableArray, NSString, TKVibrationPickerViewController, TLToneManager, UITableView, UIView;

@interface TKToneTableController : NSObject <TKVibrationPickerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, MPMediaPickerControllerDelegate>
{
    id _delegate;
    NSMutableArray *_ringtoneGroupLists;
    NSMutableArray *_ringtoneGroupNames;
    NSIndexPath *_selectedRingtoneIndexPath;
    BOOL _showsNone;
    BOOL _showsDefault;
    NSString *_noneString;
    NSString *_noneIdentifier;
    NSString *_defaultIdentifier;
    BOOL _showsNothingSelected;
    BOOL _showsRingtonesStore;
    BOOL _noneAtTop;
    UITableView *_tableView;
    BOOL _showsVibrations;
    BOOL _showsDefaultVibration;
    BOOL _showsUserGeneratedVibrations;
    BOOL _showsNoneVibration;
    BOOL _showsNoVibrationSelected;
    BOOL _allowsDeletingCurrentSystemVibration;
    NSString *_selectedVibrationIdentifier;
    TKVibrationPickerViewController *_vibrationPickerViewController;
    BOOL _showsMedia;
    BOOL _showMediaAtTop;
    MPMediaPickerController *_mediaPickerController;
    NSMutableArray *_mediaItems;
    MPMusicPlayerController *_musicPlayer;
    TLToneManager *_ringtoneManager;
    id _avController;
    BOOL _startedInteruption;
    BOOL _customAVController;
    BOOL _tonePicker;
    unsigned int _filter;
    unsigned int _systemRingtoneStartIndex;
    Class _customTableViewCellClass;
    int _context;
    BOOL _showsStoreButtonInNavigationBar;
    NSString *_vibrationAccountIdentifier;
    id <TKTonePickerStyleProvider> _styleProvider;
    UIView *_defaultSectionHeaderView;
    UIView *_mediaSectionHeaderView;
    NSMutableArray *_regularToneSectionHeaderViews;
}

@property(retain, nonatomic, setter=_setRegularToneSectionHeaderViews:) NSMutableArray *_regularToneSectionHeaderViews; // @synthesize _regularToneSectionHeaderViews;
@property(retain, nonatomic, setter=_setMediaSectionHeaderView:) UIView *_mediaSectionHeaderView; // @synthesize _mediaSectionHeaderView;
@property(retain, nonatomic, setter=_setDefaultSectionHeaderView:) UIView *_defaultSectionHeaderView; // @synthesize _defaultSectionHeaderView;
@property(retain, nonatomic, setter=_setStyleProvider:) id <TKTonePickerStyleProvider> _styleProvider; // @synthesize _styleProvider;
@property(retain, nonatomic) NSString *vibrationAccountIdentifier; // @synthesize vibrationAccountIdentifier=_vibrationAccountIdentifier;
@property(retain, nonatomic) NSString *selectedVibrationIdentifier; // @synthesize selectedVibrationIdentifier=_selectedVibrationIdentifier;
@property(nonatomic) BOOL allowsDeletingCurrentSystemVibration; // @synthesize allowsDeletingCurrentSystemVibration=_allowsDeletingCurrentSystemVibration;
@property(nonatomic) BOOL showsNoVibrationSelected; // @synthesize showsNoVibrationSelected=_showsNoVibrationSelected;
@property(nonatomic) BOOL showsNoneVibration; // @synthesize showsNoneVibration=_showsNoneVibration;
@property(nonatomic) BOOL showsUserGeneratedVibrations; // @synthesize showsUserGeneratedVibrations=_showsUserGeneratedVibrations;
@property(nonatomic) BOOL showsDefaultVibration; // @synthesize showsDefaultVibration=_showsDefaultVibration;
@property(nonatomic) BOOL showsVibrations; // @synthesize showsVibrations=_showsVibrations;
@property(retain, nonatomic, setter=setDefaultIdentifier:) id defaultIdentifier; // @synthesize defaultIdentifier=_defaultIdentifier;
- (void)_setRingtoneManager:(id)arg1;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)finishedWithPicker;
- (void)stopPlaying;
- (void)stopPlayingWithFadeOut:(BOOL)arg1;
- (void)_handleItemPlaybackDidEndWithAVController:(id)arg1;
- (void)_unregisterForItemPlaybackDidEndNotificationWithCurrentAVController;
- (void)_registerForItemPlaybackDidEndNotificationWithCurrentAVController;
- (void)playMediaItemWithIdentifier:(id)arg1;
- (void)playRingtoneWithIdentifier:(id)arg1;
- (void)togglePlayMediaItemWithIdentifier:(id)arg1;
- (void)togglePlayWithRingtoneWithIdentifier:(id)arg1;
- (id)musicPlayer;
- (id)avController;
- (void)setAVController:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)_getTitle:(id *)arg1 customHeaderView:(id *)arg2 forHeaderInSection:(int)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_configureTextColorOfLabelInCell:(id)arg1 checked:(BOOL)arg2;
- (void)_goToStore;
- (BOOL)_canShowStore;
- (void)configureNavigationBarIfNeeded;
- (void)setCustomTableViewCellClass:(Class)arg1;
@property(retain, nonatomic) id <TKTonePickerStyleProvider> styleProvider;
- (unsigned int)_addMediaIdentifierToList:(id)arg1;
- (void)_refreshMediaItems;
- (id)_mediaItemForIdentifier:(id)arg1;
- (id)copyCurrentPhoneTextToneIdentifier;
- (id)copyCurrentPhoneTextToneName;
- (id)copyCurrentPhoneRingtoneIdentifier;
- (id)copyCurrentPhoneRingtoneName;
- (void)processNewMediaItemSelected:(id)arg1;
- (void)processNewRingtoneSelected:(id)arg1;
- (BOOL)_showsVibrations;
- (void)setShowsNothingSelected:(BOOL)arg1;
- (void)setNoneString:(id)arg1;
- (void)setMediaAtTop:(BOOL)arg1;
- (void)setShowsMedia:(BOOL)arg1;
- (void)setNoneAtTop:(BOOL)arg1;
- (void)setShowsNone:(BOOL)arg1;
- (void)setShowsDefault:(BOOL)arg1;
- (void)setShowsStoreButtonInNavigationBar:(BOOL)arg1;
- (void)setShowsRingtonesStore:(BOOL)arg1;
- (id)ringtoneManager;
- (void)removeMediaItems:(id)arg1;
- (void)addMediaItems:(id)arg1;
- (void)setContext:(int)arg1;
- (void)updateSelectedIdentifierForExternalChange;
- (id)selectedIdentifier:(char *)arg1;
- (id)selectedRingtoneIdentifier;
- (void)setSelectedRingtoneIdentifier:(id)arg1;
- (void)setSelectedMediaIdentifier:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)reloadRingtones;
- (id)loadTextTonesFromPlist;
- (id)indexPathForSelectedRingtone;
- (id)indexPathForVibrationGroup;
- (id)indexPathForNone;
- (id)indexPathForMediaGroup;
- (id)indexPathForFirstRingtoneGroup;
- (id)indexPathForDefaultGroup;
- (id)indexPathForRingtonesStoreGroup;
- (id)indexPathForRingtoneWithIdentifier:(id)arg1;
- (id)identifierOfRingtoneAtIndexPath:(id)arg1;
- (id)identifierAtIndexPath:(id)arg1 isMediaItem:(char *)arg2;
- (BOOL)isDividerAtIndexPath:(id)arg1;
- (BOOL)isVibrationGroupAtIndexPath:(id)arg1;
- (BOOL)isMediaGroupAtIndexPath:(id)arg1;
- (BOOL)isNoneGroupAtIndexPath:(id)arg1;
- (BOOL)isDefaultGroupAtIndexPath:(id)arg1;
- (BOOL)isRingtonesStoreGroupAtIndexPath:(id)arg1;
- (int)compareRingtoneWithIdentifier:(id)arg1 toRingtoneWithIdentifier:(id)arg2;
- (void)addRingtonesInDirectory:(id)arg1 toArray:(id)arg2 fileExtension:(id)arg3;
- (void)dealloc;
- (id)initWithAVController:(id)arg1 filter:(unsigned int)arg2 tonePicker:(BOOL)arg3;
- (id)initWithAVController:(id)arg1;
- (id)init;

@end

