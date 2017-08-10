# Maintainer: Tizen PM?
# You need ACK (+1) from the maintainer to be reviewed by building-block maintainers.

%package root-Preset_boards
Summary:	Board (Hardware Set) Support Packages (BSP) Presets
%ifarch armv7l
Suggests:	%{name}-sub1-Preset_boards-RPI3
Suggests:	%{name}-sub1-Preset_boards-TM1
Suggests:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
%endif
%description root-Preset_boards
Note that kernel binaries may be required to be installed in a separated partition
and you might be not allowed to include kernel binaries in the platform image.
%files root-Preset_boards

%ifarch armv7l
%package sub1-Preset_boards-ARTIK_fullBSP
Summary:	ARTIK (full)
Requires:	alsa-ucm-data-ak4953
Requires:	audio-hal-ak4953
Requires:	bluetooth-firmware-bcm-artik
Requires:	device-manager-plugin-artik
Requires:	libomxil-e54xx
Requires:	mmfw-sysconf-target-artik10
Requires:	model-config-artik
Requires:	system-plugin-init_wrapper
Requires:	system-plugin-u3

Conflicts:	%{name}-sub1-Preset_boards-RPI3
Conflicts:	%{name}-sub1-Preset_boards-TM1

%description sub1-Preset_boards-ARTIK_fullBSP
__KS_URL__: http://download.tizen.org/snapshots/tizen/unified/latest/images/standard/common-wayland-3parts-armv7l-artik710/
These are manually extracted from
common-wayland-3parts-armv7l-artik710.ks
%files sub1-Preset_boards-ARTIK_fullBSP
%endif


%ifarch armv7l
##############
###  RPI3  ###
##############
%package sub1-Preset_boards-RPI3
Summary:	RPI3 Selection for HAL and Feature
Requires:	%{name}-sub2-Preset_boards-RPI3-System
Suggests:	%{name}-sub2-Preset_boards-RPI3-Audio
Suggests:	%{name}-sub2-Preset_boards-RPI3-GPS
Suggests:	%{name}-sub2-Preset_boards-RPI3-Camera
Suggests:	%{name}-sub2-Preset_boards-RPI3-GPU
Suggests:	%{name}-sub2-Preset_boards-RPI3-Wifi
Suggests:	%{name}-sub2-Preset_boards-RPI3-WifiDirect
Suggests:	%{name}-sub2-Preset_boards-RPI3-Bluetooth
Suggests:	%{name}-sub2-Preset_boards-RPI3-Bluetooth_CallAudio
Suggests:	%{name}-sub2-Preset_boards-RPI3-BLE
Suggests:	%{name}-sub2-Preset_boards-RPI3-NFC
Suggests:	%{name}-sub2-Preset_boards-RPI3-Telephony
Suggests:	%{name}-sub2-Preset_boards-RPI3-Feedback
Suggests:	%{name}-sub2-Preset_boards-RPI3-Sensor
Suggests:	%{name}-sub2-Preset_boards-RPI3-DALi
Suggests:	%{name}-sub2-Preset_boards-RPI3-EFL
Suggests:	%{name}-sub2-Preset_boards-RPI3-IM

Conflicts:	%{name}-sub1-Preset_boards-TM1
Conflicts:	%{name}-sub1-Preset_boards-ARTIK_fullBSP

%description sub1-Preset_boards-RPI3
Firstly select HALs and Feature to add to your image.
%files sub1-Preset_boards-RPI3


### RPI3-System ###
%package sub2-Preset_boards-RPI3-System
Summary:	System
Requires:	system-plugin-headless
Requires:	system-plugin-iot
Requires:	model-config-rpi3-profile_common_iot_core

%description sub2-Preset_boards-RPI3-System
Packages for System HAL and Feature. They are mandatory.
%files sub2-Preset_boards-RPI3-System


### RPI3-Audio ###
%package sub2-Preset_boards-RPI3-Audio
Summary:	Audio
Requires:	pulseaudio-modules-tizen
Suggests:	pulseaudio-modules-bluetooth
Requires:	audio-hal-bcm2837
Requires:	mmfw-sysconf-target-rpi3
Requires:	%{name}-sub2-domain_API-Multimedia-Audio_IO

%description sub2-Preset_boards-RPI3-Audio
Packages of Audio HAL and Feature for RPI3.
If you select Bluetooth, you can select pulseaudio-modules-bluetooth.
%files sub2-Preset_boards-RPI3-Audio

### RPI3-GPS ###
%package sub2-Preset_boards-RPI3-GPS
Summary:	GPS
Requires:	lbs-plugin-gps-rpi3
Requires:	%{name}-sub2-domain_API-Location-Location_Manager

