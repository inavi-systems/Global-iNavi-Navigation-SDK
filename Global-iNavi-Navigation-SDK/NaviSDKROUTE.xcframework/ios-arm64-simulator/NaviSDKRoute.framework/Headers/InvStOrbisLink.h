//
//  InvStOrbisLink.h
//  NaviSDKRoute
//
//  Created by DAECHEOL KIM on 11/19/25.
//

#import <Foundation/Foundation.h>
#import <NaviSDKRoute/InvOrbisBaseType.h>


NS_ASSUME_NONNULL_BEGIN

@interface InvStOrbisLink : InvOrbisBaseType
@property (nonatomic, strong) InvOrbisKeyID *LinkID;
@property (nonatomic, strong) InvOrbisKeyID *SNodeID;
@property (nonatomic, strong) InvOrbisKeyID *ENodeID;

@property (nonatomic) long osm_id;

@property (nonatomic) int road_rank;
@property (nonatomic) int num_lane;
@property (nonatomic) int max_speed;
@property (nonatomic) int rt_level;
@property (nonatomic) BOOL is_toll;
@property (nonatomic) BOOL is_bridge;
@property (nonatomic) BOOL is_tunnel;
@property (nonatomic) int roundabout;
@property (nonatomic) BOOL is_plural;
@property (nonatomic) int link_type;
@property (nonatomic) BOOL is_oneway;
@property (nonatomic) BOOL is_ferry;
@property (nonatomic) int name_id;
@property (nonatomic) BOOL is_turn_info;
@property (nonatomic) BOOL is_turn_info_b;
@property (nonatomic) int st_angle;
@property (nonatomic) int ed_angle;
@property (nonatomic) int length;
@property (nonatomic) int max_weight;
@property (nonatomic) int max_height;
@property (nonatomic) int max_length;
@property (nonatomic) int reserved;
@property (nonatomic) double minDist;

@end

NS_ASSUME_NONNULL_END
