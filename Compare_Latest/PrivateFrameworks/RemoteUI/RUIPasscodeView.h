/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RemoteUI/RUIElement.h>

#import "PSPasscodeFieldDelegate-Protocol.h"

@class PSPasscodeField, RUIObjectModel, UILabel, UIView;

@interface RUIPasscodeView : RUIElement <PSPasscodeFieldDelegate>
{
    UIView *_view;
    UILabel *_label;
    UIView *_footer;
    RUIObjectModel *_objectModel;
    PSPasscodeField *_passcodeField;
}

@property(readonly, nonatomic) PSPasscodeField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property(nonatomic) RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
- (void)dealloc;
- (void)submitPIN;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)remoteUILinkFooterActivatedLink:(id)arg1;
- (void)viewDidLayout;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (id)pinView;

@end

