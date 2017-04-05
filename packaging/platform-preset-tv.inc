# Maintainer: Tizen TV PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-preset_tv
Summary:	TV Profile Presets
Conflicts:	%{name}-root-preset_mobile
Conflicts:	%{name}-root-preset_wearable
Conflicts:	%{name}-root-preset_ivi
Conflicts:	%{name}-root-preset_iot
Suggests:	%{name}-sub1-preset_tv-odroid
%description root-preset_tv
Tizen TV Platform Presets
%files root-preset_tv


%package sub1-preset_tv-odroid
Summary:	TV-Odroid Preset
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/tv-wayland-armv7l-odroidu3.ks
%description sub1-preset_tv-odroid
Tizen TV Odroid Preset
%files sub1-preset_tv-odroid

