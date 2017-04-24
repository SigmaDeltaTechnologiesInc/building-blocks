# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-Preset_iot
Summary:	IOT Software Platform Presets
Conflicts:	%{name}-root-Preset_sd
Conflicts:	%{name}-root-Preset_mobile
Conflicts:	%{name}-root-Preset_tv
Conflicts:	%{name}-root-Preset_wearable
Conflicts:	%{name}-root-Preset_ivi
Suggests:	%{name}-sub1-Preset_iot-headless_minimal
Suggests:	%{name}-sub1-Preset_iot-headless_speaker
Suggests:	%{name}-sub1-Preset_iot-headless_net
Suggests:	%{name}-sub1-Preset_iot-headless_controller
Suggests:	%{name}-sub1-Preset_iot-headed_minimal
%description root-Preset_iot
__EXPAND__: preset
Tizen IoT Presets of Software Plaforms independent from specific hardware/BSPs.
%files root-Preset_iot

%package root-Preset_1iot_examples
Summary:	IoT Device Board and SW Platform Examples
%ifarch armv7l
Suggests:	%{name}-sub1-Preset_1iot_examples-1_AAA_BLANK1__UI__SM
Suggests:	%{name}-sub1-Preset_1iot_examples-1_ARTIK_headless
Suggests:	%{name}-sub1-Preset_1iot_examples-1_ARTIK_headed_full
Suggests:	%{name}-sub1-Preset_1iot_examples-1_ODROID_headed_full
%endif
Suggests:	%{name}-sub1-Preset_1iot_examples-1_ZZZBLANK2__UI__SM
%ifarch aarch64 armv7l
Suggests:	%{name}-sub1-Preset_1iot_examples-1_RPI3_headless
Suggests:	%{name}-sub1-Preset_1iot_examples-3_RPI3_headless_devboard
Suggests:	%{name}-sub1-Preset_1iot_examples-3_RPI3_headless_networkhub
Suggests:	%{name}-sub1-Preset_1iot_examples-3_RPI3_headless_minimal
%endif
%description root-Preset_1iot_examples
__EXPAND__: preset
Tizen IoT Presets of specific devices, which have both BSPs and software platforms.
An item in this section is intended to represent a whole OS image.
%files root-Preset_1iot_examples

%package sub1-Preset_1iot_examples-1_AAA_BLANK1__UI__SM
Summary:	<b>Examples of Official Tizen Snapshot Images</b>
%description sub1-Preset_1iot_examples-1_AAA_BLANK1__UI__SM
%files sub1-Preset_1iot_examples-1_AAA_BLANK1__UI__SM

%package sub1-Preset_1iot_examples-1_ZZZBLANK2__UI__SM
Summary:	<b>Conceptual Examples</b>
%description sub1-Preset_1iot_examples-1_ZZZBLANK2__UI__SM
%files sub1-Preset_1iot_examples-1_ZZZBLANK2__UI__SM


%package sub1-Preset_iot-headless_minimal
Summary:	IoT Headless Minimal Preset
Requires:	%{name}-sub1-feature_Platform-Headless
Requires:	bash
Requires:	systemd
Suggests:	rpm
Suggests:	%{name}-sub2-domain_API-Network-IoTCon
%description sub1-Preset_iot-headless_minimal
Tizen IoT Headless/Minimal Preset
%files sub1-Preset_iot-headless_minimal


%package sub1-Preset_iot-headless_speaker
Summary:	IoT Headless Speaker (Minimal) Preset
Requires:	%{name}-sub1-feature_Platform-Headless
Requires:	%{name}-sub2-domain_API-Multimedia-AudioIO
Requires:	%{name}-sub2-domain_API-Multimedia-SoundManager
Requires:	%{name}-sub2-domain_API-Multimedia-WAVPlayer
Requires:	%{name}-sub2-domain_API-Network-Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Connection
Requires:	%{name}-sub2-domain_API-Network-WiFiDirect
Requires:	%{name}-sub2-domain_API-Network-WiFi
Suggests:	%{name}-sub2-domain_API-Network-IoTCon
Suggests:	%{name}-sub2-domain_API-Multimedia-Radio
Suggests:	%{name}-sub2-domain_API-Multimedia-Recorder
Suggests:	rpm
%description sub1-Preset_iot-headless_speaker
Tizen IoT Speaker/Minimal Preset
%files sub1-Preset_iot-headless_speaker


%package sub1-Preset_iot-headed_minimal
Summary:	IoT Headed (GUI support) Minimal Preset
Requires:	%{name}-sub1-feature_Platform-Headed
Requires:	%{name}-sub2-domain_API-UI-EFL
Suggests:	%{name}-sub2-domain_API-UI-DALi
Suggests:	%{name}-sub2-domain_API-UI-Cairo
Suggests:	%{name}-sub2-domain_API-Network-IoTCon
Requires:	bash
Requires:	systemd
Suggests:	rpm
%description sub1-Preset_iot-headed_minimal
Tizen IoT Headed/Minimal Preset
%files sub1-Preset_iot-headed_minimal


%package sub1-Preset_iot-headless_net
Summary:	IoT Headless with Rich Networking
Requires:	%{name}-sub1-feature_Platform-Headless
Requires:	%{name}-sub2-domain_API-Network-Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Connection
Requires:	%{name}-sub2-domain_API-Network-WiFiDirect
Requires:	%{name}-sub2-domain_API-Network-WiFi
Suggests:	%{name}-sub2-domain_API-Network-NFC
Suggests:	%{name}-sub2-domain_API-Network-Smartcard
Suggests:	%{name}-sub2-domain_API-Network-IoTCon
Requires:	bash
Requires:	systemd
Suggests:	rpm
%description sub1-Preset_iot-headless_net
Tizen IoT Headless Preset
%files sub1-Preset_iot-headless_net


