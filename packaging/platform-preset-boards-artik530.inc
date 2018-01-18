# Maintainer: Tizen PM?
# You need ACK (+1) from the maintainer to be reviewed by building-block maintainers.

##################
###  ARTIK530  ###
##################
%package sub1-Preset_boards-ARTIK530
Summary:	ARTIK530 Selection for HAL and Feature
Requires:	%{name}-sub2-Preset_boards-ARTIK530-System
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-System_Device
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Audio
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Audio_Recording
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-GPS
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Codec
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Camera
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Display
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Display_Headless
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Wifi
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-WifiDirect
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Bluetooth
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Bluetooth_CallAudio
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-BLE
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-NFC
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Telephony
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Feedback
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Sensor
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-DALi
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-EFL
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-IM

Conflicts:	%{name}-sub1-Preset_boards-TM1
Conflicts:	%{name}-sub1-Preset_boards-TM2
Conflicts:	%{name}-sub1-Preset_boards-RPI3

%description sub1-Preset_boards-ARTIK530
Firstly select HALs and Feature to add to your image.
%files sub1-Preset_boards-ARTIK530
%posttrans sub1-Preset_boards-ARTIK530
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
%tizen_feature tizen.org/feature/peripheral_io.gpio true
%tizen_feature tizen.org/feature/peripheral_io.i2c true
%tizen_feature tizen.org/feature/peripheral_io.pwm true
%tizen_feature tizen.org/feature/peripheral_io.spi true
%tizen_feature tizen.org/feature/peripheral_io.uart true
%tizen_feature tizen.org/system/model_name artik


### ARTIK530-System ###
%package sub2-Preset_boards-ARTIK530-System
Summary:	ARTIK530_System
Requires:	system-plugin-config-udev-sdbd
Requires:	system-plugin-device-u3
Requires:	model-config-default
Suggests:	system-plugin-feature-init_wrapper

%description sub2-Preset_boards-ARTIK530-System
Packages for System HAL and Feature. They are mandatory.
If you select 3 partitions, please select system-plugin-device-u3.
If you don't use initrd partition, please select system-plugin-feature-init_wrapper.
%files sub2-Preset_boards-ARTIK530-System

### ARTIK530-System_Device ###
%package sub2-Preset_boards-ARTIK530-System_Device
Summary:	ARTIK530_Deviced Plugin
Requires:	device-manager-plugin-artik

%description sub2-Preset_boards-ARTIK530-System_Device
Packages for Deviced HAL and Feature.
%files sub2-Preset_boards-ARTIK530-System_Device


### ARTIK530-Audio ###
%package sub2-Preset_boards-ARTIK530-Audio
Summary:	ARTIK530_Audio
Requires:	audio-hal-alc5658
Requires:	alsa-ucm-data-alc5658
Requires:	mmfw-sysconf-target-artik10

Suggests:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests:	%{name}-sub2-domain_API-Multimedia-Player
Suggests:	%{name}-sub2-domain_API-Multimedia-WAV_Player
Suggests:	%{name}-sub2-domain_API-Multimedia-Tone_Player
Suggests:	%{name}-sub2-domain_API-Multimedia-OpenAL
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer
Suggests:	%{name}-sub2-domain_API-Multimedia-Sound_Pool

%description sub2-Preset_boards-ARTIK530-Audio
Packages of Audio HAL and Feature for ARTIK530.
If you select Bluetooth, you can select pulseaudio-modules-bluetooth.
%files sub2-Preset_boards-ARTIK530-Audio

### ARTIK530-Audio_Recording ###
%package sub2-Preset_boards-ARTIK530-Audio_Recording
Summary:	ARTIK530_AudioRecording
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Audio

Suggests:	%{name}-sub2-domain_API-Multimedia-Recorder
Suggests:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer

%description sub2-Preset_boards-ARTIK530-Audio_Recording
Packages of Audio HAL and Feature for ARTIK530.

%files sub2-Preset_boards-ARTIK530-Audio_Recording
%posttrans sub2-Preset_boards-ARTIK530-Audio_Recording
%tizen_feature tizen.org/feature/microphone true
%tizen_feature tizen.org/feature/media.audio_recording true

