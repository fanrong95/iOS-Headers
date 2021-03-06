//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving.h"
#import "KNFrameBuildAnimator.h"

@class KNAnimParameterGroup, NSArray, TSDGLBloomEffect, TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader, TSDGLTextureInfo;

__attribute__((visibility("hidden")))
@interface KNBuildFireworks : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving>
{
    KNAnimParameterGroup *_parameterGroup;
    struct CGRect _drawableFrame;
    struct CGRect _frameRect;
    struct CATransform3D _baseOrthoTransform;
    struct CATransform3D _baseTransform;
    int _oldViewportRect[4];
    NSArray *_fireworksSystems;
    TSDGLShader *_fireworksShader;
    TSDGLShader *_objectShader;
    TSDGLDataBuffer *_objectDataBuffer;
    TSDGLShader *_centerBurstShader;
    TSDGLDataBuffer *_centerBurstDataBuffer;
    TSDGLTextureInfo *_centerBurstTextureInfo;
    TSDGLTextureInfo *_particleTextureInfo;
    TSDGLFrameBuffer *_framebuffer;
    TSDGLShader *_fboShader;
    TSDGLDataBuffer *_fboDataBuffer;
    TSDGLBloomEffect *_bloomEffect;
    float _previousPercent;
    BOOL _shouldApplyBloomEffect;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (BOOL)requiresSingleTexturePerStage;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)animationDidEndForTextures:(id)arg1 forBuild:(id)arg2;
- (void)renderFrameWithContext:(id)arg1;
- (void)p_drawParticleSystemsWithPercent:(float)arg1 sparkles:(BOOL)arg2 particleSystemOpacity:(float)arg3 context:(id)arg4;
- (void)p_drawObject:(id)arg1 withContext:(id)arg2;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)p_setupFBOWithSize:(struct CGSize)arg1;
- (id)p_fireworksSystemsForTR:(id)arg1 build:(id)arg2 context:(id)arg3;
- (void)p_setupParticleTexture;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;

@end

