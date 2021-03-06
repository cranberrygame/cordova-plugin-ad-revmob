//Copyright (c) 2014 Sang Ki Kwon (Cranberrygame)
//Email: cranberrygame@yahoo.com
//Homepage: http://cranberrygame.github.io
//License: MIT (http://opensource.org/licenses/MIT)
#import <Cordova/CDV.h>

@protocol Plugin <NSObject>
- (UIWebView*) getWebView;
- (UIViewController*) getViewController;
- (id<CDVCommandDelegate>) getCommandDelegate;
- (NSString*) getCallbackIdKeepCallback;
@end

@protocol PluginDelegate <NSObject>
- (void) _setLicenseKey:(NSString *)email aLicenseKey:(NSString *)licenseKey;
- (void) _setUp:(NSString *)mediaId anIsOverlap:(BOOL)isOverlap;
- (void) _preloadBannerAd;
- (void) _showBannerAd:(NSString *)position aSize:(NSString *)size;
- (void) _reloadBannerAd;
- (void) _hideBannerAd;
- (void) _preloadInterstitialAd;
- (void) _showInterstitialAd;
- (void) _preloadVideoAd;
- (void) _showVideoAd;
- (void) _preloadRewardedVideoAd;
- (void) _showRewardedVideoAd;
- (void) _preloadPopupAd;
- (void) _showPopupAd;
- (void) _preloadLinkAd;
- (void) _showLinkAd;
@end

@interface RevMobPlugin : CDVPlugin <Plugin, PluginDelegate>

@property NSString *callbackIdKeepCallback;
//
@property id<PluginDelegate> pluginDelegate;
//
@property NSString *email;
@property NSString *licenseKey_;
@property BOOL validLicenseKey;
	
- (void) setLicenseKey: (CDVInvokedUrlCommand*)command;
- (void) setUp: (CDVInvokedUrlCommand*)command;
- (void) preloadBannerAd: (CDVInvokedUrlCommand*)command;
- (void) showBannerAd: (CDVInvokedUrlCommand*)command;
- (void) reloadBannerAd: (CDVInvokedUrlCommand*)command;
- (void) hideBannerAd: (CDVInvokedUrlCommand*)command;
- (void) preloadInterstitialAd: (CDVInvokedUrlCommand*)command;
- (void) showInterstitialAd: (CDVInvokedUrlCommand*)command;
- (void) preloadVideoAd: (CDVInvokedUrlCommand*)command;
- (void) showVideoAd: (CDVInvokedUrlCommand*)command;
- (void) preloadRewardedVideoAd: (CDVInvokedUrlCommand*)command;
- (void) showRewardedVideoAd: (CDVInvokedUrlCommand*)command;
- (void) preloadPopupAd: (CDVInvokedUrlCommand*)command;
- (void) showPopupAd: (CDVInvokedUrlCommand*)command;
- (void) preloadLinkAd: (CDVInvokedUrlCommand*)command;
- (void) showLinkAd: (CDVInvokedUrlCommand*)command;
@end
