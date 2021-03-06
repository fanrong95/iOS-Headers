/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSDImager, TSKDocumentRoot;

// Not exported
@interface TSDThumbnailGenerator : NSObject
{
    TSDImager *_imager;
    TSKDocumentRoot *_documentRoot;
}

- (void)p_mainThreadReadCallback:(id)arg1;
- (void)p_writeCallback:(id)arg1;
- (_Bool)p_initialReadCallback:(id)arg1;
- (struct CGImage *)p_newThumbnailForProducer:(id)arg1 identifier:(id)arg2;
- (id)drawImageSynchronouslyForThumbnailId:(id)arg1 producer:(id)arg2;
@property(nonatomic) struct CGColor *backgroundColor;
- (void)idle;
- (void)generateThumbnailForConsumer:(id)arg1 producer:(id)arg2;
- (void)generateThumbnailForThumbnailId:(id)arg1 consumer:(id)arg2 producer:(id)arg3 continueThumbnailing:(_Bool)arg4;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;

@end

