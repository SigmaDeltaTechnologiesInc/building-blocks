# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

################
### IOT Core ###
################
%package root-Preset_iot_core
Summary:    IOT Core Presets
Requires: amd
Requires: app-launchpad
Requires: appcore-agent
Requires: aul
Requires: bash
Requires: buxton2
Requires: capi-appfw-app-common
Requires: capi-appfw-app-manager
Requires: capi-appfw-event
Requires: capi-appfw-package-manager
Requires: capi-appfw-preference
Requires: capi-network-wifi
Requires: capi-network-wifi-manager
Requires: capi-system-peripheral-io
Requires: connman
Requires: coreutils
Requires: cynara
Requires: dbus
Requires: dlogutil
Requires: filesystem
Requires: gum-utils
Requires: initrd
Requires: iotcon
Requires: iotivity
Requires: kmod
Requires: kmod-compat
Requires: libdlog
Requires: net-config
Requires: net-tools
Requires: pam
Requires: pam-modules-extra
Requires: peripheral-bus
Requires: procps-ng
Requires: rpm
Requires: rpm-security-plugin
Requires: sdbd
Requires: security-manager
Requires: setup
Requires: shadow-utils-adm
Requires: systemd
Requires: tizen-release
Requires: tlm
Requires: tlm-config-common-singleseat
Requires: tpk-backend
Requires: util-linux
Requires: vconf-internal-keys
Requires: wpa_supplicant

%description root-Preset_iot_core
__EXPAND__: preset
The packages of Tizen IoT Core.
%files root-Preset_iot_core

#########################
### IOT Haeded Common ###
#########################
%package root-Preset_iot_headed
Summary:    IOT Headed Common Presets
Requires:	%{name}-root-Preset_iot_core
Requires:	%{name}-sub2-domain_API-AppFramework-Alarm_API
Requires:	%{name}-sub2-domain_API-AppFramework-Data_Control_API
Requires:	%{name}-sub2-domain_API-AppFramework-Media_Key_API
Requires:	%{name}-sub2-domain_API-AppFramework-Message_Port_API
Requires:	%{name}-sub2-domain_API-AppFramework-Notification_API
Requires:	%{name}-sub2-domain_API-AppFramework-TPK_Installation
Requires:	%{name}-sub2-domain_API-Base-Utils
Requires:	%{name}-sub2-domain_API-Content-Download
Requires:	%{name}-sub2-domain_API-Content-Media_Content
Requires:	%{name}-sub2-domain_API-Content-MIME_Type
Requires:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Requires:	%{name}-sub2-domain_API-Multimedia-Image_Util
Requires:	%{name}-sub2-domain_API-Multimedia-Media_Codec
Requires:	%{name}-sub2-domain_API-Multimedia-Media_Tool
Requires:	%{name}-sub2-domain_API-Multimedia-Metadata_Extractor
Requires:	%{name}-sub2-domain_API-Multimedia-Player
Requires:	%{name}-sub2-domain_API-Multimedia-Recorder
Requires:	%{name}-sub2-domain_API-Multimedia-Sound_Manager
Requires:	%{name}-sub2-domain_API-Multimedia-Thumbnail_Util
Requires:	%{name}-sub2-domain_API-Multimedia-WAV_Player
Requires:	%{name}-sub2-domain_API-Network-Connection
Requires:	%{name}-sub2-domain_API-Network-DNSSD
Requires:	%{name}-sub2-domain_API-Network-MTP
Requires:	%{name}-sub2-domain_API-Network-SSDP
Requires:	%{name}-sub2-domain_API-Security-CSR
Requires:	%{name}-sub2-domain_API-Security-Device_Policy
Requires:	%{name}-sub2-domain_API-Security-Key_Manager
Requires:	%{name}-sub2-domain_API-Security-Privilege_Info
Requires:	%{name}-sub2-domain_API-Security-YACA
Requires:	%{name}-sub2-domain_API-System-Device_Callback
Requires:	%{name}-sub2-domain_API-System-dlog
Requires:	%{name}-sub2-domain_API-System-Runtime_information
Requires:	%{name}-sub2-domain_API-System-Sensor_Listener
Requires:	%{name}-sub2-domain_API-UI-Cairo
Requires:	%{name}-sub2-domain_API-UI-External_Output_Manager
Requires:	%{name}-sub2-domain_API-Web-WebView

### C# API ###
Requires: corefx-managed
Requires: coreclr-extra
Requires: csapi-tizenfx-common
Requires: csapi-tizenfx-dummy
Requires: dotnet-launcher
Requires: elm-sharp-theme-mobile

### APP & ETC ###
Requires: boot-animation
Requires: boot-animation-sound-file-profile_common
Requires: crash-worker
Requires: glibc-locale
Requires: org.tizen.menu-screen
Requires: org.tizen.setting-profile_common
Requires: org.tizen.worldclock-efl
Requires: starter
Requires: starter-profile_common
Requires: system-servant
Requires: system-servant-profile_common
Requires: tizen-locale
Requires: ug-bluetooth-efl
Requires: wifi-efl-ug

%description root-Preset_iot_headed
__EXPAND__: preset
The packages of Tizen IoT Headed Common.
%files root-Preset_iot_headed
