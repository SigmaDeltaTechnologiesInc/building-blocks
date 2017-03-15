# Maintainer: Tizen IVI PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package sub1-preset-ivi
Summary:	IVI Profile Presets
Conflicts:	%{name}-sub1-preset-mobile
Conflicts:	%{name}-sub1-preset-tv
Conflicts:	%{name}-sub1-preset-wearable
Conflicts:	%{name}-sub1-preset-iot
Suggests:	%{name}-sub2-preset-ivi-proto
%description sub1-preset-ivi
Tizen IVI Platform Presets
%files sub1-preset-ivi

%package sub2-preset-ivi-proto
Summary:	IVI Prototype Preset
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/ivi-target-odroidxu3.ks
%description sub2-preset-ivi-proto
Tizen IVI Prototype Preset
%files sub2-preset-ivi-proto

