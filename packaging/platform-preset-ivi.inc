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
Suggests:	%{name}-sub2-Preset_sd-ivi-zAA__UI__QT
%list_suggest /usr/share/package-groups/ivi/ ivi sub2-Preset_sd-ivi-
%description sub1-Preset_sd-ivi
Tizen IVI Platform Presets
%files sub1-Preset_sd-ivi

%package sub2-Preset_sd-ivi-zAA__UI__QT
Summary:	Quarter Line
%description sub2-Preset_sd-ivi-zAA__UI__QT
%files sub2-Preset_sd-ivi-zAA__UI__QT


%package sub2-Preset_sd-ivi-proto
Summary:	Tizen IVI Reference Image of OdroidXU3
# image-configuration must have this file supplied.
%list_with_require %{_datadir}/image-configurations/ivi-target-odroidxu3.ks
%description sub2-Preset_sd-ivi-proto
__KS_URL__: http://download.tizen.org/snapshots/tizen/unified/latest/images/standard/ivi-target-odroidxu3/
Tizen IVI Prototype Preset from OdroidXU3 as an example
%files sub2-Preset_sd-ivi-proto


%list_require /usr/share/package-groups/ivi/ ivi sub2-Preset_sd-ivi-

