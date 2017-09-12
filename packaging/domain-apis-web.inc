# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


#########
## Web ##
#########
%package sub1-domain_API-Web
Summary:	Web API Group
Suggests: %{name}-sub2-domain_API-Web-json_Glib
Suggests: %{name}-sub2-domain_API-Web-WebView
%description sub1-domain_API-Web
Tizen block (set of packages) for Group of domain API-Web
%files sub1-domain_API-Web

%package sub2-domain_API-Web-json_Glib
Summary:    json_Glib

Requires: libjson-glib

%description sub2-domain_API-Web-json_Glib
Library for JavaScript Object Notation format

%files sub2-domain_API-Web-json_Glib


%package sub2-domain_API-Web-WebView
Summary:    WebView

Requires: chromium-efl
Requires: %{name}-sub2-domain_API-UI-Display_Server
Requires: %{name}-sub2-domain_API-UI-FontConfig

%description sub2-domain_API-Web-WebView
The WebView API provides functions to display web pages and control web pages.

%files sub2-domain_API-Web-WebView
