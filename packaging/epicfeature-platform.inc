# Maintainer: TBD (PM)
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-feature_Platform
Summary:	Tizen Platform-Wide Features
Suggests:	%{name}-sub1-feature_Platform-KDBUS
Suggests:	%{name}-sub1-feature_Platform-Headless
Suggests:	%{name}-sub1-feature_Platform-Headed
%description root-feature_Platform
Platform-wide applied that affect target devices.
%files root-feature_Platform

%package sub1-feature_Platform-KDBUS
Summary:	KDBUS
Suggests:	libgio-extension-kdbus
Requires:	dbus-libs-extension-kdbus
Requires:	systemd-extension-kdbus
%description sub1-feature_Platform-KDBUS
Enable KDBUS feature.
- You MUST install KDBUS-enabled kernel.
- You MUST enable libgio-extension-kdbus if you have libgio.
%files sub1-feature_Platform-KDBUS

%package sub1-feature_Platform-Headless
Summary:	Enable Tizen Headless Device
Conflicts:	efl
Conflicts:	libwayland-server
Conflicts:	%{name}-sub1-feature_Platform-Headed
# You need to list "Important (commonly-required)" headed-only packages/blocks with Conflicts.
Requires:	%{name}-sub2-feature_Platform-Headless-Minimal
Suggests:	%{name}-sub2-feature_Platform-Headless-Network
%description sub1-feature_Platform-Headless
Enabling this means that you are going to create Tizen headless device.
This disables all display depending packages.
%files sub1-feature_Platform-Headless

%package sub2-feature_Platform-Headless-Minimal
Summary:	Minimal Tizen Image Configuration for Headless
Requires:	bash
Requires:	systemd
%description sub2-feature_Platform-Headless-Minimal
Include minimal set of packages for headless.
%files sub2-feature_Platform-Headless-Minimal

%package sub2-feature_Platform-Headless-Network
Summary:	Headless Network Packages
Requires:	wpa-supplicant
Suggests:	bluez
%description sub2-feature_Platform-Headless-Network
Include network packages for headless.
%files sub2-feature_Platform-Headless-Network

%package sub1-feature_Platform-Headed
Summary:	Enable Tizen Headed Device (disable headless)
Conflicts:	%{name}-sub1-feature_Platform-Headless
Conflicts:	%{name}-sub2-feature_Platform-Headless-Minimal
Conflicts:	%{name}-sub2-feature_Platform-Headless-Network
# You may list ALL headless-ONLY packages/blocks with Conflicts.
Requires:	bash
Requires:	systemd

#Uncomment after UI domain is created
#Requires:	sub1-UI
%description sub1-feature_Platform-Headed
Enables to create Tizen headed device platform image.
This is a suggested starting point for such platform images.
This disabled headless feature.
%files sub1-feature_Platform-Headed

#END
