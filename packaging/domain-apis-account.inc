# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

############
## Account ##
############
%package sub1-domain_API-Account
Summary:	Account Native API Group
Suggests: %{name}-sub2-domain_API-Account-Account_Manager
Suggests: %{name}-sub2-domain_API-Account-FIDO_Client
Suggests: %{name}-sub2-domain_API-Account-OAuth2
Suggests: %{name}-sub2-domain_API-Account-Sync_Manager
Suggests: %{name}-sub2-domain_API-Account-libOAuth
%description sub1-domain_API-Account
Tizen block (set of packages) for Group of domain API-Account
%files sub1-domain_API-Account


%package sub2-domain_API-Account-Account_Manager
Summary:	Account Manager
Requires:	libaccount-service
Requires:	account-manager
Requires:	account-parser
%description sub2-domain_API-Account-Account_Manager
This block supports managing account related information. Once you check the Account Manager before Image Creation, it will be included the image.
%files sub2-domain_API-Account-Account_Manager
%posttrans sub2-domain_API-Account-Account_Manager
%tizen_feature tizen.org/feature/account true

%package sub2-domain_API-Account-FIDO_Client
Summary:	FIDO Client

Requires: fido-client
Suggests: dummyasm
%description sub2-domain_API-Account-FIDO_Client

Enabling Fido Client and it is possible to use Fido Client API<br>
dummyasm should be selected for tct running.<br>
fido-client needs fido-asm and fido-authenticator according to FIDO UAF Spec 1.0 to which fido-client is comaptible.<br>
But fido-asm and fido-authenticator are vendor specific modules and to be developed by them.<br>
So we use dummyasm for verification of fido-client APIs instead of fido-asm and fido-authenticator.

%files sub2-domain_API-Account-FIDO_Client
%posttrans sub2-domain_API-Account-FIDO_Client
%tizen_feature tizen.org/feature/fido.uaf true

%package sub2-domain_API-Account-OAuth2
Summary:	OAuth2

Requires: oauth2
Requires: %{name}-sub2-domain_API-Web-WebView
%description sub2-domain_API-Account-OAuth2

Enabling OAuth2 and it is possible to use OAuth2 API<br>
webView is mandatory becasue oauth2 manager api triggers to show web page for user interaction to input user id and password<br>
which is following oauth 2.0 specification.

%files sub2-domain_API-Account-OAuth2
%posttrans sub2-domain_API-Account-OAuth2
%tizen_feature tizen.org/feature/oauth2 true

%package sub2-domain_API-Account-Sync_Manager
Summary:	Sync Manager
Requires:	libcore-sync-client
Requires:	%{name}-sub2-domain_API-Account-Account_Manager
Requires:	%{name}-sub2-domain_API-Social-Contacts
Suggests:	%{name}-sub1-domain_API-Telephony
Suggests:	%{name}-sub2-domain_API-Network-WiFi_Manager
%description sub2-domain_API-Account-Sync_Manager
This block supports managing data synchronization. Also, to use this feature, either Data Network or Wi-Fi connection is required. Once you check the Sync Manager before Image Creation, it will be included the image.
%files sub2-domain_API-Account-Sync_Manager
%posttrans sub2-domain_API-Account-Sync_Manager
%tizen_feature tizen.org/feature/account.sync true

%package sub2-domain_API-Account-libOAuth
Summary:	libOAuth

Requires: liboauth
%description sub2-domain_API-Account-libOAuth

Functions implementing the OAuth Core RFC 5849 protocol.


%files sub2-domain_API-Account-libOAuth
