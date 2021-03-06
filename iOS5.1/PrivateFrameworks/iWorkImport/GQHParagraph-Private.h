/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQHParagraph.h>

@interface GQHParagraph (Private)
+ (int)handleLink:(id)arg1 state:(id)arg2;
+ (int)handleBookmark:(id)arg1 state:(id)arg2;
+ (BOOL)setupBulletStatesForParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary *)arg4;
+ (struct __CFDictionary *)prepareBullet:(id)arg1 paragraph:(id)arg2 style:(id)arg3 state:(id)arg4 bulletStates:(struct __CFDictionary *)arg5 showBullet:(BOOL)arg6;
+ (void)mapBullet:(struct __CFDictionary *)arg1 state:(id)arg2;
+ (id)getBulletStyle:(id)arg1 level:(int)arg2;
+ (BOOL)retrieveFontSizeForFirstCharacter:(id)arg1 fontSize:(float *)arg2;
+ (int)mapParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary *)arg4 isMultiColumn:(BOOL)arg5;
@end

