# Maintainer: Tizen IVI PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package sub1-Preset_sd-ivi
Summary:	IVI Profile Presets
Conflicts:	%{name}-sub1-Preset_sd-mobile
Conflicts:	%{name}-sub1-Preset_sd-tv
Conflicts:	%{name}-sub1-Preset_sd-wearable
Conflicts:	%{name}-sub1-Preset_sd-home_appliance
Conflicts:	%{name}-root-Preset-iot
Suggests:	%{name}-sub2-Preset_sd-ivi-proto
%description sub1-Preset_sd-ivi
Tizen IVI Platform Presets
%files sub1-Preset_sd-ivi

%package sub2-Preset_sd-ivi-proto
Summary:	IVI OdroidXU3 Prototype
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/ivi-target-odroidxu3.ks
%description sub2-Preset_sd-ivi-proto
Tizen IVI Prototype Preset from OdroidXU3 as an example
%files sub2-Preset_sd-ivi-proto

