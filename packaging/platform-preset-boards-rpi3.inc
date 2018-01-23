# Maintainer: Tizen PM?
# You need ACK (+1) from the maintainer to be reviewed by building-block maintainers.

##############
###  RPI3  ###
##############
%package sub1-Preset_boards-RPI3
Summary:	RPI3 Selection for HAL and Feature
Requires:	%{name}-sub2-Preset_boards-RPI3-System
Suggests:	%{name}-sub2-Preset_boards-RPI3-System_Device
Suggests:	%{name}-sub2-Preset_boards-RPI3-Audio
Suggests:	%{name}-sub2-Preset_boards-RPI3-Audio_Recording
Suggests:	%{name}-sub2-Preset_boards-RPI3-GPS
Suggests:	%{name}-sub2-Preset_boards-RPI3-Codec
Suggests:	%{name}-sub2-Preset_boards-RPI3-Camera
Suggests:	%{name}-sub2-Preset_boards-RPI3-Display
Suggests:	%{name}-sub2-Preset_boards-RPI3-Display_Headless
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
Conflicts:	%{name}-sub1-Preset_boards-ARTIK530

%description sub1-Preset_boards-RPI3
Firstly select HALs and Feature to add to your image.
%files sub1-Preset_boards-RPI3
%posttrans sub1-Preset_boards-RPI3
%tizen_feature tizen.org/system/platform.processor BCM2837
%tizen_feature tizen.org/system/platform.communication_processor none
%tizen_feature tizen.org/feature/platform.core.cpu.arch armv8
%tizen_feature tizen.org/feature/platform.core.cpu.arch.armv7 false
%tizen_feature tizen.org/feature/platform.core.cpu.arch.armv8 true
%tizen_feature tizen.org/feature/platform.core.cpu.frequency 1200
%tizen_feature tizen.org/feature/platform.core.fpu.arch vfpv4
%tizen_feature tizen.org/feature/platform.core.fpu.arch.vfpv3 false
%tizen_feature tizen.org/feature/platform.core.fpu.arch.vfpv4 true
%tizen_feature tizen.org/feature/profile common
%tizen_feature tizen.org/feature/location.batch false
%tizen_feature tizen.org/feature/network.ethernet true
%tizen_feature tizen.org/feature/network.wifi.tdls false
%tizen_feature tizen.org/feature/screen.auto_rotation false
%tizen_feature tizen.org/feature/screen.height 1920
%tizen_feature tizen.org/feature/screen.output.hdmi true
%tizen_feature tizen.org/feature/screen.output.rca false
%tizen_feature tizen.org/feature/screen.shape.circle false
%tizen_feature tizen.org/feature/screen.shape.rectangle true
%tizen_feature tizen.org/feature/screen.size.normal.1080.1920 true
%tizen_feature tizen.org/feature/screen.width 1080
%tizen_feature tizen.org/feature/sensor.accelerometer true
%tizen_feature tizen.org/feature/sensor.gravity true
%tizen_feature tizen.org/feature/sensor.linear_acceleration true
%tizen_feature tizen.org/feature/sensor.proximity true
%tizen_feature tizen.org/feature/sensor.temperature true
%tizen_feature tizen.org/feature/peripheral_io.gpio true
%tizen_feature tizen.org/feature/peripheral_io.i2c true
%tizen_feature tizen.org/feature/peripheral_io.pwm false
%tizen_feature tizen.org/feature/peripheral_io.spi true
%tizen_feature tizen.org/feature/peripheral_io.uart true
%tizen_feature tizen.org/system/model_name rpi3


### RPI3-System ###
%package sub2-Preset_boards-RPI3-System
Summary:	RPI3_System
Requires:	system-plugin-config-env-headless
Requires:   system-plugin-config-udev-sdbd
Suggests:   system-plugin-device-u3
Requires:	model-config-default

%description sub2-Preset_boards-RPI3-System
Packages for System HAL and Feature. They are mandatory.
%files sub2-Preset_boards-RPI3-System

### RPI3-System_Device ###
%package sub2-Preset_boards-RPI3-System_Device
Summary:    RPI3_Deviced Plugin
Requires:   device-manager-plugin-rpi3

%description sub2-Preset_boards-RPI3-System_Device
Packages for Deviced HAL and Feature.
%files sub2-Preset_boards-RPI3-System_Device



### RPI3-Audio ###
%package sub2-Preset_boards-RPI3-Audio
Summary:	RPI3_Audio
Requires:	audio-hal-bcm2837
Requires:	alsa-ucm-data-rpi3
Requires:	mmfw-sysconf-target-rpi3

