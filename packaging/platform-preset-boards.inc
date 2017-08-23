# Maintainer: Tizen PM?
# You need ACK (+1) from the maintainer to be reviewed by building-block maintainers.

%package root-Preset_boards
Summary:	Board (Hardware Set) Support Packages (BSP) Presets
%ifarch armv7l
Suggests:	%{name}-sub1-Preset_boards-ARTIK530
Suggests:	%{name}-sub1-Preset_boards-RPI3
Suggests:	%{name}-sub1-Preset_boards-TM1
Suggests:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
%endif
%description root-Preset_boards
Note that kernel binaries may be required to be installed in a separated partition
and you might be not allowed to include kernel binaries in the platform image.
%files root-Preset_boards

%ifarch armv7l
%package sub1-Preset_boards-ARTIK_fullBSP
Summary:	ARTIK (full)
Requires:	alsa-ucm-data-ak4953
Requires:	audio-hal-ak4953
Requires:	bluetooth-firmware-bcm-artik
Requires:	device-manager-plugin-artik
Requires:	libomxil-e54xx
Requires:	mmfw-sysconf-target-artik10
Requires:	model-config-artik
Requires:	system-plugin-init_wrapper
Requires:	system-plugin-u3

Conflicts:	%{name}-sub1-Preset_boards-RPI3
Conflicts:	%{name}-sub1-Preset_boards-TM1
Conflicts:	%{name}-sub1-Preset_boards-ARTIK530

%description sub1-Preset_boards-ARTIK_fullBSP
__KS_URL__: http://download.tizen.org/snapshots/tizen/unified/latest/images/standard/common-wayland-3parts-armv7l-artik710/
These are manually extracted from
common-wayland-3parts-armv7l-artik710.ks
%files sub1-Preset_boards-ARTIK_fullBSP
%endif
