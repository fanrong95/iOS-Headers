//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXHADeviceProtocol.h"
#import "CBPeripheralDelegate.h"

@class AXHATimer, AXHearingAidMode, CBPeripheral, NSArray, NSDate, NSMutableDictionary, NSString;

@interface AXHearingAidDevice : NSObject <CBPeripheralDelegate, AXHADeviceProtocol>
{
    float _leftVolume;
    float _rightVolume;
    float _leftMicrophoneVolume;
    float _rightMicrophoneVolume;
    float _leftStreamVolume;
    float _rightStreamVolume;
    BOOL _keepInSync;
    BOOL _finishedLoading;
    long initialLoadToken;
    AXHATimer *_propertyWriteTimer;
    BOOL _isListeningForStreamingChanges;
    BOOL isPaired;
    BOOL isConnecting;
    BOOL isPersistent;
    NSString *leftUUID;
    NSString *rightUUID;
    NSString *name;
    NSString *manufacturer;
    NSString *model;
    NSString *leftFirmwareVersion;
    NSString *rightFirmwareVersion;
    NSString *leftHardwareVersion;
    NSString *rightHardwareVersion;
    float rightBatteryLevel;
    float leftBatteryLevel;
    NSArray *rightPrograms;
    NSArray *leftPrograms;
    AXHearingAidMode *currentRightProgram;
    AXHearingAidMode *currentLeftProgram;
    CBPeripheral *leftPeripheral;
    CBPeripheral *rightPeripheral;
    int _availableEars;
    int leftLoadedProperties;
    int rightLoadedProperties;
    NSMutableDictionary *leftPropertiesLoadCount;
    NSMutableDictionary *rightPropertiesLoadCount;
    NSString *leftPeripheralUUID;
    NSString *rightPeripheralUUID;
    int leftWriteRequestProperties;
    int rightWriteRequestProperties;
    int leftProgramVersion;
    int rightProgramVersion;
    int _leftWriteResponseProperties;
    int _rightWriteResponseProperties;
    NSDate *_leftBatteryLowDate;
    NSDate *_rightBatteryLowDate;
    unsigned long _leftPresetBitmask;
    unsigned long _rightPresetBitmask;
}

