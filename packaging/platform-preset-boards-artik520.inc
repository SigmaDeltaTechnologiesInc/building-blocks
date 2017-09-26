# Maintainer: Tizen PM?
# You need ACK (+1) from the maintainer to be reviewed by building-block maintainers.

##################
###  ARTIK520  ###
##################
%package sub1-Preset_boards-ARTIK520
Summary:	ARTIK520 Selection for HAL and Feature
Requires:	%{name}-sub2-Preset_boards-ARTIK520-System
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-System_Device
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-Audio
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-Audio_Recording
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-GPS
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-Camera
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-Display
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-Display_Headless
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-Wifi
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-WifiDirect
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-Bluetooth
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-Bluetooth_CallAudio
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-BLE
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-NFC
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-Telephony
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-Feedback
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-Sensor
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-DALi
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-EFL
Suggests:	%{name}-sub2-Preset_boards-ARTIK520-IM

Conflicts:	%{name}-sub1-Preset_boards-TM1
Conflicts:	%{name}-sub1-Preset_boards-RPI3
Conflicts:	%{name}-sub1-Preset_boards-ARTIK530

%description sub1-Preset_boards-ARTIK520
Firstly select HALs and Feature to add to your image.
%files sub1-Preset_boards-ARTIK520
%posttrans sub1-Preset_boards-ARTIK520
%tizen_feature tizen.org/system/platform.processor exynos
%tizen_feature tizen.org/system/platform.communication_processor none
%tizen_feature tizen.org/feature/platform.core.cpu.arch armv7
%tizen_feature tizen.org/feature/platform.core.cpu.arch.armv7 true
%tizen_feature tizen.org/feature/platform.core.cpu.arch.armv8 false
%tizen_feature tizen.org/feature/platform.core.cpu.frequency 1200
%tizen_feature tizen.org/feature/platform.core.fpu.arch vfpv3
%tizen_feature tizen.org/feature/platform.core.fpu.arch.vfpv3 true
%tizen_feature tizen.org/feature/platform.core.fpu.arch.vfpv4 false
%tizen_feature tizen.org/feature/profile common
%tizen_feature tizen.org/feature/location.batch false
%tizen_feature tizen.org/feature/network.ethernet true
%tizen_feature tizen.org/feature/network.wifi.tdls false
%tizen_feature tizen.org/feature/screen.auto_rotation false
%tizen_feature tizen.org/feature/screen.height 1280
%tizen_feature tizen.org/feature/screen.output.hdmi true
%tizen_feature tizen.org/feature/screen.output.rca false
%tizen_feature tizen.org/feature/screen.shape.circle false
%tizen_feature tizen.org/feature/screen.shape.rectangle true
%tizen_feature tizen.org/feature/screen.size.normal.720.1280 true
%tizen_feature tizen.org/feature/screen.width 720
%tizen_feature tizen.org/feature/sensor.accelerometer false
%tizen_feature tizen.org/feature/sensor.gravity false
%tizen_feature tizen.org/feature/sensor.linear_acceleration false
%tizen_feature tizen.org/feature/sensor.proximity false
%tizen_feature tizen.org/feature/sensor.temperature false


### ARTIK520-System ###
%package sub2-Preset_boards-ARTIK520-System
Summary:	ARTIK520_System
Requires:	system-plugin-headless
Requires:	system-plugin-exynos
Suggests:	system-plugin-u3
Requires:	model-config-default
Suggests:	system-plugin-init_wrapper

%description sub2-Preset_boards-ARTIK520-System
Packages for System HAL and Feature. They are mandatory.
If you select 3 partitions, please select system-plugin-u3.
If you don't use initrd partition, please select system-plugin-init_wrapper.
%files sub2-Preset_boards-ARTIK520-System

### ARTIK520-System_Device ###
%package sub2-Preset_boards-ARTIK520-System_Device
Summary:	ARTIK520_Deviced Plugin
Requires:	device-manager-plugin-artik

%description sub2-Preset_boards-ARTIK520-System_Device
Packages for Deviced HAL and Feature.
%files sub2-Preset_boards-ARTIK520-System_Device


### ARTIK520-Audio ###
%package sub2-Preset_boards-ARTIK520-Audio
Summary:	ARTIK520_Audio
Requires:	audio-hal-ak4953
Requires:	alsa-ucm-data-ak4953
Requires:	mmfw-sysconf-target-artik10

Suggests:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests:	%{name}-sub2-domain_API-Multimedia-Player
Suggests:	%{name}-sub2-domain_API-Multimedia-WAV_Player
Suggests:	%{name}-sub2-domain_API-Multimedia-Tone_Player
Suggests:	%{name}-sub2-domain_API-Multimedia-OpenAL
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer

