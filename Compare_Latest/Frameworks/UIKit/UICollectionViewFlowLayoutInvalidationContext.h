/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    struct {
        unsigned int invalidateDelegateMetrics:1;
        unsigned int invalidateAttributes:1;
    } _flowLayoutInvalidationFlags;
}

@property(nonatomic) BOOL invalidateFlowLayoutDelegateMetrics;
@property(nonatomic) BOOL invalidateFlowLayoutAttributes;
- (id)init;

@end

