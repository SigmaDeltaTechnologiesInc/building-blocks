# Maintainer: Ohoon Kwon <ohoon.kwon@samsung.com>
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


%package root-feature_Headless
Summary:	Enable Tizen Headless Device
Conflicts:	efl
Conflicts:	libwayland-server
Conflicts:	%{name}-root-feature_Headed
# You need to list "Important (commonly-required)" headed-only packages/blocks with Conflicts.
Requires:	%{name}-sub1-feature_Headless-Minimal
Suggests:	%{name}-sub1-feature_Headless-Network
%description root-feature_Headless
Enabling this means that you are going to create Tizen headless device.
This disables all display depending packages.
%files root-feature_Headless

%package sub1-feature_Headless-Minimal
Summary:	Minimal Tizen Image Configuration for Headless
Requires:	bash
Requires:	systemd
%description sub1-feature_Headless-Minimal
Include minimal set of packages for headless.
%files sub1-feature_Headless-Minimal

%package sub1-feature_Headless-Network
Summary:	Headless Network Packages
Requires:	wpa-supplicant
Suggests:	bluez
%description sub1-feature_Headless-Network
Include network packages for headless.
%files sub1-feature_Headless-Network

%package root-feature_Headed
Summary:	Enable Tizen Headed Device (disable headless)
Conflicts:	%{name}-root-feature_Headless
Conflicts:	%{name}-sub1-feature_Headless-Minimal
Conflicts:	%{name}-sub1-feature_Headless-Network
# You may list ALL headless-ONLY packages/blocks with Conflicts.
Requires:	bash
Requires:	systemd

#Uncomment after UI domain is created
#Requires:	root-UI
%description root-feature_Headed
Enables to create Tizen headed device platform image.
This is a suggested starting point for such platform images.
This disabled headless feature.
%files root-feature_Headed

#END
