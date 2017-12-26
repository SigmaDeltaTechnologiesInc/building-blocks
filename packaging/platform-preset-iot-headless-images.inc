# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

################################
### Preset for IoT Headless  ###
################################
%package root-Preset_img_headless
Summary:    IOT Headless Images
Suggests:	%{name}-sub1-Preset_img_headless-rpi3
Suggests:   %{name}-sub1-Preset_img_headless-artik530

%description root-Preset_img_headless
__EXPAND__: preset
The IoT Headless Images.
%files root-Preset_img_headless


#############################
### IOT Headless ARTIK530 ###
#############################
%package sub1-Preset_img_headless-artik530
Summary:    IOT Headless ARTIK530 Image
Requires:   %{name}-root-Preset_iot_core
Requires:	%{name}-sub1-Preset_boards-ARTIK530
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Audio
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Bluetooth
Requires:	%{name}-sub2-Preset_boards-ARTIK530-BLE
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Display_Headless
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Wifi
Requires:	%{name}-sub1-Preset_partition-2parts_ramdisk
Requires:	%{name}-sub2-domain_API-AppFramework-Alarm_API
Requires:	%{name}-sub2-domain_API-AppFramework-TPK_Installation
Requires:	%{name}-sub2-domain_API-Base-Utils
Requires:	%{name}-sub2-domain_API-Multimedia-Player
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_Media_Audio
Requires:	%{name}-sub2-domain_API-Network-Curl
Requires:	%{name}-sub1-domain_Feature-SoftAP
Requires:	%{name}-sub1-domain_Feature-Setup
Requires:	tar
Requires:       system-plugin-config-env-headless

Conflicts:	%{name}-sub1-Preset_img_headed-rpi3
Conflicts:	%{name}-sub1-Preset_img_headed-artik530
Conflicts:	%{name}-sub1-Preset_img_headless-rpi3

%description sub1-Preset_img_headless-artik530
The packages of Tizen IoT Headless for ARTIK530.
%files sub1-Preset_img_headless-artik530

#########################
### IOT Headless RPI3 ###
#########################
%package sub1-Preset_img_headless-rpi3
Summary:    IOT Headless RPI3 Image
Requires:   %{name}-root-Preset_iot_core
Requires:	%{name}-sub1-Preset_boards-RPI3
Requires:	%{name}-sub2-Preset_boards-RPI3-Audio
Requires:	%{name}-sub2-Preset_boards-RPI3-Bluetooth
Requires:	%{name}-sub2-Preset_boards-RPI3-BLE
Requires:	%{name}-sub2-Preset_boards-RPI3-Display_Headless
Requires:	%{name}-sub2-Preset_boards-RPI3-Wifi
Requires:	%{name}-sub1-Preset_partition-2parts_ramdisk_recovery
Requires:	%{name}-sub2-domain_API-AppFramework-Alarm_API
Requires:	%{name}-sub2-domain_API-AppFramework-TPK_Installation
Requires:	%{name}-sub2-domain_API-Base-Utils
Requires:	%{name}-sub2-domain_API-Multimedia-Player
Requires:	%{name}-sub2-domain_API-Network-Bluetooth_Media_Audio
Requires:	%{name}-sub2-domain_API-Network-Curl
Requires:	%{name}-sub1-domain_Feature-SoftAP
Requires:	%{name}-sub1-domain_Feature-Setup
Requires:	tar
Requires:       system-plugin-config-env-headless

Conflicts:	%{name}-sub1-Preset_img_headed-rpi3
Conflicts:	%{name}-sub1-Preset_img_headed-artik530
Conflicts:	%{name}-sub1-Preset_img_headless-artik530

%description sub1-Preset_img_headless-rpi3
The packages of Tizen IoT Headless for RPI3.
%files sub1-Preset_img_headless-rpi3


