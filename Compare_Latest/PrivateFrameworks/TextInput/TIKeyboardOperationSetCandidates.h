/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TextInput/TIKeyboardOperation.h>

@class TIKeyboardCandidateResultSet, TIKeyboardOperationSetMarkedText;

@interface TIKeyboardOperationSetCandidates : TIKeyboardOperation
{
    TIKeyboardCandidateResultSet *_candidateSet;
    TIKeyboardOperationSetMarkedText *_documentOperation;
}

+ (id)operationWithCandidateResultSet:(id)arg1;
+ (id)operationWithCandidateResultSet:(id)arg1 documentOperation:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) TIKeyboardOperationSetMarkedText *documentOperation; // @synthesize documentOperation=_documentOperation;
@property(readonly, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
- (id)propertiesForDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCandidateResultSet:(id)arg1 documentOperation:(id)arg2;
- (void)dealloc;

@end

