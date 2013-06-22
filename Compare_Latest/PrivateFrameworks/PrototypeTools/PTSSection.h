/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "_UISettingsGroupObserver-Protocol.h"
#import "_UISettingsKeyPathObserver-Protocol.h"

@class NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, _UISettings;

@interface PTSSection : NSObject <_UISettingsKeyPathObserver, _UISettingsGroupObserver>
{
    NSArray *_rows;
    NSHashTable *_observers;
    NSMutableArray *_allConcreteRows;
    NSMutableArray *_enabledConcreteRows;
    NSMutableDictionary *_concreteRowsByTemplateIndex;
    NSMutableDictionary *_groupsByTemplateIndex;
    NSString *_title;
    _UISettings *_settings;
    NSString *_submoduleKeyPath;
    NSArray *_appearanceConditions;
}

@property(retain, nonatomic) NSArray *appearanceConditions; // @synthesize appearanceConditions=_appearanceConditions;
@property(retain, nonatomic) NSString *submoduleKeyPath; // @synthesize submoduleKeyPath=_submoduleKeyPath;
@property(retain, nonatomic) _UISettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_assertNoGroupTemplateProperties:(id)arg1;
- (void)_fixRows:(id)arg1 fromIndex:(unsigned int)arg2 withTemplate:(id)arg3;
- (void)_sendReload;
- (void)_sendInserts:(id)arg1 deletes:(id)arg2;
- (BOOL)_shouldEnableRow:(id)arg1;
- (void)_reloadEnabledRows;
- (void)_updateEnabledRows;
- (void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned int)arg3;
- (void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned int)arg3;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)moveRowAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (unsigned int)destinationForRowAtIndex:(unsigned int)arg1 withProposedDestination:(unsigned int)arg2;
- (BOOL)hasEnabledEditableRows;
- (void)enumerateEnabledRowsUsingBlock:(id)arg1;
- (void)enumerateAllRowsUsingBlock:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (unsigned int)indexOfRow:(id)arg1;
- (id)rowAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfRows;
- (void)dealloc;
- (id)initWithRows:(id)arg1;

@end

