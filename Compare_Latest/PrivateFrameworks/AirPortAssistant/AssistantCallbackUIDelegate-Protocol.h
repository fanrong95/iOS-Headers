/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol AssistantCallbackUIDelegate
- (void)callbackAskCancel;

@optional
- (long)callbackAskUserAQuestion:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
- (long)callbackAskUserToChooseFromStringList:(id)arg1 context:(int)arg2 forController:(id)arg3;
- (long)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3;
@end

