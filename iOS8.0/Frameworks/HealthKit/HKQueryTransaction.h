//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKObjectType, NSNumber;

@interface HKQueryTransaction : NSObject
{
    HKObjectType *_dataType;
    NSNumber *_anchor;
}

- (void).cxx_destruct;
- (void)closeTransaction;
- (id)initWithDataType:(id)arg1 anchor:(id)arg2;

@end
