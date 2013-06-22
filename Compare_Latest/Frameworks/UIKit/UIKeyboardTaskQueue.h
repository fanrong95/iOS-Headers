/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext;

@interface UIKeyboardTaskQueue : NSObject
{
    BOOL _executingOnMainThread;
    NSConditionLock *_lock;
    NSMutableArray *_tasks;
    NSMutableArray *_deferredTasks;
    UIKeyboardTaskExecutionContext *_executionContext;
    id _mainThreadContinuation;
}

@property(retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
- (BOOL)isMainThreadExecutingTask;
- (void)performTask:(id)arg1;
- (void)waitUntilAllTasksAreFinished;
- (void)addDeferredTask:(id)arg1;
- (void)addTask:(id)arg1;
- (void)promoteDeferredTaskIfIdle;
- (void)performDeferredTaskIfIdle;
- (void)performTaskOnMainThread:(id)arg1 waitUntilDone:(void)arg2;
- (void)finishExecution;
- (void)continueExecutionOnMainThread;
- (void)unlock;
- (BOOL)tryLockWhenReadyForMainThread;
- (void)lockWhenReadyForMainThread;
- (void)lock;
- (id)init;
- (void)dealloc;

@end

