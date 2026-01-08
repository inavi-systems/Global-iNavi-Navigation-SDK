// swift-tools-version: 6.2
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Global-iNavi-Navigation-SDK",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "iNaviNavigationSDK",
            targets: ["iNaviNavigationSDK",
                      "MapLibre",
                      "NaviSDKCore",
                      "NaviSDKIOS",
                      "NaviSDKMMC",
                      "NaviSDKRoute"]
        ),
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .binaryTarget(
            name: "iNaviNavigationSDK",
            path: "Global-iNavi-Navigation-SDK/iNaviNavigationSDK.xcframework"
        ),
        .binaryTarget(
            name: "MapLibre",
            path: "Global-iNavi-Navigation-SDK/MapLibre.xcframework"
        ),
        .binaryTarget(
            name: "NaviSDKCore",
            path: "Global-iNavi-Navigation-SDK/NaviSDKCore.xcframework"
        ),
        .binaryTarget(
            name: "NaviSDKIOS",
            path: "Global-iNavi-Navigation-SDK/NaviSDKIOS.xcframework"
        ),
        .binaryTarget(
            name: "NaviSDKMMC",
            path: "Global-iNavi-Navigation-SDK/NaviSDKMMC.xcframework"
        ),
        .binaryTarget(
            name: "NaviSDKRoute",
            path: "Global-iNavi-Navigation-SDK/NaviSDKRoute.xcframework"
        ),
    ]
)
