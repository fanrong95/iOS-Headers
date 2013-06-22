/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SLSheetAction : NSObject
{
    BOOL _valuePending;
    NSString *_title;
    NSString *_value;
    int _actionType;
    id _actionBlock;
}

@property(copy, nonatomic) id actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) BOOL valuePending; // @synthesize valuePending=_valuePending;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 value:(id)arg2 actionBlock:(id)arg3;

@end