### ARTIK530-GPS ###
%package sub2-Preset_boards-ARTIK530-GPS
Summary:	ARTIK530_GPS (Not Supported)

%description sub2-Preset_boards-ARTIK530-GPS
Packages of GPS HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-GPS

### ARTIK530-Codec ###
%package sub2-Preset_boards-ARTIK530-Codec
Summary:	ARTIK530_Codec
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Display
Suggests:	%{name}-sub2-Preset_boards-ARTIK530-Display_Headless
Requires:	nx-gst-meta
Requires:	nx-video-api
Requires:	gst-plugins-video-dec
Requires:	gst-plugins-video-enc
Requires:	mmfw-sysconf-target-artik10

Suggests:	%{name}-sub2-domain_API-Multimedia-Player
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Codec
Suggests:	%{name}-sub2-domain_API-Multimedia-Camera
Suggests:	%{name}-sub2-domain_API-Multimedia-Recorder
Suggests:	%{name}-sub2-domain_API-Multimedia-Screen_Mirroring

%description sub2-Preset_boards-ARTIK530-Codec
Packages of Codec HAL and Feature for ARTIK530.
If you want to use hardware acceleration, select the required feature.
%files sub2-Preset_boards-ARTIK530-Codec

### ARTIK530-Camera ###
%package sub2-Preset_boards-ARTIK530-Camera
Summary:	ARTIK530_Camera
Requires:	%{name}-sub2-domain_API-Multimedia-Camera
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Display
Requires:	mmfw-sysconf-target-artik10
Requires:	gst-plugins-tizen

%description sub2-Preset_boards-ARTIK530-Camera
Packages of Camera HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-Camera
%posttrans sub2-Preset_boards-ARTIK530-Camera
%tizen_feature tizen.org/feature/camera true
%tizen_feature tizen.org/feature/camera.back true
%tizen_feature tizen.org/feature/camera.back.flash false
%tizen_feature tizen.org/feature/camera.front false
%tizen_feature tizen.org/feature/camera.front.flash false
%tizen_feature tizen.org/feature/media.video_recording true


### ARTIK530-Display ###
%package sub2-Preset_boards-ARTIK530-Display
Summary:	ARTIK530_Display
Requires:	%{name}-sub2-domain_API-UI-Display_Server
Requires:	e-tizen-data-profile_common
Requires:	libtbm-nexell
Requires:	libtdm-nexell
Requires:	coregl
Requires:	gst-plugins-bad

Conflicts:	%{name}-sub2-Preset_boards-ARTIK530-Display_Headless

%description sub2-Preset_boards-ARTIK530-Display
Packages of Display HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-Display
%posttrans sub2-Preset_boards-ARTIK530-Display
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

### ARTIK530-Display_Headless ###
%package sub2-Preset_boards-ARTIK530-Display_Headless
Summary:	ARTIK530_Display(Headless)
Requires:	%{name}-sub2-domain_API-UI-Display_Server_Headless
Requires:	libtbm-nexell

Conflicts:	%{name}-sub2-Preset_boards-ARTIK530-Display

%description sub2-Preset_boards-ARTIK530-Display_Headless
Packages of Display HAL and Feature for ARTIK530(Headless).
%files sub2-Preset_boards-ARTIK530-Display_Headless
%posttrans sub2-Preset_boards-ARTIK530-Display_Headless
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

### ARTIK530-Wifi ###
%package sub2-Preset_boards-ARTIK530-Wifi
Summary:	ARTIK530_Wifi
Requires:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Requires:	wpa_supplicant-profile_common
Suggests:	net-config-plugin-headed

%description sub2-Preset_boards-ARTIK530-Wifi
Packages of Wifi HAL and Feature for ARTIK530.
If you enable the UI, you can select net-config-plugin-headed.
%files sub2-Preset_boards-ARTIK530-Wifi


### ARTIK530-WifiDirect ###
%package sub2-Preset_boards-ARTIK530-WifiDirect
Summary:	ARTIK530_WifiDirect
Requires:	%{name}-sub2-domain_API-Network-WiFi_Direct
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Wifi
Requires:	wifi-direct-manager-profile_common

%description sub2-Preset_boards-ARTIK530-WifiDirect
Packages of WifiDirect HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-WifiDirect

