# Maintainer: Tizen PM?
# You need ACK (+1) from the maintainer to be reviewed by building-block maintainers.

%package root-Preset_boards
Summary:	Board (Hardware Set) Support Packages (BSP) Presets
%ifarch armv7l aarch64
Suggests:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Suggests:	%{name}-sub1-Preset_boards-RPI3_fullBSP
%endif
%ifarch armv7l
Suggests:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
Suggests:	%{name}-sub1-Preset_boards-OdroidXU3_fullBSP
Suggests:	%{name}-sub1-Preset_boards-TM1_fullBSP
%endif
%ifarch armv7l aarch64
Suggests:	%{name}-sub1-Preset_boards-TM2_fullBSP
Suggests:	%{name}-sub1-Preset_boards-TM3_fullBSP
%endif
%ifarch armv7l
Suggests:	%{name}-sub1-Preset_boards-TW1_fullBSP
Suggests:	%{name}-sub1-Preset_boards-TW2_fullBSP
%endif
%description root-Preset_boards
Note that kernel binaries may be required to be installed in a separated partition
and you might be not allowed to include kernel binaries in the platform image.
%files root-Preset_boards

%ifarch armv7l aarch64
%package sub1-Preset_boards-RPI3_headlessBSP
Summary:	BSP for RPI3 (headless)
%description sub1-Preset_boards-RPI3_headlessBSP
%files sub1-Preset_boards-RPI3_headlessBSP
%endif

%ifarch armv7l aarch64
%package sub1-Preset_boards-RPI3_fullBSP
Summary:	BSP for RPI3 (full)
%description sub1-Preset_boards-RPI3_fullBSP
%files sub1-Preset_boards-RPI3_fullBSP
%endif

%ifarch armv7l
%package sub1-Preset_boards-ARTIK_fullBSP
Summary:	BSP for ARTIK (full)
%description sub1-Preset_boards-ARTIK_fullBSP
%files sub1-Preset_boards-ARTIK_fullBSP
%endif

%ifarch armv7l
%package sub1-Preset_boards-OdroidXU3_fullBSP
Summary:	BSP for OdroidXU3 (full)
%description sub1-Preset_boards-OdroidXU3_fullBSP
%files sub1-Preset_boards-OdroidXU3_fullBSP
%endif

%ifarch armv7l
%package sub1-Preset_boards-TM1_fullBSP
Summary:	BSP for TM1 (Z3-variant)
%description sub1-Preset_boards-TM1_fullBSP
%files sub1-Preset_boards-TM1_fullBSP
%endif

%ifarch armv7l aarch64
%package sub1-Preset_boards-TM2_fullBSP
Summary:	BSP for TM2 (Exynos7)
%description sub1-Preset_boards-TM2_fullBSP
%files sub1-Preset_boards-TM2_fullBSP
%endif

%ifarch armv7l aarch64
%package sub1-Preset_boards-TM3_fullBSP
Summary:	BSP for TM3 (Exynos9)
%description sub1-Preset_boards-TM3_fullBSP
%files sub1-Preset_boards-TM3_fullBSP
%endif

%ifarch armv7l
%package sub1-Preset_boards-TW1_fullBSP
Summary:	BSP for TW1 (Gear 2)
%description sub1-Preset_boards-TW1_fullBSP
%files sub1-Preset_boards-TW1_fullBSP
%endif

%ifarch armv7l
%package sub1-Preset_boards-TW2_fullBSP
Summary:	BSP for TW2 (Gear S3)
%description sub1-Preset_boards-TW2_fullBSP
%files sub1-Preset_boards-TW2_fullBSP
%endif
