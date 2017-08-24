# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

#############################
### IOT Core for ARTIK530 ###
#############################
%package root-Preset_iot_core_artik530
Summary:    IOT Core Presets for ARTIK530
Requires:	%{name}-root-Preset_iot_core
Requires:   %{name}-sub1-Preset_boards-ARTIK530

Conflicts:	%{name}-root-Preset_iot_headed_artik530
Conflicts:	%{name}-root-Preset_iot_core_rpi3

%description root-Preset_iot_core_artik530
__EXPAND__: preset
The packages of Tizen IoT Core for ARTIK530.
%files root-Preset_iot_core_artik530


######################################
### IOT Haeded Common for ARTIK530 ###
######################################
%package root-Preset_iot_headed_artik530
Summary:    IOT Headed Common Presets for ARTIK530
Requires:	%{name}-root-Preset_iot_headed
Requires:	%{name}-sub1-Preset_boards-ARTIK530
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Audio
Requires:	alsa-utils
Requires:	pulseaudio-module-bluetooth
Requires:	pulseaudio-utils
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Bluetooth
Requires:	net-config-plugin-headed
Requires:	org.tizen.bt-syspopup
Requires:	bluetooth-frwk-plugin-headed
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Camera
Requires:	%{name}-sub2-Preset_boards-ARTIK530-DALi
Requires:	%{name}-sub2-Preset_boards-ARTIK530-EFL
Requires:	%{name}-sub2-Preset_boards-ARTIK530-IM
Requires:	%{name}-sub2-Preset_boards-ARTIK530-System_Device
Requires:	%{name}-sub2-Preset_boards-ARTIK530-Wifi
Requires:	gst-omx
Requires:	libomxil-e54xx

Conflicts:	%{name}-root-Preset_iot_core_rpi3
Conflicts:	%{name}-root-Preset_iot_core_artik530

%description root-Preset_iot_headed_artik530
__EXPAND__: preset
The packages of Tizen IoT Headed Common for ARTIK530.
%files root-Preset_iot_headed_artik530
