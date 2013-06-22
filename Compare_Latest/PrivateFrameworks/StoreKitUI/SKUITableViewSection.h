/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SKUITableViewSection : NSObject
{
    BOOL _hidesHeaderView;
    int _sectionIndex;
}

@property(nonatomic) int sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) BOOL hidesHeaderView; // @synthesize hidesHeaderView=_hidesHeaderView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
@property(readonly, nonatomic) int numberOfRowsInSection;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)headerViewForTableView:(id)arg1;

@end

