/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying>
{
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st {
        unsigned int _readOnly:1;
        unsigned int _reservedFlags:31;
    } _cd_flags;
    unsigned int _cd_nullFlags_;
}

+ (void)initialize;
+ (Class)classForEntity:(id)arg1;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)_entityDeallocated;
+ (unsigned int)newBatchAllocation:(id *)arg1 count:(unsigned int)arg2 withOwnedObjectIDs:(id *)arg3;
- (id)initWithObjectID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned int)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)finalize;
- (void)dealloc;
- (id)_descriptionValues;
- (id)description;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)entity;
- (id)objectID;

@end

