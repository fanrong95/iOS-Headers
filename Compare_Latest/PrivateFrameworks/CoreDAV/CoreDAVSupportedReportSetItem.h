/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem
{
    NSMutableSet *_supportedReports;
}

+ (id)copyParseRules;
@property(retain) NSMutableSet *supportedReports; // @synthesize supportedReports=_supportedReports;
- (BOOL)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)addSupportedReport:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

