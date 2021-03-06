//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PKPaymentOptionGroupItem : NSObject
{
    NSString *_groupType;
    id _referenceObject;
    NSString *_title;
    NSString *_detail;
}

+ (id)_singleLineGroupTypes;
@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id referenceObject; // @synthesize referenceObject=_referenceObject;
@property(readonly, nonatomic) NSString *groupType; // @synthesize groupType=_groupType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOptionGroupItem:(id)arg1;
@property(readonly, nonatomic) BOOL isSelectable;
@property(readonly, nonatomic) Class tableViewCellClass;
- (void)dealloc;
- (id)initWithReferenceObject:(id)arg1 title:(id)arg2 detail:(id)arg3 groupType:(id)arg4;

@end

