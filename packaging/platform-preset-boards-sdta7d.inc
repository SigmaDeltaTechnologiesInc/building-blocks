# Maintainer: Tizen PM?
# You need ACK (+1) from the maintainer to be reviewed by building-block maintainers.

##################
###  SDTA7D  ###
##################
%package sub1-Preset_boards-SDTA7D
Summary:	SDTA7D Selection for HAL and Feature
Requires:	%{name}-sub2-Preset_boards-SDTA7D-System
Requires:	%{name}-sub2-Preset_boards-SDTA7D-System_Device
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Audio
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Audio_Recording
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-GPS
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Codec
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Camera_Common
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Camera
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Camera_Headless
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Display
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Display_Headless
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Wifi
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-WifiDirect
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Bluetooth
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Bluetooth_CallAudio
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-BLE
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-NFC
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Telephony
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-ZigBee
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Feedback
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Sensor
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-DALi
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-EFL
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-IM

Conflicts:	%{name}-sub1-Preset_boards-TM1
Conflicts:	%{name}-sub1-Preset_boards-TM2
Conflicts:	%{name}-sub1-Preset_boards-RPI3
Conflicts:	%{name}-sub1-Preset_boards-ARTIK530

%description sub1-Preset_boards-SDTA7D
Firstly select HALs and Feature to add to your image.
%files sub1-Preset_boards-SDTA7D
%posttrans sub1-Preset_boards-SDTA7D
%tizen_feature tizen.org/system/platform.processor Freescale_i.MX7_Dual
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
%tizen_feature tizen.org/feature/peripheral_io.adc false
%tizen_feature tizen.org/feature/peripheral_io.spi true
%tizen_feature tizen.org/feature/peripheral_io.uart true
%tizen_feature tizen.org/system/model_name sdta7d


### SDTA7D-System ###
%package sub2-Preset_boards-SDTA7D-System
Summary:	SDTA7D_System
Requires:	model-config-default
Suggests:	system-plugin-feature-init_wrapper

%description sub2-Preset_boards-SDTA7D-System
Packages for System HAL and Feature. They are mandatory.
If you select 3 partitions, please select system-plugin-device-u3.
If you don't use initrd partition, please select system-plugin-feature-init_wrapper.
%files sub2-Preset_boards-SDTA7D-System

### SDTA7D-System_Device ###
%package sub2-Preset_boards-SDTA7D-System_Device
Summary:	SDTA7D_Deviced Plugin
Requires:	device-manager-plugin-artik
Requires:      %{name}-sub2-domain_API-System-Device

%description sub2-Preset_boards-SDTA7D-System_Device
Packages for Deviced HAL and Feature.
%files sub2-Preset_boards-SDTA7D-System_Device


### SDTA7D-Audio ###
%package sub2-Preset_boards-SDTA7D-Audio
Summary:	SDTA7D_Audio
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

%description sub2-Preset_boards-SDTA7D-Audio
Packages of Audio HAL and Feature for SDTA7D.
If you select Bluetooth, you can select pulseaudio-modules-bluetooth.
%files sub2-Preset_boards-SDTA7D-Audio

### SDTA7D-Audio_Recording ###
%package sub2-Preset_boards-SDTA7D-Audio_Recording
Summary:	SDTA7D_AudioRecording
Requires:	%{name}-sub2-Preset_boards-SDTA7D-Audio

Suggests:	%{name}-sub2-domain_API-Multimedia-Recorder
Suggests:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer

%description sub2-Preset_boards-SDTA7D-Audio_Recording
Packages of Audio HAL and Feature for SDTA7D.

%files sub2-Preset_boards-SDTA7D-Audio_Recording
%posttrans sub2-Preset_boards-SDTA7D-Audio_Recording
%tizen_feature tizen.org/feature/microphone true
%tizen_feature tizen.org/feature/media.audio_recording true

### SDTA7D-GPS ###
%package sub2-Preset_boards-SDTA7D-GPS
Summary:	SDTA7D_GPS (Not Supported)

%description sub2-Preset_boards-SDTA7D-GPS
Packages of GPS HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-GPS

### SDTA7D-Codec ###
%package sub2-Preset_boards-SDTA7D-Codec
Summary:	SDTA7D_Codec
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Display
Suggests:	%{name}-sub2-Preset_boards-SDTA7D-Display_Headless
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

%description sub2-Preset_boards-SDTA7D-Codec
Packages of Codec HAL and Feature for SDTA7D.
If you want to use hardware acceleration, select the required feature.
%files sub2-Preset_boards-SDTA7D-Codec


