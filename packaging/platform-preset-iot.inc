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
Requires: session-utils
Requires: libnss-security-manager

%description root-Preset_iot_core
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
Requires:	%{name}-sub2-domain_API-AppFramework-Event_API
Requires:	%{name}-sub2-domain_API-AppFramework-Media_Key_API
Requires:	%{name}-sub2-domain_API-AppFramework-Message_Port_API
Requires:	%{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Requires:	%{name}-sub2-domain_API-AppFramework-Native_EFL_Widget_App_Model
Requires:	%{name}-sub2-domain_API-AppFramework-Notification_API
Requires:	%{name}-sub2-domain_API-AppFramework-TPK_Installation
Requires:	%{name}-sub2-domain_API-Base-Utils
Requires:	%{name}-sub2-domain_API-Content-Download
Requires:	%{name}-sub2-domain_API-Content-MIME_Type
Requires:	%{name}-sub2-domain_API-Multimedia-AudioCore
Requires:	%{name}-sub2-domain_API-Multimedia-Camera
Requires:	%{name}-sub2-domain_API-Multimedia-Configuration
Requires:	%{name}-sub2-domain_API-Multimedia-Media_Codec
Requires:	%{name}-sub2-domain_API-Multimedia-Metadata_Extractor
Requires:	%{name}-sub2-domain_API-Multimedia-Metadata_Editor
Requires:	%{name}-sub2-domain_API-Multimedia-Player
Requires:	%{name}-sub2-domain_API-Multimedia-Recorder
Requires:	%{name}-sub2-domain_API-Multimedia-Thumbnail_Util
Requires:	%{name}-sub2-domain_API-Multimedia-Video_Util
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_LE
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_Media_Audio
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_Transfer
Requires:	%{name}-sub2-domain_API-Network-DNSSD
Requires:	%{name}-sub2-domain_API-Network-MTP
Requires:	%{name}-sub2-domain_API-Network-SSDP
Requires:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Requires:	%{name}-sub2-domain_API-Security-CSR
Requires:	%{name}-sub2-domain_API-Security-Device_Policy
Requires:	%{name}-sub2-domain_API-Security-Privilege_Info
Requires:	%{name}-sub2-domain_API-Security-YACA
Requires:	%{name}-sub2-domain_API-System-Device_Callback
Requires:	%{name}-sub2-domain_API-System-Runtime_information
Requires:	%{name}-sub2-domain_API-System-Sensor_Listener
Requires:	%{name}-sub2-domain_API-System-Storage
Requires:	%{name}-sub2-domain_API-System-System_Settings
Requires:	%{name}-sub2-domain_API-UI-Cairo
Requires:	%{name}-sub2-domain_API-UI-DALi
Requires:	%{name}-sub2-domain_API-UI-Display_Server
Requires:	%{name}-sub2-domain_API-UI-EFL_Extension
Requires:	%{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires:	%{name}-sub2-domain_API-UI-External_Output_Manager
Requires:	%{name}-sub2-domain_API-UI-FontConfig
Requires:	%{name}-sub2-domain_API-UI-HarfBuzz
Requires:	%{name}-sub2-domain_API-UI-Minicontrol
Requires:	%{name}-sub2-domain_API-UI-TBM_Surface
Requires:	%{name}-sub2-domain_API-UI-Tizen_WS_Shell
Requires:	%{name}-sub2-domain_API-UIX-Input_Method
Requires:	%{name}-sub2-domain_API-Web-WebView

%description root-Preset_iot_headed
The packages of Tizen IoT Headed Common.
%files root-Preset_iot_headed
