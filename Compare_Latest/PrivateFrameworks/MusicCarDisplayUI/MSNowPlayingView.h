/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface MSNowPlayingView : UIView
{
    UIImageView *_backgroundGradientView;
    id <MSNowPlayingViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_backgroundImageView;
    UIButton *_backButton;
    UIButton *_menuButton;
    UIButton *_seekMusicButton;
}

@property(readonly, nonatomic) UIButton *seekMusicButton; // @synthesize seekMusicButton=_seekMusicButton;
@property(readonly, nonatomic) UIButton *menuButton; // @synthesize menuButton=_menuButton;
@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MSNowPlayingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_menuButtonTouchUpInside:(id)arg1;
- (void)_backButtonTouchUpInside:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

