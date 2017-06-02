# Maintainer: TBD (PM)
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-feature_Platform
Summary:	Tizen Platform-Wide Features
Suggests:	%{name}-sub1-feature_Platform-KDBUS
Suggests:	%{name}-sub1-feature_Platform-Headless
Suggests:	%{name}-sub1-feature_Platform-Headed
%description root-feature_Platform
Platform-wide applied that affect target devices.
%files root-feature_Platform

%package sub1-feature_Platform-KDBUS
Summary:	KDBUS
Suggests:	libgio-extension-kdbus
Requires:	dbus-libs-extension-kdbus
Requires:	systemd-extension-kdbus
%description sub1-feature_Platform-KDBUS
Enable KDBUS feature.
- You MUST install KDBUS-enabled kernel.
- You MUST enable libgio-extension-kdbus if you have libgio.
%files sub1-feature_Platform-KDBUS

%package sub1-feature_Platform-Headless
Summary:	Enable Tizen Headless Device
Conflicts:	efl
Conflicts:	libwayland-server
Conflicts:	%{name}-sub1-feature_Platform-Headed
# You need to list "Important (commonly-required)" headed-only packages/blocks with Conflicts.
Suggests:	%{name}-sub2-feature_Platform-Headless-Minimal
Suggests:	%{name}-sub2-feature_Platform-Headless-Network
%description sub1-feature_Platform-Headless
Enabling this means that you are going to create Tizen headless device.
This disables all display depending packages.
%files sub1-feature_Platform-Headless

%package sub2-feature_Platform-Headless-Minimal
Summary:	Minimal Tizen Image Configuration for Headless
Requires:	%{name}-sub1-feature_Platform-Headless
Requires:	bash
Requires:	systemd
%description sub2-feature_Platform-Headless-Minimal
Include minimal set of packages for headless.
%files sub2-feature_Platform-Headless-Minimal

%package sub2-feature_Platform-Headless-Network
Summary:	Headless Network Packages
Requires:	%{name}-sub1-feature_Platform-Headless
Requires:	%{name}-sub2-feature_Platform-Headless-Minimal
Requires:	%{name}-sub1-domain_API-Network_IoTCon
Requires:	%{name}-sub1-domain_API-Network_WiFi
Requires:	%{name}-sub1-domain_API-Network_Bluetooth
%description sub2-feature_Platform-Headless-Network
Include network packages for headless.
%files sub2-feature_Platform-Headless-Network

%package sub1-feature_Platform-Headed
Summary:	Enable Tizen Headed Device (disable headless)
Conflicts:	%{name}-sub1-feature_Platform-Headless
Conflicts:	%{name}-sub2-feature_Platform-Headless-Minimal
Conflicts:	%{name}-sub2-feature_Platform-Headless-Network
# You may list ALL headless-ONLY packages/blocks with Conflicts.
Requires:	bash
Requires:	systemd

#Uncomment after UI domain is created
#Requires:	sub1-UI
%description sub1-feature_Platform-Headed
Enables to create Tizen headed device platform image.
This is a suggested starting point for such platform images.
This disabled headless feature.
%files sub1-feature_Platform-Headed





### ADDED FOR TDC DEMO ###
%package root-feature_App
Summary:	Applications
Suggests:	%{name}-sub1-feature_App-aIVI
Suggests:	%{name}-sub1-feature_App-aMobile
Suggests:	%{name}-sub1-feature_App-aTV
Suggests:	%{name}-sub1-feature_App-aWearable
Suggests:	%{name}-sub1-feature_App-b__UI__QT
Suggests:	%{name}-sub1-feature_App-gAppFW_Core
Suggests:	%{name}-sub1-feature_App-hAppFW
Suggests:	%{name}-sub1-feature_App-i__UI__QT
Suggests:	%{name}-sub1-feature_App-mAccessibility
Suggests:	%{name}-sub1-feature_App-mAttachPanels
Suggests:	%{name}-sub1-feature_App-mBrowser
Suggests:	%{name}-sub1-feature_App-mBluetooth
Suggests:	%{name}-sub1-feature_App-mConvergence
Suggests:	%{name}-sub1-feature_App-mDemonstration
Suggests:	%{name}-sub1-feature_App-mLocation
Suggests:	%{name}-sub1-feature_App-mSecurity
Suggests:	%{name}-sub1-feature_App-mSetting_SystemPopup
Suggests:	%{name}-sub1-feature_App-mSystem
Suggests:	%{name}-sub1-feature_App-mUtility
Suggests:	%{name}-sub1-feature_App-mVoice
%description root-feature_App
Tizen applications built at build.tizen.org and released via download.tizen.org
%files root-feature_App


