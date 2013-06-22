/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, _TRUserNotfication;

@interface TRDeviceSetupPeripheral : NSObject
{
    _TRUserNotfication *_activeUserNotification;
    NSString *_authenticationAppleID;
    unsigned int _authenticationAttemptCount;
    NSData *_dataToSend;
    NSObject<OS_dispatch_semaphore> *_dataToSendSemaphore;
    NSString *_deviceGUID;
    BOOL _performingSetup;
    BOOL _preparingForSetup;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_userAgent;
    id <TRDeviceSetupPeripheralDelegate> _delegate;
}

@property(nonatomic) __weak id <TRDeviceSetupPeripheralDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_startAuthentication;
- (BOOL)_showUserNotificationForRememberPasswordForAppleID:(id)arg1;
- (void)_showUserNotificationForErrorWithTitle:(id)arg1 message:(id)arg2;
- (BOOL)_showUserNotificationForDiagnosticSubmission;
- (void)_showUserNotificationForAuthenticationFailure:(id)arg1;
- (BOOL)_showUserNotificationForAppleID:(id)arg1 returningAppleID:(id *)arg2 password:(id *)arg3;
- (void)_setupDidFailWithError:(id)arg1;
- (void)_setupDidComplete;
- (void)_sendSetupDataWithAuthInfo:(id)arg1 diagnosticSubmissionEnabled:(BOOL)arg2 rememberPasswordEnabled:(BOOL)arg3;
- (BOOL)_canPerformSetupReturningHasWiFiNetwork:(char *)arg1;
- (void)_authenticateWithParameters:(id)arg1;
- (id)_didTap;
- (id)_didReceiveData:(id)arg1;
- (void)_didDisconnect;
- (void)cancelSetupForTimeout;
- (void)cancelSetupForStateChange;
- (BOOL)performSetup;
- (id)init;

@end

