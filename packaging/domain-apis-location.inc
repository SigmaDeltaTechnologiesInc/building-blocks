# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

##############
## Location ##
##############
%package sub1-domain_API-Location
Summary:	Location API Group
Suggests: %{name}-sub2-domain_API-Location-Location_Manager
Suggests: %{name}-sub2-domain_API-Location-Geofence_Manager
%description sub1-domain_API-Location
Tizen block (set of packages) for Group of domain API-Location
%files sub1-domain_API-Location

%package sub2-domain_API-Location-Location_Manager
Summary:    Location-Manager
Requires:	capi-location-manager
Requires:	lbs-server
Requires:	location-lbs-server
Suggests:	lbs-plugin-gps-rpi3
%description sub2-domain_API-Location-Location_Manager
This block supports managing Location Service.<br>
To use Location Service, the appropriate plugin should be selected for the device.
%files sub2-domain_API-Location-Location_Manager
%posttrans sub2-domain_API-Location-Location_Manager
%tizen_feature tizen.org/feature/location true
%tizen_feature tizen.org/feature/location.gps true
%tizen_feature tizen.org/feature/location.gps.satellite true

%package sub2-domain_API-Location-Geofence_Manager
Summary:    Geofence-Manager
Requires:	capi-geofence-manager
Requires:	geofence-server
Requires:	location-geofence-server
Requires:	%{name}-sub2-domain_API-Location-Location_Manager
%description sub2-domain_API-Location-Geofence_Manager
This block supports managing Geofence Service.
%files sub2-domain_API-Location-Geofence_Manager
%posttrans sub2-domain_API-Location-Geofence_Manager
%tizen_feature tizen.org/feature/location.geofence true

