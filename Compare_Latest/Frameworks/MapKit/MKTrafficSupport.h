/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MKTrafficSupport : NSObject
{
}

+ (id)sharedTrafficSupport;
- (struct CGImage *)imageForIncidentType:(int)arg1 contentScale:(float)arg2;
- (struct CGImage *)imageForGEOIncidentType:(int)arg1 contentScale:(float)arg2;
- (id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2;
- (id)localizedTitleForIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned int)arg3;
- (id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned int)arg3;
- (int)_convertType:(int)arg1;
- (void)setupTrafficIncidents;

@end

