# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


############
## Social ##
############
%package sub1-domain_API-Social
Summary:	Social API Group
Suggests: %{name}-sub2-domain_API-Social-Calendar
Suggests: %{name}-sub2-domain_API-Social-Contacts
Suggests: %{name}-sub2-domain_API-Social-Phonenumber_utils
%description sub1-domain_API-Social
Tizen block (set of packages) for Group of domain API-Social
%files sub1-domain_API-Social

%package sub2-domain_API-Social-Calendar
Summary: Calendar
Requires:libcalendar-service
Requires:calendar-service
Suggests:%{name}-sub2-domain_API-Social-Contacts

%description sub2-domain_API-Social-Calendar
This block supports managing Calendar service.<br>
Syncing Birthday event to calendar could be available when Contacts is selected.<br>
This logic is not available in TV profile.


%files sub2-domain_API-Social-Calendar
%posttrans sub2-domain_API-Social-Calendar
%tizen_feature tizen.org/feature/calendar true

%package sub2-domain_API-Social-Contacts
Summary: Contacts
Requires:libcontacts-service
Requires:contacts-service
Requires:session-utils

%description sub2-domain_API-Social-Contacts
This block supports managing Contacts service

%files sub2-domain_API-Social-Contacts
%posttrans sub2-domain_API-Social-Contacts
%tizen_feature tizen.org/feature/contact true

%package sub2-domain_API-Social-Phonenumber_utils
Summary: Phonenumber_utils
Requires:phonenumber-utils

%description sub2-domain_API-Social-Phonenumber_utils
This block supports managing Phonenumber utils

%files sub2-domain_API-Social-Phonenumber_utils

