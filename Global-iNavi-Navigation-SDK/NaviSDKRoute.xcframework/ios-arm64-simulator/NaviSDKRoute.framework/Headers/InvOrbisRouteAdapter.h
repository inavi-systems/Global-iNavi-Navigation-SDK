//
//  InvOrbisRouteAdapter.h
//  NaviSDKRoute
//
//  Created by DAECHEOL KIM on 11/19/25.
//

#import <Foundation/Foundation.h>
#import <NaviSDKRoute/InvStOrbisLink.h>
NS_ASSUME_NONNULL_BEGIN

@interface InvOrbisRouteAdapter : NSObject
-(Boolean)openOrbisNetwork:(NSString*)dirname;
-(InvStOrbisLink*)GetDataLink:(long)linkidindex;
-(InvStOrbisLink*)GetDataLinkNearPt:(double)dx dy:(double)dy;
-(NSArray<NSString *> *)GetRoadNameByNameID:(int)nameid;
@end

NS_ASSUME_NONNULL_END
