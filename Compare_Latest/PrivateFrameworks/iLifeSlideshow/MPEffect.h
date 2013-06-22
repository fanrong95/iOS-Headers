/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPActionableSupport-Protocol.h"
#import "MPActionableSupportInternal-Protocol.h"
#import "MPAnimationSupport-Protocol.h"
#import "MPAudioSupport-Protocol.h"
#import "MPEffectSupport-Protocol.h"
#import "MPFilterSupport-Protocol.h"
#import "MPGeometrySupport-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MCContainerEffect, MCPlugParallel, MPAudioPlaylist, MPEffectContainer, NSArray, NSMutableArray, NSMutableDictionary, NSObject<MZEffectTiming>, NSString;

@interface MPEffect : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport>
{
    NSMutableArray *_slides;
    NSMutableArray *_secondarySlides;
    NSMutableArray *_texts;
    NSMutableArray *_filters;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_animationPaths;
    MCContainerEffect *_container;
    MCPlugParallel *_plug;
    MPAudioPlaylist *_audioPlaylist;
    MPEffectContainer *_parentContainer;
    BOOL _replaceSlides;
    BOOL _supportsEffectTiming;
    BOOL _skipEffectTiming;
    NSObject<MZEffectTiming> *_effectTiming;
    float _opacity;
    struct CGPoint _position;
    float _zPosition;
    struct CGSize _size;
    float _rotationAngle;
    float _xRotationAngle;
    float _yRotationAngle;
    float _scale;
    double _timeIn;
    double _phaseInDuration;
    double _phaseOutDuration;
    double _mainDuration;
    NSString *_effectID;
    NSString *_presetID;
    int _audioPriority;
    int _randomSeed;
    NSString *_uuid;
    int _liveIndex;
    BOOL _cleaningUp;
}

