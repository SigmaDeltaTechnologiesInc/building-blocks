# Maintainer: Tizen Mobile PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package sub1-Preset_sd-mobile
Summary:	Mobile Profile Presets
Conflicts:	%{name}-sub1-Preset_sd-tv
Conflicts:	%{name}-sub1-Preset_sd-wearable
Conflicts:	%{name}-sub1-Preset_sd-ivi
Conflicts:	%{name}-root-Preset_iot
Suggests:	%{name}-sub2-Preset_sd-mobile-minimal
Suggests:	%{name}-sub2-Preset_sd-mobile-general
Suggests:	%{name}-sub2-Preset_sd-mobile-tm1
Suggests:	%{name}-sub2-Preset_sd-mobile-tm2_aarch64
Suggests:	%{name}-sub2-Preset_sd-mobile-tm2_armv7l
Suggests:	%{name}-sub2-Preset_sd-mobile-zAA__UI__QT
%list_suggest /usr/share/package-groups/mobile/ mobile sub2-Preset_sd-mobile-
%description sub1-Preset_sd-mobile
Tizen Mobile Platform Presets
%files sub1-Preset_sd-mobile

%package sub2-Preset_sd-mobile-zAA__UI__QT
Summary:	Quarter Line
%description sub2-Preset_sd-mobile-zAA__UI__QT
%files sub2-Preset_sd-mobile-zAA__UI__QT


%package sub2-Preset_sd-mobile-tm1
Summary:	Tizen Reference TM1 (armv7l, mobile phone)
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2_aarch64
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2_armv7l
Conflicts:	%{name}-sub2-Preset_sd-mobile-minimal
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/mobile-wayland-armv7l-tm1.ks
%description sub2-Preset_sd-mobile-tm1
__KS_URL__: http://download.tizen.org/snapshots/tizen/unified/latest/images/standard/mobile-wayland-armv7l-tm1/
Tizen Mobile TM1 Preset, which is using armv7l.
You may use this preset for other architectures; however,
please note that the TM1 model itself is for armv7l only.
This block is allowed for other architectures only to let
other arch devices start with TM1 packages.
You may need mobile + tm1 MIC post script as well.
(TIC RECIPE for POST is not READY YET)
%files sub2-Preset_sd-mobile-tm1

%package sub2-Preset_sd-mobile-tm2_aarch64
Summary:	Tizen Reference TM2 (aarch64. 64bit, mobile phone)
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm1
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2_armv7l
Conflicts:	%{name}-sub2-Preset_sd-mobile-minimal
Conflicts:	%{name}-sub2-Preset_sd-mobile-general
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/mobile-wayland-arm64-tm2.ks
%description sub2-Preset_sd-mobile-tm2_aarch64
__KS_URL__: http://download.tizen.org/snapshots/tizen/unified/latest/images/standard/mobile-wayland-arm64-tm2/
Tizen Mobile TM2 Preset. This is for aarch64 architecture only.
For architectural/post-script note, please refer to tm1 twin.
%files sub2-Preset_sd-mobile-tm2_aarch64

%package sub2-Preset_sd-mobile-tm2_armv7l
Summary:	Tizen Reference TM2 (armv7l. 32bit, mobile phone)
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm1
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2_aarch64
Conflicts:	%{name}-sub2-Preset_sd-mobile-minimal
Conflicts:	%{name}-sub2-Preset_sd-mobile-general
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/mobile-wayland-armv7l-tm2.ks
%description sub2-Preset_sd-mobile-tm2_armv7l
__KS_URL__: http://download.tizen.org/snapshots/tizen/unified/latest/images/standard/mobile-wayland-armv7l-tm2/
Tizen Mobile TM2 Preset. This is for armv7l architecture only.
Although TM2 has 64bit processor, we may use 32bit userspace binaries for it.
For architectural/post-script note, please refer to tm1 twin.
%files sub2-Preset_sd-mobile-tm2_armv7l

