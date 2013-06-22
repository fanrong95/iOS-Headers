/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UIRemoteViewController.h"

#import "RCUIClientCurrentRecordingViewController-Protocol.h"

@interface RCCurrentRecordingRemoteViewController : _UIRemoteViewController <RCUIClientCurrentRecordingViewController>
{
    id <RCCurrentRecordingViewControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
@property(nonatomic) __weak id <RCCurrentRecordingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)currentRecordingDidEnd;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidLoad;

@end

