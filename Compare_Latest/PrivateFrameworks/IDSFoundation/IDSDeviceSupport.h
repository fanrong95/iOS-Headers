/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IDSDeviceSupport : NSObject
{
    NSString *_model;
    NSString *_productName;
    NSString *_productVersion;
    NSString *_buildVersion;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *deviceInformationString;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *userAgentString;
- (void)_generateProductInformation;
@property(readonly, nonatomic) NSString *model;
- (void)dealloc;
- (id)init;

@end