### ARTIK530-Bluetooth ###
%package sub2-Preset_boards-ARTIK530-Bluetooth
Summary:	ARTIK530_Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires:	bluetooth-frwk-profile_common
Requires:	bluetooth-tools-profile_common
Requires:	bluetooth-firmware-marvell-artik530
Requires:	bluez-profile_common
Suggests:	bluez-extension-bredr
Suggests:	bluetooth-frwk-plugin-headed
Suggests:	org.tizen.bt-syspopup
Suggests:	org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-ARTIK530-Bluetooth
Packages of Bluetooth HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-Bluetooth

### ARTIK530-Bluetooth_CallAudio ###
%package sub2-Preset_boards-ARTIK530-Bluetooth_CallAudio
Summary:	ARTIK530_Bluetooth Call Audio
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_Call_Audio
Requires:	bluetooth-agent-profile_common

%description sub2-Preset_boards-ARTIK530-Bluetooth_CallAudio
Packages of Bluetooth HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-Bluetooth_CallAudio


### ARTIK530-BLE ###
%package sub2-Preset_boards-ARTIK530-BLE
Summary:	ARTIK530_BLE
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_LE
Requires: bluetooth-frwk-profile_common
Requires: bluetooth-tools-profile_common
Requires: bluez-profile_common
Suggests: bluetooth-frwk-plugin-headed
Suggests: org.tizen.bt-syspopup
Suggests: org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-ARTIK530-BLE
Packages of BLE HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-BLE

### ARTIK530-NFC ###
%package sub2-Preset_boards-ARTIK530-NFC
Summary:	ARTIK530_NFC (Not Supported)

%description sub2-Preset_boards-ARTIK530-NFC
Packages of NFC HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-NFC

### ARTIK530-Telephony ###
%package sub2-Preset_boards-ARTIK530-Telephony
Summary:	ARTIK530_Telephony (Not Supported)

%description sub2-Preset_boards-ARTIK530-Telephony
Packages of Telephony HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-Telephony

### ARTIK530-Feedback ###
%package sub2-Preset_boards-ARTIK530-Feedback
Summary:	ARTIK530_Feedback
Requires:	%{name}-sub2-domain_API-System-Feedback
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Audio
Requires:	feedbackd-driver-gpio
Requires:	feedbackd-conf-level6
Requires:	svi-data-profile_common


%description sub2-Preset_boards-ARTIK530-Feedback
Packages of Feedback HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-Feedback

### ARTIK530-Sensor ###
%package sub2-Preset_boards-ARTIK530-Sensor
Summary:	ARTIK530_Sensor (Not Supported)

%description sub2-Preset_boards-ARTIK530-Sensor
Packages of Sensor HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-Sensor

### ARTIK530-DALi ###
%package sub2-Preset_boards-ARTIK530-DALi
Summary:	ARTIK530_DALi
Requires:	%{name}-sub2-domain_API-UI-DALi
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Display
Requires:	dali-extension-video-player-plugin
Requires:	dali-extension-key-extension
Requires:	dali-extension
Requires:	dali-toolkit-resources_720x1280

%description sub2-Preset_boards-ARTIK530-DALi
Packages of DALi HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-DALi

### ARTIK530-EFL ###
%package sub2-Preset_boards-ARTIK530-EFL
Summary:	ARTIK530_EFL
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Display
Requires:	%{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires:	efl-misc-profile_common
Requires:	efl-modules-profile_common
Requires:	efl-theme-tizen-common
Requires:   elementary-tizen
Suggests:   download-fonts-service


%description sub2-Preset_boards-ARTIK530-EFL
Packages of EFL HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-EFL

### ARTIK530-IM ###
%package sub2-Preset_boards-ARTIK530-IM
Summary:	ARTIK530_IM
Requires:	%{name}-sub2-domain_API-UIX-Input_Method
Requires:	isf-config-common
Requires:	ise-default-profile_common
Requires:	org.tizen.inputmethod-setting-profile_common
Requires:	%{name}-sub2-Preset_boards-ARTIK530-EFL

%description sub2-Preset_boards-ARTIK530-IM
Packages of IM HAL and Feature for ARTIK530.
%files sub2-Preset_boards-ARTIK530-IM
