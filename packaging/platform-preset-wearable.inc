# Maintainer: Tizen Wearable PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-Preset_wearable
Summary:	Wearable Profile Presets
Conflicts:	%{name}-root-Preset_mobile
Conflicts:	%{name}-root-Preset_tv
Conflicts:	%{name}-root-Preset_ivi
Conflicts:	%{name}-root-Preset_iot
Suggests:	%{name}-sub1-Preset_wearable-tw2
%description root-Preset_wearable
Tizen Wearable Platform Presets
%files root-Preset_wearable


%package sub1-Preset_wearable-tw2
Summary:	Wearable-TW2 Preset
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/wearable-wayland-armv7l-tw2.ks
%description sub1-Preset_wearable-tw2
Tizen Wearable TW1 (Gear 2) Preset
%files sub1-Preset_wearable-tw2

