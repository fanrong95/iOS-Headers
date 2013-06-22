/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL;

@interface WFBlockPage : NSObject
{
    NSURL *pageTemplateURL;
    NSString *userVisibleURLString;
    NSString *formActionURLString;
    NSString *preferredLanguage;
}

@property(retain) NSString *formActionURLString; // @synthesize formActionURLString;
@property(retain) NSString *userVisibleURLString; // @synthesize userVisibleURLString;
@property(readonly) NSURL *pageTemplateURL; // @synthesize pageTemplateURL;
- (id)page;
- (id)_css;
- (id)_fileContentWithName:(id)arg1 extension:(id)arg2;
- (id)_blockpage;
- (void)dealloc;
- (id)_initWithUsername:(id)arg1 fileName:(id)arg2;
- (id)initWithUsername:(id)arg1 overridesAllowded:(BOOL)arg2;
- (id)initNoOveridePageWithUsername:(id)arg1;

@end

