/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuickLook/QLDisplayBundle.h>

#import "QLGenericViewDelegate-Protocol.h"

@class NSError, QLGenericView;

@interface QLGenericDisplayBundle : QLDisplayBundle <QLGenericViewDelegate>
{
    QLGenericView *_airplayView;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
- (void)genericViewDidClickOnArchiveButton:(id)arg1;
- (void)_showLoadingProgress:(BOOL)arg1;
- (void)discardAirPlayView;
- (void)setupAirPlayView;
- (id)airplayView;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)loadWithHints:(id)arg1;
- (void)_loadPreviewItemInfos;
- (void)loadView;
- (void)dealloc;

@end

