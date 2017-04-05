# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-preset_iot
Summary:	IOT Device Presets
Conflicts:	%{name}-root-preset_mobile
Conflicts:	%{name}-root-preset_tv
Conflicts:	%{name}-root-preset_wearable
Conflicts:	%{name}-root-preset_ivi
Suggests:	%{name}-sub1-preset_iot-headless_minimal
%description root-preset_iot
Tizen IoT Device Presets
%files root-preset_iot


%package sub1-preset_iot-headless_minimal
Summary:	IoT Headless Minimal Preset
Requires:	%{name}-root-feature_Headless
%description sub1-preset_iot-headless_minimal
Tizen IoT Headless/Minimal Preset
%files sub1-preset_iot-headless_minimal


