//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

__attribute__((visibility("hidden")))
@interface VKLabelTile : VKTile
{
    shared_ptr_9eab1d88 _labelTile;
}

@property(readonly, nonatomic) shared_ptr_9eab1d88 labelTile; // @synthesize labelTile=_labelTile;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 tileType:(int)arg3 labelManager:(const shared_ptr_dd1f7020 *)arg4;

@end

