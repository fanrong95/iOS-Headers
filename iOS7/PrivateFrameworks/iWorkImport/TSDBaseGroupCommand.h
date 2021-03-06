/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommand.h>

@class NSArray, TSDGroupInfo;

// Not exported
@interface TSDBaseGroupCommand : TSKCommand
{
    NSArray *mDrawables;
    TSDGroupInfo *mGroup;
    id <TSDSubcommandProvider> mSubcommandProvider;
}

@property(readonly, nonatomic) TSDGroupInfo *group; // @synthesize group=mGroup;
@property(readonly, nonatomic) NSArray *drawables; // @synthesize drawables=mDrawables;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (_Bool)process;
- (void)dealloc;

@end

