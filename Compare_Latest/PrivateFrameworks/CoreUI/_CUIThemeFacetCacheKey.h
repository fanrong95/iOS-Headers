/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface _CUIThemeFacetCacheKey : NSObject
{
    struct _renditionkeytoken keyList[16];
    int themeIndex;
    unsigned long long hashPrecalc;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithKeyList:(const struct _renditionkeytoken *)arg1 themeIndex:(int)arg2;
- (unsigned long long)hash64;

@end

