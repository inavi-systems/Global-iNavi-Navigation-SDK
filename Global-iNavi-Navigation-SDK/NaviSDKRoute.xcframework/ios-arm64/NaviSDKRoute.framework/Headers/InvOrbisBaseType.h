//
//  InvOrbisBaseType.h
//  NaviSDKRoute
//
//  Created by DAECHEOL KIM on 11/19/25.
//

#import <Foundation/Foundation.h>
#import <NaviSDKRoute/InvOrbisKeyID.h>
#import <NaviSDKRoute/InvPoint.h>
NS_ASSUME_NONNULL_BEGIN

@interface InvOrbisBaseType : InvOrbisKeyID
@property (nonatomic) unsigned int nPoint;
@property (nonatomic) unsigned int nPtsOffsetInMesh;
@property (nonatomic, strong) NSMutableArray<InvPoint*> *points;

- (id)initWithObject:(_Nullable id)object;
- (void)setdata:(_Nullable id)object;
@end

NS_ASSUME_NONNULL_END
