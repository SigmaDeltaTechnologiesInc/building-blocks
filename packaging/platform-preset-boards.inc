# Maintainer: Tizen PM?
# You need ACK (+1) from the maintainer to be reviewed by building-block maintainers.

%package root-Preset_boards
Summary:	Board (Hardware Set) Support Packages (BSP) Presets
%ifarch armv7l
Suggests:	%{name}-sub1-Preset_boards-ARTIK530
Suggests:	%{name}-sub1-Preset_boards-RPI3
Suggests:	%{name}-sub1-Preset_boards-TM1
%endif
%description root-Preset_boards
__EXPAND__: preset
Select BSP which you want.
%files root-Preset_boards
