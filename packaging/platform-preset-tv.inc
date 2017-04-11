# Maintainer: Tizen TV PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package sub1-Preset_sd-tv
Summary:	TV Profile Presets
Conflicts:	%{name}-sub1-Preset_sd-mobile
Conflicts:	%{name}-sub1-Preset_sd-wearable
Conflicts:	%{name}-sub1-Preset_sd-ivi
Conflicts:	%{name}-sub1-Preset_sd-home_appliance
Conflicts:	%{name}-root-Preset-iot
Suggests:	%{name}-sub2-Preset_sd-tv-odroid
%description sub1-Preset_sd-tv
Tizen TV Platform Presets
%files sub1-Preset_sd-tv


%package sub2-Preset_sd-tv-odroid
Summary:	TV-Odroid
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/tv-wayland-armv7l-odroidu3.ks
%description sub2-Preset_sd-tv-odroid
Tizen TV Odroid Preset
%files sub2-Preset_sd-tv-odroid

