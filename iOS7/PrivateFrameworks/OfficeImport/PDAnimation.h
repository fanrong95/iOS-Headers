/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PDRootTimeNode, TSUNoCopyDictionary;

// Not exported
@interface PDAnimation : NSObject
{
    PDRootTimeNode *mRootTimeNode;
    TSUNoCopyDictionary *mBuildMap;
}

+ (void)initialize;
- (void)setBuildMap:(id)arg1;
- (id)buildMap;
- (id)addRootTimeNode;
- (id)rootTimeNode;
- (void)dealloc;
- (id)init;

@end

