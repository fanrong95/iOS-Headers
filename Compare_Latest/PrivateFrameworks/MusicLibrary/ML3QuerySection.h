/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ML3QuerySection : NSObject
{
    unsigned int _sectionIndex;
    struct _NSRange _range;
}

@property(nonatomic) unsigned int sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithRange:(struct _NSRange)arg1 sectionIndex:(unsigned int)arg2;

@end

