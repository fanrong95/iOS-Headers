/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class EKCalendarDate, UIColor, UIImage, UIImageView, UILabel;

@interface CalendarOccurrenceCell : UITableViewCell
{
    UILabel *_timeLabel;
    UILabel *_endTimeLabel;
    UIImageView *_dotView;
    UILabel *_titleLabel;
    UILabel *_locationLabel;
    EKCalendarDate *_startDate;
    EKCalendarDate *_endDate;
    UIColor *_dotColor;
    UIImage *_dot;
    unsigned int _isAllDay;
    unsigned int _isBirthday:1;
    unsigned int _isFacebook:1;
    unsigned int _tentative:1;
    unsigned int _declined:1;
    unsigned int _needsReply:1;
    unsigned int _cancelled:1;
    unsigned int _showsDot:1;
}

- (void).cxx_destruct;
- (id)_scriptingInfo;
- (BOOL)isDeclined;
- (BOOL)needsReply;
- (BOOL)isTentative;
- (BOOL)isFacebook;
- (BOOL)isBirthday;
- (BOOL)isCancelled;
- (BOOL)isAllDay;
- (void)layoutSubviews;
- (void)_updateDotImage;
- (void)_updateTimeLabel;
- (void)_applyDate:(id)arg1 toLabel:(id)arg2;
- (void)setIsFacebook:(BOOL)arg1;
- (void)setIsBirthday:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setDotColor:(id)arg1;
- (void)setShowsDot:(BOOL)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (void)setStartDate:(id)arg1 endDate:(id)arg2;
- (void)updateWithEvent:(id)arg1 showColors:(BOOL)arg2;
- (id)init;
- (id)initWithEvent:(id)arg1 showColors:(BOOL)arg2;
- (id)_lightTextColor;
- (id)_defaultTextColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setTextBackgroundColor:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)updateFonts;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

