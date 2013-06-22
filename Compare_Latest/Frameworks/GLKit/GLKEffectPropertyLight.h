/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GLKit/GLKEffectProperty.h>

@class GLKEffectPropertyTransform;

@interface GLKEffectPropertyLight : GLKEffectProperty
{
    unsigned char _enabled;
    union _GLKVector4 _position;
    union _GLKVector4 _ambientColor;
    union _GLKVector4 _diffuseColor;
    union _GLKVector4 _specularColor;
    union _GLKVector3 _spotDirection;
    float _spotExponent;
    float _spotCutoff;
    float _constantAttenuation;
    float _linearAttenuation;
    float _quadraticAttenuation;
    GLKEffectPropertyTransform *_transform;
    unsigned char _positionEyeStale;
    unsigned char _firstLight;
    float _spotCutoffDegrees;
    unsigned long long *_effectDirtyUniforms;
    int _positionEyeLoc;
    int _ambientLoc;
    int _diffuseLoc;
    int _specularLoc;
    int _normalizedSpotDirectionEyeLoc;
    int _spotExponentLoc;
    int _spotCutoffLoc;
    int _constantAttenuationLoc;
    int _linearAttenuationLoc;
    int _quadraticAttenuationLoc;
    int _normalizeLoc;
    int _ambientTermLoc;
    int _lightIndex;
    int _lightingType;
    union _GLKVector3 _normalizedSpotDirectionEye;
    union _GLKVector4 _positionEye;
    struct GLKBigInt_s _allVshMasks;
    struct GLKBigInt_s _allFshMasks;
}

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
@property(readonly, nonatomic) struct GLKBigInt_s allFshMasks; // @synthesize allFshMasks=_allFshMasks;
@property(readonly, nonatomic) struct GLKBigInt_s allVshMasks; // @synthesize allVshMasks=_allVshMasks;
@property(nonatomic) unsigned char firstLight; // @synthesize firstLight=_firstLight;
@property(nonatomic) int lightingType; // @synthesize lightingType=_lightingType;
@property(nonatomic) int lightIndex; // @synthesize lightIndex=_lightIndex;
@property(nonatomic) int ambientTermLoc; // @synthesize ambientTermLoc=_ambientTermLoc;
@property(nonatomic) int normalizeLoc; // @synthesize normalizeLoc=_normalizeLoc;
@property(nonatomic) int quadraticAttenuationLoc; // @synthesize quadraticAttenuationLoc=_quadraticAttenuationLoc;
@property(nonatomic) int linearAttenuationLoc; // @synthesize linearAttenuationLoc=_linearAttenuationLoc;
@property(nonatomic) int constantAttenuationLoc; // @synthesize constantAttenuationLoc=_constantAttenuationLoc;
@property(nonatomic) int spotCutoffLoc; // @synthesize spotCutoffLoc=_spotCutoffLoc;
@property(nonatomic) int spotExponentLoc; // @synthesize spotExponentLoc=_spotExponentLoc;
@property(nonatomic) int normalizedSpotDirectionEyeLoc; // @synthesize normalizedSpotDirectionEyeLoc=_normalizedSpotDirectionEyeLoc;
@property(nonatomic) int specularLoc; // @synthesize specularLoc=_specularLoc;
@property(nonatomic) int diffuseLoc; // @synthesize diffuseLoc=_diffuseLoc;
@property(nonatomic) int ambientLoc; // @synthesize ambientLoc=_ambientLoc;
@property(nonatomic) int positionEyeLoc; // @synthesize positionEyeLoc=_positionEyeLoc;
@property(nonatomic) unsigned char positionEyeStale; // @synthesize positionEyeStale=_positionEyeStale;
@property(retain, nonatomic) GLKEffectPropertyTransform *transform; // @synthesize transform=_transform;
@property(nonatomic) unsigned long long *effectDirtyUniforms; // @synthesize effectDirtyUniforms=_effectDirtyUniforms;
@property(nonatomic) float quadraticAttenuation; // @synthesize quadraticAttenuation=_quadraticAttenuation;
@property(nonatomic) float linearAttenuation; // @synthesize linearAttenuation=_linearAttenuation;
@property(nonatomic) float constantAttenuation; // @synthesize constantAttenuation=_constantAttenuation;
@property(nonatomic) float spotCutoffDegrees; // @synthesize spotCutoffDegrees=_spotCutoffDegrees;
@property(nonatomic) float spotExponent; // @synthesize spotExponent=_spotExponent;
@property(nonatomic) union _GLKVector3 normalizedSpotDirectionEye; // @synthesize normalizedSpotDirectionEye=_normalizedSpotDirectionEye;
@property(nonatomic) union _GLKVector3 spotDirection; // @synthesize spotDirection=_spotDirection;
@property(nonatomic) union _GLKVector4 specularColor; // @synthesize specularColor=_specularColor;
@property(nonatomic) union _GLKVector4 diffuseColor; // @synthesize diffuseColor=_diffuseColor;
@property(nonatomic) union _GLKVector4 ambientColor; // @synthesize ambientColor=_ambientColor;
@property(nonatomic) union _GLKVector4 positionEye; // @synthesize positionEye=_positionEye;
@property(nonatomic) union _GLKVector4 position; // @synthesize position=_position;
@property(nonatomic) unsigned char enabled; // @synthesize enabled=_enabled;
- (void)dealloc;
- (id)description;
- (void)bind;
@property(readonly, nonatomic) unsigned char isAttenuated;
@property(readonly, nonatomic) unsigned char isSpot;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
@property(nonatomic) float spotCutoff; // @synthesize spotCutoff=_spotCutoff;
- (void)setNormalize:(unsigned char)arg1;
- (void)setShaderBindings;
- (void)initializeMasks;
- (void)setGLDefaults;
- (void)dirtyAllUniforms;
- (id)initWithTransform:(id)arg1 lightingType:(int)arg2 firstLight:(unsigned char)arg3;

@end

