# Maintainer: Ohoon Kwon <ohoon.kwon@samsung.com>
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


%package root-Headless
Summary:	Enable Tizen Headless Device
Conflicts:	efl
Conflicts:	wayland
Requires:	%{name}-sub1-Headless-Minimal
Suggests:	%{name}-sub1-Headless-Network
%description root-Headless
Enableing this means that you are going to create Tizen headless device.
This disables all display depending packages.
%files root-Headless

%package sub1-Headless-Minimal
Summary:	Minimal Tizen Image Configuration for Headless
Requires:	bash
Requires:	systemd
%description sub1-Headless-Minimal
Include minimal set of packages for headless.
%files sub1-Headless-Minimal

%package sub1-Headless-Network
Summary:	Headless Network Packages
Requires:	wpa-supplicant
Suggests:	bluez
%description sub1-Headless-Network
Include network packages for headless.
%files sub1-Headless-Network

#END
