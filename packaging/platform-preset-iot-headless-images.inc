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
Requires:   %{name}-sub1-Preset_boards-ARTIK530

Requires: %{name}-sub1-Preset_partition-2parts_ramdisk

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
Requires:   %{name}-sub1-Preset_boards-RPI3

Requires: %{name}-sub1-Preset_partition-2parts_ramdisk_recovery

Conflicts:	%{name}-sub1-Preset_img_headed-artik530
Conflicts:	%{name}-sub1-Preset_img_headless-artik530

%description sub1-Preset_img_headless-rpi3
The packages of Tizen IoT Headless for RPI3.
%files sub1-Preset_img_headless-rpi3


