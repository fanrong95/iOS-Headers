/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUMediaQueriesDataSource.h>

@interface IUVideoPodcastsDataSource : IUMediaQueriesDataSource
{
}

+ (int)mediaEntityType;
+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;
- (id)viewControllerContextForMediaQuery:(id)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (BOOL)isRestorableNavigationPathNode;
- (id)createNoContentDataSource;

@end

