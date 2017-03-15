# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package sub1-preset-iot
Summary:	IOT Device Presets
Conflicts:	%{name}-sub1-preset-mobile
Conflicts:	%{name}-sub1-preset-tv
Conflicts:	%{name}-sub1-preset-wearable
Conflicts:	%{name}-sub1-preset-ivi
Suggests:	%{name}-sub2-preset-iot-rpi3_minimal
%description sub1-preset-iot
Tizen IoT Device Presets
%files sub1-preset-iot


%package sub2-preset-iot-rpi3_minimal
Summary:	IoT RPI3 Headless/Minimal Preset
%description sub2-preset-iot-rpi3_minimal
Tizen IoT Headless/Minimal Preset for RPI3
%files sub2-preset-iot-rpi3_minimal


