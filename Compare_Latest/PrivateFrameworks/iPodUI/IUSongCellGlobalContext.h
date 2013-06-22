/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUMediaItemCellGlobalContext.h>

@class NSMutableSet;

@interface IUSongCellGlobalContext : IUMediaItemCellGlobalContext
{
    NSMutableSet *_displayedStringProperties;
    BOOL _hasIndexBar;
    unsigned int _showAlbumSubtitle:1;
    unsigned int _showArtistSubtitle:1;
    id _aggregateProperties;
}

@property(nonatomic) BOOL hasIndexBar; // @synthesize hasIndexBar=_hasIndexBar;
@property(retain, nonatomic) id aggregateProperties; // @synthesize aggregateProperties=_aggregateProperties;
- (void).cxx_destruct;
@property(nonatomic) BOOL showArtistSubtitle;
@property(nonatomic) BOOL showAlbumSubtitle;
- (BOOL)showsValueForProperty:(id)arg1;
- (void)setShowsValue:(BOOL)arg1 forProperty:(id)arg2;
- (void)dealloc;
- (id)initWithPropertiesFromDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;

@end

