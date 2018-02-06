# Maintainer: Tizen PM?
# You need ACK (+1) from the maintainer to be reviewed by building-block maintainers.

##################
###  TM2  ###
##################
%package sub1-Preset_boards-TM2
Summary:	TM2 Selection for HAL and Feature
Requires:	%{name}-sub2-Preset_boards-TM2-System
Suggests:	%{name}-sub2-Preset_boards-TM2-System_Device
Suggests:	%{name}-sub2-Preset_boards-TM2-Audio
Suggests:	%{name}-sub2-Preset_boards-TM2-Audio_Recording
Suggests:	%{name}-sub2-Preset_boards-TM2-GPS
Suggests:	%{name}-sub2-Preset_boards-TM2-Codec
Suggests:	%{name}-sub2-Preset_boards-TM2-Camera
Suggests:	%{name}-sub2-Preset_boards-TM2-Display
Suggests:	%{name}-sub2-Preset_boards-TM2-Display_Headless
Suggests:	%{name}-sub2-Preset_boards-TM2-Wifi
Suggests:	%{name}-sub2-Preset_boards-TM2-WifiDirect
Suggests:	%{name}-sub2-Preset_boards-TM2-Bluetooth
Suggests:	%{name}-sub2-Preset_boards-TM2-Bluetooth_CallAudio
Suggests:	%{name}-sub2-Preset_boards-TM2-BLE
Suggests:	%{name}-sub2-Preset_boards-TM2-NFC
Suggests:	%{name}-sub2-Preset_boards-TM2-Telephony
Suggests:	%{name}-sub2-Preset_boards-TM2-Feedback
Suggests:	%{name}-sub2-Preset_boards-TM2-Sensor
Suggests:	%{name}-sub2-Preset_boards-TM2-DALi
Suggests:	%{name}-sub2-Preset_boards-TM2-EFL
Suggests:	%{name}-sub2-Preset_boards-TM2-IM

Conflicts:	%{name}-sub1-Preset_boards-TM1
Conflicts:	%{name}-sub1-Preset_boards-RPI3
Conflicts:	%{name}-sub1-Preset_boards-ARTIK530

%description sub1-Preset_boards-TM2
Firstly select HALs and Feature to add to your image.
%files sub1-Preset_boards-TM2
%posttrans sub1-Preset_boards-TM2
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
%tizen_feature tizen.org/system/model_name tm2


### TM2-System ###
%package sub2-Preset_boards-TM2-System
Summary:	TM2_System
Requires:	system-plugin-profile-iot-headless
#Requires:	system-plugin-config-udev-sdbd
Requires:	system-plugin-exynos
Requires:	model-config-default
Requires:	system-plugin-init_wrapper
#Requires:	system-plugin-n4


%description sub2-Preset_boards-TM2-System
Packages for System HAL and Feature. They are mandatory.
If you select 3 partitions, please select system-plugin-u3.
If you don't use initrd partition, please select system-plugin-init_wrapper.
%files sub2-Preset_boards-TM2-System

### TM2-System_Device ###
%package sub2-Preset_boards-TM2-System_Device
Summary:	TM2_Deviced Plugin
Requires:	device-manager-plugin-exynos5433

%description sub2-Preset_boards-TM2-System_Device
Packages for Deviced HAL and Feature.
%files sub2-Preset_boards-TM2-System_Device


### TM2-Audio ###
%package sub2-Preset_boards-TM2-Audio
Summary:	TM2_Audio
Requires:	alsa-ucm-data-wm5110
Requires:	audio-hal-wm5110
Requires:	mmfw-sysconf-target-n4

Suggests:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests:	%{name}-sub2-domain_API-Multimedia-Player
Suggests:	%{name}-sub2-domain_API-Multimedia-WAV_Player
Suggests:	%{name}-sub2-domain_API-Multimedia-Tone_Player
Suggests:	%{name}-sub2-domain_API-Multimedia-OpenAL
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer

%description sub2-Preset_boards-TM2-Audio
Packages of Audio HAL and Feature for TM2.
If you select Bluetooth, you can select pulseaudio-modules-bluetooth.
%files sub2-Preset_boards-TM2-Audio

### TM2-Audio_Recording ###
%package sub2-Preset_boards-TM2-Audio_Recording
Summary:	TM2_AudioRecording
Requires:	%{name}-sub2-Preset_boards-TM2-Audio