%description sub2-Preset_boards-RPI3-GPS
Packages of GPS HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-GPS

### RPI3-Camera ###
%package sub2-Preset_boards-RPI3-Camera
Summary:	Camera
Requires:	%{name}-sub2-domain_API-Multimedia-Camera
Requires:	gst-plugins-good
Requires:	mmfw-sysconf-target-rpi3

%description sub2-Preset_boards-RPI3-Camera
Packages of Camera HAL and Feature for RPI3.
Not Implemented.
%files sub2-Preset_boards-RPI3-Camera

### RPI3-GPU ###
%package sub2-Preset_boards-RPI3-GPU
Summary:	GPU
Requires:	%{name}-sub2-domain_API-UI-Display_Server
Requires:	e-tizen-data-profile_common
Requires:	libtbm-vc4
Requires:	libtdm-vc4
Requires:	mesa
Requires:	coregl

%description sub2-Preset_boards-RPI3-GPU
Packages of GPU HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-GPU

### RPI3-Wifi ###
%package sub2-Preset_boards-RPI3-Wifi
Summary:	Wifi
Requires: %{name}-sub2-domain_API-Network-WiFi_Manager
Requires:	wpa_supplicant-profile_common
Suggests:	net-config-plugin-headed

%description sub2-Preset_boards-RPI3-Wifi
Packages of Wifi HAL and Feature for RPI3.
If you enable the UI, you can select net-config-plugin-headed.
%files sub2-Preset_boards-RPI3-Wifi


### RPI3-WifiDirect ###
%package sub2-Preset_boards-RPI3-WifiDirect
Summary:	WifiDirect
Requires:	%{name}-sub2-domain_API-Network-WiFi_Direct
Requires:	%{name}-sub2-Preset_boards-RPI3-Wifi
Requires:	wifi-direct-manager-profile_common
Requires:	wifi-direct-plugin-wpasupplicant-profile_common

%description sub2-Preset_boards-RPI3-WifiDirect
Packages of WifiDirect HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-WifiDirect

### RPI3-Bluetooth ###
%package sub2-Preset_boards-RPI3-Bluetooth
Summary:	Bluetooth (Not Implemented)

%description sub2-Preset_boards-RPI3-Bluetooth
Packages of Bluetooth HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Bluetooth

### RPI3-Bluetooth_CallAudio ###
%package sub2-Preset_boards-RPI3-Bluetooth_CallAudio
Summary:	Bluetooth Call Audio(Not Implemented)

%description sub2-Preset_boards-RPI3-Bluetooth_CallAudio
Packages of Bluetooth HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Bluetooth_CallAudio


### RPI3-BLE ###
%package sub2-Preset_boards-RPI3-BLE
Summary:	BLE (Not Implemented)

%description sub2-Preset_boards-RPI3-BLE
Packages of BLE HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-BLE

### RPI3-NFC ###
%package sub2-Preset_boards-RPI3-NFC
Summary:	NFC (Not Implemented)

%description sub2-Preset_boards-RPI3-NFC
Packages of NFC HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-NFC

### RPI3-Telephony ###
%package sub2-Preset_boards-RPI3-Telephony
Summary:	Telephony (Not Implemented)

%description sub2-Preset_boards-RPI3-Telephony
Packages of Telephony HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Telephony

### RPI3-Feedback ###
%package sub2-Preset_boards-RPI3-Feedback
Summary:	Feedback
Requires:	%{name}-sub2-domain_API-System-Feedback
Requires:	%{name}-sub2-Preset_boards-RPI3-Audio
Requires:	feedbackd-profile_mobile
Requires:	svi-data-profile_mobile


%description sub2-Preset_boards-RPI3-Feedback
Packages of Feedback HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Feedback

### RPI3-Sensor ###
%package sub2-Preset_boards-RPI3-Sensor
Summary:	Sensor (Not Implemented)

%description sub2-Preset_boards-RPI3-Sensor
Packages of Sensor HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Sensor

### RPI3-DALi ###
%package sub2-Preset_boards-RPI3-DALi
Summary:	DALi (Not Implemented)

%description sub2-Preset_boards-RPI3-DALi
Packages of DALi HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-DALi