### SDTA7D-Camera_Common ###
%package sub2-Preset_boards-SDTA7D-Camera_Common
Summary:	SDTA7D_Camera_Common
Requires:	%{name}-sub2-domain_API-Multimedia-Camera
Requires:	mmfw-sysconf-target-artik10
Requires:	gst-plugins-tizen
Requires:	camera-hal-v4l2

%description sub2-Preset_boards-SDTA7D-Camera_Common
Packages of Camera HAL and Feature for SDTA7D(Common).
%files sub2-Preset_boards-SDTA7D-Camera_Common
%posttrans sub2-Preset_boards-SDTA7D-Camera_Common
%tizen_feature tizen.org/feature/camera true
%tizen_feature tizen.org/feature/camera.back true
%tizen_feature tizen.org/feature/camera.back.flash false
%tizen_feature tizen.org/feature/camera.front false
%tizen_feature tizen.org/feature/camera.front.flash false
%tizen_feature tizen.org/feature/media.video_recording true


### SDTA7D-Camera ###
%package sub2-Preset_boards-SDTA7D-Camera
Summary:	SDTA7D_Camera
Requires:	%{name}-sub2-Preset_boards-SDTA7D-Camera_Common
Requires:	%{name}-sub2-Preset_boards-SDTA7D-Display

Conflicts:	%{name}-sub2-Preset_boards-SDTA7D-Camera_Headless

%description sub2-Preset_boards-SDTA7D-Camera
Packages of Camera HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-Camera


### SDTA7D-Camera_Headless ###
%package sub2-Preset_boards-SDTA7D-Camera_Headless
Summary:	SDTA7D_Camera(Headless)
Requires:	%{name}-sub2-Preset_boards-SDTA7D-Camera_Common
Requires:	%{name}-sub2-Preset_boards-SDTA7D-Display_Headless

Conflicts:	%{name}-sub2-Preset_boards-SDTA7D-Camera

%description sub2-Preset_boards-SDTA7D-Camera_Headless
Packages of Camera HAL and Feature for SDTA7D(Headless).
%files sub2-Preset_boards-SDTA7D-Camera_Headless


### SDTA7D-Display ###
%package sub2-Preset_boards-SDTA7D-Display
Summary:	SDTA7D_Display
Requires:	%{name}-sub2-domain_API-UI-Display_Server
Requires:	e-tizen-data-profile_common
Requires:	libtbm-nexell
Requires:	libtdm-nexell
Requires:	coregl
Requires:	gst-plugins-bad

Conflicts:	%{name}-sub2-Preset_boards-SDTA7D-Display_Headless

%description sub2-Preset_boards-SDTA7D-Display
Packages of Display HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-Display
%posttrans sub2-Preset_boards-SDTA7D-Display
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

### SDTA7D-Display_Headless ###
%package sub2-Preset_boards-SDTA7D-Display_Headless
Summary:	SDTA7D_Display(Headless)
Requires:	%{name}-sub2-domain_API-UI-Display_Server_Headless
Requires:	libtbm-nexell

Conflicts:	%{name}-sub2-Preset_boards-SDTA7D-Display

%description sub2-Preset_boards-SDTA7D-Display_Headless
Packages of Display HAL and Feature for SDTA7D(Headless).
%files sub2-Preset_boards-SDTA7D-Display_Headless
%posttrans sub2-Preset_boards-SDTA7D-Display_Headless
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

### SDTA7D-Wifi ###
%package sub2-Preset_boards-SDTA7D-Wifi
Summary:	SDTA7D_Wifi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Requires:	wpa_supplicant-profile_common
Suggests:	net-config-plugin-headed

%description sub2-Preset_boards-SDTA7D-Wifi
Packages of Wifi HAL and Feature for SDTA7D.
If you enable the UI, you can select net-config-plugin-headed.
%files sub2-Preset_boards-SDTA7D-Wifi


### SDTA7D-WifiDirect ###
%package sub2-Preset_boards-SDTA7D-WifiDirect
Summary:	SDTA7D_WifiDirect
Requires:	%{name}-sub2-domain_API-Network-WiFi_Direct
Requires:	%{name}-sub2-Preset_boards-SDTA7D-Wifi
Requires:	wifi-direct-manager-profile_common

%description sub2-Preset_boards-SDTA7D-WifiDirect
Packages of WifiDirect HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-WifiDirect

### SDTA7D-ZigBee ###
%package sub2-Preset_boards-SDTA7D-ZigBee
Summary:	SDTA7D_ZigBee
Requires:	%{name}-sub2-domain_API-Network-ZigBee

%description sub2-Preset_boards-SDTA7D-ZigBee
Packages of ZigBee HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-ZigBee

