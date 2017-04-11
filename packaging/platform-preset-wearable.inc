# Maintainer: Tizen Wearable PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package sub1-Preset_sd-wearable
Summary:	Wearable Profile Presets
Conflicts:	%{name}-sub1-Preset_sd-mobile
Conflicts:	%{name}-sub1-Preset_sd-tv
Conflicts:	%{name}-sub1-Preset_sd-ivi
Conflicts:	%{name}-sub1-Preset_sd-home_appliance
Conflicts:	%{name}-root-Preset-iot
Suggests:	%{name}-sub2-Preset_sd-wearable-tw2
%description sub1-Preset_sd-wearable
Tizen Wearable Platform Presets
%files sub1-Preset_sd-wearable


%package sub2-Preset_sd-wearable-tw2
Summary:	Wearable-TW2
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/wearable-wayland-armv7l-tw2.ks
%description sub2-Preset_sd-wearable-tw2
Tizen Wearable TW1 (Gear 2) Preset
%files sub2-Preset_sd-wearable-tw2

