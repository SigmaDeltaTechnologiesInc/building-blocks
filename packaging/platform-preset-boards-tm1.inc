# Maintainer: Tizen PM?
# You need ACK (+1) from the maintainer to be reviewed by building-block maintainers.

#############
###  TM1  ###
#############
%package sub1-Preset_boards-TM1
Summary:	TM1 Selection for HAL and Feature(For Test)
Requires:	%{name}-sub2-Preset_boards-TM1-System
Suggests:	%{name}-sub2-Preset_boards-TM1-Audio
Suggests:	%{name}-sub2-Preset_boards-TM1-Audio_Recording
Suggests:	%{name}-sub2-Preset_boards-TM1-GPS
Suggests:	%{name}-sub2-Preset_boards-TM1-Camera
Suggests:	%{name}-sub2-Preset_boards-TM1-Radio
Suggests:	%{name}-sub2-Preset_boards-TM1-Display
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
Conflicts:	%{name}-sub1-Preset_boards-ARTIK530
Conflicts:	%{name}-sub1-Preset_boards-ARTIK520

%description sub1-Preset_boards-TM1
Firstly select HALs and Feature to add to your image.
%files sub1-Preset_boards-TM1
%posttrans sub1-Preset_boards-TM1
%tizen_feature tizen.org/system/platform.processor SC7727S
%tizen_feature tizen.org/system/platform.communication_processor SC7727S
%tizen_feature tizen.org/feature/platform.core.cpu.arch armv7
%tizen_feature tizen.org/feature/platform.core.cpu.arch.armv7 true
%tizen_feature tizen.org/feature/platform.core.cpu.arch.armv8 false
%tizen_feature tizen.org/feature/platform.core.cpu.frequency 1300
%tizen_feature tizen.org/feature/platform.core.fpu.arch vfpv3
%tizen_feature tizen.org/feature/platform.core.fpu.arch.vfpv3 true
%tizen_feature tizen.org/feature/platform.core.fpu.arch.vfpv4 false
%tizen_feature tizen.org/feature/profile mobile
%tizen_feature tizen.org/feature/location.batch false
%tizen_feature tizen.org/feature/network.ethernet false
%tizen_feature tizen.org/feature/network.wifi.tdls false
%tizen_feature tizen.org/feature/screen.auto_rotation true
%tizen_feature tizen.org/feature/screen.height 1280
%tizen_feature tizen.org/feature/screen.output.hdmi false
%tizen_feature tizen.org/feature/screen.output.rca false
%tizen_feature tizen.org/feature/screen.shape.circle false
%tizen_feature tizen.org/feature/screen.shape.rectangle true
%tizen_feature tizen.org/feature/screen.size.normal.720.1280 true
%tizen_feature tizen.org/feature/screen.width 720
%tizen_feature tizen.org/feature/sensor.accelerometer true
%tizen_feature tizen.org/feature/sensor.gravity true
%tizen_feature tizen.org/feature/sensor.linear_acceleration true
%tizen_feature tizen.org/feature/sensor.proximity true
%tizen_feature tizen.org/feature/sensor.temperature false



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
Requires:	audio-hal-sc7727
Requires:	audio-config-sc-TM1-sc7730
Requires:	mmfw-sysconf-target-tm1

Suggests:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests:	%{name}-sub2-domain_API-Multimedia-Player
Suggests:	%{name}-sub2-domain_API-Multimedia-WAV_Player
Suggests:	%{name}-sub2-domain_API-Multimedia-Tone_Player
Suggests:	%{name}-sub2-domain_API-Multimedia-OpenAL
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer
Suggests:	%{name}-sub2-domain_API-Multimedia-Radio
Suggests:	%{name}-sub2-domain_API-Multimedia-Screen_Mirroring

%description sub2-Preset_boards-TM1-Audio
Packages of Audio HAL and Feature for TM1.
If you select Bluetooth, you can select pulseaudio-modules-bluetooth.
%files sub2-Preset_boards-TM1-Audio

