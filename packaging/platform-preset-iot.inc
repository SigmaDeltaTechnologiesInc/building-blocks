# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-preset_iot
Summary:	IOT Device Presets
Conflicts:	%{name}-root-preset_mobile
Conflicts:	%{name}-root-preset_tv
Conflicts:	%{name}-root-preset_wearable
Conflicts:	%{name}-root-preset_ivi
Suggests:	%{name}-sub1-preset_iot-boards
Suggests:	%{name}-sub1-preset_iot-platforms
Suggests:	%{name}-sub1-preset_iot-combined
%description root-preset_iot
Tizen IoT Device Presets
%files root-preset_iot

%package sub1-preset_iot-boards
Summary:	IOT Device Board (Hardware Set) Presets
Suggests:	%{name}-sub2-preset_iot-boards-RPI3_headlessBSP
Suggests:	%{name}-sub2-preset_iot-boards-RPI3_fullBSP
Suggests:	%{name}-sub2-preset_iot-boards-OdroidXU3_fullBSP
%description sub1-preset_iot-boards
Tizen IoT Device Board Support Packages (BSP) Presets
%files sub1-preset_iot-boards


%package sub1-preset_iot-platforms
Summary:	IOT Software Platform Presets
Suggests:	%{name}-sub2-preset_iot-platforms-headless_minimal
Suggests:	%{name}-sub2-preset_iot-platforms-headless_speaker
Suggests:	%{name}-sub2-preset_iot-platforms-headed_minimal
%description sub1-preset_iot-platforms
Tizen IoT Presets of Software Plaforms independent from specific hardware/BSPs.
%files sub1-preset_iot-platforms

%package sub1-preset_iot-combined
Summary:	IOT Device Board (Hardware Set) Presets
%description sub1-preset_iot-combined
Tizen IoT Presets of specific devices, which have both BSPs and software platforms.
%files sub1-preset_iot-combined


%package sub2-preset_iot-boards-RPI3_headlessBSP
Summary:	IoT BSP for RPI3 (headless)
%description sub2-preset_iot-boards-RPI3_headlessBSP
%files sub2-preset_iot-boards-RPI3_headlessBSP

%package sub2-preset_iot-boards-RPI3_fullBSP
Summary:	IoT BSP for RPI3 (full)
%description sub2-preset_iot-boards-RPI3_fullBSP
%files sub2-preset_iot-boards-RPI3_fullBSP

%package sub2-preset_iot-boards-OdroidXU3_fullBSP
Summary:	IoT BSP for OdroidXU3 (full)
%description sub2-preset_iot-boards-OdroidXU3_fullBSP
%files sub2-preset_iot-boards-OdroidXU3_fullBSP



%package sub2-preset_iot-platforms-headless_minimal
Summary:	IoT Headless Minimal Preset
Requires:	%{name}-root-feature_Headless
%description sub2-preset_iot-platforms-headless_minimal
Tizen IoT Headless/Minimal Preset
%files sub2-preset_iot-platforms-headless_minimal


%package sub2-preset_iot-platforms-headless_speaker
Summary:	IoT Headless Speaker (Minimal) Preset
Requires:	%{name}-root-feature_Headless
%description sub2-preset_iot-platforms-headless_speaker
Tizen IoT Speaker/Minimal Preset
%files sub2-preset_iot-platforms-headless_speaker


%package sub2-preset_iot-platforms-headed_minimal
Summary:	IoT Headed (GUI support) Minimal Preset
Requires:	%{name}-root-feature_Headed
%description sub2-preset_iot-platforms-headed_minimal
Tizen IoT Headed/Minimal Preset
%files sub2-preset_iot-platforms-headed_minimal
