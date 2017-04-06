# Maintainer: Tizen TV PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-Preset_tv
Summary:	TV Profile Presets
Conflicts:	%{name}-root-Preset_mobile
Conflicts:	%{name}-root-Preset_wearable
Conflicts:	%{name}-root-Preset_ivi
Conflicts:	%{name}-root-Preset_iot
Suggests:	%{name}-sub1-Preset_tv-odroid
%description root-Preset_tv
Tizen TV Platform Presets
%files root-Preset_tv


%package sub1-Preset_tv-odroid
Summary:	TV-Odroid Preset
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/tv-wayland-armv7l-odroidu3.ks
%description sub1-Preset_tv-odroid
Tizen TV Odroid Preset
%files sub1-Preset_tv-odroid