+ (id)characteristicsUUIDs;
@property(nonatomic) unsigned long rightPresetBitmask; // @synthesize rightPresetBitmask=_rightPresetBitmask;
@property(nonatomic) unsigned long leftPresetBitmask; // @synthesize leftPresetBitmask=_leftPresetBitmask;
@property(retain, nonatomic) NSDate *rightBatteryLowDate; // @synthesize rightBatteryLowDate=_rightBatteryLowDate;
@property(retain, nonatomic) NSDate *leftBatteryLowDate; // @synthesize leftBatteryLowDate=_leftBatteryLowDate;
@property(nonatomic) int rightWriteResponseProperties; // @synthesize rightWriteResponseProperties=_rightWriteResponseProperties;
@property(nonatomic) int leftWriteResponseProperties; // @synthesize leftWriteResponseProperties=_leftWriteResponseProperties;
@property(nonatomic) int rightProgramVersion; // @synthesize rightProgramVersion;
@property(nonatomic) int leftProgramVersion; // @synthesize leftProgramVersion;
@property(nonatomic) int rightWriteRequestProperties; // @synthesize rightWriteRequestProperties;
@property(nonatomic) int leftWriteRequestProperties; // @synthesize leftWriteRequestProperties;
@property(retain, nonatomic) NSString *rightPeripheralUUID; // @synthesize rightPeripheralUUID;
@property(retain, nonatomic) NSString *leftPeripheralUUID; // @synthesize leftPeripheralUUID;
@property(retain, nonatomic) NSMutableDictionary *rightPropertiesLoadCount; // @synthesize rightPropertiesLoadCount;
@property(retain, nonatomic) NSMutableDictionary *leftPropertiesLoadCount; // @synthesize leftPropertiesLoadCount;
@property(nonatomic) int rightLoadedProperties; // @synthesize rightLoadedProperties;
@property(nonatomic) int leftLoadedProperties; // @synthesize leftLoadedProperties;
@property(nonatomic) BOOL keepInSync; // @synthesize keepInSync=_keepInSync;
@property(nonatomic) float leftStreamVolume; // @synthesize leftStreamVolume=_leftStreamVolume;
@property(nonatomic) float rightStreamVolume; // @synthesize rightStreamVolume=_rightStreamVolume;
@property(nonatomic) float leftMicrophoneVolume; // @synthesize leftMicrophoneVolume=_leftMicrophoneVolume;
@property(nonatomic) float rightMicrophoneVolume; // @synthesize rightMicrophoneVolume=_rightMicrophoneVolume;
@property(nonatomic) int availableEars; // @synthesize availableEars=_availableEars;
@property(nonatomic) BOOL isPersistent; // @synthesize isPersistent;
@property(nonatomic) BOOL isConnecting; // @synthesize isConnecting;
@property(nonatomic) BOOL isPaired; // @synthesize isPaired;
@property(retain, nonatomic) CBPeripheral *rightPeripheral; // @synthesize rightPeripheral;
@property(retain, nonatomic) CBPeripheral *leftPeripheral; // @synthesize leftPeripheral;
@property(retain, nonatomic) AXHearingAidMode *currentLeftProgram; // @synthesize currentLeftProgram;
@property(retain, nonatomic) AXHearingAidMode *currentRightProgram; // @synthesize currentRightProgram;
@property(copy, nonatomic) NSArray *leftPrograms; // @synthesize leftPrograms;
@property(copy, nonatomic) NSArray *rightPrograms; // @synthesize rightPrograms;
@property(nonatomic) float leftBatteryLevel; // @synthesize leftBatteryLevel;
@property(nonatomic) float rightBatteryLevel; // @synthesize rightBatteryLevel;
@property(retain, nonatomic) NSString *rightHardwareVersion; // @synthesize rightHardwareVersion;
@property(retain, nonatomic) NSString *leftHardwareVersion; // @synthesize leftHardwareVersion;
@property(retain, nonatomic) NSString *rightFirmwareVersion; // @synthesize rightFirmwareVersion;
@property(retain, nonatomic) NSString *leftFirmwareVersion; // @synthesize leftFirmwareVersion;
@property(retain, nonatomic) NSString *model; // @synthesize model;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *rightUUID; // @synthesize rightUUID;
@property(retain, nonatomic) NSString *leftUUID; // @synthesize leftUUID;
- (id)persistentRepresentation;
- (BOOL)addPeripheral:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isBluetoothPaired;
- (void)peripheralDidUnpair:(id)arg1;
- (void)peripheral:(id)arg1 didFinishPairingWithResult:(id)arg2;
- (void)pairingDidCompleteForPeripheral:(id)arg1;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didInvalidateServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheralDidUpdateName:(id)arg1;
- (id)deviceDescription;
- (id)valueForProperty:(int)arg1;
- (void)setValue:(id)arg1 forProperty:(int)arg2;
- (unsigned char)volumeValueForProperty:(int)arg1 andPeripheral:(id)arg2;
- (void)setRightSelectedProgram:(id)arg1;
@property(readonly, retain, nonatomic) AXHearingAidMode *rightSelectedProgram;
- (void)setLeftSelectedProgram:(id)arg1;
@property(readonly, retain, nonatomic) AXHearingAidMode *leftSelectedProgram;
- (id)selectedProgramIndexes;
- (id)selectedPrograms;
- (void)selectProgram:(id)arg1;
- (void)readProperty:(int)arg1 fromPeripheral:(id)arg2;
- (void)readValueForCharacteristic:(id)arg1 fromPeripheral:(id)arg2;
- (void)writeInt:(unsigned char)arg1 toPeripheral:(id)arg2 forProperty:(int)arg3;
- (void)delayWriteProperty:(int)arg1 forPeripheral:(id)arg2;
- (void)_sendDelayedWrites;
- (void)updateName;
- (void)loadFailedProperties;
- (void)loadRequiredProperties;
- (void)loadBasicProperties;
- (void)loadProperties:(int)arg1 forPeripheral:(id)arg2 withRetryPeriod:(float)arg3;
- (void)setNotify:(BOOL)arg1 forPeripheral:(id)arg2;
- (id)peripheral:(id)arg1 characteristicForUUID:(id)arg2;
- (id)peripheral:(id)arg1 characteristicForProperty:(int)arg2;
- (int)peripheral:(id)arg1 propertyForCharacteristic:(id)arg2;
- (id)programs;
- (int)connectedEars;
- (BOOL)hasConnection;
- (BOOL)isConnected;
- (BOOL)rightAvailable;
- (BOOL)leftAvailable;
- (void)mateWithDevice:(id)arg1;
- (BOOL)didLoadRequiredProperties;
- (BOOL)didLoadBasicProperties;
- (BOOL)peripheral:(id)arg1 didLoadProperty:(int)arg2;
@property(readonly, retain, nonatomic) NSString *deviceUUID;
- (BOOL)containsPeripheralWithUUID:(id)arg1;
- (void)connectionDidChange;
- (void)disconnect;
- (void)connect;
- (void)dealloc;
- (id)initWithLeftDevice:(id)arg1 andRightDevice:(id)arg2;
- (id)initWithPersistentRepresentation:(id)arg1;
- (id)initWithPeripheral:(id)arg1;
- (void)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

