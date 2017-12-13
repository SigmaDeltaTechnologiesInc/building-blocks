# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

############################
## Tizen Resource Manager ##
############################
%package sub1-domain_Feature-Resource_manager
Summary:    Tizen Resource Manager - Full Featured
Requires:   resourced
Conflicts:  %{name}-sub1-domain_Feature-Resource_manager_Light
Conflicts:  %{name}-sub1-domain_Feature-Resource_manager_Headless
%description sub1-domain_Feature-Resource_manager
Tizen block (set of packages) for supporting resource management.<br>
Resourced is the full-featured resource manager daemon for headed devices.
%files sub1-domain_Feature-Resource_manager

%package sub1-domain_Feature-Resource_manager_Light
Summary:    Tizen Resource Manager - Light-Weight
Requires:   resourced-light
Conflicts:  %{name}-sub1-domain_Feature-Resource_manager
Conflicts:  %{name}-sub1-domain_Feature-Resource_manager_Headless
%description sub1-domain_Feature-Resource_manager_Light
Tizen block (set of packages) for supporting resource management.<br>
Resourced-light is the light-weight resource manager daemon for headed devices.
%files sub1-domain_Feature-Resource_manager_Light

%package sub1-domain_Feature-Resource_manager_Headless
Summary:    Tizen Resource Manager - For Headless Devices
Requires:   resourced-headless
Requires:   resourced-headless-common
Requires:   resourced-headless-memory
Requires:   resourced-headless-proc-usage
Conflicts:  %{name}-sub1-domain_Feature-Resource_manager
Conflicts:  %{name}-sub1-domain_Feature-Resource_manager_Light
%description sub1-domain_Feature-Resource_manager_Headless
Tizen block (set of packages) for supporting resource management.<br>
Resourced-headless is the resource manager daemon for headless devices.
%files sub1-domain_Feature-Resource_manager_Headless

