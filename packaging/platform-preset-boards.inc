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
Suggests:	%{name}-sub1-Preset_boards-TM2_fullBSP_32b
%endif
%ifarch aarch64
Suggests:	%{name}-sub1-Preset_boards-TM2_fullBSP_64b
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
Requires:	system-plugin-headless
Requires:	system-plugin-init_wrapper
Requires:	system-plugin-rpi3
# Mobileap is only required with mobileap...?
Suggests:	mobileap-agent-extension-RPi

Conflicts:	%{name}-sub1-Preset_boards-RPI3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-OdroidXU3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_32b
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_64b
Conflicts:	%{name}-sub1-Preset_boards-TM3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW2_fullBSP

%description sub1-Preset_boards-RPI3_headlessBSP
__KS_URL__: http://download.tizen.org/snapshots/tizen/unified/latest/images/standard/common-headless-2parts-armv7l-rpi3/
These are manually extracted from common-headless-2parts-armv7l-rpi3.ks
%files sub1-Preset_boards-RPI3_headlessBSP
%endif

%ifarch armv7l aarch64
%package sub1-Preset_boards-RPI3_fullBSP
Summary:	BSP for RPI3 (full)
Requires:	system-plugin-headless
Requires:	system-plugin-init_wrapper
Requires:	system-plugin-rpi3
Requires:	mobileap-agent-extension-RPi

Conflicts:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Conflicts:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-OdroidXU3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_32b
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_64b
Conflicts:	%{name}-sub1-Preset_boards-TM3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW2_fullBSP

%description sub1-Preset_boards-RPI3_fullBSP
%files sub1-Preset_boards-RPI3_fullBSP
%endif

%ifarch armv7l
%package sub1-Preset_boards-ARTIK_fullBSP
Summary:	BSP for ARTIK (full)
Requires:	alsa-ucm-data-ak4953
Requires:	audio-hal-ak4953
Requires:	bluetooth-firmware-bcm-artik
Requires:	device-manager-plugin-artik
Requires:	libomxil-e54xx
Requires:	mmfw-sysconf-target-artik10
Requires:	model-config-artik
Requires:	system-plugin-init_wrapper
Requires:	system-plugin-u3

Conflicts:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Conflicts:	%{name}-sub1-Preset_boards-RPI3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-OdroidXU3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_32b
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_64b
Conflicts:	%{name}-sub1-Preset_boards-TM3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW2_fullBSP

%description sub1-Preset_boards-ARTIK_fullBSP
These are manually extracted from
common-wayland-3parts-armv7l-artik710.ks and
common-wayland-3parts-armv7l-artik.ks
(Both had same for these)
%files sub1-Preset_boards-ARTIK_fullBSP
%endif

%ifarch armv7l
%package sub1-Preset_boards-OdroidXU3_fullBSP
Summary:	BSP for OdroidXU3 (full)
Requires:	device-manager-plugin-odroid
Requires:	libomxil-e54xx
Requires:	libtbm-exynos
Requires:	libtdm-exynos
Requires:	libtpl-egl
Requires:	libwayland-egl
Requires:	mmfw-sysconf-target-u3
Requires:	model-config-xu3
Requires:	system-plugin-u3

Conflicts:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Conflicts:	%{name}-sub1-Preset_boards-RPI3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_32b
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_64b
Conflicts:	%{name}-sub1-Preset_boards-TM3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW2_fullBSP

%description sub1-Preset_boards-OdroidXU3_fullBSP
Manually created from common/odroidu2/arm32 ks
%files sub1-Preset_boards-OdroidXU3_fullBSP
%endif

%ifarch armv7l
%package sub1-Preset_boards-TM1_fullBSP
Summary:	BSP for TM1 (Z3-variant)
Requires:	libwayland-tbm-client
Requires:	libwayland-tbm-server
Requires:	audio-config-sc-TM1-sc7730
Requires:	audio-hal-sc7727
Requires:	bluetooth-firmware-sprd-TM1
Requires:	bluetooth-frwk-extension-TM1
Requires:	boot-animation-sound-file-profile_common
Requires:	call-manager-extension-TM1
Requires:	capi-network-mtp
Requires:	device-manager-plugin-sc7730
Requires:	dlogbackend-logger
Requires:	gst-plugins-tizen-extension-TM1
Requires:	initrd
Requires:	liblazymount
Requires:	libmtp
Requires:	libtbm-sprd
Requires:	libtdm-client
Requires:	libtdm-sprd
Requires:	linux-3.10-sc7730_tizen_tm1
Requires:	mmfw-sysconf-target-tm1
Requires:	mobileap-agent-extension-TM1
Requires:	model-config-tm1
Requires:	mtp-initiator
Requires:	mtp-responder
Requires:	net.wifi-qs
Requires:	org.tizen.wifi-direct-popup
Requires:	sensor-hal-tm1
Requires:	smartcard-plugin-uicc
Requires:	smartcard-service
Requires:	smartcard-service-common
Requires:	swap-manager
Requires:	swap-probe
Requires:	swap-probe-elf
Requires:	system-plugin-spreadtrum
Requires:	ug-setting-mobileap-efl
Requires:	ug-setting-wifidirect-efl
Requires:	wifi-direct-manager-extension-TM1
Requires:	wifi-direct-plugin-wpasupplicant-extension-TM1
Requires:	wpa_supplicant-extension-TM1

