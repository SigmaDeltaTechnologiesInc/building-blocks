# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-Preset_iot_core
Summary:    IOT Core Presets
%list_with_require %{_datadir}/image-configurations/common-iot_core-2parts-armv7l-rpi3.ks
%description root-Preset_iot_core
__EXPAND__: preset
The packages of Tizen IoT Core.
%files root-Preset_iot_core

%package root-Preset_iot
Summary:	IOT Software Platform Presets
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
Suggests:	%{name}-sub1-Preset_1iot_examples-1_ARTIK_headed_full
Suggests:	%{name}-sub1-Preset_1iot_examples-1_RPI3_headless
%endif
Suggests:	%{name}-sub1-Preset_1iot_examples-1_ZZZBLANK2__UI__SM
%ifarch aarch64 armv7l
Suggests:	%{name}-sub1-Preset_1iot_examples-3_RPI3_headless_zdevboard
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
Suggests:	%{name}-sub1-domain_API-Network-IoTCon
%description sub1-Preset_iot-headless_minimal
Tizen IoT Headless/Minimal Preset
%files sub1-Preset_iot-headless_minimal


%package sub1-Preset_iot-headless_speaker
Summary:	IoT Headless Speaker (Minimal) Preset
Requires:	%{name}-sub1-feature_Platform-Headless
Requires:	%{name}-sub1-domain_API-Multimedia-Sound_Manager
Requires:	%{name}-sub1-domain_API-Multimedia-WAV_Player
Requires:	%{name}-sub1-domain_API-Network-Bluetooth_BREDR
Requires:	%{name}-sub1-domain_API-Network-Connection
Requires:	%{name}-sub1-domain_API-Network-WiFi_Direct
Requires:	%{name}-sub1-domain_API-Network-WiFi
Suggests:	%{name}-sub1-domain_API-Network-IoTCon
Suggests:	%{name}-sub1-domain_API-Multimedia-Radio
Suggests:	%{name}-sub1-domain_API-Multimedia-Tone_Player
Requires:	%{name}-sub1-domain_API-Multimedia-Media_Controller
Suggests:	rpm
%description sub1-Preset_iot-headless_speaker
Tizen IoT Speaker/Minimal Preset
%files sub1-Preset_iot-headless_speaker


%package sub1-Preset_iot-headed_minimal
Summary:	IoT Headed (GUI support) Minimal Preset
Requires:	%{name}-sub1-feature_Platform-Headed
Requires:	%{name}-sub1-domain_API-UI-EFL_NativeUIToolkit
Suggests:	%{name}-sub1-domain_API-UI-DALi
Suggests:	%{name}-sub1-domain_API-UI-Cairo
Suggests:	%{name}-sub1-domain_API-Network-IoTCon
Requires:	bash
Requires:	systemd
Suggests:	rpm
%description sub1-Preset_iot-headed_minimal
Tizen IoT Headed/Minimal Preset
%files sub1-Preset_iot-headed_minimal


%package sub1-Preset_iot-headless_net
Summary:	IoT Headless with Rich Networking
Requires:	%{name}-sub1-feature_Platform-Headless
Requires:	%{name}-sub1-domain_API-Network-Bluetooth_BREDR
Requires:	%{name}-sub1-domain_API-Network-Connection
Requires:	%{name}-sub1-domain_API-Network-WiFi_Direct
Requires:	%{name}-sub1-domain_API-Network-WiFi
Suggests:	%{name}-sub1-domain_API-Network-NFC
Suggests:	%{name}-sub1-domain_API-Network-Smartcard
Suggests:	%{name}-sub1-domain_API-Network-IoTCon
Requires:	bash
Requires:	systemd
Suggests:	rpm
%description sub1-Preset_iot-headless_net
Tizen IoT Headless Preset
%files sub1-Preset_iot-headless_net


%package sub1-Preset_iot-headless_controller
Summary:	IoT Headless with Contollers
Requires:	%{name}-sub1-feature_Platform-Headless
Requires:	%{name}-sub1-domain_API-Network-Bluetooth_BREDR
Requires:	%{name}-sub1-domain_API-Network-Connection
Requires:	%{name}-sub1-domain_API-Network-IoTCon
Suggests:	%{name}-sub1-domain_API-Network-NFC
Suggests:	%{name}-sub1-domain_API-Network-WiFi_Direct
Suggests:	%{name}-sub1-domain_API-Network-WiFi
Requires:	%{name}-sub1-domain_API-Context-Activity_Geusture_Recognition
Requires:	%{name}-sub1-domain_API-AppFramework-Message_Port_API
Requires:	bash
Requires:	systemd
Suggests:	rpm
%description sub1-Preset_iot-headless_controller
Tizen IoT Headless Preset
%files sub1-Preset_iot-headless_controller




%ifarch aarch64 armv7l
%package sub1-Preset_1iot_examples-3_RPI3_headless_zdevboard
Summary:	RPI3 Headless for Developers
Requires:	%{name}-sub1-Preset_iot-headless_minimal
Requires:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Requires:	sdbd
Requires:	gdb
Requires:	rpm
Requires:	valgrind
Suggests:	%{name}-sub2-feature_Development-Build-GCC
Suggests:	%{name}-sub2-feature_Development-Build-LLVM
Suggests:	diffutils
Suggests:	findutils
Suggests:	grep
Suggests:	vim
Suggests:	make
Suggests:	cmake
%description sub1-Preset_1iot_examples-3_RPI3_headless_zdevboard
%files sub1-Preset_1iot_examples-3_RPI3_headless_zdevboard
%endif

%ifarch aarch64 armv7l
%package sub1-Preset_1iot_examples-3_RPI3_headless_networkhub
Summary:	RPI3 Headless Network Hub
Requires:	%{name}-sub1-Preset_iot-headless_minimal
Requires:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Requires:	%{name}-sub1-domain_API-Network-Bluetooth_BREDR
Requires:	%{name}-sub1-domain_API-Network-WiFi
Suggests:	%{name}-sub1-domain_API-Network-WiFi_Direct
Suggests:	%{name}-sub1-domain_API-Network-IoTCon
Suggests:	%{name}-sub1-domain_API-Network-NFC
Requires:	%{name}-sub1-domain_API-Network-Connection
Requires:	%{name}-sub1-domain_API-Network-HTTP
Requires:	%{name}-sub1-domain_API-Network-VPN_Service
Suggests:	%{name}-sub1-domain_API-System-System_Information
Suggests:	%{name}-sub1-domain_API-System-dlog
Suggests:	%{name}-sub1-domain_API-Telephony
Suggests:	sdbd
Suggests:	rpm
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
%package sub1-Preset_1iot_examples-1_ARTIK_headed_full
Summary:	ARTIK Headed Tizen Official Example (common/full)
Requires:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
%list_with_require %{_datadir}/image-configurations/common-wayland-3parts-armv7l-artik.ks
%description sub1-Preset_1iot_examples-1_ARTIK_headed_full
Replication of Tizen IoT ARTIK Headed/Wayland Snapshot Release (download.tizen.org/snapshots/tizen/unified)
This is from common-wayland-3parts-armv7l-artik. (armv7l)
Userspace rootfs only
%files sub1-Preset_1iot_examples-1_ARTIK_headed_full
%endif