%package sub2-Preset_sd-mobile-minimal
Summary:	Mobile Minimal Preset
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm1
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2_aarch64
Conflicts:	%{name}-sub2-Preset_sd-mobile-general
Requires:	%{name}-sub1-domain_API-Account
Requires:	%{name}-sub1-domain_API-AppFramework
Requires:	%{name}-sub1-domain_API-Base
Requires:	%{name}-sub1-domain_API-Content
Requires:	%{name}-sub1-domain_API-Context
Requires:	%{name}-sub1-domain_API-Location
Requires:	%{name}-sub1-domain_API-Messaging
Requires:	%{name}-sub1-domain_API-Multimedia
Requires:	%{name}-sub1-domain_API-Network
Requires:	%{name}-sub1-domain_API-Security
Requires:	%{name}-sub1-domain_API-Social
Requires:	%{name}-sub1-domain_API-System
Requires:	%{name}-sub1-domain_API-Telephony
Requires:	%{name}-sub1-domain_API-UI
Requires:	%{name}-sub1-domain_API-UIX
Requires:	%{name}-sub1-domain_API-Web

Suggests:	%{name}-root-domain_WebAPI
Suggests:	webapi-plugins-profile_mobile

Suggests:	csapi-account-fido-client
Suggests:	csapi-account-manager
Suggests:	csapi-account-oauth2
Suggests:	csapi-application
Suggests:	csapi-application-alarm
Suggests:	csapi-application-common
Suggests:	csapi-application-message-port
Suggests:	csapi-application-notification
Suggests:	csapi-application-package-manager
Suggests:	csapi-application-preference
Suggests:	csapi-application-service
Suggests:	csapi-application-toastmessage
Suggests:	csapi-application-ui
Suggests:	csapi-badge
Suggests:	csapi-calendar-service
Suggests:	csapi-contacts-service
Suggests:	csapi-data-control
Suggests:	csapi-download
Suggests:	csapi-feedback
Suggests:	csapi-geofence
Suggests:	csapi-information
Suggests:	csapi-location
Suggests:	csapi-maps
Suggests:	csapi-media-content
Suggests:	csapi-media-key
Suggests:	csapi-messaging
Suggests:	csapi-mime-type
Suggests:	csapi-multimedia
Suggests:	csapi-network-bluetooth
Suggests:	csapi-network-connection
Suggests:	csapi-network-iotconnectivity
Suggests:	csapi-network-nfc
Suggests:	csapi-network-smartcard
Suggests:	csapi-network-wifi
Suggests:	csapi-network-wifi-direct
Suggests:	csapi-nui
Suggests:	csapi-phonenumber-utils
Suggests:	csapi-push
Suggests:	csapi-security
Suggests:	csapi-sensor
Suggests:	csapi-storage
Suggests:	csapi-system
Suggests:	csapi-system-settings
Suggests:	csapi-telephony
Suggests:	csapi-tizen
Suggests:	csapi-trace
Suggests:	csapi-uix-inputmethod-manager
Suggests:	csapi-uix-stt
Suggests:	csapi-uix-tts
Suggests:	csapi-uix-voicecontrol
Suggests:	csapi-webview
Suggests:	csapi-widget-application
Suggests:	csapi-widget-control
Suggests:	csapi-widget-viewer

%description sub2-Preset_sd-mobile-minimal
Tizen Mobile Minimal Platform Preset (Adds mobile native APIs only)

%files sub2-Preset_sd-mobile-minimal

%package sub2-Preset_sd-mobile-general
Summary:	Mobile Minimal Preset
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm1
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2_aarch64
Conflicts:	%{name}-sub2-Preset_sd-mobile-minimal
%list_suggest_linkreq /usr/share/package-groups/mobile/ mobile sub2-Preset_sd-mobile-
%description sub2-Preset_sd-mobile-general
Tizen Mobile General Platform Preset (Adds all mobile's non adaptation packages)

%files sub2-Preset_sd-mobile-minimal


%list_require /usr/share/package-groups/mobile/ mobile sub2-Preset_sd-mobile-
