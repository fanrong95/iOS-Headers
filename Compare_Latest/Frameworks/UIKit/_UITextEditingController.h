/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

@class UIButton, UILabel;

@interface _UITextEditingController : UIViewController
{
    UILabel *_title;
    UILabel *_smallTitle;
    UILabel *_description;
    UIButton *_doneButton;
}

+ (id)sharedEditingController;
- (void)configureForTextControl:(id)arg1;
- (void)_layoutEditingViews;
- (void)_doneButtonClicked;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

