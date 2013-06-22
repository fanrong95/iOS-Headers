/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSSet;

@interface ML3ContainmentPredicate : ML3PropertyPredicate
{
    NSSet *_values;
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;
@property(retain, nonatomic) NSSet *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)description;
- (unsigned int)hash;
- (id)_orderedValues;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 values:(id)arg2;

@end