Conflicts:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Conflicts:	%{name}-sub1-Preset_boards-RPI3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-OdroidXU3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_32b
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_64b
Conflicts:	%{name}-sub1-Preset_boards-TM3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW2_fullBSP

%description sub1-Preset_boards-TM1_fullBSP
Manually created from mobile/tm1/arm32 ks
%files sub1-Preset_boards-TM1_fullBSP
%endif

%ifarch armv7l
%package sub1-Preset_boards-TM2_fullBSP_32b
Summary:	BSP for TM2 (Exynos7) (armv7l)
Requires:	libwayland-tbm-client
Requires:	libwayland-tbm-server
Requires:	alsa-ucm-data-wm5110
Requires:	audio-hal-wm5110
Requires:	bluetooth-firmware-bcm
Requires:	boot-animation-sound-file-profile_common
Requires:	capi-network-mtp
Requires:	capi-network-wifi
Requires:	device-manager-plugin-exynos5433
Requires:	gst-omx
Requires:	gst-plugins-camera-n4
Requires:	liblazymount
Requires:	libmtp
Requires:	libomxil-e54xx
Requires:	libtbm-exynos
Requires:	libtdm-client
Requires:	libtdm-exynos
Requires:	mmfw-sysconf-target-n4
Requires:	model-config-n4
Requires:	mtp-initiator
Requires:	mtp-responder
Requires:	net.wifi-qs
Requires:	nfc-manager
Requires:	org.tizen.wifi-direct-popup
Requires:	sensor-hal-tm2
Requires:	system-plugin-init_wrapper
Requires:	system-plugin-n4
Requires:	ug-nfc-efl
Requires:	ug-setting-mobileap-efl
Requires:	ug-setting-wifidirect-efl
Requires:	wpa_supplicant-extension-TM2

Conflicts:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Conflicts:	%{name}-sub1-Preset_boards-RPI3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-OdroidXU3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_64b
Conflicts:	%{name}-sub1-Preset_boards-TM3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW2_fullBSP

%description sub1-Preset_boards-TM2_fullBSP_32b
Manually created from mobile/tm2/arm32 ks
%files sub1-Preset_boards-TM2_fullBSP_32b
%endif

%ifarch aarch64
%package sub1-Preset_boards-TM2_fullBSP_64b
Summary:	BSP for TM2 (Exynos7) (aarch64)
Requires:	libwayland-tbm-client
Requires:	libwayland-tbm-server
Requires:	alsa-ucm-data-wm5110
Requires:	audio-hal-wm5110
Requires:	bluetooth-firmware-bcm
Requires:	boot-animation-sound-file-profile_common
Requires:	capi-network-mtp
Requires:	capi-network-wifi
Requires:	device-manager-plugin-exynos5433
Requires:	gst-omx
Requires:	gst-plugins-camera-n4
Requires:	liblazymount
Requires:	libmtp
Requires:	libomxil-e54xx
Requires:	libtbm-exynos
Requires:	libtdm-client
Requires:	libtdm-exynos
Requires:	mmfw-sysconf-target-n4
Requires:	model-config-n4
Requires:	mtp-initiator
Requires:	mtp-responder
Requires:	net.wifi-qs
Requires:	nfc-manager
Requires:	org.tizen.wifi-direct-popup
Requires:	sensor-hal-tm2
Requires:	system-plugin-init_wrapper
Requires:	system-plugin-n4
Requires:	ug-nfc-efl
Requires:	ug-setting-mobileap-efl
Requires:	ug-setting-wifidirect-efl
Requires:	wpa_supplicant-extension-TM2

Conflicts:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Conflicts:	%{name}-sub1-Preset_boards-RPI3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-OdroidXU3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_32b
Conflicts:	%{name}-sub1-Preset_boards-TM3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW2_fullBSP

