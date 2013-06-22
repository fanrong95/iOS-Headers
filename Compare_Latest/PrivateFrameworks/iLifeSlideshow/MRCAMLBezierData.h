/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MRCAMLBezierData : NSObject
{
    double ax;
    double bx;
    double cx;
    double ay;
    double by;
    double cy;
}

- (double)evaluate_inverseAtTime:(double)arg1;
- (double)evaluatAtTime:(double)arg1;
- (double)solve_y:(double)arg1 epsilon:(double)arg2;
- (double)solve_x:(double)arg1 epsilon:(double)arg2;
- (double)sample_y_derivative:(double)arg1;
- (double)sample_x_derivative:(double)arg1;
- (double)sample_y:(double)arg1;
- (double)sample_x:(double)arg1;
- (id)initWithTimingFunction:(id)arg1;
- (id)initWithControlPoints:(const double *)arg1;

@end