Suggests:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests:	%{name}-sub2-domain_API-Multimedia-Player
Suggests:	%{name}-sub2-domain_API-Multimedia-WAV_Player
Suggests:	%{name}-sub2-domain_API-Multimedia-Tone_Player
Suggests:	%{name}-sub2-domain_API-Multimedia-OpenAL
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer

%description sub2-Preset_boards-RPI3-Audio
Packages of Audio HAL and Feature for RPI3.
If you select Bluetooth, you can select pulseaudio-modules-bluetooth.
%files sub2-Preset_boards-RPI3-Audio

### RPI3-Audio_Recording ###
%package sub2-Preset_boards-RPI3-Audio_Recording
Summary:	RPI3_AudioRecording
Requires:	%{name}-sub2-Preset_boards-RPI3-Audio

Suggests:	%{name}-sub2-domain_API-Multimedia-Recorder
Suggests:	%{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer

%description sub2-Preset_boards-RPI3-Audio_Recording
Packages of Audio HAL and Feature for RPI3.

%files sub2-Preset_boards-RPI3-Audio_Recording
%posttrans sub2-Preset_boards-RPI3-Audio_Recording
%tizen_feature tizen.org/feature/microphone true
%tizen_feature tizen.org/feature/media.audio_recording true

### RPI3-GPS ###
%package sub2-Preset_boards-RPI3-GPS
Summary:	RPI3_GPS
Requires:	lbs-plugin-gps-rpi3
Requires:	%{name}-sub2-domain_API-Location-Location_Manager

%description sub2-Preset_boards-RPI3-GPS
Packages of GPS HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-GPS

### RPI3-Codec ###
%package sub2-Preset_boards-RPI3-Codec
Summary:	RPI3_Codec
Suggests:	%{name}-sub2-Preset_boards-RPI3-Display
Suggests:	%{name}-sub2-Preset_boards-RPI3-Display_Headless
Requires:	gst-omx
Requires:	libomxil-vc4
Requires:	mmfw-sysconf-target-rpi3

Suggests:	%{name}-sub2-domain_API-Multimedia-Player
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Streamer
Suggests:	%{name}-sub2-domain_API-Multimedia-Media_Codec

%description sub2-Preset_boards-RPI3-Codec
Packages of Codec HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Codec

### RPI3-Camera ###
%package sub2-Preset_boards-RPI3-Camera
Summary:	RPI3_Camera
Requires:	%{name}-sub2-domain_API-Multimedia-Camera
Requires:	gst-plugins-good
Requires:	mmfw-sysconf-target-rpi3

%description sub2-Preset_boards-RPI3-Camera
Packages of Camera HAL and Feature for RPI3.
Not Implemented.
%files sub2-Preset_boards-RPI3-Camera
%posttrans sub2-Preset_boards-RPI3-Camera
%tizen_feature tizen.org/feature/camera true
%tizen_feature tizen.org/feature/camera.back true
%tizen_feature tizen.org/feature/camera.back.flash false
%tizen_feature tizen.org/feature/camera.front false
%tizen_feature tizen.org/feature/camera.front.flash false
%tizen_feature tizen.org/feature/media.video_recording true


### RPI3-Display ###
%package sub2-Preset_boards-RPI3-Display
Summary:	RPI3_Display
Requires:	%{name}-sub2-domain_API-UI-Display_Server
Requires:	e-tizen-data-profile_common
Requires:	libtbm-vc4
Requires:	libtdm-vc4
Requires:	mesa
Requires:	coregl

Conflicts:	%{name}-sub2-Preset_boards-RPI3-Display_Headless

%description sub2-Preset_boards-RPI3-Display
Packages of Display HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Display
%posttrans sub2-Preset_boards-RPI3-Display
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

### RPI3-Display_Headless ###
%package sub2-Preset_boards-RPI3-Display_Headless
Summary:	RPI3_Display(Headless)
Requires:	%{name}-sub2-domain_API-UI-Display_Server_Headless
Requires:	libtbm-vc4

Conflicts:	%{name}-sub2-Preset_boards-RPI3-Display

%description sub2-Preset_boards-RPI3-Display_Headless
Packages of Display HAL and Feature for RPI3(Headless).
%files sub2-Preset_boards-RPI3-Display_Headless
%posttrans sub2-Preset_boards-RPI3-Display_Headless
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

### RPI3-Wifi ###
%package sub2-Preset_boards-RPI3-Wifi
Summary:	RPI3_Wifi
Requires:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Requires:	wpa_supplicant-profile_common
Suggests:	net-config-plugin-headed

%description sub2-Preset_boards-RPI3-Wifi
Packages of Wifi HAL and Feature for RPI3.
If you enable the UI, you can select net-config-plugin-headed.
%files sub2-Preset_boards-RPI3-Wifi


### RPI3-WifiDirect ###
%package sub2-Preset_boards-RPI3-WifiDirect
Summary:	RPI3_WifiDirect
Requires:	%{name}-sub2-domain_API-Network-WiFi_Direct
Requires:	%{name}-sub2-Preset_boards-RPI3-Wifi
Requires:	wifi-direct-manager-profile_common

%description sub2-Preset_boards-RPI3-WifiDirect
Packages of WifiDirect HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-WifiDirect

### RPI3-Bluetooth ###
%package sub2-Preset_boards-RPI3-Bluetooth
Summary:	RPI3_Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires:	bluetooth-firmware-bcm-rpi3
Requires:	bluetooth-frwk-profile_common
Requires:	bluetooth-tools-profile_common
Requires:	bluez-profile_common
Suggests:	bluez-extension-bredr
Suggests: bluetooth-frwk-plugin-headed
Suggests: org.tizen.bt-syspopup
Suggests: org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-RPI3-Bluetooth
Packages of Bluetooth HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Bluetooth

### RPI3-Bluetooth_CallAudio ###
%package sub2-Preset_boards-RPI3-Bluetooth_CallAudio
Summary:	RPI3_Bluetooth Call Audio
Requires:	%{name}-sub2-Preset_boards-RPI3-Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_Call_Audio
Requires:	bluetooth-agent-profile_common

%description sub2-Preset_boards-RPI3-Bluetooth_CallAudio
Packages of Bluetooth HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Bluetooth_CallAudio


### RPI3-BLE ###
%package sub2-Preset_boards-RPI3-BLE
Summary:	RPI3_BLE
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_LE
Requires: bluetooth-firmware-bcm-rpi3
Requires: bluetooth-frwk-profile_common
Requires: bluetooth-tools-profile_common
Requires: bluez-profile_common
Suggests: bluetooth-frwk-plugin-headed
Suggests: org.tizen.bt-syspopup
Suggests: org.tizen.bt-syspopup-profile_common

%description sub2-Preset_boards-RPI3-BLE
Packages of BLE HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-BLE

### RPI3-NFC ###
%package sub2-Preset_boards-RPI3-NFC
Summary:	RPI3_NFC (Not Implemented)

%description sub2-Preset_boards-RPI3-NFC
Packages of NFC HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-NFC

### RPI3-Telephony ###
%package sub2-Preset_boards-RPI3-Telephony
Summary:	RPI3_Telephony (Not Implemented)

%description sub2-Preset_boards-RPI3-Telephony
Packages of Telephony HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Telephony

### RPI3-Feedback ###
%package sub2-Preset_boards-RPI3-Feedback
Summary:	RPI3_Feedback
Requires:	%{name}-sub2-domain_API-System-Feedback
Requires:	%{name}-sub2-Preset_boards-RPI3-Audio
Requires:	feedbackd-driver-gpio
Requires:	feedbackd-conf-level6
Requires:	svi-data-profile_mobile


%description sub2-Preset_boards-RPI3-Feedback
Packages of Feedback HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Feedback

### RPI3-Sensor ###
%package sub2-Preset_boards-RPI3-Sensor
Summary:	RPI3_Sensor (Not Implemented)

%description sub2-Preset_boards-RPI3-Sensor
Packages of Sensor HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-Sensor

### RPI3-DALi ###
%package sub2-Preset_boards-RPI3-DALi
Summary:	RPI3_DALi
Requires:   %{name}-sub2-domain_API-UI-DALi
Requires:   %{name}-sub2-Preset_boards-RPI3-Display
Requires:   dali-extension-video-player-plugin
Requires:   dali-extension-key-extension
Requires:   dali-extension
Requires:   dali-toolkit-resources_720x1280

%description sub2-Preset_boards-RPI3-DALi
Packages of DALi HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-DALi

### RPI3-EFL ###
%package sub2-Preset_boards-RPI3-EFL
Summary:	RPI3_EFL
Requires:	%{name}-sub2-Preset_boards-RPI3-Display
Requires:	%{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
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
Summary:	RPI3_IM
Requires:	%{name}-sub2-domain_API-UIX-Input_Method
Requires:	isf-config-common
Requires:	ise-default-profile_common
Requires:	org.tizen.inputmethod-setting-profile_common
Requires:	%{name}-sub2-Preset_boards-RPI3-EFL

%description sub2-Preset_boards-RPI3-IM
Packages of IM HAL and Feature for RPI3.
%files sub2-Preset_boards-RPI3-IM
