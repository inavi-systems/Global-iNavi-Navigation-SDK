//
//  utilsAdapter.h
//  NaviSDKIOS
//
//  Created by DAECHEOL KIM on 12/4/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface utilsAdapter : NSObject
+ (NSData *)unGzippedData:(NSData*)data;
+ (NSData *)gunzippedData:(NSData*)data;
@end

NS_ASSUME_NONNULL_END
