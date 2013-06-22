/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@interface SKPhysicsWorld : NSObject <NSCoding>
{
    float speed;
    id <SKPhysicsContactDelegate> _contactDelegate;
    struct CGPoint _gravity;
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) id <SKPhysicsContactDelegate> contactDelegate; // @synthesize contactDelegate=_contactDelegate;
@property(nonatomic) struct CGPoint gravity; // @synthesize gravity=_gravity;
@property(nonatomic) float speed; // @synthesize speed;
- (id).cxx_construct;
- (id)bodyAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (id)bodyInRect:(struct CGRect)arg1;
- (id)bodyAtPoint:(struct CGPoint)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 usingBlock:(id)arg3;
- (void)enumerateBodiesInRect:(struct CGRect)arg1 usingBlock:(id)arg2;
- (void)enumerateBodiesAtPoint:(struct CGPoint)arg1 usingBlock:(id)arg2;
- (void)removeAllJoints;
- (void)removeJoint:(id)arg1;
- (void)addJoint:(id)arg1;
- (id)bodies;
- (BOOL)hasBodies;
- (void)removeAllBodies;
- (void)removeBody:(id)arg1;
- (void)addBody:(id)arg1;
- (BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned int)arg2 positionIterations:(unsigned int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

