/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class BKSProcessAssertion, NSDictionary, NSObject<OS_dispatch_source>, NSString, NSTimer, SBUISound;

@interface SBUserNotificationAlert : SBAlertItem
{
    unsigned int _replyPort;
    NSObject<OS_dispatch_source> *_portWatcher;
    NSObject<OS_dispatch_source> *_expirationTimer;
    BOOL _cleanedUp;
    int _token;
    int _timeout;
    unsigned long _requestFlags;
    NSString *_alertHeader;
    id _alertMessage;
    NSString *_alertMessageDelimiter;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_otherButtonTitle;
    NSString *_soundPath;
    NSDictionary *_avControllerAttributes;
    NSDictionary *_avItemAttributes;
    double _soundRepeatDuration;
    NSTimer *_soundStopTimer;
    id _keyboardTypes;
    id _autocapitalizationTypes;
    id _autocorrectionTypes;
    id _textFieldButtonDisplayDefaultButtonURLs;
    id _textFieldButtonImagePaths;
    id _textFieldTitles;
    id _textFieldValues;
    id _textFieldButtonDisplayTitles;
    id _textFieldButtonDisplayDefaultButtonTitles;
    int _currentTextFieldButtonDisplayIndex;
    double _creationTime;
    int _defaultButtonTag;
    int _unlockActionButtonTag;
    unsigned int _replyFlags;
    int _defaultButtonIndex;
    int _alternateButtonIndex;
    int _otherButtonIndex;
    NSString *_defaultResponseLaunchBundleID;
    unsigned int _cancel:1;
    unsigned int _isActivated:1;
    unsigned int _aboveLock:1;
    unsigned int _hideButtonsInAwayView:1;
    unsigned int _dismissOnLock:1;
    unsigned int _dontDismissOnUnlock:1;
    unsigned int _behavesSuperModally:1;
    unsigned int _allowMenuButtonDismissal:1;
    unsigned int _oneButtonPerLine:1;
    unsigned int _groupsTextFields:1;
    unsigned int _usesUndoStyle:1;
    unsigned int _configuredLocked:1;
    unsigned int _configuredNeedsPasscode:1;
    unsigned int _defaultResponseAppLaunchWaitingForPasscode:1;
    SBUISound *_sound;
    BKSProcessAssertion *_processAssertion;
}

@property(retain) NSString *defaultResponseLaunchBundleID; // @synthesize defaultResponseLaunchBundleID=_defaultResponseLaunchBundleID;
@property(retain) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(retain) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(retain) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(retain) NSString *alertMessageDelimiter; // @synthesize alertMessageDelimiter=_alertMessageDelimiter;
@property(retain) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain) NSString *alertHeader; // @synthesize alertHeader=_alertHeader;
@property(retain) NSDictionary *avItemAttributes; // @synthesize avItemAttributes=_avItemAttributes;
@property(retain) NSDictionary *avControllerAttributes; // @synthesize avControllerAttributes=_avControllerAttributes;
@property(retain) NSString *soundPath; // @synthesize soundPath=_soundPath;
@property(retain) id textFieldButtonDisplayDefaultButtonTitles; // @synthesize textFieldButtonDisplayDefaultButtonTitles=_textFieldButtonDisplayDefaultButtonTitles;
@property(retain) id textFieldButtonDisplayTitles; // @synthesize textFieldButtonDisplayTitles=_textFieldButtonDisplayTitles;
@property(retain) id textFieldValues; // @synthesize textFieldValues=_textFieldValues;
@property(retain) id textFieldTitles; // @synthesize textFieldTitles=_textFieldTitles;
@property(retain) id textFieldButtonDisplayDefaultButtonURLs; // @synthesize textFieldButtonDisplayDefaultButtonURLs=_textFieldButtonDisplayDefaultButtonURLs;
@property(retain) id textFieldButtonImagePaths; // @synthesize textFieldButtonImagePaths=_textFieldButtonImagePaths;
@property(retain) id autocorrectionTypes; // @synthesize autocorrectionTypes=_autocorrectionTypes;
@property(retain) id autocapitalizationTypes; // @synthesize autocapitalizationTypes=_autocapitalizationTypes;
@property(retain) id keyboardTypes; // @synthesize keyboardTypes=_keyboardTypes;
- (void)didFailToActivate;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)noteVolumeOrLockPressed;
- (BOOL)reappearsAfterUnlock;
- (BOOL)reappearsAfterLock;
- (BOOL)behavesSuperModally;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)performUnlockAction;
- (BOOL)_needsDismissalWithClickedButtonIndex:(int)arg1;
- (void)_sendResponse:(int)arg1;
- (void)_textFieldButtonPressed:(id)arg1;
- (void)_setSheetDefaultButtonTitle:(id)arg1;
- (void)cancel;
- (void)_cleanup;
- (void)_setActivated:(BOOL)arg1;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)sound;
- (void)willActivate;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (int)token;
- (Class)alertSheetClass;
- (void)dealloc;
- (void)updateWithMessage:(id)arg1 requestFlags:(int)arg2;
- (id)initWithMessage:(id)arg1 replyPort:(unsigned int)arg2 requestFlags:(int)arg3 auditToken:(CDStruct_6ad76789)arg4;
- (id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2;

@end

