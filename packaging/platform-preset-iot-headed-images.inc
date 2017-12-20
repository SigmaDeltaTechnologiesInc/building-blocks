# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

################################
### Preset for IoT Headed  ###
################################
%package root-Preset_img_headed
Summary:    IOT Headed Images
Suggests:   %{name}-sub1-Preset_img_headed-artik530
Suggests:   %{name}-sub1-Preset_img_headed-rpi3

%description root-Preset_img_headed
__EXPAND__: preset
The IoT Headed Images.
%files root-Preset_img_headed


#############################
### IOT Headed ARTIK530 ###
#############################
%package sub1-Preset_img_headed-artik530
Summary:    IOT Headed ARTIK530 Image
Requires:   %{name}-root-Preset_iot_headed
## BSP
Requires:	%{name}-sub1-Preset_boards-ARTIK530
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Audio
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Audio_Recording
Requires:	alsa-utils
Requires:	capi-media-player-display
Requires:	gstreamer-utils
Requires:	pulseaudio-utils
Requires:	%{name}-sub2-Preset_boards-ARTIK530-BLE
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Bluetooth
Requires:	bluetooth-frwk-plugin-headed
Requires:	bluetooth-share
Requires:	org.tizen.bt-syspopup
Requires:	org.tizen.bt-syspopup-profile_common
Requires:	capi-network-bluetooth-test
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Camera
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Codec
Requires:	%{name}-sub2-Preset_boards-ARTIK530-DALi
Requires:	dali-toolkit-resources_720x1280
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Display
Requires:	%{name}-sub2-Preset_boards-ARTIK530-EFL
Requires:	download-fonts-service
Requires:	elementary-tools
Requires:	%{name}-sub2-Preset_boards-ARTIK530-IM
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Sensor
Requires:	sensord-profile_common
Requires:	%{name}-sub2-Preset_boards-ARTIK530-System
Requires:	%{name}-sub2-Preset_boards-ARTIK530-System_Device
Requires:	%{name}-sub2-Preset_boards-ARTIK530-WifiDirect
## Partition
Requires:	%{name}-sub1-Preset_partition-3parts_ramdisk_recovery
## Feature
Requires:	%{name}-sub1-domain_Feature-BootAni
Requires:	%{name}-sub1-domain_Feature-DotNET
Requires:	dali-csharp-binder
Requires:	%{name}-sub1-domain_Feature-SoftAP
Requires:	%{name}-sub1-domain_Feature-Starter
Requires:	%{name}-sub1-domain_Feature-Upgrade
Requires:	%{name}-sub1-domain_Feature-WebAPI
## building-blocks-sub1-domain_Feature-Tool_And_Locale
Requires:	crash-worker
Requires:	glibc-locale
Requires:	memps
Requires:	psmisc
Requires:	tizen-debug
Requires:	tizen-locale
## Applications
## building-blocks-sub1-feature_App-IoT_Headed_Ref
Requires:	org.tizen.setting-profile_common
Requires:	ug-bluetooth-efl
Requires:	wifi-efl-ug

Conflicts:	%{name}-sub1-Preset_img_headed-rpi3
Conflicts:  %{name}-sub1-Preset_img_headless-artik530
Conflicts:  %{name}-sub1-Preset_img_headless-rpi3

%description sub1-Preset_img_headed-artik530
The packages of Tizen IoT Headed for ARTIK530.
%files sub1-Preset_img_headed-artik530

#######################
### IOT Headed RPI3 ###
#######################
%package sub1-Preset_img_headed-rpi3
Summary:    IOT Headed RPI3 Image
Requires:   %{name}-root-Preset_iot_headed
## BSP
Requires:	%{name}-sub1-Preset_boards-RPI3
Requires:	%{name}-sub2-Preset_boards-RPI3-Audio
Requires:	%{name}-sub2-Preset_boards-RPI3-Audio_Recording
Requires:	alsa-utils
Requires:	capi-media-player-display
Requires:	gst-omx
Requires:	gstreamer-utils
Requires:	libomxil-vc4
Requires:	pulseaudio-utils
Requires:	%{name}-sub2-Preset_boards-RPI3-BLE
Requires:	%{name}-sub2-Preset_boards-RPI3-Bluetooth
Requires:	bluetooth-frwk-plugin-headed
Requires:	bluetooth-share
Requires:	org.tizen.bt-syspopup
Requires:	org.tizen.bt-syspopup-profile_common
Requires:	capi-network-bluetooth-test
Requires:	%{name}-sub2-Preset_boards-RPI3-Camera
Requires:	%{name}-sub2-Preset_boards-RPI3-Codec
Requires:	%{name}-sub2-Preset_boards-RPI3-DALi
Requires:	dali-toolkit-resources_720x1280
Requires:	%{name}-sub2-Preset_boards-RPI3-Display
Requires:	%{name}-sub2-Preset_boards-RPI3-EFL
Requires:	download-fonts-service
Requires:	elementary-tools
Requires:	%{name}-sub2-Preset_boards-RPI3-IM
Requires:	%{name}-sub2-Preset_boards-RPI3-Sensor
Requires:	sensord-profile_common
Requires:	%{name}-sub2-Preset_boards-RPI3-System
Requires:	%{name}-sub2-Preset_boards-RPI3-System_Device
Requires:	%{name}-sub2-Preset_boards-RPI3-WifiDirect
## Partition
Requires:	%{name}-sub1-Preset_partition-3parts_ramdisk_recovery
## Feature
Requires:	%{name}-sub1-domain_Feature-BootAni
Requires:	%{name}-sub1-domain_Feature-DotNET
Requires:	dali-csharp-binder
Requires:	%{name}-sub1-domain_Feature-SoftAP
Requires:	%{name}-sub1-domain_Feature-Starter
Requires:	%{name}-sub1-domain_Feature-Upgrade
Requires:	%{name}-sub1-domain_Feature-WebAPI
## building-blocks-sub1-domain_Feature-Tool_And_Locale
Requires:	crash-worker
Requires:	glibc-locale
Requires:	memps
Requires:	psmisc
Requires:	tizen-debug
Requires:	tizen-locale
## Applications
## building-blocks-sub1-feature_App-IoT_Headed_Ref
Requires:	org.tizen.setting-profile_common
Requires:	ug-bluetooth-efl
Requires:	wifi-efl-ug

Conflicts:	%{name}-sub1-Preset_img_headed-artik530
Conflicts:  %{name}-sub1-Preset_img_headless-artik530
Conflicts:  %{name}-sub1-Preset_img_headless-rpi3

%description sub1-Preset_img_headed-rpi3
The packages of Tizen IoT Headed for RPI3.
%files sub1-Preset_img_headed-rpi3
