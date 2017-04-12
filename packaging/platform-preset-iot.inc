# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-Preset_iot
Summary:	Presets for IOT Devices
Conflicts:	%{name}-root-Preset_sd
Conflicts:	%{name}-root-Preset_mobile
Conflicts:	%{name}-root-Preset_tv
Conflicts:	%{name}-root-Preset_wearable
Conflicts:	%{name}-root-Preset_ivi
Suggests:	%{name}-sub1-Preset_iot-platforms
Suggests:	%{name}-sub1-Preset_iot-examples
%description root-Preset_iot
Tizen IoT Device Presets
%files root-Preset_iot


%package sub1-Preset_iot-platforms
Summary:	IOT Software Platform Presets
Suggests:	%{name}-sub2-Preset_iot-platforms-headless_minimal
Suggests:	%{name}-sub2-Preset_iot-platforms-headless_speaker
Suggests:	%{name}-sub2-Preset_iot-platforms-headed_minimal
%description sub1-Preset_iot-platforms
Tizen IoT Presets of Software Plaforms independent from specific hardware/BSPs.
%files sub1-Preset_iot-platforms

%package sub1-Preset_iot-examples
Summary:	IOT Device Board and SW Platform Presets
%ifarch armv7l
Suggests:	%{name}-sub2-Preset_iot-examples-1_AAA_BLANK1__UI__SM
Suggests:	%{name}-sub2-Preset_iot-examples-1_ARTIK_headless
Suggests:	%{name}-sub2-Preset_iot-examples-1_ARTIK_headed_full
Suggests:	%{name}-sub2-Preset_iot-examples-1_ODROID_headed_full
%endif
Suggests:	%{name}-sub2-Preset_iot-examples-1_ZZZBLANK1__UI__HR
Suggests:	%{name}-sub2-Preset_iot-examples-1_ZZZBLANK2__UI__SM
%ifarch aarch64 armv7l
Suggests:	%{name}-sub2-Preset_iot-examples-1_RPI3_headless
Suggests:	%{name}-sub2-Preset_iot-examples-3_RPI3_headless_devboard
Suggests:	%{name}-sub2-Preset_iot-examples-3_RPI3_headless_networkhub
Suggests:	%{name}-sub2-Preset_iot-examples-3_RPI3_headless_minimal
%endif
%description sub1-Preset_iot-examples
Tizen IoT Presets of specific devices, which have both BSPs and software platforms.
An item in this section is intended to represent a whole OS image.
%files sub1-Preset_iot-examples

%package sub2-Preset_iot-examples-1_AAA_BLANK1__UI__SM
Summary:	<b>Examples of Official Tizen Snapshot Images</b>
%description sub2-Preset_iot-examples-1_AAA_BLANK1__UI__SM
%files sub2-Preset_iot-examples-1_AAA_BLANK1__UI__SM

%package sub2-Preset_iot-examples-1_ZZZBLANK1__UI__HR
Summary:	UI Blank
%description sub2-Preset_iot-examples-1_ZZZBLANK1__UI__HR
%files sub2-Preset_iot-examples-1_ZZZBLANK1__UI__HR

%package sub2-Preset_iot-examples-1_ZZZBLANK2__UI__SM
Summary:	<b>Examples Not Verified</b>
%description sub2-Preset_iot-examples-1_ZZZBLANK2__UI__SM
%files sub2-Preset_iot-examples-1_ZZZBLANK2__UI__SM


%package sub2-Preset_iot-platforms-headless_minimal
Summary:	IoT Headless Minimal Preset
Requires:	%{name}-root-feature_Headless
%description sub2-Preset_iot-platforms-headless_minimal
Tizen IoT Headless/Minimal Preset
%files sub2-Preset_iot-platforms-headless_minimal


%package sub2-Preset_iot-platforms-headless_speaker
Summary:	IoT Headless Speaker (Minimal) Preset
Requires:	%{name}-root-feature_Headless
%description sub2-Preset_iot-platforms-headless_speaker
Tizen IoT Speaker/Minimal Preset
%files sub2-Preset_iot-platforms-headless_speaker


