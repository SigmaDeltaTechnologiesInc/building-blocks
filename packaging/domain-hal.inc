# Maintainer: Inki Dae <inki.dae@samsung.com>
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-domain_HAL
Summary:	Tizen HAL Domain
Suggests:	%{name}-sub1-domain_HAL-sort_by_device
Suggests:	%{name}-sub1-domain_HAL-display
Suggests:	%{name}-sub1-domain_HAL-audio
Suggests:	%{name}-sub1-domain_HAL-bluetooth
%description root-domain_HAL
Tizen HAL domain
%files root-domain_HAL

%package sub1-domain_HAL-sort_by_device
Summary:	Tizen HAL packages sorted by devices
Suggests:	%{name}-sub2-domain_HAL-sort_by_device-odroid_xu3
Suggests:	%{name}-sub2-domain_HAL-sort_by_device-odroid_xu4
Suggests:	%{name}-sub2-domain_HAL-sort_by_device-TM1
Suggests:	%{name}-sub2-domain_HAL-sort_by_device-TM2
Suggests:	%{name}-sub2-domain_HAL-sort_by_device-RPI3
%description sub1-domain_HAL-sort_by_device
Tizen HAL packages sorted by devices
%files sub1-domain_HAL-sort_by_device

%package sub2-domain_HAL-sort_by_device-odroid_xu3
Summary:	Tizen HAL packages for Device Odroid Xu3
Requires:	libdrm
Requires:	libtbm-exynos
Requires:	libtdm-exynos
Suggests:	arm-odroidxu3-linux-kernel
%description sub2-domain_HAL-sort_by_device-odroid_xu3
Tizen HAL packages for the Device ODROID XU3
%files sub2-domain_HAL-sort_by_device-odroid_xu3

%package sub2-domain_HAL-sort_by_device-odroid_xu4
Summary:	Tizen HAL packages for Device Odroid Xu4
Requires:	libdrm
Requires:	libtbm-exynos
Requires:	libtdm-exynos
%description sub2-domain_HAL-sort_by_device-odroid_xu4
Tizen HAL packages for the Device Odroid XU4
%files sub2-domain_HAL-sort_by_device-odroid_xu4

%package sub2-domain_HAL-sort_by_device-TM1
Summary:	Tizen HAL packages for Device TM1
Requires:	libdrm
Requires:	libtbm-sprd
Requires:	libtdm-sprd
%description sub2-domain_HAL-sort_by_device-TM1
Tizen HAL packages for the Device TM1
%files sub2-domain_HAL-sort_by_device-TM1

%package sub2-domain_HAL-sort_by_device-TM2
Summary:	Tizen HAL packages for Device TM2
Requires:	libdrm
Requires:	libtbm-exynos
Requires:	libtdm-exynos
Suggests:	arm64-tm2-linux-kernel
%description sub2-domain_HAL-sort_by_device-TM2
Tizen HAL packages for the Device TM2
%files sub2-domain_HAL-sort_by_device-TM2

%package sub2-domain_HAL-sort_by_device-RPI3
Summary:	Tizen HAL packages for Device Raspberry Pi 3
Requires:	model-config-tm1
Suggests:	arm64-rpi3-linux-kernel
Suggests:	arm64-rpi3-linux-kernel-modules
%description sub2-domain_HAL-sort_by_device-RPI3
Tizen HAL packages for the Device Raspberry Pi 3
We do not have RPI3 specific userspace device drivers and reusing some of TM1 packages.
%files sub2-domain_HAL-sort_by_device-RPI3


%package sub1-domain_HAL-display
Summary:	Tizen Display HAL
Suggests:	%{name}-sub2-domain_HAL-display-odroid
Suggests:	%{name}-sub2-domain_HAL-display-TM2
Suggests:	%{name}-sub2-domain_HAL-display-TM1
%description sub1-domain_HAL-display
Tizen Display HAL domain
%files sub1-domain_HAL-display

%package sub2-domain_HAL-display-odroid
Summary:	Tizen Display Hal for Odroid
Requires:	libdrm
Requires:	libtbm-exynos
Requires:	libtdm-exynos
%description sub2-domain_HAL-display-odroid
Tizen Display HAL domain for Odroid
%files sub2-domain_HAL-display-odroid

%package sub2-domain_HAL-display-TM2
Summary:	Tizen Display Hal for TM2
Requires:	libdrm
Requires:	libtbm-exynos
Requires:	libtdm-exynos
%description sub2-domain_HAL-display-TM2
Tizen Display HAL domain for TM2
%files sub2-domain_HAL-display-TM2


%package sub2-domain_HAL-display-TM1
Summary:	Tizen Display Hal for TM1
Requires:	libdrm
Requires:	libtbm-sprd
Requires:	libtdm-sprd
%description sub2-domain_HAL-display-TM1
Tizen Display HAL domain for TM1
%files sub2-domain_HAL-display-TM1




%package sub1-domain_HAL-audio
Summary:	Tizen Audio HAL
Suggests:	%{name}-sub2-domain_HAL-audio-odroid
Suggests:	%{name}-sub2-domain_HAL-audio-TM2
Suggests:	%{name}-sub2-domain_HAL-audio-TM1
%description sub1-domain_HAL-audio
Tizen Audio HAL domain
%files sub1-domain_HAL-audio


%package sub2-domain_HAL-audio-odroid
Summary:	HAL packages for Odroid AUdio
%description sub2-domain_HAL-audio-odroid
%files sub2-domain_HAL-audio-odroid

%package sub2-domain_HAL-audio-TM2
Summary:	HAL packages for TM2 Audio
%description sub2-domain_HAL-audio-TM2
%files sub2-domain_HAL-audio-TM2

%package sub2-domain_HAL-audio-TM1
Summary:	HAL packages for TM1 Audio
%description sub2-domain_HAL-audio-TM1
%files sub2-domain_HAL-audio-TM1





%package sub1-domain_HAL-bluetooth
Summary:	Tizen Bluetooth HAL
Suggests:	%{name}-sub2-domain_HAL-bluetooth-TM2
Suggests:	%{name}-sub2-domain_HAL-bluetooth-TM1
%description sub1-domain_HAL-bluetooth
Tizen Bluetooth HAL domain
%files sub1-domain_HAL-bluetooth


%package sub2-domain_HAL-bluetooth-TM2
Summary:	HAL packages for TM2 Bluetooth
%description sub2-domain_HAL-bluetooth-TM2
%files sub2-domain_HAL-bluetooth-TM2


%package sub2-domain_HAL-bluetooth-TM1
Summary:	HAL packages for TM1 Bluetooth
%description sub2-domain_HAL-bluetooth-TM1
%files sub2-domain_HAL-bluetooth-TM1


# END
