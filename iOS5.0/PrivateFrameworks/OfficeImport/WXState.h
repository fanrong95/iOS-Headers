/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, OAXDrawingState, OCPPackagePart, SFUNoCopyDictionary, WDDocument, WXOAVState;

@interface WXState : NSObject
{
    WDDocument *mDocument;
    SFUNoCopyDictionary *mTextNodesToBeAdded;
    SFUNoCopyDictionary *mMapBookmarkIdToName;
    SFUNoCopyDictionary *mMapAnnotationIdToAnnotation;
    OCPPackagePart *mPackagePart;
    OCPPackagePart *mAnnotationPart;
    struct _xmlDoc *mFootnoteDocument;
    struct _xmlNode *mFootnotes;
    struct _xmlDoc *mEndnoteDocument;
    struct _xmlNode *mEndnotes;
    struct _xmlDoc *mAnnotationDocument;
    struct _xmlNode *mAnnotations;
    NSMutableArray *mDeleteAuthorStack;
    NSMutableArray *mDeleteDateStack;
    NSMutableArray *mEditAuthorStack;
    NSMutableArray *mEditDateStack;
    NSMutableArray *mFormatAuthorStack;
    NSMutableArray *mFormatDateStack;
    WXOAVState *mWXOavState;
    OAXDrawingState *mDrawingState;
    int mCurrentOfficeArtTextType;
    BOOL mNewSectionRequested;
    unsigned long mCurrentRowCNFStyle;
    unsigned long mCurrentCellCNFStyle;
    BOOL mCurrentTableWraps;
    id <OCCancelDelegate> mCancelDelegate;
    BOOL mIsThumbnail;
}

- (id)init;
- (id)initNoStacksWith:(id)arg1;
- (void)dealloc;
- (id)document;
- (void)setDocument:(id)arg1;
- (void)addText:(id)arg1 node:(struct _xmlNode *)arg2;
- (id)nodesToBeAdded:(id)arg1;
- (void)clearOutNodesToBeAdded:(id)arg1;
- (void)addBookmarkId:(int)arg1 name:(id)arg2;
- (id)bookmarkName:(int)arg1;
- (void)addAnnotationID:(long)arg1 annotation:(id)arg2;
- (id)annotationWithID:(long)arg1;
- (struct _xmlNode *)xmlFootnoteWithID:(long)arg1;
- (struct _xmlNode *)xmlEndnoteWithID:(long)arg1;
- (struct _xmlNode *)xmlAnnotationWithID:(long)arg1;
- (id)packagePart;
- (void)setPackagePart:(id)arg1;
- (id)annotationPart;
- (void)setAnnotationPart:(id)arg1;
- (void)setDocumentPart:(id)arg1;
- (id)wxoavState;
- (void)pushDeleteAuthor:(id)arg1 date:(id)arg2;
- (void)popDeleteAuthorDate;
- (id)currentDeleteAuthor;
- (id)currentDeleteDate;
- (void)pushEditAuthor:(id)arg1 date:(id)arg2;
- (void)popEditAuthorDate;
- (id)currentEditAuthor;
- (id)currentEditDate;
- (void)pushFormatAuthor:(id)arg1 date:(id)arg2;
- (void)popFormatAuthorDate;
- (id)currentFormatAuthor;
- (id)currentFormatDate;
- (id)drawingState;
- (BOOL)isNewSectionRequested;
- (void)setNewSectionRequested:(BOOL)arg1;
- (unsigned long)currentRowCNFStyle;
- (void)setCurrentRowCNFStyle:(unsigned long)arg1;
- (unsigned long)currentCellCNFStyle;
- (void)setCurrentCellCNFStyle:(unsigned long)arg1;
- (void)setCurrentTableWraps:(BOOL)arg1;
- (BOOL)currentTableWraps;
- (void)setIsThumbnail:(BOOL)arg1;
- (BOOL)isThumbnail;
@property(retain, nonatomic) id <OCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
@property(nonatomic) int currentOfficeArtTextType; // @synthesize currentOfficeArtTextType=mCurrentOfficeArtTextType;

@end