### TM1-Audio_Recording ###
%package sub2-Preset_boards-TM1-Audio_Recording
Summary:	AudioRecording
Requires:	%{name}-sub2-Preset_boards-TM1-Audio

Suggests:	%{name}-sub2-domain_API-Multimedia-Recorder
Suggests:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer

%description sub2-Preset_boards-TM1-Audio_Recording
Packages of Audio HAL and Feature for TM1.

%files sub2-Preset_boards-TM1-Audio_Recording
%posttrans sub2-Preset_boards-TM1-Audio_Recording
%tizen_feature tizen.org/feature/microphone true

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
Requires:	%{name}-sub2-Preset_boards-TM1-Display
Requires:	mmfw-sysconf-target-tm1

%description sub2-Preset_boards-TM1-Camera
Packages of Camera HAL and Feature for TM1.
Not Implemented.
%files sub2-Preset_boards-TM1-Camera
%posttrans sub2-Preset_boards-TM1-Camera
%tizen_feature tizen.org/feature/camera true
%tizen_feature tizen.org/feature/camera.back true
%tizen_feature tizen.org/feature/camera.back.flash true
%tizen_feature tizen.org/feature/camera.front true
%tizen_feature tizen.org/feature/camera.front.flash false

### TM1-Radio ###
%package sub2-Preset_boards-TM1-Radio
Summary:	Radio
Requires:	%{name}-sub2-domain_API-Multimedia-Radio
Requires:	%{name}-sub2-Preset_boards-TM1-Audio
Requires:	mmfw-sysconf-target-tm1
Requires:	bluez
Requires:	rfkill
Requires:	bluetooth-firmware-sprd-TM1

%description sub2-Preset_boards-TM1-Radio
Packages of Radio Feature for TM1.
%files sub2-Preset_boards-TM1-Radio
%posttrans sub2-Preset_boards-TM1-Radio
%tizen_feature tizen.org/feature/fmradio true

### TM1-Display ###
%package sub2-Preset_boards-TM1-Display
Summary:	Display
Requires:	%{name}-sub2-domain_API-UI-Display_Server
Requires:	e-tizen-data-profile_mobile
Requires:	libtbm-sprd
Requires:	libtdm-sprd
Requires:	coregl

%description sub2-Preset_boards-TM1-Display
Packages of Display HAL and Feature for TM1.
%files sub2-Preset_boards-TM1-Display
%posttrans sub2-Preset_boards-TM1-Display
%tizen_feature tizen.org/feature/graphics.acceleration true
%tizen_feature tizen.org/feature/multi_point_touch.pinch_zoom true
%tizen_feature tizen.org/feature/opengles true
%tizen_feature tizen.org/feature/opengles.version.1_1 true
%tizen_feature tizen.org/feature/opengles.version.2_0 true
%tizen_feature tizen.org/feature/opengles.version.3_0 false
%tizen_feature tizen.org/feature/opengles.version.3_1 false
%tizen_feature tizen.org/feature/opengles.version.3_2 false
%tizen_feature tizen.org/feature/vulkan.version.1_0 false
%tizen_feature tizen.org/feature/screen true

### TM1-Wifi ###
%package sub2-Preset_boards-TM1-Wifi
Summary:	Wifi
Requires: 	%{name}-sub2-domain_API-Network-WiFi
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
%posttrans sub2-Preset_boards-TM1-Telephony
%tizen_feature tizen.org/feature/network.telephony.service.cdma false
%tizen_feature tizen.org/feature/network.telephony.service.edge true
%tizen_feature tizen.org/feature/network.telephony.service.gprs true
%tizen_feature tizen.org/feature/network.telephony.service.gsm true
%tizen_feature tizen.org/feature/network.telephony.service.hsdpa true
%tizen_feature tizen.org/feature/network.telephony.service.hspa true
%tizen_feature tizen.org/feature/network.telephony.service.hsupa true
%tizen_feature tizen.org/feature/network.telephony.service.lte true
%tizen_feature tizen.org/feature/network.telephony.service.umts true

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
Requires:	%{name}-sub2-Preset_boards-TM1-Display
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
