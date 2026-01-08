//
//  InvOrbisKeyID.h
//  NaviSDKRoute
//
//  Created by DAECHEOL KIM on 11/19/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface InvOrbisKeyID : NSObject
@property (nonatomic) unsigned long long nID;
@property (nonatomic) unsigned int nDir;        // 2 bits, 사용시 비트마스크 필요
@property (nonatomic) unsigned int nItemIDx;    // 30 bits
@property (nonatomic) unsigned int nMeshIDx;    // 32 bits

- (id)initWithObject:(_Nullable id)object;
- (void)setdata:(_Nullable id)object;
@end

NS_ASSUME_NONNULL_END
