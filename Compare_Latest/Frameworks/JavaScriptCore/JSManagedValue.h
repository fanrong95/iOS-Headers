/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface JSManagedValue : NSObject
{
    struct Weak<JSC::JSObject> m_value;
}

+ (id)managedValueWithValue:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)value;
- (id)initWithValue:(id)arg1;
- (id)init;

@end