%package sub1-feature_App-b__UI__QT
Summary:	UI QT
%description sub1-feature_App-b__UI__QT
%files sub1-feature_App-b__UI__QT

%package sub1-feature_App-i__UI__QT
Summary:	UI QT
%description sub1-feature_App-i__UI__QT
%files sub1-feature_App-i__UI__QT



%package sub1-feature_App-aIVI
Summary:	IVI
Suggests:	org.tizen.bootsplash
Suggests:	org.tizen.homescreen
Suggests:	smartdevicelink
%description sub1-feature_App-aIVI
Tizen Applications for IVI
%files sub1-feature_App-aIVI

%package sub1-feature_App-aMobile
Summary:	Mobile
Suggests:	org.tizen.callmgr-popup
Suggests:	org.tizen.homescreen-efl
Suggests:	org.tizen.indicator
Suggests:	org.tizen.sys-lock
Suggests:	org.tizen.system-signal-sender
Suggests:	org.tizen.volume
%description sub1-feature_App-aMobile
Tizen Applications for Mobile
%files sub1-feature_App-aMobile

%package sub1-feature_App-aTV
Summary:	TV
Suggests:	org.tizen.apps
Suggests:	org.tizen.favorite
Suggests:	org.tizen.home
Suggests:	org.tizen.infosquare
Suggests:	org.tizen.live-tv
Suggests:	org.tizen.mediahub
Suggests:	org.tizen.tv-volume
%description sub1-feature_App-aTV
Tizen Applications for TV
%files sub1-feature_App-aTV

%package sub1-feature_App-aWearable
Summary:	Wearable
Suggests:	org.tizen.classic-watch
Suggests:	org.tizen.inputdelegator
Suggests:	org.tizen.idle-clock-digital
Suggests:	org.tizen.stopwatch
Suggests:	org.tizen.timer
Suggests:	org.tizen.w-clock-viewer
Suggests:	org.tizen.w-home
Suggests:	org.tizen.w-wifi
Suggests:	org.tizen.watch-setting
Suggests:	org.tizen.windicator
%description sub1-feature_App-aWearable
Tizen Applications for Wearable (Watch)
%files sub1-feature_App-aWearable

%package sub1-feature_App-gAppFW_Core
Summary:	AppFW_Core
Suggests:	app-installers
Suggests:	tpk-backend
Suggests:	wgt-backend
Suggests:	%{name}-sub2-feature_App-gAppFW_Core-starter
%description sub1-feature_App-gAppFW_Core
Tizen Application-Framework core applications that provide essential services
for other Tizen applications.
%files sub1-feature_App-gAppFW_Core

%package sub2-feature_App-gAppFW_Core-starter
Summary:	starter (choose profile)
Requires:	starter
Suggests:	starter-profile_common
Suggests:	starter-profile_mobile
Suggests:	starter-profile_wearable
%description sub2-feature_App-gAppFW_Core-starter
Tizen App Starter. There are three flavors to choose (common/mobile/wearable)
%files sub2-feature_App-gAppFW_Core-starter

%package sub1-feature_App-hAppFW
Summary:	AppFW
Suggests:	app-utils
Suggests:	capi-appfw-app-manager
Suggests:	data-provider-master
Suggests:	libpush
Suggests:	libwidget_service
Suggests:	libwidget_viewer
Suggests:	libwidget_viewer_evas
Suggests:	org.tizen.app-selector-profile_mobile
Suggests:	org.tizen.app-selector-profile_wearable
Suggests:	org.tizen.widget_viewer_sdk
Suggests:	push-bin
%description sub1-feature_App-hAppFW
Tizen Applications of App Framework.
They usually provide services for other Tizen applications.
%files sub1-feature_App-hAppFW

%package sub1-feature_App-mAccessibility
Summary:	Accessibility
Suggests:	org.tizen.screen-reader
%description sub1-feature_App-mAccessibility
Tizen Accessibiltiy Applications
%files sub1-feature_App-mAccessibility

%package sub1-feature_App-mAttachPanels
Summary:	AttachPanels
Suggests:	attach-panel
Suggests:	attach-panel-camera
Suggests:	attach-panel-document
Suggests:	attach-panel-gallery
Suggests:	attach-panel-voicerecorder
%description sub1-feature_App-mAttachPanels
Attach Panel
%files sub1-feature_App-mAttachPanels

%package sub1-feature_App-mBrowser
Summary:	Browser
Suggests:	org.tizen.browser-profile_common
Suggests:	org.tizen.browser-profile_mobile
%description sub1-feature_App-mBrowser
Web Browsers
%files sub1-feature_App-mBrowser

%package sub1-feature_App-mBluetooth
Summary:	Bluetooth
Suggests:	org.tizen.bluetooth
Suggests:	org.tizen.bluetooth-share-ui
Suggests:	org.tizen.bt-syspopup
%description sub1-feature_App-mBluetooth
%files sub1-feature_App-mBluetooth

