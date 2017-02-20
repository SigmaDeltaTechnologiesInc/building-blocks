# Maintainer: Please Write
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.



### << PLEASE FILL IN YOUR ROOT/SUB PACKAGES >> ###

%package root-HAL
Summary:	Tizen HAL Domain
Suggests:	%{name}-sub1-HAL-display
Suggests:	%{name}-sub1-HAL-audio
Suggests:	%{name}-sub1-HAL-bluetooth
%description root-HAL
Tizen HAL domain
%files root-HAL

%package sub1-HAL-display
Summary:	Tizen Display HAL
Suggests:	%{name}-sub2-HAL-display-odroid
Suggests:	%{name}-sub2-HAL-display-TM2
Suggests:	%{name}-sub2-HAL-display-TM1
%description sub1-HAL-display
Tizen Display HAL domain
%files sub1-HAL-display

%package sub2-HAL-display-odroid
Summary:	Tizen Display Hal for Odroid
Requires:	libdrm
Requires:	libtbm-exynos
Requires:	libtdm-exynos
%description sub2-HAL-display-odroid
Tizen Display HAL domain for Odroid
%files sub2-HAL-display-odroid

%package sub2-HAL-display-TM2
Summary:	Tizen Display Hal for TM2
Requires:	libdrm
Requires:	libtbm-exynos
Requires:	libtdm-exynos
%description sub2-HAL-display-TM2
Tizen Display HAL domain for TM2
%files sub2-HAL-display-TM2


%package sub2-HAL-display-TM1
Summary:	Tizen Display Hal for TM1
Requires:	libdrm
Requires:	libtbm-sprd
Requires:	libtdm-sprd
%description sub2-HAL-display-TM1
Tizen Display HAL domain for TM1
%files sub2-HAL-display-TM1




%package sub1-HAL-audio
Summary:	Tizen Audio HAL
Suggests:	%{name}-sub2-HAL-audio-odroid
Suggests:	%{name}-sub2-HAL-audio-TM2
Suggests:	%{name}-sub2-HAL-audio-TM1
%description sub1-HAL-audio
Tizen Audio HAL domain
%files sub1-HAL-audio






%package sub1-HAL-bluetooth
Summary:	Tizen Bluetooth HAL
Suggests:	%{name}-sub2-HAL-bluetooth-TM2
Suggests:	%{name}-sub2-HAL-bluetooth-TM1
%description sub1-HAL-bluetooth
Tizen Bluetooth HAL domain
%files sub1-HAL-bluetooth

# END
