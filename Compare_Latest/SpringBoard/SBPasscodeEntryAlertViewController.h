/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlert.h"

#import "SBPasscodeEntryAlertViewDelegate-Protocol.h"
#import "SBUIPasscodeLockViewDelegate-Protocol.h"

@interface SBPasscodeEntryAlertViewController : SBAlert <SBPasscodeEntryAlertViewDelegate, SBUIPasscodeLockViewDelegate>
{
}

- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (void)passcodeEntryViewAnimatedOut:(id)arg1;
- (BOOL)hasTranslucentBackground;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;

@end