%package sub2-Preset_iot-platforms-headed_minimal
Summary:	IoT Headed (GUI support) Minimal Preset
Requires:	%{name}-root-feature_Headed
%description sub2-Preset_iot-platforms-headed_minimal
Tizen IoT Headed/Minimal Preset
%files sub2-Preset_iot-platforms-headed_minimal


%ifarch aarch64 armv7l
%package sub2-Preset_iot-examples-3_RPI3_headless_devboard
Summary:	RPI3 Headless for Developers
Requires:	%{name}-sub2-Preset_iot-platforms-headless_minimal
Requires:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Requires:	rpm
Suggests:	gcc
Suggests:	make
Suggests:	cmake
%description sub2-Preset_iot-examples-3_RPI3_headless_devboard
%files sub2-Preset_iot-examples-3_RPI3_headless_devboard
%endif

%ifarch aarch64 armv7l
%package sub2-Preset_iot-examples-3_RPI3_headless_networkhub
Summary:	RPI3 Headless Network Hub
Requires:	%{name}-sub2-Preset_iot-platforms-headless_minimal
Requires:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Requires:	%{name}-root-domain_network
%description sub2-Preset_iot-examples-3_RPI3_headless_networkhub
%files sub2-Preset_iot-examples-3_RPI3_headless_networkhub
%endif

%ifarch aarch64 armv7l
%package sub2-Preset_iot-examples-3_RPI3_headless_minimal
Summary:	RPI3 Minimal Headless
Requires:	%{name}-sub2-Preset_iot-platforms-headless_minimal
Requires:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
%description sub2-Preset_iot-examples-3_RPI3_headless_minimal
%files sub2-Preset_iot-examples-3_RPI3_headless_minimal
%endif

%ifarch aarch64 armv7l
%package sub2-Preset_iot-examples-1_RPI3_headless
Summary:	RPI3 Headless Tizen Official Example
%list_with_require %{_datadir}/image-configurations/common-headless-2parts-armv7l-rpi3.ks
%description sub2-Preset_iot-examples-1_RPI3_headless
Replication of Tizen IoT RPI3 Snapshot Release (download.tizen.org/snapshots/tizen/unified)
This is from common-headless-2parts-armv7l-rpi3. (armv7l)
Userspace rootfs only.
%files sub2-Preset_iot-examples-1_RPI3_headless
%endif

%ifarch armv7l
%package sub2-Preset_iot-examples-1_ARTIK_headless
Summary:	ARTIK Headless Tizen Official Example
%list_with_require %{_datadir}/image-configurations/common-headless-3parts-armv7l-artik.ks
%description sub2-Preset_iot-examples-1_ARTIK_headless
Replication of Tizen IoT ARTIK Snapshot Release (download.tizen.org/snapshots/tizen/unified)
This is from common-headless-3parts-armv7l-artik. (armv7l)
Userspace rootfs only
%files sub2-Preset_iot-examples-1_ARTIK_headless
%endif

%ifarch armv7l
%package sub2-Preset_iot-examples-1_ARTIK_headed_full
Summary:	ARTIK Headed Tizen Official Example (common/full)
%list_with_require %{_datadir}/image-configurations/common-wayland-3parts-armv7l-artik.ks
%description sub2-Preset_iot-examples-1_ARTIK_headed_full
Replication of Tizen IoT ARTIK Headed/Wayland Snapshot Release (download.tizen.org/snapshots/tizen/unified)
This is from common-wayland-3parts-armv7l-artik. (armv7l)
Userspace rootfs only
%files sub2-Preset_iot-examples-1_ARTIK_headed_full
%endif

%ifarch armv7l
%package sub2-Preset_iot-examples-1_ODROID_headed_full
Summary:	ODROID U3/XU3 Headed Tizen Official Example (common/full)
%list_with_require %{_datadir}/image-configurations/common-wayland-3parts-armv7l-odroidu3.ks
%description sub2-Preset_iot-examples-1_ODROID_headed_full
Replication of Tizen IoT Odroid U3/XU3 Headed/Wayland Snapshot Release (download.tizen.org/snapshots/tizen/unified)
This is from common-wayland-3parts-armv7l-odroidu3. (armv7l)
Userspace rootfs only
%files sub2-Preset_iot-examples-1_ODROID_headed_full
%endif