Suggests:	%{name}-sub2-domain_API-Multimedia-Recorder
Suggests:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer

%description sub2-Preset_boards-TM2-Audio_Recording
Packages of Audio HAL and Feature for TM2.

%files sub2-Preset_boards-TM2-Audio_Recording
%posttrans sub2-Preset_boards-TM2-Audio_Recording
%tizen_feature tizen.org/feature/microphone true
%tizen_feature tizen.org/feature/media.audio_recording true

### TM2-GPS ###
%package sub2-Preset_boards-TM2-GPS
Summary:	TM2_GPS (Not Supported)

%description sub2-Preset_boards-TM2-GPS
Packages of GPS HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-GPS

### TM2-Codec ###
%package sub2-Preset_boards-TM2-Codec
Summary:	TM2_Codec
Suggests:	%{name}-sub2-Preset_boards-TM2-Display
Suggests:	%{name}-sub2-Preset_boards-TM2-Display_Headless
Requires:	gst-libav
Requires:	gstreamer
Requires:	gst-plugins-base
Requires:	gstreamer-utils
Requires:	gst-omx
Requires:	gst-plugins-good
Requires:	gst-plugins-bad
Requires:	gst-plugins-tizen
Requires:	gst-plugins-ugly
Requires:	mmfw-sysconf-target-n4

Suggests:	%{name}-sub2-domain_API-Multimedia-Player
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Codec
Suggests:	%{name}-sub2-domain_API-Multimedia-Camera
Suggests:	%{name}-sub2-domain_API-Multimedia-Recorder
Suggests:	%{name}-sub2-domain_API-Multimedia-Screen_Mirroring

%description sub2-Preset_boards-TM2-Codec
Packages of Codec HAL and Feature for TM2.
If you want to use hardware acceleration, select the required feature.
%files sub2-Preset_boards-TM2-Codec

### TM2-Camera ###
%package sub2-Preset_boards-TM2-Camera
Summary:	TM2_Camera
Requires:	%{name}-sub2-domain_API-Multimedia-Camera
Requires:	%{name}-sub2-Preset_boards-TM2-Display
Requires:	mmfw-sysconf-target-n4
Requires:	gst-plugins-tizen

%description sub2-Preset_boards-TM2-Camera
Packages of Camera HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-Camera
%posttrans sub2-Preset_boards-TM2-Camera
%tizen_feature tizen.org/feature/camera true
%tizen_feature tizen.org/feature/camera.back true
%tizen_feature tizen.org/feature/camera.back.flash false
%tizen_feature tizen.org/feature/camera.front false
%tizen_feature tizen.org/feature/camera.front.flash false
%tizen_feature tizen.org/feature/media.video_recording true


### TM2-Display ###
%package sub2-Preset_boards-TM2-Display
Summary:	TM2_Display
Requires:	%{name}-sub2-domain_API-UI-Display_Server
Requires:	e-tizen-data-profile_common
Requires:	libtbm-exynos
Requires:	libtdm-exynos
Requires:	coregl
Requires:	gst-plugins-bad

Conflicts:	%{name}-sub2-Preset_boards-TM2-Display_Headless

%description sub2-Preset_boards-TM2-Display
Packages of Display HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-Display
%posttrans sub2-Preset_boards-TM2-Display
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

### TM2-Display_Headless ###
%package sub2-Preset_boards-TM2-Display_Headless
Summary:	TM2_Display(Headless)
Requires:	%{name}-sub2-domain_API-UI-Display_Server_Headless
Requires:	libtbm-exynos

Conflicts:	%{name}-sub2-Preset_boards-TM2-Display

%description sub2-Preset_boards-TM2-Display_Headless
Packages of Display HAL and Feature for TM2(Headless).
%files sub2-Preset_boards-TM2-Display_Headless
%posttrans sub2-Preset_boards-TM2-Display_Headless
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

### TM2-Wifi ###
%package sub2-Preset_boards-TM2-Wifi
Summary:	TM2_Wifi
Requires:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Requires:	wpa_supplicant-extension-TM2
Suggests:	net-config-plugin-headed

%description sub2-Preset_boards-TM2-Wifi
Packages of Wifi HAL and Feature for TM2.
If you enable the UI, you can select net-config-plugin-headed.
%files sub2-Preset_boards-TM2-Wifi


