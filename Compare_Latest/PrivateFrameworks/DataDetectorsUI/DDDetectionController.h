/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIActionSheetDelegate-Protocol.h"

@class DDActionController, NSMapTable, NSObject<DDDetectionControllerDelegate>, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface DDDetectionController : NSObject <UIActionSheetDelegate>
{
    NSOperationQueue *_fullScannerQueue;
    NSOperationQueue *_urlScannerQueue;
    NSObject<OS_dispatch_queue> *_protectQueue;
    NSMapTable *_containerToOperationsTable;
    NSMapTable *_containerToResultsTable;
    NSMapTable *_containerToContextsTable;
    DDActionController *_actionController;
    NSObject<DDDetectionControllerDelegate> *_delegate;
}

+ (id)tapAndHoldSchemes;
+ (id)sharedController;
@property NSObject<DDDetectionControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (BOOL)_shouldImmediatelyShowActionSheetForURL:(id)arg1;
- (BOOL)_shouldImmediatelyShowActionSheetForCoreResult:(struct __DDResult *)arg1;
- (struct __DDResult *)_resultForURL:(id)arg1 forContainer:(id)arg2 context:(id *)arg3;
- (struct __DDResult *)_resultForIdentifier:(id)arg1 forContainer:(id)arg2 context:(id *)arg3;
- (void)performAction:(id)arg1 inView:(id)arg2 withPopoverController:(id)arg3 interactionDelegate:(id)arg4;
- (void)_doURLification:(id)arg1;
- (void)containerWillBeRemoved:(id)arg1;
- (void)cancelURLificationForContainer:(id)arg1;
- (void)_enqueueOperation:(id)arg1;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned int)arg2;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned int)arg2 options:(int)arg3;
- (void)_startCoalescedURLification:(id)arg1;
- (id)_newOperationForContainer:(id)arg1;
- (void)resetResultsForContainer:(id)arg1;
- (void)_commonResetResultsForContainer:(id)arg1;
- (void)setContext:(id)arg1 forContainer:(id)arg2;
- (void)setResults:(struct __CFArray *)arg1 forContainer:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned int)arg2;
- (id)defaultActionForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)defaultActionForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (struct __DDResult *)resultForNode:(id)arg1 url:(id)arg2 frame:(id)arg3 contextRef:(id *)arg4;
- (id)actionsForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)actionsForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (struct __DDResult *)resultForDOMNode:(id)arg1 forFrame:(id)arg2;
- (struct __DDResult *)_resultForAnchor:(id)arg1 forFrame:(id)arg2 context:(id *)arg3;
- (BOOL)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2;
- (void)frameWillBeRemoved:(id)arg1;
- (void)cancelURLificationForFrame:(id)arg1;
- (void)resetResultsForFrame:(id)arg1;
- (void)setContext:(id)arg1 forFrame:(id)arg2;
- (void)setResults:(struct __CFArray *)arg1 forFrame:(id)arg2;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned int)arg2 options:(int)arg3;
- (id)defaultActionAtIndex:(unsigned int)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)actionsAtIndex:(unsigned int)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)_applyBlock:(id)arg1 withResultsAtIndex:(void)arg2 ofStorage:(unsigned int)arg3 context:(id)arg4;
- (BOOL)shouldImmediatelyShowActionSheetForTapAtIndex:(unsigned int)arg1 ofStorage:(id)arg2;
- (id)_resultForLinkAtIndex:(unsigned int)arg1 inTextStorage:(id)arg2 subResult:(id *)arg3 url:(id *)arg4;
- (struct __DDResult *)resultForLinkAtIndex:(unsigned int)arg1 inTextStorage:(id)arg2;
- (id)_subResultAtIndex:(unsigned int)arg1 ofResult:(id)arg2;
- (void)resetResultsForTextView:(id)arg1;

@end

