//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPaymentPass, PKPaymentWebService;

@protocol PKPaymentBackgroundProvisioningServiceDelegate <NSObject>
- (void)paymentWebService:(PKPaymentWebService *)arg1 didDownloadPassRemoteAssets:(PKPaymentPass *)arg2 completion:(void (^)(void))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 didDownloadPass:(PKPaymentPass *)arg2;
@end
