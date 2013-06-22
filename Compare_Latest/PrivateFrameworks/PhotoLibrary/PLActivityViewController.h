/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIActivityViewController.h"

@class NSArray, UIViewController;

@interface PLActivityViewController : UIActivityViewController
{
    NSArray *_photosActivities;
    UIViewController *_referenceViewController;
    id <PLActivityViewControllerDelegate> _delegate;
    int _idiom;
    int _mode;
}

+ (void)trackUserActivity:(id)arg1 forAssets:(id)arg2;
+ (id)applicationActivitiesForMode:(int)arg1;
+ (id)_defaultActivityTypeOrderForActivities:(id)arg1;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) int idiom; // @synthesize idiom=_idiom;
@property(nonatomic) id <PLActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *referenceViewController; // @synthesize referenceViewController=_referenceViewController;
@property(readonly, nonatomic) NSArray *photosActivities; // @synthesize photosActivities=_photosActivities;
- (void)_cleanupWithSuccess:(BOOL)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)setPublishingActivityDelegate:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithManagedAssets:(id)arg1 forMode:(int)arg2;
- (id)initWithManagedAssets:(id)arg1 forMode:(int)arg2 additionalActivities:(id)arg3;

@end