%description sub2-Preset_boards-ARTIK520-Audio
Packages of Audio HAL and Feature for ARTIK520.
If you select Bluetooth, you can select pulseaudio-modules-bluetooth.
%files sub2-Preset_boards-ARTIK520-Audio

### ARTIK520-Audio_Recording ###
%package sub2-Preset_boards-ARTIK520-Audio_Recording
Summary:	ARTIK520_AudioRecording
Requires:	%{name}-sub2-Preset_boards-ARTIK520-Audio

Suggests:	%{name}-sub2-domain_API-Multimedia-Recorder
Suggests:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer

%description sub2-Preset_boards-ARTIK520-Audio_Recording
Packages of Audio HAL and Feature for ARTIK520.

%files sub2-Preset_boards-ARTIK520-Audio_Recording
%posttrans sub2-Preset_boards-ARTIK520-Audio_Recording
%tizen_feature tizen.org/feature/microphone true

### ARTIK520-GPS ###
%package sub2-Preset_boards-ARTIK520-GPS
Summary:	ARTIK520_GPS (Not Supported)

%description sub2-Preset_boards-ARTIK520-GPS
Packages of GPS HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-GPS

### ARTIK520-Camera ###
%package sub2-Preset_boards-ARTIK520-Camera
Summary:	ARTIK520_Camera
Requires:	%{name}-sub2-domain_API-Multimedia-Camera
Requires:	%{name}-sub2-Preset_boards-ARTIK520-Display
Requires:	mmfw-sysconf-target-artik10

%description sub2-Preset_boards-ARTIK520-Camera
Packages of Camera HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-Camera
%posttrans sub2-Preset_boards-ARTIK520-Camera
%tizen_feature tizen.org/feature/camera true
%tizen_feature tizen.org/feature/camera.back true
%tizen_feature tizen.org/feature/camera.back.flash false
%tizen_feature tizen.org/feature/camera.front false
%tizen_feature tizen.org/feature/camera.front.flash false


### ARTIK520-Display ###
%package sub2-Preset_boards-ARTIK520-Display
Summary:	ARTIK520_Display
Requires:	%{name}-sub2-domain_API-UI-Display_Server
Requires:	e-tizen-data-profile_common
Requires:	libtbm-nexell
Requires:	libtdm-nexell
Requires:	coregl

Conflicts:	%{name}-sub2-Preset_boards-ARTIK520-Display_Headless

%description sub2-Preset_boards-ARTIK520-Display
Packages of Display HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-Display
%posttrans sub2-Preset_boards-ARTIK520-Display
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

### ARTIK520-Display_Headless ###
%package sub2-Preset_boards-ARTIK520-Display_Headless
Summary:	ARTIK520_Display(Headless)
Requires:	%{name}-sub2-domain_API-UI-Display_Server_Headless
Requires:	libtbm-nexell

Conflicts:	%{name}-sub2-Preset_boards-ARTIK520-Display

%description sub2-Preset_boards-ARTIK520-Display_Headless
Packages of Display HAL and Feature for ARTIK520(Headless).
%files sub2-Preset_boards-ARTIK520-Display_Headless
%posttrans sub2-Preset_boards-ARTIK520-Display_Headless
%tizen_feature tizen.org/feature/graphics.acceleration false
%tizen_feature tizen.org/feature/multi_point_touch.pinch_zoom false
%tizen_feature tizen.org/feature/opengles false
%tizen_feature tizen.org/feature/opengles.version.1_1 false
%tizen_feature tizen.org/feature/opengles.version.2_0 false
%tizen_feature tizen.org/feature/opengles.version.3_0 false
%tizen_feature tizen.org/feature/opengles.version.3_1 false
%tizen_feature tizen.org/feature/opengles.version.3_2 false
%tizen_feature tizen.org/feature/vulkan.version.1_0 false
%tizen_feature tizen.org/feature/screen false

### ARTIK520-Wifi ###
%package sub2-Preset_boards-ARTIK520-Wifi
Summary:	ARTIK520_Wifi
Requires:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Requires:	wpa_supplicant-profile_common
Suggests:	net-config-plugin-headed

%description sub2-Preset_boards-ARTIK520-Wifi
Packages of Wifi HAL and Feature for ARTIK520.
If you enable the UI, you can select net-config-plugin-headed.
%files sub2-Preset_boards-ARTIK520-Wifi


### ARTIK520-WifiDirect ###
%package sub2-Preset_boards-ARTIK520-WifiDirect
Summary:	ARTIK520_WifiDirect ( Not Supported )

