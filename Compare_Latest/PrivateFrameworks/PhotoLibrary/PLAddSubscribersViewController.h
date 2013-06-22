/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLComposeRecipientViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class PLCloudSharedAlbum, PLComposeRecipientViewController;

@interface PLAddSubscribersViewController : UIViewController <PLComposeRecipientViewControllerDelegate, UIAlertViewDelegate>
{
    PLComposeRecipientViewController *_composeRecipientController;
    PLCloudSharedAlbum *_album;
}

@property(readonly, nonatomic) PLCloudSharedAlbum *album; // @synthesize album=_album;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)_validateRecipientsToAdd:(id)arg1;
- (void)_saveAndDismiss;
- (void)_dismiss;
- (void)_cancelButtonHandler;
- (void)_addButtonHandler;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)contentScrollView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithSharedStream:(id)arg1;

@end

