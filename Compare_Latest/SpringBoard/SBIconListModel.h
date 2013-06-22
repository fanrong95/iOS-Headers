/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFastEnumeration-Protocol.h"
#import "SBIconIndexMutableListObserver-Protocol.h"
#import "SBIconIndexNode-Protocol.h"

@class NSHashTable, SBFolder, SBIconIndexMutableList;

@interface SBIconListModel : NSObject <SBIconIndexNode, SBIconIndexMutableListObserver, NSFastEnumeration>
{
    SBIconIndexMutableList *_icons;
    NSHashTable *_nodeObservers;
    NSHashTable *_listObservers;
    BOOL _iconStateIsDirty;
    SBFolder *_folder;
}

+ (unsigned int)maxIcons;
+ (Class)viewClass;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned int)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (void)_notifyListObservers:(id)arg1;
- (void)removeListObserver:(id)arg1;
- (void)addListObserver:(id)arg1;
- (void)warmUpIconImages;
- (id)description;
- (BOOL)matchesRepresentation:(id)arg1;
- (id)representation;
- (BOOL)resetWithRepresentation:(id)arg1 model:(id)arg2 overflowNodes:(id)arg3 leafIdentifiersAdded:(id)arg4;
- (void)markIconStateClean;
- (BOOL)isIconStateDirty;
- (id)iconsOfClass:(Class)arg1;
- (unsigned int)compactIcons;
- (BOOL)needsCompacting;
- (BOOL)isFull;
- (BOOL)isEmpty;
- (unsigned int)firstFreeSlotIndexForType:(int)arg1;
- (unsigned int)firstFreeSlotIndex;
- (void)removeIcon:(id)arg1;
- (void)removeIconAtIndex:(unsigned int)arg1;
- (id)insertIcon:(id)arg1 atIndex:(unsigned int *)arg2;
- (id)placeIcon:(id)arg1 atIndex:(unsigned int *)arg2;
- (BOOL)addIcon:(id)arg1 asDirty:(BOOL)arg2;
- (BOOL)addIcon:(id)arg1;
- (BOOL)allowsAddingIcon:(id)arg1;
- (BOOL)containsLeafIconWithIdentifier:(id)arg1;
- (BOOL)containsIcon:(id)arg1;
- (unsigned int)indexForLeafIconWithIdentifier:(id)arg1;
- (unsigned int)indexForIcon:(id)arg1;
- (id)iconAtIndex:(unsigned int)arg1;
- (id)icons;
- (unsigned int)numberOfIcons;
- (id)folder;
- (void)dealloc;
- (id)initWithFolder:(id)arg1;

@end