%description sub1-Preset_boards-TM2_fullBSP_64b
Manually created from mobile/tm2/arm64 ks
%files sub1-Preset_boards-TM2_fullBSP_64b
%endif

%ifarch aarch64
%package sub1-Preset_boards-TM3_fullBSP
Summary:	BSP for TM3 (Exynos9) (WIP)

Conflicts:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Conflicts:	%{name}-sub1-Preset_boards-RPI3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-OdroidXU3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_32b
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_64b
Conflicts:	%{name}-sub1-Preset_boards-TW1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW2_fullBSP

%description sub1-Preset_boards-TM3_fullBSP
Not Generated Yet.
%files sub1-Preset_boards-TM3_fullBSP
%endif

%ifarch armv7l
%package sub1-Preset_boards-TW1_fullBSP
Summary:	BSP for TW1 (Gear 2)
Requires:	audio-config-wm1831-orbis
Requires:	audio-hal-wm1831
Requires:	bluetooth-firmware-bcm-exynos3250
Requires:	boot-animation-sound-file-profile_wearable
Requires:	device-manager-plugin-exynos3250
Requires:	dlogbackend-logger
Requires:	initrd
Requires:	ise-default-profile_wearable-extension-circle
Requires:	libomxil-e3250-v4l2
Requires:	libtbm-exynos
Requires:	libtdm-client
Requires:	libtdm-exynos
Requires:	linux-3.4-exynos3250_tizen_wc1
Requires:	mmfw-sysconf-target-tw1
Requires:	model-config-tw1
Requires:	nfc-manager
Requires:	org.tizen.inputmethod-setting-profile_wearable-extension-circle
Requires:	org.tizen.w-home-extension-circle
Requires:	sensor-hal-tw1
Requires:	smartcard-plugin-nfc
Requires:	smartcard-service
Requires:	smartcard-service-common
Requires:	swap-manager
Requires:	swap-probe
Requires:	swap-probe-elf
Requires:	system-plugin
Requires:	system-plugin-circle
Requires:	ug-nfc-efl

Conflicts:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Conflicts:	%{name}-sub1-Preset_boards-RPI3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-OdroidXU3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_32b
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_64b
Conflicts:	%{name}-sub1-Preset_boards-TM3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW2_fullBSP

%description sub1-Preset_boards-TW1_fullBSP
Created from wearable/tw1 ks. Importing all "Adaptation" section
%files sub1-Preset_boards-TW1_fullBSP
%endif

%ifarch armv7l
%package sub1-Preset_boards-TW2_fullBSP
Summary:	BSP for TW2 (Gear S3)
Requires:	audio-config-wm1831-tw2
Requires:	audio-hal-wm1831-tw2
Requires:	bluetooth-firmware-bcm-exynos7270
Requires:	boot-animation-sound-file-profile_wearable
Requires:	device-manager-plugin-exynos3250
Requires:	dlogbackend-logger
Requires:	initrd
Requires:	ise-default-profile_wearable-extension-circle
Requires:	libexynos-common
Requires:	libomxil-e7270-v4l2
Requires:	libtbm-exynos-tgm
Requires:	libtdm-client
Requires:	libtdm-exynos-deconfb
Requires:	linux-exynos7270-tw2-aarch64
Requires:	mmfw-sysconf-target-tw2
Requires:	model-config-tw2
Requires:	nfc-manager
Requires:	org.tizen.inputmethod-setting-profile_wearable-extension-circle
Requires:	org.tizen.w-home-extension-circle
Requires:	smartcard-plugin-nfc
Requires:	smartcard-service
Requires:	smartcard-service-common
Requires:	swap-manager
Requires:	swap-probe
Requires:	swap-probe-elf
Requires:	system-plugin
Requires:	system-plugin-circle
Requires:	ug-nfc-efl

Conflicts:	%{name}-sub1-Preset_boards-RPI3_headlessBSP
Conflicts:	%{name}-sub1-Preset_boards-RPI3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-ARTIK_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-OdroidXU3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM1_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_32b
Conflicts:	%{name}-sub1-Preset_boards-TM2_fullBSP_64b
Conflicts:	%{name}-sub1-Preset_boards-TM3_fullBSP
Conflicts:	%{name}-sub1-Preset_boards-TW1_fullBSP

%description sub1-Preset_boards-TW2_fullBSP
Created from wearable/tw2 ks. Importing all "Adaptation" section
%files sub1-Preset_boards-TW2_fullBSP
%endif
