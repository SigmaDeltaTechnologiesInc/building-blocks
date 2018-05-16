# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

#############
## Content ##
#############
%package sub1-domain_API-Content
Summary:	Content API Group
Suggests: %{name}-sub2-domain_API-Content-Download
Suggests: %{name}-sub2-domain_API-Content-MIME_Type
Suggests: %{name}-sub2-domain_API-Content-Media_Content
%description sub1-domain_API-Content
Tizen block (set of packages) for Group of domain API-Content
%files sub1-domain_API-Content

%package sub2-domain_API-Content-Download
Summary:    Download
Requires:	capi-web-url-download
Requires:	download-provider
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Content-Download
Tizen block (set of packages) for API sets of domain API-Content-Download <br>
To use this feature, either Data Network or Wi-Fi connection is required.
%files sub2-domain_API-Content-Download
%posttrans sub2-domain_API-Content-Download
%tizen_feature tizen.org/feature/download true

%package sub2-domain_API-Content-MIME_Type
Summary:    MIME-Type API
Requires: capi-content-mime-type
%description sub2-domain_API-Content-MIME_Type
This block supports simple mime-type extraction API
%files sub2-domain_API-Content-MIME_Type

%package sub2-domain_API-Content-Media_Content
Summary:    Media-Content
Requires: capi-content-media-content
Requires: media-server
Requires: dcm-service
Requires: media-thumbnail-server
Requires: %{name}-sub2-domain_API-Multimedia-Media_Vision_Face
%description sub2-domain_API-Content-Media_Content
Enabling Media Content and it is possible to use Media Content API
%files sub2-domain_API-Content-Media_Content

