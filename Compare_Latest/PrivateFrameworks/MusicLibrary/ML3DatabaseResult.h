/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3DatabaseStatement, NSDictionary;

@interface ML3DatabaseResult : NSObject
{
    ML3DatabaseStatement *_statement;
    NSDictionary *_columnNameIndexMap;
}

@property(readonly, nonatomic) ML3DatabaseStatement *statement; // @synthesize statement=_statement;
- (void).cxx_destruct;
- (id)stringValueForFirstRowAndColumn;
- (long long)int64ValueForFirstRowAndColumn;
- (id)objectForFirstRowAndColumn;
- (BOOL)hasAtLeastOneRow;
- (id)rows;
- (void)enumerateRowsWithBlock:(id)arg1;
- (id)columnNameIndexMap;
- (unsigned int)indexForColumnName:(id)arg1;
- (void)dealloc;
- (id)initWithStatement:(id)arg1;
- (id)init;

@end

