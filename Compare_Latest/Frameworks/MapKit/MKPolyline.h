/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKMultiPoint.h>

#import "MKOverlay-Protocol.h"

@class NSString;

@interface MKPolyline : MKMultiPoint <MKOverlay>
{
}

+ (id)polylineWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
+ (id)polylineWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect;
- (BOOL)intersectsMapRect:(CDStruct_90e2a262)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)_calculateBounds;

// Remaining properties
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;

@end

