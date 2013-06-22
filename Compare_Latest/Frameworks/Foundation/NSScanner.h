/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface NSScanner : NSObject <NSCopying>
{
}

+ (id)localizedScannerWithString:(id)arg1;
+ (id)scannerWithString:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)setLocale:(id)arg1;
- (void)setCaseSensitive:(BOOL)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;
- (unsigned int)scanLocation;
- (void)setScanLocation:(unsigned int)arg1;
- (id)string;
- (id)locale;
- (BOOL)caseSensitive;
- (id)charactersToBeSkipped;
- (BOOL)isAtEnd;
- (BOOL)scanUpToString:(id)arg1 intoString:(id *)arg2;
- (BOOL)scanString:(id)arg1 intoString:(id *)arg2;
- (BOOL)scanUpToCharactersFromSet:(id)arg1 intoString:(id *)arg2;
- (BOOL)scanCharactersFromSet:(id)arg1 intoString:(id *)arg2;
- (BOOL)scanHexInt:(unsigned int *)arg1;
- (BOOL)scanHexLongLong:(unsigned long long *)arg1;
- (BOOL)scanUnsignedInteger:(unsigned int *)arg1;
- (BOOL)scanInteger:(int *)arg1;
- (BOOL)scanInt:(int *)arg1;
- (BOOL)scanLongLong:(long long *)arg1;
- (BOOL)scanUnsignedLongLong:(unsigned long long *)arg1;
- (BOOL)scanHexFloat:(float *)arg1;
- (BOOL)scanHexDouble:(double *)arg1;
- (BOOL)scanFloat:(float *)arg1;
- (BOOL)scanDouble:(double *)arg1;
- (id)_invertedSkipSet;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1;
- (BOOL)_scanDecimal:(unsigned int)arg1 into:(int *)arg2;
- (id)_remainingString;
- (BOOL)scanDecimal:(CDStruct_5fe7aead *)arg1;

@end

