/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MCDeviceCapabilities : NSObject
{
    BOOL _supportsBlockLevelEncryption;
    BOOL _supportsFileLevelEncryption;
}

+ (id)currentDevice;
- (BOOL)_mediaDiskIsEncrypted;
- (id)init;
- (BOOL)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id *)arg3;
@property(readonly) BOOL supportsFileLevelEncryption; // @synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption;
@property(readonly) BOOL supportsBlockLevelEncryption; // @synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption;

@end
