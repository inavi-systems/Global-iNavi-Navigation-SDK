//
//  InvMMCResult.h
//  NaviSDKMMC
//
//  Created by DAECHEOL KIM on 12/8/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface InvMMCResult : NSObject
/**
 * UTC timestamp (in millisecond)
 */
@property (nonatomic) long timestamp;
/**
 * Orbis original link unique id
 */
@property (nonatomic) long linkID;
/**
 * Link id index
 */
@property (nonatomic) long linkIDIndex;
/**
 * Start Node ID index
 */
@property (nonatomic) long startNodeIDIndex;
/**
 * end Node ID index
 */
@property (nonatomic) long endNodeIDIndex;
/**
 * OSM link ID
 */
@property (nonatomic) long openStreetMapID;
/**
 * 도로 역방향 여부
 * false: 정방향, true : 역방향
 */
@property (nonatomic) bool reverseWay;
/**
 * 가상 매칭 여부 ( 1초 사이의 보간 )
 * true : 가상 매칭 , false : 가상 매칭 아님
 */
@property (nonatomic) bool isVirtualMatch;
/**
 * 링크 상의 세그먼트의 index
 */
@property (nonatomic) int segmentIndex;
/**
 * 경로가 존재하고 링크가 경로 내에 있는 경우 경로의 링크 리스트에서의 링크의 index
 */
@property (nonatomic) int indexOnRoute;
/**
 * 맵매칭 상태
 * -1: 맵매칭 동작 안함,
 * 0: 맵매칭 됨
 * 1: 맵매칭 할 수있는 링크 없음 (오프로드)
 */
@property (nonatomic) int matchStatus;
/**
 * 맵매칭 모듈 상태
 * 0: 맵매칭 모듈 정상
 * others : 맵매칭 모듈 에러
 */
@property (nonatomic) int moduleStatus;

/**
 * gps 수신 상태
 * 0: GPS Not fixed
 * 1: Gps fixed
 */
@property (nonatomic) int gpsStatus;
/**
 * 주행 속도 ( km/h )
 */
@property (nonatomic) double speedKmh;
/**
 * 경도 (WGS84)
 */
@property (nonatomic) double longitude;
/**
 * 위도 (WGS84)
 */
@property (nonatomic) double latitude;
/**
 * 차량 주행 방향 ( 정북 기준 방향각 )
 */
@property (nonatomic) double heading;
/**
 * 링크 상의 진행 비율 ( 0.0 ~ 1.0 )
 */
@property (nonatomic) double linkRatio;
/**
 * 세그먼트 상의 진행 비율 ( 0.0 ~ 1.0 )
 */
@property (nonatomic) double segmentRatio;
/**
 * 링크 끝까지 남은 거리 ( meter )
 */
@property (nonatomic) double leftDistOnLink;
/**
 * coordinateStatus : 좌표 유효성 정보
 *  -1 : 비정상 좌표 (경위도 좌표 초과)
 *  0 : 정상 좌표 (지도 영역 안)
 *  1 : 정상 좌표 (지도 영역 밖)
 */
@property (nonatomic) int coordinateStatus;
@end

NS_ASSUME_NONNULL_END
