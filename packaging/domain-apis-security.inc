# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


##############
## Security ##
##############
%package sub1-domain_API-Security
Summary:	Security API Group
Suggests: %{name}-sub2-domain_API-Security-CSR
Suggests: %{name}-sub2-domain_API-Security-Device_Policy
Suggests: %{name}-sub2-domain_API-Security-Key_Manager
Suggests: %{name}-sub2-domain_API-Security-OpenSSL
Suggests: %{name}-sub2-domain_API-Security-Privilege_Info
Suggests: %{name}-sub2-domain_API-Security-YACA
Suggests: %{name}-sub2-domain_API-Security-Device_Certificate
%description sub1-domain_API-Security
Tizen block (set of packages) for Group of domain API-Security
%files sub1-domain_API-Security

%package sub2-domain_API-Security-CSR
Summary:    CSR
Requires:   csr-framework
Requires:   libcsr-framework-common
Requires:   libcsr-framework-client
%description sub2-domain_API-Security-CSR
The CSR (Content Screening & Reputation) is an anti malware module. It provides Content Screening Service and Web Protection Service to protect a device and an user.
%files sub2-domain_API-Security-CSR


%package sub2-domain_API-Security-Device_Policy
Summary:    Device_Policy
Requires:   device-policy-manager
Requires:   libdpm
%description sub2-domain_API-Security-Device_Policy
The Device Policy Management framework provides APIs to create security-aware applications that are useful in enterprise setting.
The primary purpose of the DPM(Device Policy Management) framework is to support enterprise applications, which require integration with policies enforced on the device to restrict their operations on some circumstance, such as Exchange ActiveSync or corporate apps. The device policy API supports the policies listed in the below table, and any application can subscribe those policies by registring policy changed callback to the device policy manager.
%files sub2-domain_API-Security-Device_Policy


%package sub2-domain_API-Security-Key_Manager
Summary:    Key_Manager
Requires:   libkey-manager-client
%description sub2-domain_API-Security-Key_Manager
The key manager provides a secure repository protected by Tizen platform for keys, certificates, and sensitive data of users and/or their APPs. Additionally, the key manager provides secure cryptographic operations for non-exportable keys without revealing key values to clients.
%files sub2-domain_API-Security-Key_Manager


%package sub2-domain_API-Security-OpenSSL
Summary:    OpenSSL
Requires:   libopenssl
%description sub2-domain_API-Security-OpenSSL
Tizen block (set of packages) for API sets of domain API-Security_OpenSSL.
Library implementation of secure sockets layer (ssl) and transport layer security (tls) to enable secure internet communications.
%files sub2-domain_API-Security-OpenSSL


%package sub2-domain_API-Security-Privilege_Info
Summary:    Privilege_Info
Requires:   privilege-info
%description sub2-domain_API-Security-Privilege_Info
The Privilege Info provides the display name or description of privileges.
%files sub2-domain_API-Security-Privilege_Info


%package sub2-domain_API-Security-YACA
Summary:    YACA
Requires:   yaca
%description sub2-domain_API-Security-YACA
The YACA (Yet Another Crypto Api) provides a crypto functions such as key management, data integrity, data en/decryption and low-level RSA operations.
%files sub2-domain_API-Security-YACA

%package sub2-domain_API-Security-Device_Certificate
Summary:    Device_Certificate
Requires:   device-certificate-manager
%description sub2-domain_API-Security-Device_Certificate
Device Certificate Manager provides cryptography services for the Iotivity framework with keys and certitifcates embedded into a device.
%files sub2-domain_API-Security-Device_Certificate

