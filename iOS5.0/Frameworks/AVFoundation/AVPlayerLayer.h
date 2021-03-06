/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class AVPlayer, AVPlayerLayerInternal, NSString;

@interface AVPlayerLayer : CALayer
{
    AVPlayerLayerInternal *_playerLayer;
}

+ (id)playerLayerWithPlayer:(id)arg1;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_addAnimationsForContentLayer:(id)arg1 size:(struct CGSize)arg2 gravity:(id)arg3;
- (void)_addAnimationsForSubtitleLayer:(id)arg1 size:(struct CGSize)arg2;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)dealloc;
- (void)finalize;
- (void)_connectContentLayerToPlayer;
- (void)_disconnectContentLayerFromPlayer;
- (struct CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)arg1;
- (void)_updatePresentationSize:(struct CGSize)arg1;
- (void)_updateSubtitleLayerForPlayerLayerBounds:(struct CGRect)arg1 presentationSize:(struct CGSize)arg2 playLayerTransform:(struct CATransform3D)arg3;
- (void)_setHasPlayerToObserve:(int)arg1 andShouldObserveIt:(int)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) AVPlayer *player;
- (void)layerDidBecomeVisible:(BOOL)arg1;
@property(copy) NSString *videoGravity;
@property(readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay; // @dynamic readyForDisplay;
- (void)_setItem:(id)arg1 readyForDisplay:(BOOL)arg2;
- (BOOL)_subtitleDisplayEnabled;
- (void)_setSubtitleDisplayEnabled:(BOOL)arg1;
- (id)_subtitleGravity;
- (void)_setSubtitleGravity:(id)arg1;
- (BOOL)isOverscanSubtitleSupportEnabled;
- (void)setOverscanSubtitleSupportEnabled:(BOOL)arg1;
- (float)_pctOfSubtitleLayerHeight;
- (struct CGRect)_videoRect;
- (struct CGRect)_videoRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_minRectToFitVideoAndSubtitlesInBounds:(struct CGRect)arg1;

@end

