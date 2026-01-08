//
//  InvOrbisMMCAdapter.h
//  NaviSDKMMC
//
//  Created by DAECHEOL KIM on 12/8/25.
//

#import <Foundation/Foundation.h>

#import <NaviSDKMMC/InvGPSInfo.h>
#import <NaviSDKMMC/InvMMCResult.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^MMCListener)(InvMMCResult*);
typedef void (^GPSListener)(InvGPSInfo*);

@interface InvOrbisMMCAdapter : NSObject
+(InvOrbisMMCAdapter*)getInstance;

/** 지도 초기화
 *
 * @param mapPath 지도 데이터 path
 * @return  0: 성공, 1: 이미 초기화 됨, 0미만 : 실패
 */
- (NSInteger)initMap:(NSString *)mapPath;

- (void)setMapMatchListener:(MMCListener)mmcHandler gpsHandler:(GPSListener)gpsHandler;

/**
 * 맵매칭 모듈 시작
 * @return 0: 성공, 1: 이미 시작 됨, 0미만 : 실패
 */
- (NSInteger)startMapMatch;

/**
 * 맵매칭 모듈 종료
 * @return 0: 성공, 0미만 : 실패
 */
- (NSInteger)stopMapMatch;

/**
 * nmea 데이터 로그 파일 저장 시작
 * @param logPath nmea 로그 파일의 path
 * @return 0: 성공, 1: 이미 시작됨, 0미만 : 실패
 */
- (NSInteger)startNMEALogging:(NSString *)logPath;

/**
 * nmea 데이터 로그 파일 저장 종료
 * @return 0: 성공, 0 미만 : 실패
 */
- (NSInteger)stopNMEALogging;

/**
 * 로그 주행 시작
 * @param logPath nmea 로그 파일의 path
 * @return 0: 성공, 1: 이미 시작됨, 0미만 : 실패
 */
- (NSInteger)startLogDrive:(NSString *)logPath;

/**
 * 로그 주행 종료
 * @return 0: 성공, 0 미만 : 실패
 */
- (NSInteger)stopLogDrive;

/**
 * 경로 설정
 * @param routeFilePath nmea 로그 파일의 path
 * @return 0: 경로 설정 성공, 1: 기존 경로 존재함, 0미만 : 경로 설정 실패
 */
- (NSInteger)setRouteResult:(NSString *)routeFilePath;

/**
 * 경로 설정 취소
 */
- (void)clearRouteResult;

/**
 * 모의 주행 시작/중지
 * @param bStart true: 시작, false: 중지
 */
- (void)setSimulateStartStop:(BOOL)bStart;

/**
 * 모의 주행 상태
 * @return true: 모의주행 상태, false: 모의주행중이 아닌 상태
 */
- (BOOL)isSimulationRunning;

/**
 * 모의 주행 속도 설정
 * @param nSpeed 모의주행 속도(km/h)
 */
- (void)setSimulateSpeed:(NSInteger)nSpeed;

/**
 * 모의 주행 일시 정지
 * @param bPause true: 일시 정지, false: 재개
 */
- (void)setSimulatePause:(BOOL)bPause;

/**
 * 모의 주행 일시 정지 상태
 * @return true: 모의주행 일시 정지 상태, false: 모의주행중 상태
 */
- (BOOL)getSimulatePause;

/**
 * 모의 주행 위치
 * @return 모의주행 위치(0 ~ 100%)
 */
- (NSInteger)getSimulatePos;

/**
 * 모의 주행 위치 설정
 * @param nPos 모의주행 위치(0 ~ 100%)
 * @return true: 모의주행 위치 설정 성공, false: 모의주행 위치 설정 실패
 */
- (BOOL)setSimulatePos:(NSInteger)nPos;

/**
 * 경로의 index로 모의 주행 위치 설정
 * @param nIndex 경로의 index
 * @return 1: 모의주행 위치 설정 성공, 0: 모의주행 위치 설정 실패
 */
- (NSInteger)setSimulateIndex:(NSInteger)nIndex;

/**
 * 가장 최신 GPSInfo
 * @return 가장 최신 GPSInfo
 * @see InvGPSInfo
 */
- (InvGPSInfo*)getGPSInfo;

/**
 * 가장 최신 MMCResult
 * @return 가장 최신 MMCResult
 * @see InvMMCResult
 */
- (InvMMCResult*)getMatchInfo;

/**
 *
 * @param linkidIndex 프로젝션 할 링크 id index
 * @param longitude 프로젝션 할 좌표 경도
 * @param latitude 프로젝션 할 좌표 위도
 * @return InvMMCResult 프로젝션 된 매칭 정보
 * @see InvMMCResult
 */
- (InvMMCResult*)linkProjection:(NSInteger)linkidIndex
                  longitude:(double)longitude
                   latitude:(double)latitude;


@end

NS_ASSUME_NONNULL_END
