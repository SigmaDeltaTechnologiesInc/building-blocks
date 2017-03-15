# Maintainer: Tizen TV PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package sub1-preset-tv
Summary:	TV Profile Presets
Conflicts:	%{name}-sub1-preset-mobile
Conflicts:	%{name}-sub1-preset-wearable
Conflicts:	%{name}-sub1-preset-ivi
Conflicts:	%{name}-sub1-preset-iot
Suggests:	%{name}-sub2-preset-tv-odroid
%list_with_require %{SOURCE4001}
%description sub1-preset-tv
Tizen TV Platform Presets
%files sub1-preset-tv


%package sub2-preset-tv-odroid
Summary:	TV-Odroid Preset
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/tv-wayland-armv7l-odroidu3.ks
%description sub2-preset-tv-odroid
Tizen TV Odroid Preset
%files sub2-preset-tv-odroid

