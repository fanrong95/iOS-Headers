/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol _UIQueuingScrollViewDelegate <NSObject>
- (BOOL)queuingScrollViewShouldLayoutSubviews:(id)arg1;
- (void)queuingScrollViewDidFinishScrolling:(id)arg1;
- (void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
- (void)queuingScrollView:(id)arg1 didEndManualScroll:(BOOL)arg2 toRevealView:(id)arg3 direction:(int)arg4 animated:(BOOL)arg5 didFinish:(BOOL)arg6 didComplete:(BOOL)arg7;
- (void)queuingScrollView:(id)arg1 didCommitManualScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(int)arg5 animated:(BOOL)arg6 canComplete:(BOOL)arg7;
- (void)queuingScrollView:(id)arg1 willManuallyScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(BOOL)arg5;
@end

