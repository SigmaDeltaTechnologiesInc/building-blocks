# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

##########
## Maps ##
##########
%package sub1-domain_API-Maps
Summary:	Maps API Group
Suggests: %{name}-sub2-domain_API-Maps-Maps_Service
Suggests: %{name}-sub2-domain_API-Maps-Here_Plugin
%description sub1-domain_API-Maps
Tizen block (set of packages) for Group of domain API-Maps
%files sub1-domain_API-Maps

%package sub2-domain_API-Maps-Maps_Service
Summary:	Maps_Service
Requires:	capi-maps-service
Requires:	%{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires:	%{name}-sub2-domain_API-Network-Connection
Requires:	%{name}-sub2-domain_API-Maps-Here_Plugin

%description sub2-domain_API-Maps-Maps_Service
This block supports Maps Service.<br>
At least one of HERE or MAPZEN plugin must be selected.


%files sub2-domain_API-Maps-Maps_Service
%posttrans sub2-domain_API-Maps-Maps_Service
%tizen_feature tizen.org/feature/maps true


%package sub2-domain_API-Maps-Here_Plugin
Summary:    Here_Plugin
Requires:	maps-plugin-here
Requires:	heremaps-uc-launcher
Requires:	org.tizen.heremaps-uc

%description sub2-domain_API-Maps-Here_Plugin
This block supports HERE Plugin.

%files sub2-domain_API-Maps-Here_Plugin
