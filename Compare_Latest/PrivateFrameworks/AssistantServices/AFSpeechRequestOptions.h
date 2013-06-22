/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding>
{
    BOOL _isEyesFree;
    BOOL _useAutomaticEndpointing;
    int _event;
    NSString *_btDeviceAddress;
    NSString *_serverCommandId;
    double _activationEventTime;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double activationEventTime; // @synthesize activationEventTime=_activationEventTime;
@property(nonatomic) BOOL useAutomaticEndpointing; // @synthesize useAutomaticEndpointing=_useAutomaticEndpointing;
@property(copy, nonatomic) NSString *serverCommandId; // @synthesize serverCommandId=_serverCommandId;
@property(nonatomic) BOOL isEyesFree; // @synthesize isEyesFree=_isEyesFree;
@property(copy, nonatomic) NSString *btDeviceAddress; // @synthesize btDeviceAddress=_btDeviceAddress;
@property(nonatomic) int activationEvent; // @synthesize activationEvent=_event;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActivationEvent:(int)arg1;

@end

