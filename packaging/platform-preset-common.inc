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

%ifarch armv7l
Suggests:	%{name}-sub2-Preset_sd-common-wayland_armv7l

%endif
%ifarch aarch64
Suggests:	%{name}-sub2-Preset_sd-common-wayland_aarch64
%endif

%ifarch armv7l aarch64
Suggests:	%{name}-sub2-Preset_sd-common-zAA__UI__QT
%endif

%list_suggest /usr/share/package-groups/common/ common sub2-Preset_sd-common-

%description sub1-Preset_sd-common
Tizen Platform Presets for "Common Profile"
%files sub1-Preset_sd-common

%list_require %{_datadir}/package-groups/common/ common sub2-Preset_sd-common-



%ifarch armv7l
%package sub2-Preset_sd-common-wayland_armv7l
Summary:	Example Image of "wayland-2parts-armv7l"
%list_with_require %{_datadir}/image-configurations/common-wayland-2parts-armv7l.ks
%description sub2-Preset_sd-common-wayland_armv7l
Example of Tizen snapshot image, "common-wayland-2parts-armv7l"
%files sub2-Preset_sd-common-wayland_armv7l
%endif

%ifarch aarch64
%package sub2-Preset_sd-common-wayland_aarch64
%list_with_require %{_datadir}/image-configurations/common-wayland-3parts-arm64.ks
Summary:	Example Image of "wayland-3parts-arm654"
%description sub2-Preset_sd-common-wayland_aarch64
Example of Tizen snapshot image, "common-wayland-3parts-arm64"
%files sub2-Preset_sd-common-wayland_aarch64
%endif


%package sub2-Preset_sd-common-zAA__UI__QT
Summary:	Quarter Line
%description sub2-Preset_sd-common-zAA__UI__QT
%files sub2-Preset_sd-common-zAA__UI__QT
