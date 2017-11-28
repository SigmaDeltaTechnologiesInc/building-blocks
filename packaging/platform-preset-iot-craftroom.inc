# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

#############################
### Preset for Craftroom  ###
#############################
%package root-Preset_craftroom
Summary:    Preset for Craftroom
Suggests:	%{name}-sub1-Preset_craftroom-iot_headless_rpi3
Suggests:   %{name}-sub1-Preset_craftroom-iot_headless_artik530
Suggests:   %{name}-sub1-Preset_craftroom-iot_headed_artik530

%description root-Preset_craftroom
The Presets for Craftroom.
%files root-Preset_craftroom


###########################################
### IOT Headless ARTIK530 for Craftroom ###
###########################################
%package sub1-Preset_craftroom-iot_headless_artik530
Summary:    IOT Headless ARTIK530 Presets for Craftrom
%list_with_require %{_datadir}/image-configurations/iot-headless-2parts-armv7l-artik530_710.ks

Conflicts:	%{name}-sub1-Preset_craftroom-iot_headless_rpi3
Conflicts:	%{name}-sub1-Preset_craftroom-iot_headed_artik530

%description sub1-Preset_craftroom-iot_headless_artik530
The packages of Tizen IoT Headless for ARTIK530.
%files sub1-Preset_craftroom-iot_headless_artik530

#########################################
### IOT Headed ARTIK530 for Craftroom ###
#########################################
%package sub1-Preset_craftroom-iot_headed_artik530
Summary:    IOT Headed ARTIK530 Presets for Craftrom
%list_with_require %{_datadir}/image-configurations/iot-headed-3parts-armv7l-artik530_710.ks

Conflicts:	%{name}-sub1-Preset_craftroom-iot_headless_rpi3
Conflicts:	%{name}-sub1-Preset_craftroom-iot_headless_artik530

%description sub1-Preset_craftroom-iot_headed_artik530
The packages of Tizen IoT Headed for ARTIK530.
%files sub1-Preset_craftroom-iot_headed_artik530

###########################################
### IOT Headless RPI3 for Craftroom ###
###########################################
%package sub1-Preset_craftroom-iot_headless_rpi3
Summary:    IOT Headless RPI3 Presets for Craftrom
%list_with_require %{_datadir}/image-configurations/iot-headless-2parts-armv7l-rpi3.ks

Conflicts:	%{name}-sub1-Preset_craftroom-iot_headless_artik530
Conflicts:	%{name}-sub1-Preset_craftroom-iot_headed_artik530

%description sub1-Preset_craftroom-iot_headless_rpi3
The packages of Tizen IoT Headless for RPI3.
%files sub1-Preset_craftroom-iot_headless_rpi3