%package sub1-Preset_iot-headless_controller
Summary:	IoT Headless with Contollers
Requires:	%{name}-sub1-feature_Platform-Headless
Requires:	%{name}-sub2-domain_API-Network-Bluetooth
Requires:	%{name}-sub2-domain_API-Network-Connection
Requires:	%{name}-sub2-domain_API-Network-IoTCon
Suggests:	%{name}-sub2-domain_API-Network-NFC
Suggests:	%{name}-sub2-domain_API-Network-WiFiDirect
Suggests:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Context-ActivityRecognition
Requires:	%{name}-sub2-domain_API-Context-ContextualHistory
Requires:	%{name}-sub2-domain_API-Context-ContextualTrigger
Requires:	%{name}-sub2-domain_API-AppFramework-MessagePort
Requires:	%{name}-sub2-domain_API-AppFramework-ServiceApplication
Requires:	bash
Requires:	systemd
Suggests:	rpm
%description sub1-Preset_iot-headless_controller
Tizen IoT Headless Preset
%files sub1-Preset_iot-headless_controller




%ifarch aarch64 armv7l
%package sub1-Preset_1iot_examples-3_RPI3_headless_devboard
Summary:	RPI3 Headless for Developers
Requires:	%{name}-sub1-Preset_iot-headless_minimal
Requires:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Requires:	rpm
Suggests:	gcc
Suggests:	make
Suggests:	cmake
%description sub1-Preset_1iot_examples-3_RPI3_headless_devboard
%files sub1-Preset_1iot_examples-3_RPI3_headless_devboard
%endif

%ifarch aarch64 armv7l
%package sub1-Preset_1iot_examples-3_RPI3_headless_networkhub
Summary:	RPI3 Headless Network Hub
Requires:	%{name}-sub1-Preset_iot-headless_minimal
Requires:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
%description sub1-Preset_1iot_examples-3_RPI3_headless_networkhub
%files sub1-Preset_1iot_examples-3_RPI3_headless_networkhub
%endif

%ifarch aarch64 armv7l
%package sub1-Preset_1iot_examples-3_RPI3_headless_minimal
Summary:	RPI3 Minimal Headless
Requires:	%{name}-sub1-Preset_iot-headless_minimal
Requires:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
%description sub1-Preset_1iot_examples-3_RPI3_headless_minimal
%files sub1-Preset_1iot_examples-3_RPI3_headless_minimal
%endif

%ifarch aarch64 armv7l
%package sub1-Preset_1iot_examples-1_RPI3_headless
Summary:	RPI3 Headless Tizen Official Example
Requires:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
%list_with_require %{_datadir}/image-configurations/common-headless-2parts-armv7l-rpi3.ks
%description sub1-Preset_1iot_examples-1_RPI3_headless
Replication of Tizen IoT RPI3 Snapshot Release (download.tizen.org/snapshots/tizen/unified)
This is from common-headless-2parts-armv7l-rpi3. (armv7l)
Userspace rootfs only.
%files sub1-Preset_1iot_examples-1_RPI3_headless
%endif

%ifarch armv7l
%package sub1-Preset_1iot_examples-1_ARTIK_headless
Summary:	ARTIK Headless Tizen Official Example
# TODO: Change it to headlessBSP
Requires:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
%list_with_require %{_datadir}/image-configurations/common-headless-3parts-armv7l-artik.ks
%description sub1-Preset_1iot_examples-1_ARTIK_headless
Replication of Tizen IoT ARTIK Snapshot Release (download.tizen.org/snapshots/tizen/unified)
This is from common-headless-3parts-armv7l-artik. (armv7l)
Userspace rootfs only
TODO: Change BSP reference to headlessBSP
%files sub1-Preset_1iot_examples-1_ARTIK_headless
%endif

%ifarch armv7l
%package sub1-Preset_1iot_examples-1_ARTIK_headed_full
Summary:	ARTIK Headed Tizen Official Example (common/full)
Requires:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
%list_with_require %{_datadir}/image-configurations/common-headless-3parts-armv7l-artik.ks
%list_with_require %{_datadir}/image-configurations/common-wayland-3parts-armv7l-artik.ks
%description sub1-Preset_1iot_examples-1_ARTIK_headed_full
Replication of Tizen IoT ARTIK Headed/Wayland Snapshot Release (download.tizen.org/snapshots/tizen/unified)
This is from common-wayland-3parts-armv7l-artik. (armv7l)
Userspace rootfs only
%files sub1-Preset_1iot_examples-1_ARTIK_headed_full
%endif

%ifarch armv7l
%package sub1-Preset_1iot_examples-1_ODROID_headed_full
Summary:	ODROID U3/XU3 Headed Tizen Official Example (common/full)
Requires:	%{name}-sub1-Preset_boards-OdroidXU3_fullBSP
%list_with_require %{_datadir}/image-configurations/common-wayland-3parts-armv7l-odroidu3.ks
%description sub1-Preset_1iot_examples-1_ODROID_headed_full
Replication of Tizen IoT Odroid U3/XU3 Headed/Wayland Snapshot Release (download.tizen.org/snapshots/tizen/unified)
This is from common-wayland-3parts-armv7l-odroidu3. (armv7l)
Userspace rootfs only
%files sub1-Preset_1iot_examples-1_ODROID_headed_full
%endif
