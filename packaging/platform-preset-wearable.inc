# Maintainer: Tizen Wearable PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-preset_wearable
Summary:	Wearable Profile Presets
Conflicts:	%{name}-root-preset_mobile
Conflicts:	%{name}-root-preset_tv
Conflicts:	%{name}-root-preset_ivi
Conflicts:	%{name}-root-preset_iot
Suggests:	%{name}-sub1-preset_wearable-tw2
%description root-preset_wearable
Tizen Wearable Platform Presets
%files root-preset_wearable


%package sub1-preset_wearable-tw2
Summary:	Wearable-TW2 Preset
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/wearable-wayland-armv7l-tw2.ks
%description sub1-preset_wearable-tw2
Tizen Wearable TW1 (Gear 2) Preset
%files sub1-preset_wearable-tw2