### TM2-WifiDirect ###
%package sub2-Preset_boards-TM2-WifiDirect
Summary:	TM2_WifiDirect
Requires:	%{name}-sub2-domain_API-Network-WiFi_Direct
Requires:	%{name}-sub2-Preset_boards-TM2-Wifi
Requires:	wifi-direct-manager-profile_common

%description sub2-Preset_boards-TM2-WifiDirect
Packages of WifiDirect HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-WifiDirect

### TM2-Bluetooth ###
%package sub2-Preset_boards-TM2-Bluetooth
Summary:	TM2_Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires:	bluetooth-frwk-profile_common
Requires:	bluetooth-tools-profile_common
Requires:	bluetooth-firmware-bcm
Requires:	bluez-profile_common
Suggests:	bluez-extension-bredr
Suggests:	bluetooth-frwk-plugin-headed
Suggests:	org.tizen.bt-syspopup
Suggests:	org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-TM2-Bluetooth
Packages of Bluetooth HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-Bluetooth

### TM2-Bluetooth_CallAudio ###
%package sub2-Preset_boards-TM2-Bluetooth_CallAudio
Summary:	TM2_Bluetooth Call Audio
Requires:	%{name}-sub2-Preset_boards-TM2-Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_Call_Audio
Requires:	bluetooth-agent-profile_common

%description sub2-Preset_boards-TM2-Bluetooth_CallAudio
Packages of Bluetooth HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-Bluetooth_CallAudio


### TM2-BLE ###
%package sub2-Preset_boards-TM2-BLE
Summary:	TM2_BLE
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_LE
Requires: bluetooth-frwk-profile_common
Requires: bluetooth-tools-profile_common
Requires: bluez-profile_common
Suggests: bluetooth-frwk-plugin-headed
Suggests: org.tizen.bt-syspopup
Suggests: org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-TM2-BLE
Packages of BLE HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-BLE

### TM2-NFC ###
%package sub2-Preset_boards-TM2-NFC
Summary:	TM2_NFC (Not Supported)

%description sub2-Preset_boards-TM2-NFC
Packages of NFC HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-NFC

### TM2-Telephony ###
%package sub2-Preset_boards-TM2-Telephony
Summary:	TM2_Telephony (Not Supported)

%description sub2-Preset_boards-TM2-Telephony
Packages of Telephony HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-Telephony

### TM2-Feedback ###
%package sub2-Preset_boards-TM2-Feedback
Summary:	TM2_Feedback
Requires:	%{name}-sub2-domain_API-System-Feedback
Requires:	%{name}-sub2-Preset_boards-TM2-Audio
Requires:	feedbackd-profile_mobile
Requires:	svi-data-profile_common


%description sub2-Preset_boards-TM2-Feedback
Packages of Feedback HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-Feedback

### TM2-Sensor ###
%package sub2-Preset_boards-TM2-Sensor
Summary:	TM2_Sensor (Not Supported)

%description sub2-Preset_boards-TM2-Sensor
Packages of Sensor HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-Sensor

### TM2-DALi ###
%package sub2-Preset_boards-TM2-DALi
Summary:	TM2_DALi
Requires:	%{name}-sub2-domain_API-UI-DALi
Requires:	%{name}-sub2-Preset_boards-TM2-Display
Requires:	dali-extension-video-player-plugin
Requires:	dali-extension-key-extension
Requires:	dali-extension
Requires:	dali-toolkit-resources_720x1280

%description sub2-Preset_boards-TM2-DALi
Packages of DALi HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-DALi

### TM2-EFL ###
%package sub2-Preset_boards-TM2-EFL
Summary:	TM2_EFL
Requires:	%{name}-sub2-Preset_boards-TM2-Display
Requires:	%{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires:	efl-misc-profile_common
Requires:	efl-modules-profile_common
Requires:	efl-theme-tizen-common
Requires:   elementary-tizen
Suggests:   download-fonts-service


%description sub2-Preset_boards-TM2-EFL
Packages of EFL HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-EFL

### TM2-IM ###
%package sub2-Preset_boards-TM2-IM
Summary:	TM2_IM
Requires:	%{name}-sub2-domain_API-UIX-Input_Method
Requires:	isf-config-common
Requires:	ise-default-profile_common
Requires:	org.tizen.inputmethod-setting-profile_common
Requires:	%{name}-sub2-Preset_boards-TM2-EFL

%description sub2-Preset_boards-TM2-IM
Packages of IM HAL and Feature for TM2.
%files sub2-Preset_boards-TM2-IM
