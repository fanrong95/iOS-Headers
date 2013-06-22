/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MBDigest : NSObject
{
}

+ (id)sha1ForString:(id)arg1;
+ (id)sha1ForFileAtPath:(id)arg1 error:(id *)arg2;
+ (id)sha1ForData:(id)arg1;
+ (id)sha1;
- (id)final;
- (void)finalWithBytes:(void *)arg1 length:(unsigned int)arg2;
- (void)updateWithString:(id)arg1;
- (BOOL)updateWithFile:(id)arg1 error:(id *)arg2;
- (void)updateWithDate:(id)arg1;
- (void)updateWithData:(id)arg1;
- (void)updateWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (void)updateWithInt64:(long long)arg1;
- (void)updateWithInt32:(int)arg1;

@end

