# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-preset-iot
Summary:	IOT Device Presets
Conflicts:	%{name}-root-preset-mobile
Conflicts:	%{name}-root-preset-tv
Conflicts:	%{name}-root-preset-wearable
Conflicts:	%{name}-root-preset-ivi
Suggests:	%{name}-sub1-preset-iot-headless_minimal
%description root-preset-iot
Tizen IoT Device Presets
%files root-preset-iot


%package sub1-preset-iot-headless_minimal
Summary:	IoT Headless Minimal Preset
Requires:	%{name}-root-feature_Headless
%description sub1-preset-iot-headless_minimal
Tizen IoT Headless/Minimal Preset
%files sub1-preset-iot-headless_minimal


