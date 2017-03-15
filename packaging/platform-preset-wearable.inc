# Maintainer: Tizen Wearable PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package sub1-preset-wearable
Summary:	Wearable Profile Presets
Conflicts:	%{name}-sub1-preset-mobile
Conflicts:	%{name}-sub1-preset-tv
Conflicts:	%{name}-sub1-preset-ivi
Conflicts:	%{name}-sub1-preset-iot
Suggests:	%{name}-sub2-preset-wearable-tw2
%description sub1-preset-wearable
Tizen Wearable Platform Presets
%files sub1-preset-wearable


%package sub2-preset-wearable-tw2
Summary:	Wearable-TW2 Preset
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/wearable-wayland-armv7l-tw2.ks
%description sub2-preset-wearable-tw2
Tizen Wearable TW1 (Gear 2) Preset
%files sub2-preset-wearable-tw2

