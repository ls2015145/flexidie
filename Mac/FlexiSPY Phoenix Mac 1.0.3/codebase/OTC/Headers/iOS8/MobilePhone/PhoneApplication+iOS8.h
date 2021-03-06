/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "UIApplication.h"

//#import "UIApplicationDelegate-Protocol.h"

@class CUTWeakReference, NSString, PhoneRootViewController, UIColor, /*UIViewController<PhoneBaseViewController>, */UIWindow;
/*
@interface PhoneApplication : UIApplication <UIApplicationDelegate>
{
    PhoneRootViewController *_rootController;
    UIWindow *_window;
    UIViewController<PhoneBaseViewController> *_currentController;
    CUTWeakReference *_currentActionSheetWeakReference;
    double _launchTime;
    unsigned int _applicationResumedViaURL:1;
    NSString *_cachedApplicationBadgeString;
    BOOL _headerViewShowsAllRecentCalls;
    BOOL _audioButtonAllowsPhoneCallsAndFaceTimeAudio;
    BOOL _suspendingApplication;
    BOOL _resumingApplication;
    int _headerViewNumberOfCallsToShow;
}*/
@interface PhoneApplication (iOS8)
+ (id)sharedNumberFormatter;
+ (id)viewControllerForTabViewType:(int)arg1;
+ (id)viewControllerForRootViewType:(int)arg1;
+ (Class)controllerClassForTabViewType:(int)arg1;
@property(readonly, nonatomic) BOOL resumingApplication; // @synthesize resumingApplication=_resumingApplication;
@property(readonly, nonatomic) BOOL suspendingApplication; // @synthesize suspendingApplication=_suspendingApplication;
@property(readonly, nonatomic) BOOL audioButtonAllowsPhoneCallsAndFaceTimeAudio; // @synthesize audioButtonAllowsPhoneCallsAndFaceTimeAudio=_audioButtonAllowsPhoneCallsAndFaceTimeAudio;
@property(readonly, nonatomic) int headerViewNumberOfCallsToShow; // @synthesize headerViewNumberOfCallsToShow=_headerViewNumberOfCallsToShow;
@property(readonly, nonatomic) BOOL headerViewShowsAllRecentCalls; // @synthesize headerViewShowsAllRecentCalls=_headerViewShowsAllRecentCalls;
//@property(nonatomic) UIViewController<PhoneBaseViewController> *currentController; // @synthesize currentController=_currentController;
@property(readonly, nonatomic) BOOL showsPhoneVoicemail;
@property(readonly, nonatomic) BOOL dialerIsNumericOnly;
@property(readonly, nonatomic) BOOL showsPhoneDialer;
@property(readonly, nonatomic) BOOL badgesMissedFaceTimeVideo;
@property(readonly, nonatomic) BOOL badgesMissedFaceTimeAudio;
@property(readonly, nonatomic) BOOL badgesMissedTelephonyCalls;
@property(readonly, nonatomic) BOOL showsFaceTimeVideoRecents;
@property(readonly, nonatomic) BOOL showsFaceTimeAudioRecents;
@property(readonly, nonatomic) BOOL showsTelephonyRecents;
@property(readonly, nonatomic) BOOL showsFaceTimeVideoFavorites;
@property(readonly, nonatomic) BOOL showsFaceTimeAudioFavorites;
@property(readonly, nonatomic) BOOL showsTelephonyFavorites;
@property(readonly, nonatomic) BOOL showsFaceTimeVideo;
@property(readonly, nonatomic) BOOL showsFaceTimeAudio;
@property(readonly, nonatomic) BOOL showsTelephonyCalls;
@property(readonly, nonatomic) BOOL showSplashScreenOnSignin;
@property(readonly, nonatomic) BOOL tabBarCanSlide;
@property(readonly, nonatomic) BOOL tabBarFillsScreen;
@property(readonly, nonatomic) BOOL contentViewCanRotate;
@property(readonly, nonatomic) BOOL alwaysShowLocalVideo;
@property(readonly, nonatomic) BOOL usesBlendModes;
@property(readonly, nonatomic) BOOL contentViewAnimationsFadeInsteadOfMove;
@property(readonly, nonatomic) unsigned int contentViewOffscreenEdge;
@property(readonly, nonatomic) BOOL usesUnifiedInterface;
- (BOOL)showsCallsFromService:(int)arg1;
@property(readonly, nonatomic) BOOL defaultActionIsFaceTimeVideo;
@property(readonly, nonatomic) BOOL defaultActionIsFaceTimeAudio;
@property(readonly, nonatomic) BOOL defaultActionIsTelephonyCall;
@property(readonly, nonatomic) int defaultAction;
@property(readonly, nonatomic) int addressBookUIStyle; // @dynamic addressBookUIStyle;
@property(readonly, nonatomic) int wizardGlobalAppearanceStyle;
@property(readonly, nonatomic) int backdropStyle;
@property(readonly, nonatomic) unsigned int userInterfaceStyle;
- (BOOL)isLowGraphicsPerformanceDevice;
- (BOOL)faceTimeAudioIsAvailable;
- (BOOL)isDeviceCapableOfFaceTimeAudio;
- (BOOL)telephonyCallingIsAvailable;
- (BOOL)isDeviceCapableOfTelephonyCalls;
- (BOOL)faceTimeVideoIsAvailable;
- (BOOL)isDeviceCapableOfFaceTimeVideo;
- (int)userInterfaceScreenType;
- (BOOL)dialRecentCall:(id)arg1;
- (id)destinationForCall:(id)arg1 wasDialAssisted:(char *)arg2;
- (BOOL)dialVoicemail;
- (BOOL)dialPhoneNumber:(id)arg1;
- (BOOL)dialPhoneNumber:(id)arg1 dialAssist:(BOOL)arg2;
- (BOOL)dialPhoneNumber:(id)arg1 forUID:(int)arg2 dialAssist:(BOOL)arg3;
- (BOOL)dialPhoneNumber:(id)arg1 forUID:(int)arg2 dialAssist:(BOOL)arg3 wasAlreadyAssisted:(BOOL)arg4;
- (BOOL)dialPhoneNumber:(id)arg1 forUID:(int)arg2 service:(int)arg3 dialAssist:(BOOL)arg4 wasAlreadyAssisted:(BOOL)arg5;
- (BOOL)shouldAttemptPhoneCallForService:(int)arg1 viewController:(id)arg2;
- (BOOL)shouldAttemptPhoneCallForService:(int)arg1;
- (BOOL)shouldHangUpOnLock;
- (void)applicationOpenURL:(id)arg1;
- (BOOL)openURL:(id)arg1;
- (void)setIgnoresInteractionEvents:(BOOL)arg1;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)startSwitchTest;
- (void)startScrollTest;
- (void)_scroll;
- (void)_revertAddressBook;
- (void)_releaseAddressBook;
- (void *)existingAddressBook;
- (void *)addressBook;
- (BOOL)authorizedToUseAddressBook;
- (void)accessibilitySettingsChangedNotification:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)currentViewController;
- (void)_logSwitch;
- (BOOL)handleDoubleHeightStatusBarTap:(int)arg1;
- (int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;
- (void)showAirplaneViewForController:(id)arg1;
- (void)dismissActionSheet;
- (void)clearActionSheet;
- (void)presentActionSheet:(id)arg1 fromToolBarItem:(id)arg2;
- (void)presentActionSheet:(id)arg1;
- (BOOL)isDisplayingSheet;
- (void)_ftcServiceAvailabilityChanged:(id)arg1;
- (void)_localeChangedNotification:(id)arg1;
- (double)launchTime;
- (void)userDefaultsDidChange:(id)arg1;
- (void)dealloc;
- (struct CGRect)phoneViewTabBarContentFrame;
- (void)showInitialView;
- (void)_initializeUI;
- (void)_handleVoicemailUIStatusChangedNotification:(id)arg1;
- (id)rootViewController;
- (void)_resetCurrentViewController;
- (void)applicationDidResumeForEventsOnly;
- (void)applicationWillSuspendForEventsOnly;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)applicationSuspendWithSettings:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)handleApplicationFinishedSnapshottingNotification:(id)arg1;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (BOOL)shouldSnapshot;
- (void)applicationDidFinishLaunching:(id)arg1;
@property(readonly) UIColor *applicationTintColor;
@property(readonly, nonatomic) BOOL applicationResumedViaURL;
- (id)localizedCarrierName;
- (BOOL)inAirplaneMode;
- (BOOL)toggleMute;
- (BOOL)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (struct __CTServerConnection *)_serverConnection;
- (void)setShouldSuspendAfterLastCall:(BOOL)arg1;
- (BOOL)shouldSuspendAfterLastCall;
- (BOOL)callInterruptedAnApplication;
- (void)promptUpgradeCurrentPhoneCallToFaceTimeIfNecessary;
- (BOOL)inCall;
- (void)requestSuspendAfterLastCall;
- (void)requestSuspendWithTransparencyAfterLastCall;
- (void)_forceWindowFront;
- (BOOL)activeFaceTimeCallExists;
- (BOOL)faceTimeInvitationExists;
- (BOOL)inFaceTime;
- (BOOL)_activeFaceTimeCallExists;
- (BOOL)_faceTimeInvitationExists;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

