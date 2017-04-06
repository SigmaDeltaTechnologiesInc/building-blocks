# Maintainer: Tizen IVI PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-Preset_ivi
Summary:	IVI Profile Presets
Conflicts:	%{name}-root-Preset_mobile
Conflicts:	%{name}-root-Preset_tv
Conflicts:	%{name}-root-Preset_wearable
Conflicts:	%{name}-root-Preset_iot
Suggests:	%{name}-sub1-Preset_ivi-proto
%description root-Preset_ivi
Tizen IVI Platform Presets
%files root-Preset_ivi

%package sub1-Preset_ivi-proto
Summary:	IVI OdroidXU3 Prototype Preset
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/ivi-target-odroidxu3.ks
%description sub1-Preset_ivi-proto
Tizen IVI Prototype Preset
%files sub1-Preset_ivi-proto

