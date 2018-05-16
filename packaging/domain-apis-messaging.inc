# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


###############
## Messaging ##
###############
%package sub1-domain_API-Messaging
Summary:	Messaging API Group
Suggests: %{name}-sub2-domain_API-Messaging-Email
Suggests: %{name}-sub2-domain_API-Messaging-Messages
Suggests: %{name}-sub2-domain_API-Messaging-Push
%description sub1-domain_API-Messaging
Tizen block (set of packages) for Group of domain API-Messaging
%files sub1-domain_API-Messaging

%package sub2-domain_API-Messaging-Email
Summary:Email
Requires:capi-messaging-email
Requires:email-service
Suggests:%{name}-sub1-domain_API-Telephony
Suggests:%{name}-sub2-domain_API-Network-WiFi_Manager

%description sub2-domain_API-Messaging-Email
This block supports managing Email service.<br>
Telephony or WiFi should be selected to use Email service.<br>
Telephony would be available when Telephony is selected.<br>
Wifi would be available when Wifi is selected.


%files sub2-domain_API-Messaging-Email
%posttrans sub2-domain_API-Messaging-Email
%tizen_feature tizen.org/feature/email true

%package sub2-domain_API-Messaging-Messages
Summary:Messages
Requires:capi-messaging-messages
Requires:msg-service
Requires:msg-manager
Requires:sms-plugin
Requires:mms-plugin
Requires:%{name}-sub1-domain_API-Telephony

%description sub2-domain_API-Messaging-Messages
This block supports managing Message service.

%files sub2-domain_API-Messaging-Messages
%posttrans sub2-domain_API-Messaging-Messages
%tizen_feature tizen.org/feature/network.telephony.sms true
%tizen_feature tizen.org/feature/network.telephony.sms.cbs true
%tizen_feature tizen.org/feature/network.telephony.mms true

%package sub2-domain_API-Messaging-Push
Summary:	Push Client
Requires:	libpush
Suggests:	%{name}-sub1-domain_API-Telephony
Suggests:	%{name}-sub2-domain_API-Network-WiFi_Manager
%description sub2-domain_API-Messaging-Push
This block supports transferation push messages between devices and server. Also, to use this feature, either Data Network or Wi-Fi connection is required. Once you check the Push Client before Image Creation, it will be included the image. For this, either Data Network or Wi-Fi connection is required.
%files sub2-domain_API-Messaging-Push
%posttrans sub2-domain_API-Messaging-Push
%tizen_feature tizen.org/feature/network.push true

