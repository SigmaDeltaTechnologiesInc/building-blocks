# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.



###############
## Telephony ##
###############
%package sub1-domain_API-Telephony
Summary:	Telephony API Group
Requires: capi-telephony
Requires: telephony-daemon
Requires: libtapi
Requires: libtcore
Requires: tel-plugin-dbus_tapi
Requires: tel-plugin-manager
Requires: tel-plugin-database
Requires: tel-plugin-vconf
Requires: tel-plugin-packetservice
Suggests: tel-plugin-nitz
Suggests: tel-plugin-indicator
Suggests: telephony-syspopup
Suggests: tel-plugin-syspopup
%description sub1-domain_API-Telephony
Tizen block (set of packages) for Group of domain API-Telephony
%files sub1-domain_API-Telephony
%posttrans sub1-domain_API-Telephony
%tizen_feature tizen.org/feature/network.telephony true
%tizen_feature tizen.org/feature/systemsetting.incoming_call true

