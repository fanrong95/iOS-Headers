/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "KeychainSyncViewControllerDelegate-Protocol.h"

@class KeychainSyncDevicePINController, KeychainSyncPhoneNumberController, KeychainSyncSMSVerificationController, KeychainSyncSecurityCodeController, NSString, PSSetupController, UIAlertView, UINavigationController, UIViewController;

@interface PSKeychainSyncManager : NSObject <KeychainSyncViewControllerDelegate>
{
    BOOL _joiningCircle;
    int _circleNotificationToken;
    int _flow;
    BOOL _pinCodeWasGenerated;
    PSSetupController *_settingsSetupController;
    UINavigationController *_buddyNavigationController;
    UIAlertView *_passwordPrompt;
    UIAlertView *_incorrectRecoveryCodesAlert;
    UIAlertView *_devicePINChoiceAlert;
    UIAlertView *_devicePasscodeTooWeakAlert;
    KeychainSyncDevicePINController *_devicePinController;
    KeychainSyncSecurityCodeController *_securityCodeController;
    KeychainSyncPhoneNumberController *_phoneNumberController;
    KeychainSyncSMSVerificationController *_smsValidationController;
    UIViewController *_spinningViewController;
    NSString *_appleIDUsername;
    NSString *_appleIDPassword;
    id _completion;
    id _passwordPromptCompletion;
    UIViewController *_passwordPromptControllerHost;
    id _circleJoinCompletion;
    NSString *_pinCode;
}

+ (BOOL)isSimpleSecurityCode:(id)arg1;
@property(retain, nonatomic) NSString *pinCode; // @synthesize pinCode=_pinCode;
@property(copy, nonatomic) id circleJoinCompletion; // @synthesize circleJoinCompletion=_circleJoinCompletion;
@property(retain, nonatomic) UIViewController *passwordPromptControllerHost; // @synthesize passwordPromptControllerHost=_passwordPromptControllerHost;
@property(copy, nonatomic) id passwordPromptCompletion; // @synthesize passwordPromptCompletion=_passwordPromptCompletion;
@property(copy, nonatomic) id completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *appleIDPassword; // @synthesize appleIDPassword=_appleIDPassword;
@property(retain, nonatomic) NSString *appleIDUsername; // @synthesize appleIDUsername=_appleIDUsername;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)pinChoiceAlertDidChooseToUseDevicePasscode:(BOOL)arg1;
- (void)keychainSyncPhoneNumberController:(id)arg1 didCompleteWithPhoneNumber:(id)arg2 countryCode:(id)arg3;
- (void)joinCircleAndEnableSecureBackupWithPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (void)_enableSecureBackupWithPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)_autoVetSMSValidationWithToken:(id)arg1;
- (void)keychainSyncControllerCancel:(id)arg1;
- (void)_finishedWithStatus:(int)arg1 error:(id)arg2;
- (void)showController:(id)arg1;
- (void)handleCircleChangedNotification;
- (void)_recoverWithSecurityCode:(id)arg1 verificationCode:(id)arg2;
- (void)joinCircleWithCompletion:(id)arg1;
- (void)_showGenericEnableErrorAlert;
- (void)stopNavigationSpinner;
- (void)startNavigationSpinnerInViewController:(id)arg1;
- (void)showPinChoiceAlert;
- (void)_registerForCircleChangeNotificationsWithCompletion:(id)arg1;
- (void)promptForPasswordIfNeededWithCompletion:(id)arg1;
- (void)promptForPasswordIfNeededOverController:(id)arg1 withCompletion:(id)arg2;
- (void)promptForPasswordOverController:(id)arg1 withCompletion:(id)arg2;
- (id)navigationController;
@property(readonly, nonatomic, getter=isRunningInBuddy) BOOL runningInBuddy;
- (void)dealloc;
- (void)showEnableFlowWithNavigationController:(id)arg1 completion:(id)arg2;
- (void)showRecoveryFlowWithNavigationController:(id)arg1 completion:(id)arg2;
- (void)showRecoveryFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showEnableEscrowFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showEnableSyncFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;

@end

