//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol MSVArtworkServiceInterface <NSObject>
- (void)resizeImageAtSourceURL:(NSURL *)arg1 destinationSize:(struct CGSize)arg2 destinationURL:(NSURL *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

