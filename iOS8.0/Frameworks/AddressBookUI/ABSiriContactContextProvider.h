//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFContextProvider.h"

@class CNContact;

@interface ABSiriContactContextProvider : NSObject <AFContextProvider>
{
    CNContact *_contact;
}

- (void)_removeContextProviderOnMainThread;
- (id)contextManager;
- (void)setEnabled:(BOOL)arg1;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

@end
