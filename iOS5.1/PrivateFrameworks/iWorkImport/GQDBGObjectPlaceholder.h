/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDBGPlaceholder.h>

#import "GQDNameMappable-Protocol.h"

@class GQDDrawable;

@interface GQDBGObjectPlaceholder : GQDBGPlaceholder <GQDNameMappable>
{
    char *mContentType;
    GQDDrawable *mDrawable;
}

+ (const struct StateSpec *)stateForReading;
- (void)dealloc;
- (id)drawable;

@end
