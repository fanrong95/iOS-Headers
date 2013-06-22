/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CAStateElement.h>

@class CAAnimation, NSString;

@interface CAStateAddAnimation : CAStateElement
{
    NSString *_key;
    CAAnimation *_animation;
}

@property(retain, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)apply:(id)arg1;
- (BOOL)matches:(id)arg1;
- (id)keyPath;

@end