### SDTA7D-Bluetooth ###
%package sub2-Preset_boards-SDTA7D-Bluetooth
Summary:	SDTA7D_Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires:	bluetooth-frwk-profile_common
Requires:	bluetooth-tools-profile_common
Requires:	bluetooth-firmware-bcm
Requires:	bluez-profile_common
Suggests:	bluez-extension-bredr
Suggests:	bluetooth-frwk-plugin-headed
Suggests:	org.tizen.bt-syspopup
Suggests:	org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-SDTA7D-Bluetooth
Packages of Bluetooth HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-Bluetooth
%posttrans sub2-Preset_boards-SDTA7D-Bluetooth
%tizen_feature tizen.org/feature/network.bluetooth.le.5_0 false

### SDTA7D-Bluetooth_CallAudio ###
%package sub2-Preset_boards-SDTA7D-Bluetooth_CallAudio
Summary:	SDTA7D_Bluetooth Call Audio
Requires:	%{name}-sub2-Preset_boards-SDTA7D-Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_Call_Audio
Requires:	bluetooth-agent-hfp_ag

%description sub2-Preset_boards-SDTA7D-Bluetooth_CallAudio
Packages of Bluetooth HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-Bluetooth_CallAudio


### SDTA7D-BLE ###
%package sub2-Preset_boards-SDTA7D-BLE
Summary:	SDTA7D_BLE
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_LE
Requires: bluetooth-frwk-profile_common
Requires: bluetooth-tools-profile_common
Requires: bluez-profile_common
Suggests: bluetooth-frwk-plugin-headed
Suggests: org.tizen.bt-syspopup
Suggests: org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-SDTA7D-BLE
Packages of BLE HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-BLE

### SDTA7D-NFC ###
%package sub2-Preset_boards-SDTA7D-NFC
Summary:	SDTA7D_NFC (Not Supported)

%description sub2-Preset_boards-SDTA7D-NFC
Packages of NFC HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-NFC

### SDTA7D-Telephony ###
%package sub2-Preset_boards-SDTA7D-Telephony
Summary:	SDTA7D_Telephony (Not Supported)

%description sub2-Preset_boards-SDTA7D-Telephony
Packages of Telephony HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-Telephony

### SDTA7D-Feedback ###
%package sub2-Preset_boards-SDTA7D-Feedback
Summary:	SDTA7D_Feedback
Requires:	%{name}-sub2-domain_API-System-Feedback
Requires:	%{name}-sub2-Preset_boards-SDTA7D-Audio
Requires:	feedbackd-driver-gpio
Requires:	svi-data-profile_common


%description sub2-Preset_boards-SDTA7D-Feedback
Packages of Feedback HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-Feedback

### SDTA7D-Sensor ###
%package sub2-Preset_boards-SDTA7D-Sensor
Summary:	SDTA7D_Sensor (Not Supported)

%description sub2-Preset_boards-SDTA7D-Sensor
Packages of Sensor HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-Sensor

### SDTA7D-DALi ###
%package sub2-Preset_boards-SDTA7D-DALi
Summary:	SDTA7D_DALi
Requires:	%{name}-sub2-domain_API-UI-DALi
Requires:	%{name}-sub2-Preset_boards-SDTA7D-Display
Requires:	dali-extension-video-player-plugin
Requires:	dali-extension-key-extension
Requires:	dali-extension
Requires:	dali-toolkit-resources_720x1280

%description sub2-Preset_boards-SDTA7D-DALi
Packages of DALi HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-DALi

### SDTA7D-EFL ###
%package sub2-Preset_boards-SDTA7D-EFL
Summary:	SDTA7D_EFL
Requires:	%{name}-sub2-Preset_boards-SDTA7D-Display
Requires:	%{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires:	efl-misc-profile_common
Requires:	efl-modules-profile_common
Requires:	efl-theme-tizen-common
Requires:   elementary-tizen
Suggests:   download-fonts-service


%description sub2-Preset_boards-SDTA7D-EFL
Packages of EFL HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-EFL

### SDTA7D-IM ###
%package sub2-Preset_boards-SDTA7D-IM
Summary:	SDTA7D_IM
Requires:	%{name}-sub2-domain_API-UIX-Input_Method
Requires:	isf-config-common
Requires:	ise-default-profile_common
Requires:	org.tizen.inputmethod-setting-profile_common
Requires:	%{name}-sub2-Preset_boards-SDTA7D-EFL

%description sub2-Preset_boards-SDTA7D-IM
Packages of IM HAL and Feature for SDTA7D.
%files sub2-Preset_boards-SDTA7D-IM
