/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CUIPSDLayer : NSObject
{
    float _opacity;
    int _blendMode;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
- (void)dealloc;
- (id)init;

@end

