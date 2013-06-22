/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class EKCalendarDate, EKDayGridView, EKEvent, NSCalendar, NSMutableArray, NSTimeZone, UIColor;

@interface EKDayViewContent : UIView <UIGestureRecognizerDelegate>
{
    EKDayGridView *_grid;
    UIView *_saturdayDarkeningView;
    UIView *_sundayDarkeningView;
    unsigned int _daysToDisplay;
    BOOL _loadingOccurrences;
    BOOL _putSelectionOnTop;
    EKEvent *_selectedEvent;
    NSMutableArray *_dayStarts;
    NSMutableArray *_itemsByDay;
    NSMutableArray *_itemsByDayByEndDate;
    struct CGRect _latestVisibleRect;
    float _lastHeight;
    float _lastDayWidth;
    float *_visiblePinnedStackHeightAbove;
    float *_visiblePinnedStackHeightBelow;
    BOOL _allowsOccurrenceSelection;
    BOOL _eventsFillGrid;
    BOOL _usesSmallText;
    BOOL _darkensWeekends;
    EKCalendarDate *_startDate;
    EKCalendarDate *_endDate;
    NSCalendar *_calendar;
    id <EKDayViewContentDelegate> _delegate;
    float _fixedDayWidth;
    UIColor *_occurrenceTitleColor;
    UIColor *_occurrenceLocationColor;
    UIColor *_occurrenceTextBackgroundColor;
    int _occurrenceBackgroundStyle;
    EKEvent *_dimmedOccurrence;
}

+ (float)occurrenceViewLeftInset;
@property(retain, nonatomic) EKEvent *dimmedOccurrence; // @synthesize dimmedOccurrence=_dimmedOccurrence;
@property(nonatomic) int occurrenceBackgroundStyle; // @synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle;
@property(retain, nonatomic) UIColor *occurrenceTextBackgroundColor; // @synthesize occurrenceTextBackgroundColor=_occurrenceTextBackgroundColor;
@property(retain, nonatomic) UIColor *occurrenceLocationColor; // @synthesize occurrenceLocationColor=_occurrenceLocationColor;
@property(retain, nonatomic) UIColor *occurrenceTitleColor; // @synthesize occurrenceTitleColor=_occurrenceTitleColor;
@property(nonatomic) float fixedDayWidth; // @synthesize fixedDayWidth=_fixedDayWidth;
@property(nonatomic) BOOL darkensWeekends; // @synthesize darkensWeekends=_darkensWeekends;
@property(nonatomic) BOOL usesSmallText; // @synthesize usesSmallText=_usesSmallText;
@property(nonatomic) BOOL eventsFillGrid; // @synthesize eventsFillGrid=_eventsFillGrid;
@property(nonatomic) BOOL allowsOccurrenceSelection; // @synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection;
@property(nonatomic) __weak id <EKDayViewContentDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) EKCalendarDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) EKCalendarDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)_tapRecognized:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_getBottomPinRegion:(float *)arg1 dayIndex:(unsigned int *)arg2 forPoint:(struct CGPoint)arg3;
- (BOOL)eventsIntersectRect:(struct CGRect)arg1;
- (void)_adjustViewsForPinning;
- (void)setOccurrences:(id)arg1;
- (id)lastDisplayedSecond;
- (id)_dayStarts;
@property(readonly, nonatomic) double firstEventSecond;
- (struct _NSRange)_dayRangeForEvent:(id)arg1;
- (struct _NSRange)_dayRangeForEventWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)layoutSubviews;
- (double)dateForPoint:(struct CGPoint)arg1;
- (float)_dayWidth;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1 onDate:(double)arg2;
- (struct CGPoint)pointForDate:(double)arg1;
- (void)setViewsDimmed:(BOOL)arg1 forEvent:(id)arg2;
- (id)grid;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)occurrenceViews;
- (void)rectBecameVisible:(struct CGRect)arg1;
- (void)setStartDateWithDateComponents:(id)arg1;
@property(copy, nonatomic) NSTimeZone *timeZone;
- (void)_computeDayStartsAndEnds;
- (void)setHoursToPadTop:(int)arg1;
@property(nonatomic) BOOL showsLeftBorder;
@property(retain, nonatomic, setter=selectEvent:) EKEvent *selectedEvent;
- (BOOL)containsEvent:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setOrientation:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(int)arg2 backgroundColor:(id)arg3 opaque:(BOOL)arg4 numberOfDaysToDisplay:(unsigned int)arg5;

@end

