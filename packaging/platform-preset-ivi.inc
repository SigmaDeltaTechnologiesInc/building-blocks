# Maintainer: Tizen IVI PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-preset_ivi
Summary:	IVI Profile Presets
Conflicts:	%{name}-root-preset_mobile
Conflicts:	%{name}-root-preset_tv
Conflicts:	%{name}-root-preset_wearable
Conflicts:	%{name}-root-preset_iot
Suggests:	%{name}-sub1-preset_ivi-proto
%description root-preset_ivi
Tizen IVI Platform Presets
%files root-preset_ivi

%package sub1-preset_ivi-proto
Summary:	IVI OdroidXU3 Prototype Preset
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/ivi-target-odroidxu3.ks
%description sub1-preset_ivi-proto
Tizen IVI Prototype Preset
%files sub1-preset_ivi-proto

