/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CUICatalog, NSString, _UICache;

@interface _UIAssetManager : NSObject
{
    _UICache *_imageCache;
    CUICatalog *_catalog;
    NSString *_assetManagerName;
    int _preferredIdiom;
    float _preferredScale;
    unsigned int _preferredIdiomSubtype;
    _UIAssetManager *_nextAssetManager;
}

+ (id)assetManagerForBundle:(id)arg1;
@property(nonatomic) float preferredScale; // @synthesize preferredScale=_preferredScale;
@property(retain, nonatomic) _UIAssetManager *nextAssetManager; // @synthesize nextAssetManager=_nextAssetManager;
- (id)description;
- (void)disableCacheFlushing;
@property(readonly, nonatomic) NSString *carFileName;
- (id)_catalog;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 idiom:(int)arg2;
- (id)imageNamed:(id)arg1 idiom:(int)arg2 subtype:(unsigned int)arg3;
- (id)imageNamed:(id)arg1 scale:(float)arg2 idiom:(int)arg3 subtype:(unsigned int)arg4;
- (id)imageNamed:(id)arg1 scale:(float)arg2 idiom:(int)arg3 subtype:(unsigned int)arg4 cachingOptions:(unsigned int)arg5;
- (void)dealloc;
- (id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(int)arg3;

@end

