/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL, UILocalNotification;

@interface Alarm : NSObject
{
    NSString *_id;
    NSURL *_idUrl;
    NSMutableDictionary *_settings;
    UILocalNotification *_notification;
    UILocalNotification *_weeklyNotifications[7];
    UILocalNotification *_snoozedNotification;
    unsigned int _hour;
    unsigned int _minute;
    unsigned int _daySetting;
    NSArray *_repeatDays;
    BOOL _allowsSnooze;
    int _soundType;
    NSString *_sound;
    NSString *_title;
    NSDate *_lastModified;
    unsigned int _revision;
    id <AlarmDelegate> _delegate;
    Alarm *_editingProxy;
    BOOL _pretendActiveIfProxy;
    int _snapshotSoundType;
    NSString *_snapshotSound;
}

+ (id)_newSettingsFromNotification:(id)arg1;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2;
+ (BOOL)verifySettings:(id)arg1;
+ (BOOL)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)isSnoozeNotification:(id)arg1;
@property(nonatomic) id <AlarmDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, nonatomic) NSString *snapshotSound; // @synthesize snapshotSound=_snapshotSound;
@property(readonly, nonatomic) int snapshotSoundType; // @synthesize snapshotSoundType=_snapshotSoundType;
@property(readonly, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property(readonly, nonatomic) int soundType; // @synthesize soundType=_soundType;
@property(nonatomic) BOOL allowsSnooze; // @synthesize allowsSnooze=_allowsSnooze;
@property(nonatomic) unsigned int daySetting; // @synthesize daySetting=_daySetting;
@property(nonatomic) unsigned int minute; // @synthesize minute=_minute;
@property(nonatomic) unsigned int hour; // @synthesize hour=_hour;
@property(readonly, nonatomic) Alarm *editingProxy; // @synthesize editingProxy=_editingProxy;
- (id)description;
- (id)debugDescription;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) NSString *rawTitle;
@property(readonly, nonatomic) NSString *uiTitle;
- (void)setSound:(id)arg1 ofType:(int)arg2;
@property(readonly, nonatomic) NSArray *repeatDays;
@property(readonly, nonatomic) BOOL repeats;
@property(readonly, nonatomic, getter=isSnoozed) BOOL snoozed;
@property(readonly, nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic) NSDictionary *settings;
@property(readonly, nonatomic) NSURL *alarmIdUrl;
@property(readonly, nonatomic) NSString *alarmId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 notification:(id)arg2 day:(int)arg3;
- (id)nextFireDate;
- (int)compareTime:(id)arg1;
- (void)markModified;
- (void)handleNotificationSnoozed:(id)arg1 notifyDelegate:(BOOL)arg2;
- (void)handleAlarmFired:(id)arg1;
- (void)refreshActiveState;
- (void)dropNotifications;
- (void)cancelNotifications;
- (void)scheduleNotifications;
- (void)prepareNotifications;
- (id)_newNotification:(int)arg1;
- (id)_newBaseDateComponentsForDay:(int)arg1;
- (BOOL)tryAddNotification:(id)arg1;
- (unsigned int)_notificationsCount;
- (id)timeZoneForOffsetCalculation;
- (id)nowDateForOffsetCalculation;
- (void)dropEditingProxy;
- (void)applyChangesFromEditingProxy;
- (void)prepareEditingProxy;
- (void)applySettings:(id)arg1;
- (void)dealloc;
- (id)initWithDefaultValues;
- (id)initWithNotification:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

