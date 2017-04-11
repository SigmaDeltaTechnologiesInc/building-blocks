# Maintainer: Tizen Mobile PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package sub1-Preset_sd-mobile
Summary:	Mobile Profile Presets
Conflicts:	%{name}-sub1-Preset_sd-tv
Conflicts:	%{name}-sub1-Preset_sd-wearable
Conflicts:	%{name}-sub1-Preset_sd-ivi
Conflicts:	%{name}-root-Preset_iot
Suggests:	%{name}-sub2-Preset_sd-mobile-tm1
Suggests:	%{name}-sub2-Preset_sd-mobile-tm2_aarch64
Suggests:	%{name}-sub2-Preset_sd-mobile-tm2_armv7l
Suggests:	%{name}-sub2-Preset_sd-mobile-minimal
%description sub1-Preset_sd-mobile
Tizen Mobile Platform Presets
%files sub1-Preset_sd-mobile


%package sub2-Preset_sd-mobile-tm1
Summary:	Mobile-TM1
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2_aarch64
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2_armv7l
Conflicts:	%{name}-sub2-Preset_sd-mobile-minimal
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/mobile-wayland-armv7l-tm1.ks
%description sub2-Preset_sd-mobile-tm1
Tizen Mobile TM1 Preset, which is using armv7l.
You may use this preset for other architectures; however,
please note that the TM1 model itself is for armv7l only.
This block is allowed for other architectures only to let
other arch devices start with TM1 packages.
You may need mobile + tm1 MIC post script as well.
(TIC RECIPE for POST is not READY YET)
%files sub2-Preset_sd-mobile-tm1

%package sub2-Preset_sd-mobile-tm2_aarch64
Summary:	Mobile-TM2 (aarch64. 64bit)
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm1
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2_armv7l
Conflicts:	%{name}-sub2-Preset_sd-mobile-minimal
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/mobile-wayland-arm64-tm2.ks
%description sub2-Preset_sd-mobile-tm2_aarch64
Tizen Mobile TM2 Preset. This is for aarch64 architecture only.
For architectural/post-script note, please refer to tm1 twin.
%files sub2-Preset_sd-mobile-tm2_aarch64

%package sub2-Preset_sd-mobile-tm2_armv7l
Summary:	Mobile-TM2 (armv7l. 32bit)
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm1
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2_aarch64
Conflicts:	%{name}-sub2-Preset_sd-mobile-minimal
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/mobile-wayland-armv7l-tm2.ks
%description sub2-Preset_sd-mobile-tm2_armv7l
Tizen Mobile TM2 Preset. This is for armv7l architecture only.
Although TM2 has 64bit processor, we may use 32bit userspace binaries for it.
For architectural/post-script note, please refer to tm1 twin.
%files sub2-Preset_sd-mobile-tm2_armv7l

%package sub2-Preset_sd-mobile-minimal
Summary:	Mobile Minimal Preset
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm1
Conflicts:	%{name}-sub2-Preset_sd-mobile-tm2
%description sub2-Preset_sd-mobile-minimal
Tizen Mobile Minimal Platform Preset

Mobile-PM: fill in minimal API sets for mobile profile.

%files sub2-Preset_sd-mobile-minimal
