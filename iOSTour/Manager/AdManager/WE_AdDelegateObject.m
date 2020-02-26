//
//  WE_AdDelegateObject.m
//  iOSTour
//
//  Created by wesly on 2020/2/26.
//  Copyright © 2020 Wesly. All rights reserved.
//

#import "WE_AdDelegateObject.h"

@implementation WE_AdDelegateObject

#pragma mark ————— Google —————
#pragma mark ————— Google Banner —————
///// Tells the delegate an ad request loaded an ad.
//- (void)adViewDidReceiveAd:(GADBannerView *)adView {
//  NSLog(@"adViewDidReceiveAd");
//}
//
///// Tells the delegate an ad request failed.
//- (void)adView:(GADBannerView *)adView
//    didFailToReceiveAdWithError:(GADRequestError *)error {
//  NSLog(@"adView:didFailToReceiveAdWithError: %@", [error localizedDescription]);
//}
//
///// Tells the delegate that a full-screen view will be presented in response
///// to the user clicking on an ad.
//- (void)adViewWillPresentScreen:(GADBannerView *)adView {
//  NSLog(@"adViewWillPresentScreen");
//}
//
///// Tells the delegate that the full-screen view will be dismissed.
//- (void)adViewWillDismissScreen:(GADBannerView *)adView {
//  NSLog(@"adViewWillDismissScreen");
//}
//
///// Tells the delegate that the full-screen view has been dismissed.
//- (void)adViewDidDismissScreen:(GADBannerView *)adView {
//  NSLog(@"adViewDidDismissScreen");
//}
//
///// Tells the delegate that a user click will open another app (such as
///// the App Store), backgrounding the current app.
//- (void)adViewWillLeaveApplication:(GADBannerView *)adView {
//  NSLog(@"adViewWillLeaveApplication");
//}

#pragma mark ————— interstitial —————
///// Tells the delegate an ad request succeeded.
//- (void)interstitialDidReceiveAd:(GADInterstitial *)ad {
//  NSLog(@"interstitialDidReceiveAd");
//}
//
///// Tells the delegate an ad request failed.
//- (void)interstitial:(GADInterstitial *)ad
//    didFailToReceiveAdWithError:(GADRequestError *)error {
//  NSLog(@"interstitial:didFailToReceiveAdWithError: %@", [error localizedDescription]);
//}
//
///// Tells the delegate that an interstitial will be presented.
//- (void)interstitialWillPresentScreen:(GADInterstitial *)ad {
//  NSLog(@"interstitialWillPresentScreen");
//}
//
///// Tells the delegate the interstitial is to be animated off the screen.
//- (void)interstitialWillDismissScreen:(GADInterstitial *)ad {
//  NSLog(@"interstitialWillDismissScreen");
//}
//
///// Tells the delegate the interstitial had been animated off the screen.
//- (void)interstitialDidDismissScreen:(GADInterstitial *)ad {
//  NSLog(@"interstitialDidDismissScreen");
//}
//
///// Tells the delegate that a user click will open another app
///// (such as the App Store), backgrounding the current app.
//- (void)interstitialWillLeaveApplication:(GADInterstitial *)ad {
//  NSLog(@"interstitialWillLeaveApplication");
//}

#pragma mark ————— rewardedAd —————
///// Tells the delegate that the user earned a reward.
//- (void)rewardedAd:(GADRewardedAd *)rewardedAd userDidEarnReward:(GADAdReward *)reward {
//  // TODO: Reward the user.
//  NSLog(@"rewardedAd:userDidEarnReward:");
//}
//
///// Tells the delegate that the rewarded ad was presented.
//- (void)rewardedAdDidPresent:(GADRewardedAd *)rewardedAd {
//  NSLog(@"rewardedAdDidPresent:");
//}
//
///// Tells the delegate that the rewarded ad failed to present.
//- (void)rewardedAd:(GADRewardedAd *)rewardedAd didFailToPresentWithError:(NSError *)error {
//  NSLog(@"rewardedAd:didFailToPresentWithError");
//}
//
///// Tells the delegate that the rewarded ad was dismissed.
//- (void)rewardedAdDidDismiss:(GADRewardedAd *)rewardedAd {
//  NSLog(@"rewardedAdDidDismiss:");
//}
@end
