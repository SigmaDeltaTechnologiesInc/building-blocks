# Maintainer: MyungJoo Ham <myungjoo.ham@samsung.com> : Awaiting for successor.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


%package root-preset
Summary:	Tizen Platform Presets
Suggests:	%{name}-sub1-preset-mobile
Suggests:	%{name}-sub1-preset-tv
Suggests:	%{name}-sub1-preset-wearable
Suggests:	%{name}-sub1-preset-ivi
Suggests:	%{name}-sub1-preset-iot
%description root-preset
Tizen Platform Presets as Package Selection Example
%files root-preset


%package sub1-preset-mobile
Summary:	Mobile Profile Presets
Conflicts:	%{name}-sub1-preset-tv
Conflicts:	%{name}-sub1-preset-wearable
Conflicts:	%{name}-sub1-preset-ivi
Conflicts:	%{name}-sub1-preset-iot
Suggests:	%{name}-sub2-preset-mobile-tm1
Suggests:	%{name}-sub2-preset-mobile-tm2
Suggests:	%{name}-sub2-preset-mobile-minimal
%description sub1-preset-mobile
Tizen Mobile Platform Presets
%files sub1-preset-mobile


%package sub1-preset-tv
Summary:	TV Profile Presets
Conflicts:	%{name}-sub1-preset-mobile
Conflicts:	%{name}-sub1-preset-wearable
Conflicts:	%{name}-sub1-preset-ivi
Conflicts:	%{name}-sub1-preset-iot
Suggests:	%{name}-sub2-preset-tv-odroid
%description sub1-preset-tv
Tizen TV Platform Presets
%files sub1-preset-tv


%package sub1-preset-wearable
Summary:	Wearable Profile Presets
Conflicts:	%{name}-sub1-preset-mobile
Conflicts:	%{name}-sub1-preset-tv
Conflicts:	%{name}-sub1-preset-ivi
Conflicts:	%{name}-sub1-preset-iot
Suggests:	%{name}-sub2-preset-wearable-tw1
%description sub1-preset-wearable
Tizen Wearable Platform Presets
%files sub1-preset-wearable


%package sub1-preset-ivi
Summary:	IVI Profile Presets
Conflicts:	%{name}-sub1-preset-mobile
Conflicts:	%{name}-sub1-preset-tv
Conflicts:	%{name}-sub1-preset-wearable
Conflicts:	%{name}-sub1-preset-iot
Suggests:	%{name}-sub2-preset-ivi-proto
%description sub1-preset-ivi
Tizen IVI Platform Presets
%files sub1-preset-ivi


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


%package sub2-preset-mobile-tm1
Summary:	Mobile-TM1 Preset
Conflicts:	%{name}-sub2-preset-mobile-tm2
Conflicts:	%{name}-sub2-preset-mobile-minimal
%include_if_mainbuild %{SOURCE3101}
%description sub2-preset-mobile-tm1
Tizen Mobile TM1 Preset. This is for armv7l architecture only.
You may need mobile + tm1 MIC post script as well.
(TIC RECIPE for POST is not READY YET)
%files sub2-preset-mobile-tm1

%package sub2-preset-mobile-tm2
Summary:	Mobile-TM2 Preset
Conflicts:	%{name}-sub2-preset-mobile-tm1
Conflicts:	%{name}-sub2-preset-mobile-minimal
%description sub2-preset-mobile-tm2
Tizen Mobile TM2 Preset. This is for aarch64 architecture only.
%files sub2-preset-mobile-tm2

%package sub2-preset-mobile-minimal
Summary:	Mobile Minimal Preset
Conflicts:	%{name}-sub2-preset-mobile-tm1
Conflicts:	%{name}-sub2-preset-mobile-tm2
%description sub2-preset-mobile-minimal
Tizen Mobile Minimal Platform Preset
%files sub2-preset-mobile-minimal

%package sub2-preset-tv-odroid
Summary:	TV-Odroid Preset
%description sub2-preset-tv-odroid
Tizen TV Odroid Preset
%files sub2-preset-tv-odroid

%package sub2-preset-wearable-tw1
Summary:	Wearable-TW1 Preset
%description sub2-preset-wearable-tw1
Tizen Wearable TW1 (Gear 2) Preset
%files sub2-preset-wearable-tw1

%package sub2-preset-ivi-proto
Summary:	IVI Prototype Preset
%description sub2-preset-ivi-proto
Tizen IVI Prototype Preset
%files sub2-preset-ivi-proto


%package sub2-preset-iot-rpi3_minimal
Summary:	IoT RPI3 Headless/Minimal Preset
%description sub2-preset-iot-rpi3_minimal
Tizen IoT Headless/Minimal Preset for RPI3
%files sub2-preset-iot-rpi3_minimal


