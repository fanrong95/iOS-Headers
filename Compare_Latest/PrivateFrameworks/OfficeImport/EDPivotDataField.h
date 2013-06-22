/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface EDPivotDataField : NSObject
{
    long mBaseField;
    unsigned long mBaseItem;
    unsigned long mFieldId;
    unsigned long mNumFmtId;
    NSString *mName;
    int mFormat;
}

+ (id)pivotDataField;
- (void)setShowDataAs:(int)arg1;
- (int)showDataAs;
- (void)setName:(id)arg1;
- (id)name;
- (void)setNumFmtId:(unsigned long)arg1;
- (unsigned long)numFmtId;
- (void)setFieldId:(unsigned long)arg1;
- (unsigned long)fieldId;
- (void)setBaseItem:(unsigned long)arg1;
- (unsigned long)baseItem;
- (void)setBaseField:(long)arg1;
- (long)baseField;
- (void)dealloc;
- (id)init;

@end

