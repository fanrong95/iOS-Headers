/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface BKSCFBundle : NSObject
{
    struct __CFBundle *_cfBundle;
}

- (struct __CFBundle *)cfBundle;
- (id)localizedInfoDictionary;
- (id)infoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)bundlePath;
- (id)bundleIdentifier;
- (id)executablePath;
- (void)dealloc;
- (id)initWithCFBundle:(struct __CFBundle *)arg1;
- (id)initWithPath:(id)arg1;

@end

