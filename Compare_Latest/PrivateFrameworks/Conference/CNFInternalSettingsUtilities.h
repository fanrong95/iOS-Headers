/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CNFInternalSettingsUtilities : NSObject
{
}

+ (void)setIDSEnvironment:(id)arg1;
+ (id)IDSEnvironment;
+ (void)setCurrentInternalSettingsBundle:(id)arg1;
+ (id)currentInternalSettingsBundle;
+ (void)signOutAllAccounts;
+ (void)nukeKeychain;
+ (void)killEverything;
+ (void)killFaceTime;
+ (void)killMediaServerd;
+ (void)syncImagentLogSettings;
+ (void)killImavagent;
+ (void)killImagent;
+ (void)setViceroyLoggingEnabled:(BOOL)arg1;
+ (BOOL)isViceroyLoggingEnabled;

@end

