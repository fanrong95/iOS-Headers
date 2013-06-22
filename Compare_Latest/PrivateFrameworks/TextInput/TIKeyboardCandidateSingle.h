/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TextInput/TIKeyboardCandidate.h>

@class NSString;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate
{
    NSString *_candidate;
    NSString *_input;
}

+ (int)type;
+ (id)candidateWithUnchangedInput:(id)arg1;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(copy, nonatomic) NSString *candidate; // @synthesize candidate=_candidate;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithUnchangedInput:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2;
- (id)initWithCandidate:(id)arg1;

@end

