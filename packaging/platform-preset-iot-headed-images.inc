# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

################################
### Preset for IoT Headed  ###
################################
%package root-Preset_img_headed
Summary:    IOT Headed Images
Suggests:   %{name}-sub1-Preset_img_headed-artik530

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
Requires:   %{name}-sub1-Preset_boards-ARTIK530
Requires:   %{name}-sub2-Preset_boards-ARTIK530-Audio
Requires:   alsa-utils
Requires:   pulseaudio-module-bluetooth
Requires:   pulseaudio-utils
Requires:   %{name}-sub2-Preset_boards-ARTIK530-Bluetooth
Requires:   net-config-plugin-headed
Requires:   org.tizen.bt-syspopup
Requires:   bluetooth-frwk-plugin-headed
Requires:   %{name}-sub2-Preset_boards-ARTIK530-Camera
Requires:   %{name}-sub2-Preset_boards-ARTIK530-DALi
Requires:   %{name}-sub2-Preset_boards-ARTIK530-EFL
Requires:   %{name}-sub2-Preset_boards-ARTIK530-IM
Requires:   %{name}-sub2-Preset_boards-ARTIK530-System_Device
Requires:   %{name}-sub2-Preset_boards-ARTIK530-Wifi
Requires:   gst-omx
Requires:   libomxil-e54xx

Requires: %{name}-sub1-Preset_partition-3parts_ramdisk

Conflicts:  %{name}-sub1-Preset_img_headless-artik530
Conflicts:  %{name}-sub1-Preset_img_headless-rpi3

%description sub1-Preset_img_headed-artik530
The packages of Tizen IoT Headed for ARTIK530.
%files sub1-Preset_img_headed-artik530
