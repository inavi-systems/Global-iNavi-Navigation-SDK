//
//  InvGPSInfo.h
//  NaviSDKMMC
//
//  Created by DAECHEOL KIM on 12/8/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface InvGPSInfo : NSObject
/**
 * UTC timestamp (in millisecond)
 */
@property (nonatomic) long timestampUTC;
/**
 * DateTime with UTC TimeZone
 * @see ZonedDateTime\
 * @deprecated use getDateTimeUTC()
 */
//ZonedDateTime dateTimeUTC;
/**
 * longitude : 경도 (WGS84)
 */
@property (nonatomic) double longitude;
/**
 * latitude : 위도 (WGS84)
 */
@property (nonatomic) double latitude;

/**
 * altitude : 고도 (WGS84)
 */
@property (nonatomic) double altitude;
/**
 * course : 정북(0도) 기준 방향각
 */
@property (nonatomic) float course;
/**
 * speedKmh : 주행 속도 ( km/h )
 */
@property (nonatomic) float speedKmh;
/**
 * HDOP : Horizontal Dilution of Precision
 */
@property (nonatomic) float hDOP;
/**
 * gpsStatus : GPS 수신 상태값. 0: GPS Not fixed, 1: Gps fixed
 */
@property (nonatomic) int gpsStatus;

/**
 * coordinateStatus : 좌표 유효성 정보
 *  -1 : 비정상 좌표 (경위도 좌표 초과)
 *  0 : 정상 좌표 (지도 영역 안)
 *  1 : 정상 좌표 (지도 영역 밖)
 */
@property (nonatomic) int coordinateStatus;

@end

NS_ASSUME_NONNULL_END
