//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIPopoverControllerDelegate.h"

@class UIPopoverController, UIViewController;

__attribute__((visibility("hidden")))
@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate>
{
    int _type;
    UIViewController *_modalViewController;
    UIPopoverController *_popoverController;
    BOOL _isTextEffectsWindow;
    BOOL _dismissed;
    CDUnknownBlockType _dismissedHandler;
}

+ (id)showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
+ (BOOL)canShowTextServices;
@property(copy, nonatomic) CDUnknownBlockType dismissedHandler; // @synthesize dismissedHandler=_dismissedHandler;
- (void)_endSession;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissTextServiceAnimated:(BOOL)arg1;
- (BOOL)isDisplaying;
- (void)dealloc;
- (void)sessionDidDismiss;
- (id)init;
- (id)initWithType:(int)arg1;

@end

