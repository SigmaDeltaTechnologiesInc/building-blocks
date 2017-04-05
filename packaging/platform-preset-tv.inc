# Maintainer: Tizen TV PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-preset-tv
Summary:	TV Profile Presets
Conflicts:	%{name}-root-preset-mobile
Conflicts:	%{name}-root-preset-wearable
Conflicts:	%{name}-root-preset-ivi
Conflicts:	%{name}-root-preset-iot
Suggests:	%{name}-sub1-preset-tv-odroid
%list_with_require %{SOURCE4001}
%description root-preset-tv
Tizen TV Platform Presets
%files root-preset-tv


%package sub1-preset-tv-odroid
Summary:	TV-Odroid Preset
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/tv-wayland-armv7l-odroidu3.ks
%description sub1-preset-tv-odroid
Tizen TV Odroid Preset
%files sub1-preset-tv-odroid