+ (id)effectWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3;
+ (id)effectWithEffectID:(id)arg1 andStrings:(id)arg2;
+ (id)effectWithEffectID:(id)arg1 andPaths:(id)arg2;
+ (id)effectWithEffectID:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly, nonatomic) NSObject<MZEffectTiming> *effectTiming; // @synthesize effectTiming=_effectTiming;
- (void)setRandomSeed:(int)arg1;
- (int)randomSeed;
- (id)parentContainer;
- (void)setAudioPriority:(int)arg1;
- (int)audioPriority;
- (void)setAudioPlaylist:(id)arg1;
- (id)audioPlaylist;
- (void)removeAnimationPathForKey:(id)arg1;
- (void)setAnimationPath:(id)arg1 forKey:(id)arg2;
- (id)animationPathForKey:(id)arg1;
- (id)animationPaths;
- (void)moveFiltersFromIndices:(id)arg1 toIndex:(int)arg2;
- (void)removeAllFilters;
- (void)removeFiltersAtIndices:(id)arg1;
- (void)insertFilters:(id)arg1 atIndex:(int)arg2;
- (void)addFilters:(id)arg1;
- (void)addFilter:(id)arg1;
- (id)filters;
- (BOOL)isTextOnly;
- (void)moveTextsFromIndices:(id)arg1 toIndex:(int)arg2;
- (void)removeAllTexts;
- (void)removeTextsAtIndices:(id)arg1;
- (void)insertTexts:(id)arg1 atIndex:(int)arg2;
- (void)addTexts:(id)arg1;
- (void)addText:(id)arg1;
@property(readonly, nonatomic) NSArray *texts;
- (double)lowestDisplayTime;
- (void)_updateTiming:(BOOL)arg1;
- (void)_updateEffectTimingWithDocument:(id)arg1;
@property(nonatomic) BOOL replaceSlides;
- (BOOL)supportsUnlimitedSlides;
- (void)removeAllSecondarySlides;
- (void)removeSecondarySlidesAtIndices:(id)arg1;
- (void)insertSecondarySlides:(id)arg1 atIndex:(int)arg2;
- (void)addSecondarySlides:(id)arg1;
- (void)addSecondarySlide:(id)arg1;
- (id)secondarySlides;
- (void)moveSlidesFromIndices:(id)arg1 toIndex:(int)arg2;
- (void)replaceSlide:(id)arg1 atIndex:(int)arg2;
- (void)replaceSlideAtIndex:(int)arg1 withSlide:(id)arg2;
- (void)removeAllSlides;
- (void)removeSlidesAtIndices:(id)arg1;
- (void)insertSlides:(id)arg1 atIndex:(int)arg2;
- (void)addSlides:(id)arg1;
- (void)addSlide:(id)arg1;
@property(readonly, nonatomic) NSArray *slides;
- (int)zIndex;
@property(nonatomic) double mainDuration;
@property(nonatomic) double phaseOutDuration;
@property(nonatomic) double phaseInDuration;
- (void)setFullDuration:(double)arg1;
- (double)fullDuration;
- (void)setYRotationAngle:(float)arg1;
- (float)yRotationAngle;
- (void)setXRotationAngle:(float)arg1;
- (float)xRotationAngle;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setRotationAngle:(float)arg1;
- (float)rotationAngle;
- (void)setZPosition:(float)arg1;
- (float)zPosition;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
- (void)setScale:(float)arg1;
- (float)scale;
- (void)setOpacity:(float)arg1;
- (float)opacity;
- (void)setEffectAttribute:(id)arg1 forKey:(id)arg2;
- (id)effectAttributeForKey:(id)arg1;
- (void)setEffectAttributes:(id)arg1;
- (id)effectAttributes;
@property(copy, nonatomic) NSString *presetID;
@property(copy, nonatomic) NSString *effectID;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3;
- (id)initWithEffectID:(id)arg1 andStrings:(id)arg2;
- (id)initWithEffectID:(id)arg1 andPaths:(id)arg2;
- (id)initWithEffectID:(id)arg1;
- (id)effectPresetID;
- (id)videoPaths;
- (id)fullDebugLog;
- (void)dump;
- (void)reconfigureSlides;
- (void)createSecondarySlidesWithPaths:(id)arg1;
- (void)createSlidesWithPaths:(id)arg1;
- (void)createTextsWithStrings:(id)arg1 secondLineFactor:(float)arg2 fillIn:(BOOL)arg3;
- (void)createTextsWithStrings:(id)arg1 secondLineFactor:(float)arg2;
- (void)replaceTextsWitStrings:(id)arg1;
- (void)createTextsWithDefaultStrings;
- (id)plug;
- (id)container;
- (void)setLiveIndex:(int)arg1;
- (int)liveIndex;
- (int)maxNumberOfSecondarySlides;
- (int)maxNumberOfSlides;
- (id)slideForMCSlide:(id)arg1;
- (id)nearestLayerGroup;
- (BOOL)hasBreaksInDocument:(id)arg1;
- (BOOL)hasMovies;
- (void)scaleMainDuration;
- (BOOL)needsParallelizer;
- (void)setParentContainer:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setPlug:(id)arg1;
- (void)cleanup;
- (void)copyAudioPlaylist:(id)arg1;
- (void)copyAnimationPaths:(id)arg1;
- (void)copyFilters:(id)arg1;
- (void)copyTexts:(id)arg1;
- (void)copySecondarySlides:(id)arg1;
- (void)copySlides:(id)arg1;
- (void)copyVars:(id)arg1;
- (id)nearestPlug;
- (id)parentDocument;
- (id)uuid;
- (id)objectID;
- (id)plugID;
- (void)updateEffectAttributes;
- (id)slideInformationWithDocument:(id)arg1;
- (BOOL)supportsEffectTiming;
- (void)applyFormattedAttributes;
- (id)formattedAttributes;
- (id)_effectAttributes;
- (void)updateTiming;
- (void)setSkipEffectTiming:(BOOL)arg1;
- (BOOL)isLive;
- (void)setScriptingAnimations:(id)arg1;
- (id)scriptingAnimations;
- (void)setWidth:(float)arg1;
- (float)width;
- (void)setHeight:(float)arg1;
- (float)height;
- (void)setYPosition:(float)arg1;
- (float)yPosition;
- (void)setXPosition:(float)arg1;
- (float)xPosition;
- (void)replaceObjectInFiltersAtIndex:(int)arg1 withObject:(id)arg2;
- (void)removeObjectFromFiltersAtIndex:(int)arg1;
- (void)insertObject:(id)arg1 inFiltersAtIndex:(int)arg2;
- (id)objectInFiltersAtIndex:(int)arg1;
- (int)countOfFilters;
- (void)replaceObjectInTextsAtIndex:(int)arg1 withObject:(id)arg2;
- (void)removeObjectFromTextsAtIndex:(int)arg1;
- (void)insertObject:(id)arg1 inTextsAtIndex:(int)arg2;
- (id)objectInTextsAtIndex:(int)arg1;
- (int)countOfTexts;
- (void)replaceObjectInSlidesAtIndex:(int)arg1 withObject:(id)arg2;
- (void)removeObjectFromSlidesAtIndex:(int)arg1;
- (void)insertObject:(id)arg1 inSlidesAtIndex:(int)arg2;
- (id)objectInSlidesAtIndex:(int)arg1;
- (int)countOfSlides;

@end

