# Maintainer: Tizen PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-Preset_sd
Summary:	Presets for Smart Devices (w/ Tizen Profiles)
Conflicts:	%{name}-root-Preset_iot
Suggests:	%{name}-sub1-Preset_sd-mobile
Suggests:	%{name}-sub1-Preset_sd-wearable
Suggests:	%{name}-sub1-Preset_sd-tv
Suggests:	%{name}-sub1-Preset_sd-ivi
Suggests:	%{name}-sub1-Preset_sd-common
Suggests:	%{name}-sub1-Preset_sd-home_appliance
%description root-Preset_sd
Non-IoT, Traditional "Smart" Device Presets of Tizen
Most of these are being expressed with "Tizen Profile".
%files root-Preset_sd

