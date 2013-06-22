/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVMediaSelectionOption, NSString;

@interface MPAlternateTrack : NSObject
{
    NSString *_displayName;
    NSString *_canonicalLanguageIdentifier;
    AVMediaSelectionOption *_option;
}

+ (id)threeCharCodesForEncodedISO639_2_T:(id)arg1;
@property(readonly, nonatomic) AVMediaSelectionOption *option; // @synthesize option=_option;
@property(readonly, nonatomic) NSString *canonicalLanguageIdentifier; // @synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)_setDisplayNameFromOption:(id)arg1;
- (id)description;
- (int)compare:(id)arg1;
- (id)initWithOption:(id)arg1;

@end