### RPI3-EFL ###
%package sub2-Preset_boards-RPI3-EFL
Summary:	EFL
Requires:	%{name}-sub2-Preset_boards-RPI3-GPU
Requires:	%{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires:	efl-config-profile_common
Requires:	efl-misc-profile_common
Requires:	efl-modules-profile_common
Requires:	efl-theme-tizen-common
Suggests:   elementary-tizen
Suggests:   download-fonts-service


%description sub2-Preset_boards-RPI3-EFL
Packages of EFL HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-EFL

### RPI3-IM ###
%package sub2-Preset_boards-RPI3-IM
Summary:	IM
Requires:	%{name}-sub2-domain_API-UIX-Input_Method
Requires:	isf-config-common
Requires:	ise-default-profile_common
Requires:	org.tizen.inputmethod-setting-profile_common
Requires:	%{name}-sub2-Preset_boards-RPI3-EFL

%description sub2-Preset_boards-RPI3-IM
Packages of IM HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-IM



#############
###  TM1  ###
#############
%package sub1-Preset_boards-TM1
Summary:	TM1 Selection for HAL and Feature(For Test)
Requires:	%{name}-sub2-Preset_boards-TM1-System
Suggests:	%{name}-sub2-Preset_boards-TM1-Audio
Suggests:	%{name}-sub2-Preset_boards-TM1-GPS
Suggests:	%{name}-sub2-Preset_boards-TM1-Camera
Suggests:	%{name}-sub2-Preset_boards-TM1-GPU
Suggests:	%{name}-sub2-Preset_boards-TM1-Wifi
Suggests:	%{name}-sub2-Preset_boards-TM1-WifiDirect
Suggests:	%{name}-sub2-Preset_boards-TM1-Bluetooth
Suggests:	%{name}-sub2-Preset_boards-TM1-Bluetooth_CallAudio
Suggests:	%{name}-sub2-Preset_boards-TM1-BLE
Suggests:	%{name}-sub2-Preset_boards-TM1-NFC
Suggests:	%{name}-sub2-Preset_boards-TM1-Telephony
Suggests:	%{name}-sub2-Preset_boards-TM1-Feedback
Suggests:	%{name}-sub2-Preset_boards-TM1-Sensor
Suggests:	%{name}-sub2-Preset_boards-TM1-DALi
Suggests:	%{name}-sub2-Preset_boards-TM1-EFL
Suggests:	%{name}-sub2-Preset_boards-TM1-IM

Conflicts:	%{name}-sub1-Preset_boards-RPI3
Conflicts:	%{name}-sub1-Preset_boards-ARTIK_fullBSP

%description sub1-Preset_boards-TM1
Firstly select HALs and Feature to add to your image.
%files sub1-Preset_boards-TM1


### TM1-System ###
%package sub2-Preset_boards-TM1-System
Summary:	System
Requires:	system-plugin-headless
Requires:	system-plugin-spreadtrum
Requires:	model-config-tm1

%description sub2-Preset_boards-TM1-System
Packages for System HAL and Feature. They are mandatory.
%files sub2-Preset_boards-TM1-System


### TM1-Audio ###
%package sub2-Preset_boards-TM1-Audio
Summary:	Audio
Requires:	pulseaudio-modules-tizen
Suggests:	pulseaudio-modules-bluetooth
Requires:	audio-hal-sc7727
Requires:	audio-config-sc-TM1-sc7730
Requires:	mmfw-sysconf-target-tm1
Requires:	%{name}-sub2-domain_API-Multimedia-Audio_IO

%description sub2-Preset_boards-TM1-Audio
Packages of Audio HAL and Feature for TM1.
If you select Bluetooth, you can select pulseaudio-modules-bluetooth.
%files sub2-Preset_boards-TM1-Audio

### TM1-GPS ###
%package sub2-Preset_boards-TM1-GPS
Summary:	GPS
Requires:	%{name}-sub2-domain_API-Location-Location_Manager

%description sub2-Preset_boards-TM1-GPS
Packages of GPS HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-GPS

### TM1-Camera ###
%package sub2-Preset_boards-TM1-Camera
Summary:	Camera
Requires:	%{name}-sub2-domain_API-Multimedia-Camera
Requires:	%{name}-sub2-Preset_boards-TM1-GPU
Requires:	mmfw-sysconf-target-tm1

%description sub2-Preset_boards-TM1-Camera
Packages of Camera HAL and Feature for TM1.
Not Implemented.
%files sub2-Preset_boards-TM1-Camera

### TM1-GPU ###
%package sub2-Preset_boards-TM1-GPU
Summary:	GPU
Requires:	%{name}-sub2-domain_API-UI-Display_Server
Requires:	e-tizen-data-profile_mobile
Requires:	libtbm-sprd
Requires:	libtdm-sprd
Requires:	coregl

%description sub2-Preset_boards-TM1-GPU
Packages of GPU HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-GPU

### TM1-Wifi ###
%package sub2-Preset_boards-TM1-Wifi
Summary:	Wifi
Requires: 	%{name}-sub2-domain_API-Network-WiFi_Manager
Requires:	wpa_supplicant-extension-TM1
Suggests:	net-config-plugin-headed

%description sub2-Preset_boards-TM1-Wifi
Packages of Wifi HAL and Feature for TM1.
If you enable the UI, you can select net-config-plugin-headed.
%files sub2-Preset_boards-TM1-Wifi


### TM1-WifiDirect ###
%package sub2-Preset_boards-TM1-WifiDirect
Summary:	WifiDirect
Requires:	%{name}-sub2-domain_API-Network-WiFi_Direct
Requires:	%{name}-sub2-Preset_boards-TM1-Wifi
Requires:	wifi-direct-manager-extension-TM1
Requires:	wifi-direct-plugin-wpasupplicant-extension-TM1

%description sub2-Preset_boards-TM1-WifiDirect
Packages of WifiDirect HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-WifiDirect

### TM1-Bluetooth ###
%package sub2-Preset_boards-TM1-Bluetooth
Summary:	Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires:	bluetooth-firmware-sprd-TM1
Requires:	bluetooth-frwk-profile_mobile
Requires:	bluetooth-tools-profile_mobile
Requires:	bluez-profile_common
Suggests:	bluez-extension-bredr 
Suggests: bluetooth-frwk-plugin-headed
Suggests: org.tizen.bt-syspopup
Suggests: org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-TM1-Bluetooth
Packages of Bluetooth HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-Bluetooth

### TM1-Bluetooth_CallAudio ###
%package sub2-Preset_boards-TM1-Bluetooth_CallAudio
Summary:	Bluetooth CallAudio Function
Requires:	%{name}-sub2-Preset_boards-TM1-Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_Call_Audio
Requires:	bluetooth-agent-profile_common

%description sub2-Preset_boards-TM1-Bluetooth_CallAudio
Packages of Bluetooth Call Audio Function for TM1.
%files sub2-Preset_boards-TM1-Bluetooth_CallAudio

### TM1-BLE ###
%package sub2-Preset_boards-TM1-BLE
Summary:	BLE
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_LE
Requires: bluetooth-firmware-sprd-TM1
Requires: bluetooth-frwk-profile_mobile
Requires: bluetooth-tools-profile_mobile
Requires: bluez-profile_common
Suggests: bluetooth-frwk-plugin-headed
Suggests: org.tizen.bt-syspopup
Suggests: org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-TM1-BLE
Packages of BLE HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-BLE

### TM1-NFC ###
%package sub2-Preset_boards-TM1-NFC
Summary:	NFC
Requires:	%{name}-sub2-domain_API-Network-NFC

%description sub2-Preset_boards-TM1-NFC
Packages of NFC HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-NFC

### TM1-Telephony ###
%package sub2-Preset_boards-TM1-Telephony
Summary:	Telephony (Not Yet)
Requires:	%{name}-sub1-domain_API-Telephony

%description sub2-Preset_boards-TM1-Telephony
Packages of Telephony HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-Telephony

### TM1-Feedback ###
%package sub2-Preset_boards-TM1-Feedback
Summary:	Feedback
Requires:	%{name}-sub2-domain_API-System-Feedback
Requires:	%{name}-sub2-Preset_boards-TM1-Audio
Requires:	feedbackd-profile_mobile
Requires:	svi-data-profile_mobile

%description sub2-Preset_boards-TM1-Feedback
Packages of Feedback HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-Feedback

### TM1-Sensor ###
%package sub2-Preset_boards-TM1-Sensor
Summary:	Sensor
Requires:	%{name}-sub2-domain_API-System-Sensor_Listener
Requires:	sensor-hal-tm1

%description sub2-Preset_boards-TM1-Sensor
Packages of Sensor HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-Sensor

### TM1-DALi ###
%package sub2-Preset_boards-TM1-DALi
Summary:	DALi (Not Implemented)

%description sub2-Preset_boards-TM1-DALi
Packages of DALi HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-DALi

### TM1-EFL ###
%package sub2-Preset_boards-TM1-EFL
Summary:	EFL
Requires:	%{name}-sub2-Preset_boards-TM1-GPU
Requires:	%{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires:	efl-config-profile_mobile
Requires:	efl-misc-profile_mobile
Requires:	efl-modules-profile_mobile
Requires:	efl-theme-tizen-mobile
Requires:   elementary-tizen
Suggests:   download-fonts-service


%description sub2-Preset_boards-TM1-EFL
Packages of EFL HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-EFL

### TM1-IM ###
%package sub2-Preset_boards-TM1-IM
Summary:	IM
Requires:	%{name}-sub2-domain_API-UIX-Input_Method
Requires:	isf-config-mobile
Requires:	ise-default-profile_mobile
Requires:	org.tizen.inputmethod-setting-profile_mobile
Requires:	%{name}-sub2-Preset_boards-TM1-EFL

%description sub2-Preset_boards-TM1-IM
Packages of IM HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-IM

%endif
