# Maintainer: TBD (PM)
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-feature_Platform
Summary:	Platform-Wide Features
Suggests:	%{name}-sub1-feature_Platform-KDBUS
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