%description sub2-Preset_boards-ARTIK520-WifiDirect
Packages of WifiDirect HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-WifiDirect

### ARTIK520-Bluetooth ###
%package sub2-Preset_boards-ARTIK520-Bluetooth
Summary:	ARTIK520_Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires:	bluetooth-firmware-bcm-artik
Requires:	bluetooth-frwk-profile_common
Requires:	bluetooth-tools-profile_common
Requires:	bluez-profile_common
Suggests:	bluez-extension-bredr 
Suggests:	bluetooth-frwk-plugin-headed
Suggests:	org.tizen.bt-syspopup
Suggests:	org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-ARTIK520-Bluetooth
Packages of Bluetooth HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-Bluetooth

### ARTIK520-Bluetooth_CallAudio ###
%package sub2-Preset_boards-ARTIK520-Bluetooth_CallAudio
Summary:	ARTIK520_Bluetooth Call Audio
Requires:	%{name}-sub2-Preset_boards-ARTIK520-Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_Call_Audio
Requires:	bluetooth-agent-profile_common

%description sub2-Preset_boards-ARTIK520-Bluetooth_CallAudio
Packages of Bluetooth HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-Bluetooth_CallAudio


### ARTIK520-BLE ###
%package sub2-Preset_boards-ARTIK520-BLE
Summary:	ARTIK520_BLE
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_LE
Requires: bluetooth-firmware-bcm-artik
Requires: bluetooth-frwk-profile_common
Requires: bluetooth-tools-profile_common
Requires: bluez-profile_common
Suggests: bluetooth-frwk-plugin-headed
Suggests: org.tizen.bt-syspopup
Suggests: org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-ARTIK520-BLE
Packages of BLE HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-BLE

### ARTIK520-NFC ###
%package sub2-Preset_boards-ARTIK520-NFC
Summary:	ARTIK520_NFC (Not Supported)

%description sub2-Preset_boards-ARTIK520-NFC
Packages of NFC HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-NFC

### ARTIK520-Telephony ###
%package sub2-Preset_boards-ARTIK520-Telephony
Summary:	ARTIK520_Telephony (Not Supported)

%description sub2-Preset_boards-ARTIK520-Telephony
Packages of Telephony HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-Telephony

### ARTIK520-Feedback ###
%package sub2-Preset_boards-ARTIK520-Feedback
Summary:	ARTIK520_Feedback
Requires:	%{name}-sub2-domain_API-System-Feedback
Requires:	%{name}-sub2-Preset_boards-ARTIK520-Audio
Requires:	feedbackd-profile_mobile
Requires:	svi-data-profile_common


%description sub2-Preset_boards-ARTIK520-Feedback
Packages of Feedback HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-Feedback

### ARTIK520-Sensor ###
%package sub2-Preset_boards-ARTIK520-Sensor
Summary:	ARTIK520_Sensor (Not Supported)

%description sub2-Preset_boards-ARTIK520-Sensor
Packages of Sensor HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-Sensor

### ARTIK520-DALi ###
%package sub2-Preset_boards-ARTIK520-DALi
Summary:	ARTIK520_DALi
Requires:	%{name}-sub2-domain_API-UI-DALi
Requires:	%{name}-sub2-Preset_boards-ARTIK520-Display
Requires:	dali-adaptor-dali-video-player-plugin
Requires:	dali-extension-key-extension
Requires:	dali-extension
Requires:	dali-toolkit-resources_720x1280

%description sub2-Preset_boards-ARTIK520-DALi
Packages of DALi HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-DALi

### ARTIK520-EFL ###
%package sub2-Preset_boards-ARTIK520-EFL
Summary:	ARTIK520_EFL
Requires:	%{name}-sub2-Preset_boards-ARTIK520-Display
Requires:	%{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires:	efl-misc-profile_common
Requires:	efl-modules-profile_common
Requires:	efl-theme-tizen-common
Requires:   elementary-tizen
Suggests:   download-fonts-service


%description sub2-Preset_boards-ARTIK520-EFL
Packages of EFL HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-EFL

### ARTIK520-IM ###
%package sub2-Preset_boards-ARTIK520-IM
Summary:	ARTIK520_IM
Requires:	%{name}-sub2-domain_API-UIX-Input_Method
Requires:	isf-config-common
Requires:	ise-default-profile_common
Requires:	org.tizen.inputmethod-setting-profile_common
Requires:	%{name}-sub2-Preset_boards-ARTIK520-EFL

%description sub2-Preset_boards-ARTIK520-IM
Packages of IM HAL and Feature for ARTIK520.
%files sub2-Preset_boards-ARTIK520-IM
