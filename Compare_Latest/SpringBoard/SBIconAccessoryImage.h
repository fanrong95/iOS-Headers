//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

#import "SBCountedMapValue.h"

@class NSString;

@interface SBIconAccessoryImage : UIImage <SBCountedMapValue>
{
    NSString *_countedMapKey;
}

@property(copy, nonatomic) NSString *countedMapKey; // @synthesize countedMapKey=_countedMapKey;
- (void)dealloc;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

