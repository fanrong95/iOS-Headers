/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class AXEventHandInfoRepresentation, AXEventKeyInfoRepresentation, NSData, NSString;

@interface AXEventRepresentation : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isBuiltIn;
    BOOL _isGeneratedEvent;
    unsigned int _type;
    int _subtype;
    int _flags;
    AXEventHandInfoRepresentation *_handInfo;
    AXEventKeyInfoRepresentation *_keyInfo;
    NSString *_clientId;
    unsigned int _taskPort;
    unsigned int _contextId;
    void *_window;
    int _pid;
    NSData *_data;
    NSData *_HIDAttributeData;
    struct CGPoint _location;
    struct CGPoint _windowLocation;
    unsigned long long _time;
    unsigned long long _HIDTime;
    unsigned long long _additionalFlags;
    unsigned long long _HIDSenderId;
}

+ (id)touchRepresentationWithHandType:(unsigned int)arg1 location:(struct CGPoint)arg2;
+ (id)buttonRepresentationWithType:(unsigned int)arg1;
+ (id)keyRepresentationWithType:(unsigned int)arg1;
+ (id)representationWithEventRecord:(CDStruct_74958489 *)arg1;
+ (id)representationWithHIDEvent:(struct __IOHIDEvent *)arg1 hidStreamIdentifier:(id)arg2;
+ (id)representationWithLocation:(struct CGPoint)arg1 windowLocation:(struct CGPoint)arg2 handInfo:(id)arg3;
+ (id)_keyboardButtonEvent:(struct __IOHIDEvent *)arg1;
+ (id)_digitizerRepresentation:(struct __IOHIDEvent *)arg1 hidStreamIdentifier:(id)arg2;
+ (id)representationWithType:(unsigned int)arg1 subtype:(int)arg2 time:(unsigned long long)arg3 location:(struct CGPoint)arg4 windowLocation:(struct CGPoint)arg5 handInfo:(id)arg6;
+ (id)representationWithData:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long HIDSenderId; // @synthesize HIDSenderId=_HIDSenderId;
@property(retain, nonatomic) NSData *HIDAttributeData; // @synthesize HIDAttributeData=_HIDAttributeData;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) void *window; // @synthesize window=_window;
@property(nonatomic) BOOL isGeneratedEvent; // @synthesize isGeneratedEvent=_isGeneratedEvent;
@property(nonatomic) BOOL isBuiltIn; // @synthesize isBuiltIn=_isBuiltIn;
@property(nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
@property(nonatomic) unsigned long long additionalFlags; // @synthesize additionalFlags=_additionalFlags;
@property(nonatomic) unsigned long long HIDTime; // @synthesize HIDTime=_HIDTime;
@property(nonatomic) unsigned int taskPort; // @synthesize taskPort=_taskPort;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) AXEventKeyInfoRepresentation *keyInfo; // @synthesize keyInfo=_keyInfo;
@property(retain, nonatomic) AXEventHandInfoRepresentation *handInfo; // @synthesize handInfo=_handInfo;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(nonatomic) struct CGPoint windowLocation; // @synthesize windowLocation=_windowLocation;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) int subtype; // @synthesize subtype=_subtype;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)description;
- (unsigned int)firstPathContextId;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __GSEvent *)newGSEventRef;
- (CDStruct_74958489 *)newEventRecord;
- (struct __IOHIDEvent *)_newHandHIDEventRef;
- (id)denormalizedEventRepresentation:(BOOL)arg1;
- (id)normalizedEventRepresentation:(BOOL)arg1;
- (struct __IOHIDEvent *)_newButtonHIDEventRef;
- (struct __IOHIDEvent *)_newKeyboardHIDEventRef;
- (struct __IOHIDEvent *)newHIDEventRef;
- (unsigned int)_contextIDFromHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)dataRepresentation;

@end

