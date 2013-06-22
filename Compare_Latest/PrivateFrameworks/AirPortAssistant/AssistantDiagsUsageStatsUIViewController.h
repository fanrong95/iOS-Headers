/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AirPortAssistant/AssistantSubUIViewController.h>

#import "TableViewManagerDelegate-Protocol.h"
#import "TextLinkButtonDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class TextLinkButton, UIView;

@interface AssistantDiagsUsageStatsUIViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate, TextLinkButtonDelegate>
{
    UIView *tableHeaderContainerView;
    UIView *_blankTopView;
    UIView *_linkContainerView;
    TextLinkButton *linkButton;
    id previousNavDelegate;
}

@property(retain, nonatomic) UIView *blankTopView; // @synthesize blankTopView=_blankTopView;
@property(retain, nonatomic) UIView *tableHeaderContainerView; // @synthesize tableHeaderContainerView;
@property(retain, nonatomic) UIView *linkContainerView; // @synthesize linkContainerView=_linkContainerView;
- (void)handleTextLinkTap;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setUpInitialTableFooter;
- (void)setUpInitialTableHeaderConfiguration;

@end

