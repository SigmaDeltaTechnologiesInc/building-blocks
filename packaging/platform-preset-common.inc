# Maintainer: Tizen Common PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


%package sub1-Preset_sd-common
Summary:	Common Profile Presets (not included elsewhere)
Conflicts:	%{name}-sub1-Preset_sd-mobile
Conflicts:	%{name}-sub1-Preset_sd-tv
Conflicts:	%{name}-sub1-Preset_sd-wearable
Conflicts:	%{name}-sub1-Preset_sd-home_appliance
Conflicts:	%{name}-root-Preset-iot
Conflicts:	%{name}-sub1-Preset_sd-ivi

%list_suggest /usr/share/package-groups/common/ common sub2-Preset_sd-common-

%description sub1-Preset_sd-common
Tizen Platform Presets for "Common Profile"
%files sub1-Preset_sd-common

%list_require %{_datadir}/package-groups/common/ common sub2-Preset_sd-common-
