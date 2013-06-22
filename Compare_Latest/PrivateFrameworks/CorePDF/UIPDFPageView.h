/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class CALayer, NSMutableArray, UIActivityIndicatorView, UIColor, UIImage, UIPDFAnnotationController, UIPDFDocument, UIPDFPage, UIPDFPageContentDelegate, UIPDFSearchHighlightsController, UIPDFSelectionController, UIPDFViewTouchHandler;

@interface UIPDFPageView : UIView
{
    UIPDFDocument *_document;
    unsigned int _pageIndex;
    UIPDFViewTouchHandler *_touchHandler;
    struct CGAffineTransform _pageToViewTransform;
    struct CGAffineTransform _viewToPageTransform;
    struct CGRect _cropBox;
    float _margin;
    BOOL _allowSelection;
    UIPDFSelectionController *_selectionController;
    id <NSObject><UIPDFPageViewDelegate> _delegate;
    struct CGRect zoomRect;
    BOOL _useBackingLayer;
    CALayer *_backingLayer;
    UIImage *_backgroundImage;
    BOOL _backgroundIsScheduled;
    unsigned int _backgroundScheduleCount;
    BOOL _backgroundIsFullResolution;
    BOOL _boundsChanged;
    BOOL _useTiledContent;
    CALayer *_contentLayer;
    CALayer *_effectsLayer;
    UIPDFPageContentDelegate *_contentDelegate;
    UIPDFAnnotationController *_annotationController;
    BOOL _scalePageOnDraw;
    struct CGColor *_highLightColor;
    BOOL _animateSetFrame;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _showActivityIndicator;
    UIColor *_backingLayerColor;
    int _lock;
    NSMutableArray *_highlights;
    float _cachedScale;
    BOOL _allowHighlighting;
    UIPDFSearchHighlightsController *_searchHighlightController;
    NSMutableArray *_searchHiglightLayers;
    UIPDFPage *_page;
    BOOL showAnnotations;
    BOOL _allowTwoFingerSelection;
    BOOL _showTextAnnotations;
    BOOL _showLinkAnnotationUnderline;
}

@property(nonatomic) BOOL showLinkAnnotationUnderline; // @synthesize showLinkAnnotationUnderline=_showLinkAnnotationUnderline;
@property(nonatomic) BOOL showTextAnnotations; // @synthesize showTextAnnotations=_showTextAnnotations;
@property(nonatomic) BOOL allowTwoFingerSelection; // @synthesize allowTwoFingerSelection=_allowTwoFingerSelection;
@property(readonly, nonatomic) UIPDFAnnotationController *annotationController; // @synthesize annotationController=_annotationController;
@property(nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(nonatomic) BOOL useBackingLayer; // @synthesize useBackingLayer=_useBackingLayer;
@property(nonatomic) BOOL showAnnotations; // @synthesize showAnnotations;
@property(retain, nonatomic) UIColor *backingLayerColor; // @synthesize backingLayerColor=_backingLayerColor;
@property(nonatomic) BOOL animateSetFrame; // @synthesize animateSetFrame=_animateSetFrame;
@property UIPDFSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(nonatomic) BOOL allowSelection; // @synthesize allowSelection=_allowSelection;
@property(readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) id <NSObject><UIPDFPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float margin; // @synthesize margin=_margin;
@property(nonatomic) BOOL allowMenu; // @dynamic allowMenu;
- (void)suspendInstantTouchHighlighting;
@property(nonatomic) BOOL allowHighlighting; // @dynamic allowHighlighting;
- (void)addWidgetToSelection;
- (id)searchHighlightSelectionAt:(struct CGPoint)arg1;
- (BOOL)hasSearchHighlights;
- (void)clearSearchHighlights;
- (void)highlightSearchSelection:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) CALayer *effectsLayer; // @synthesize effectsLayer=_effectsLayer;
- (void)showSelection;
- (void)hideSelection;
@property(readonly) struct CGColor *highLightColor;
- (void)clearSelection;
- (void)displayContent;
- (struct CGRect)rectangleOfInterestAt:(struct CGPoint)arg1 kind:(int *)arg2;
- (struct CGRect)fitRect:(struct CGRect)arg1;
- (struct CGRect)fitWidth:(struct CGRect)arg1 atVertical:(float)arg2;
- (struct CGRect)convertRectFromPDFPageSpace:(struct CGRect)arg1;
- (struct CGRect)convertRectToPDFPageSpace:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromPDFPageSpace:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToPDFPageSpace:(struct CGPoint)arg1;
- (void)setTransforms;
- (BOOL)willDoSomethingWithTap:(struct CGPoint)arg1;
- (void)singleTapAt:(struct CGPoint)arg1;
- (void)twoFingerDoubleTapAt:(struct CGPoint)arg1;
- (void)doubleTapAt:(struct CGPoint)arg1;
- (void)ignoreTouches:(BOOL)arg1;
- (void)drawAnnotations:(struct CGContext *)arg1;
@property UIPDFPage *page; // @dynamic page;
- (void)addPage:(id)arg1;
- (void)layoutTextEffects;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)receiveBackgroundImage:(id)arg1 info:(id)arg2;
- (void)showContent;
- (void)stopActivityIndicator;
- (void)layoutSubviews;
- (void)removeBackingLayer;
- (void)didScroll:(id)arg1;
- (void)scheduleBackgroundImage;
@property(retain) UIImage *backgroundImage; // @dynamic backgroundImage;
- (void)willMoveToSuperview:(id)arg1;
- (void)setNeedsDisplay;
- (void)setSelectionNeedsDisplay;
@property(readonly) UIPDFDocument *document; // @dynamic document;
@property(readonly) unsigned int pageIndex; // @dynamic pageIndex;
- (void)setDrawingSurfaceLayer:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (id)initWithPage:(id)arg1 tiledContent:(BOOL)arg2;
- (id)initWithPage:(id)arg1;
- (void)addLayers:(BOOL)arg1;
- (id)init;
- (struct CGPDFDictionary *)_annotForPoint:(struct CGPoint)arg1 rect:(struct CGRect *)arg2;

@end