%package sub1-feature_App-mConvergence
Summary:	Convergence
Suggests:	org.tizen.d2d-conv-setting-profile_mobile
Suggests:	org.tizen.d2d-conv-setting-profile_wearable
Suggests:	%{name}-sub2-feature_App-mConvergence-d2dconvsyspopup
%description sub1-feature_App-mConvergence
%files sub1-feature_App-mConvergence

%package sub2-feature_App-mConvergence-d2dconvsyspopup
Summary:	org.tizen.d2d-conv-setting (Choose profile)
Requires:	org.tizen.d2d-conv-syspopup
Suggests:	org.tizen.d2d-conv-syspopup-binary-profile_mobile
Suggests:	org.tizen.d2d-conv-syspopup-binary-profile_wearable
%description sub2-feature_App-mConvergence-d2dconvsyspopup
Mobile is for common, ivi, mobile, TV.
Wearable if for wearable only.
%files sub2-feature_App-mConvergence-d2dconvsyspopup


%package sub1-feature_App-mDemonstration
Summary:	Demonstration
Suggests:	org.tizen.elm-demo-tizen-common
Suggests:	org.tizen.elm-demo-tizen-mobile
Suggests:	org.tizen.elm-demo-tizen-tv
Suggests:	org.tizen.elm-demo-tizen-wearable
%description sub1-feature_App-mDemonstration
%files sub1-feature_App-mDemonstration

%package sub1-feature_App-mLocation
Summary:	Location
Suggests:	org.tizen.gps-syspopup
Suggests:	org.tizen.heremaps-uc
Suggests:	org.tizen.myplace
Suggests:	org.tizen.screen-reader
%description sub1-feature_App-mLocation
%files sub1-feature_App-mLocation

%package sub1-feature_App-mSecurity
Summary:	Security
Suggests:	ca-certificates
Suggests:	org.tizen.dpm-syspopup
Suggests:	org.tizen.dpm-toolkit
Suggests:	org.tizen.kaskit
Suggests:	org.tizen.keyguard
Suggests:	org.tizen.krate-setup-wizard
%description sub1-feature_App-mSecurity
%files sub1-feature_App-mSecurity

%package sub1-feature_App-mSetting_SystemPopup
Summary:	Setting_SystemPopup
Suggests:	my-account-profile_mobile
Suggests:	my-account-profile_wearable
Suggests:	net.netpopup
Suggests:	org.tizen.crash-syspopup
Suggests:	%{name}-sub2-feature_App-mSetting_SystemPopup-inputmethodsetting
Suggests:	org.tizen.overheat-syspopup
Suggests:	org.tizen.powerkey-syspopup.mobile
Suggests:	org.tizen.powerkey-syspopup.wearable
Suggests:	org.tizen.privacy-setting-profile_mobile
Suggests:	org.tizen.privacy-setting-profile_wearable
Suggests:	org.tizen.setting
Suggests:	org.tizen.setting-location
Suggests:	org.tizen.setting-profile_common
Suggests:	org.tizen.settings-adid
Suggests:	org.tizen.system-syspopup.mobile
Suggests:	org.tizen.system-syspopup.wearable
%description sub1-feature_App-mSetting_SystemPopup
%files sub1-feature_App-mSetting_SystemPopup


%package sub2-feature_App-mSetting_SystemPopup-inputmethodsetting
Summary:	org.tizen.inputmethod-setting (Choose profile)
Requires:	org.tizen.inputmethod-setting
Suggests:	org.tizen.inputmethod-setting-profile_common
Suggests:	org.tizen.inputmethod-setting-profile_mobile
Suggests:	org.tizen.inputmethod-setting-profile_wearable
%description sub2-feature_App-mSetting_SystemPopup-inputmethodsetting
%files sub2-feature_App-mSetting_SystemPopup-inputmethodsetting


%package sub1-feature_App-mSystem
Summary:	System
Suggests:	boot-animation
%description sub1-feature_App-mSystem
%files sub1-feature_App-mSystem

%package sub1-feature_App-mUtility
Summary:	Utility
Suggests:	org.tizen.clock
Suggests:	org.tizen.download-manager
Suggests:	org.tizen.menu-screen
%description sub1-feature_App-mUtility
%files sub1-feature_App-mUtility

%package sub1-feature_App-mVoice
Summary:	Voice
Suggests:	org.tizen.stt-engine-default
Suggests:	org.tizen.tts-engine-default
Suggests:	org.tizen.voice-control-panel
Suggests:	org.tizen.voice-setting
%description sub1-feature_App-mVoice
%files sub1-feature_App-mVoice



#END
