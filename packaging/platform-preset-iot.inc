# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-Preset_iot_core
Summary:    IOT Core Presets
Requires: amd
Requires: amd-mod-launchpad
Requires: appcore-agent
Requires: aul
Requires: bash
Requires: buxton2
Requires: capi-appfw-app-common
Requires: capi-appfw-app-manager
Requires: capi-appfw-event
Requires: capi-appfw-package-manager
Requires: capi-appfw-preference
Requires: capi-network-wifi
Requires: capi-network-wifi-manager
Requires: capi-system-peripheral-io
Requires: connman
Requires: coreutils
Requires: cynara
Requires: dbus
Requires: dlogutil
Requires: filesystem
Requires: gum-utils
Requires: initrd
Requires: iotcon
Requires: iotivity
Requires: kmod
Requires: kmod-compat
Requires: libdlog
Requires: net-config
Requires: net-tools
Requires: pam
Requires: pam-modules-extra
Requires: peripheral-bus
Requires: procps-ng
Requires: rpm
Requires: rpm-security-plugin
Requires: sdbd
Requires: security-manager
Requires: setup
Requires: shadow-utils-adm
Requires: systemd
Requires: tizen-release
Requires: tlm
Requires: tlm-config-common-singleseat
Requires: tpk-backend
Requires: util-linux
Requires: vconf-internal-keys
Requires: wpa_supplicant

Conflicts:	%{name}-root-Preset_iot_headed
Conflicts:	%{name}-root-Preset_iot_core_rpi3
%description root-Preset_iot_core
__EXPAND__: preset
The packages of Tizen IoT Core.
%files root-Preset_iot_core

%package root-Preset_iot_headed
Summary:    IOT Headed Common Presets
%list_with_require %{_datadir}/image-configurations/iot-headed-3parts-armv7l-artik710.ks
Conflicts:	%{name}-root-Preset_iot_core
Conflicts:	%{name}-root-Preset_iot_core_rpi3
%description root-Preset_iot_headed
__EXPAND__: preset
The packages of Tizen IoT Headed Common.
%files root-Preset_iot_headed

%package root-Preset_iot_core_rpi3
Summary:    IOT Core Presets for RPI3
%list_with_require %{_datadir}/image-configurations/common-iot_core-2parts-armv7l-rpi3.ks
Conflicts:	%{name}-root-Preset_iot_headed
Conflicts:	%{name}-root-Preset_iot_core
%description root-Preset_iot_core_rpi3
__EXPAND__: preset
The packages of Tizen IoT Core for RPI3.
%files root-Preset_iot_core_rpi3
