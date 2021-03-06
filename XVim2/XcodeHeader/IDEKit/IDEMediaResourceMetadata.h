//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSArray;

@interface IDEMediaResourceMetadata : NSObject <NSCopying>
{
    BOOL _isSystemResource;
    long long _preferredOrder;
    NSArray *_keywords;
}

+ (id)metadataForSystemResource;
+ (id)metadataForSystemResourceWithKeywords:(id)arg1 preferredOrder:(long long)arg2;
+ (id)metadataForResourceWithKeywords:(id)arg1 preferredOrder:(long long)arg2;
@property(readonly, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(readonly, nonatomic) long long preferredOrder; // @synthesize preferredOrder=_preferredOrder;
@property(readonly, nonatomic) BOOL isSystemResource; // @synthesize isSystemResource=_isSystemResource;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMediaResourceMetadata:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKeywords:(id)arg1 isSystemResource:(BOOL)arg2 preferredOrder:(long long)arg3;

@end

