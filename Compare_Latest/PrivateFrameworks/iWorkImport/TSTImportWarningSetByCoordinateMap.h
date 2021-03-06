//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSTImportWarningSetByCoordinateMap : NSObject
{
    struct unordered_map<TSUColumnRowCoordinate, SFUtility::ObjcSharedPtr<TSTImportWarningSet>, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, SFUtility::ObjcSharedPtr<TSTImportWarningSet>>>> _warningSetForCoordinate;
    vector_40b16ab8 _coordinates;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchive:(struct ImportWarningSetByCoordinateMapArchive *)arg1;
- (id)initFromArchive:(const struct ImportWarningSetByCoordinateMapArchive *)arg1;
- (id)warningSetAtCoordinate:(CDStruct_0441cfb5)arg1;
- (CDStruct_0441cfb5)cellCoordinateForIndex:(unsigned int)arg1;
- (void)addWarning:(id)arg1 atCellCoordinate:(CDStruct_0441cfb5)arg2;
@property(readonly) unsigned int count;

@end

