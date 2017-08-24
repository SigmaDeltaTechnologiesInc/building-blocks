# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

#########################
### IOT Core for RPI3 ###
#########################
%package root-Preset_iot_core_rpi3
Summary:    IOT Core Presets for RPI3
Requires:	%{name}-root-Preset_iot_core
Requires:   %{name}-sub1-Preset_boards-RPI3

Conflicts:	%{name}-root-Preset_iot_headed_artik530
Conflicts:	%{name}-root-Preset_iot_core_artik530

%description root-Preset_iot_core_rpi3
__EXPAND__: preset
The packages of Tizen IoT Core for RPI3.
%files root-Preset_iot_core_rpi3
