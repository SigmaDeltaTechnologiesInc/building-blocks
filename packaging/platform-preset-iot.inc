# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-Preset_iot_core
Summary:    IOT Core Presets
%list_with_require_nodep_device %{_datadir}/image-configurations/common-iot_core-2parts-armv7l-rpi3.ks
%description root-Preset_iot_core
__EXPAND__: preset
The packages of Tizen IoT Core.
%files root-Preset_iot_core

%package root-Preset_iot_headed
Summary:    IOT Headed Common Presets
%list_with_require %{_datadir}/image-configurations/iot-headed-3parts-armv7l-artik710.ks
%description root-Preset_iot_headed
__EXPAND__: preset
The packages of Tizen IoT Headed Common.
%files root-Preset_iot_headed
