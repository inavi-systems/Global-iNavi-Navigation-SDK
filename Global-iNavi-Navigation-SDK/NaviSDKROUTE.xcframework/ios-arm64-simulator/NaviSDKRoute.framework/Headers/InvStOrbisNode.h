//
//  InvStOrbisNode.h
//  NaviSDKRoute
//
//  Created by DAECHEOL KIM on 11/19/25.
//

#import <Foundation/Foundation.h>
#import <NaviSDKRoute/InvOrbisBaseType.h>
NS_ASSUME_NONNULL_BEGIN

@interface InvStOrbisNode : InvOrbisBaseType
@property (nonatomic, strong) InvOrbisKeyID *NodeID;
@property (nonatomic) int connNum;
@property (nonatomic) int NodeType;
@property (nonatomic, strong) NSMutableArray<InvOrbisKeyID *> *connLinks; // 최대 12개
@end

NS_ASSUME_NONNULL_END
