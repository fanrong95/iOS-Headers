/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SBColorAdaptable-Protocol.h"

@class UIColor, UIImageView<SBColorAdaptable>;

@interface SBGrabberWrapper : UIView <SBColorAdaptable>
{
    UIImageView<SBColorAdaptable> *_imageView;
}

@property(retain, nonatomic) UIImageView<SBColorAdaptable> *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIColor *adaptiveColor;
- (void)dealloc;

@end

