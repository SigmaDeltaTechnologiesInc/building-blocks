# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-domain_API
Summary:	Tizen Native API Sets
Suggests:	%{name}-sub1-domain_API-Account
Suggests:	%{name}-sub1-domain_API-AppFramework
Suggests:	%{name}-sub1-domain_API-Base
Suggests:	%{name}-sub1-domain_API-Content
Suggests:	%{name}-sub1-domain_API-Context
Suggests:	%{name}-sub1-domain_API-Location
Suggests:	%{name}-sub1-domain_API-Maps
Suggests:	%{name}-sub1-domain_API-Messaging
Suggests:	%{name}-sub1-domain_API-Multimedia
Suggests:	%{name}-sub1-domain_API-Network
Suggests:	%{name}-sub1-domain_API-Security
Suggests:	%{name}-sub1-domain_API-Social
Suggests:	%{name}-sub1-domain_API-System
Suggests:	%{name}-sub1-domain_API-Telephony
Suggests:	%{name}-sub1-domain_API-UI
Suggests:	%{name}-sub1-domain_API-UIX
Suggests:	%{name}-sub1-domain_API-Web
%description root-domain_API
__EXPAND__: domains
Tizen packages blocked and sorted by API sets defined by TPL
%files root-domain_API


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

%package sub2-domain_API-Account-OAuth2
Summary:	OAuth2

Requires: oauth2
Requires: %{name}-sub2-domain_API-Web-WebView
%description sub2-domain_API-Account-OAuth2

Enabling OAuth2 and it is possible to use OAuth2 API<br>
webView is mandatory becasue oauth2 manager api triggers to show web page for user interaction to input user id and password<br>
which is following oauth 2.0 specification.

%files sub2-domain_API-Account-OAuth2

%package sub2-domain_API-Account-Sync_Manager
Summary:	Sync Manager
Requires:	libcore-sync-client
Requires:	%{name}-sub2-domain_API-Account-Account_Manager
Requires:	%{name}-sub2-domain_API-Social-Contacts
Suggests:	%{name}-sub1-domain_API-Telephony
Suggests:	%{name}-sub2-domain_API-Network-WiFi
%description sub2-domain_API-Account-Sync_Manager
This block supports managing data synchronization. Also, to use this feature, either Data Network or Wi-Fi connection is required. Once you check the Sync Manager before Image Creation, it will be included the image.
%files sub2-domain_API-Account-Sync_Manager

%package sub2-domain_API-Account-libOAuth
Summary:	libOAuth

Requires: liboauth
%description sub2-domain_API-Account-libOAuth

Functions implementing the OAuth Core RFC 5849 protocol.


%files sub2-domain_API-Account-libOAuth

###################
## AppFrammework ##
###################
%package sub1-domain_API-AppFramework
Summary:	Application Framework Native API Group
Suggests: %{name}-sub2-domain_API-AppFramework-TPK_Installation
Suggests: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Suggests: %{name}-sub2-domain_API-AppFramework-Alarm_API
Suggests: %{name}-sub2-domain_API-AppFramework-Message_Port_API
Suggests: %{name}-sub2-domain_API-AppFramework-Data_Control_API
Suggests: %{name}-sub2-domain_API-AppFramework-Native_EFL_Widget_App_Model
Suggests: %{name}-sub2-domain_API-AppFramework-Notification_API
Suggests: %{name}-sub2-domain_API-AppFramework-Shortcut_API
Suggests: %{name}-sub2-domain_API-AppFramework-Badge_API
Suggests: %{name}-sub2-domain_API-AppFramework-Media_Key_API
Suggests: %{name}-sub2-domain_API-AppFramework-Attach_Panel
%description sub1-domain_API-AppFramework
Tizen block (set of packages) for Group of domain API-AppFramework
%files sub1-domain_API-AppFramework

%package sub2-domain_API-AppFramework-TPK_Installation
Summary: TPK package management
Requires: pkgmgr-server
Requires: pkgmgr-tool
%description sub2-domain_API-AppFramework-TPK_Installation
This block supports tpk package management (install/uninstall)
%files sub2-domain_API-AppFramework-TPK_Installation

%package sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Summary: Native EFL UI app model
Requires: capi-appfw-application
Requires: amd-mod-cynara-core
Requires: amd-mod-extractor
Requires: amd-mod-input
Requires: amd-mod-launchpad
Requires: amd-mod-share
Requires: amd-mod-splash-screen
Requires: amd-mod-ui-core
Requires: amd-mod-wayland-core
Requires: %{name}-sub2-domain_API-UI-Display_Server
Requires: %{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
%description sub2-domain_API-AppFramework-Native_EFL_UI_app_model
This block supports native EFL UI application model
%files sub2-domain_API-AppFramework-Native_EFL_UI_app_model

%package sub2-domain_API-AppFramework-Alarm_API
Summary: Alarm API
Requires: capi-appfw-alarm
Requires: alarm-server
%description sub2-domain_API-AppFramework-Alarm_API
This block supports alarm API
%files sub2-domain_API-AppFramework-Alarm_API

%package sub2-domain_API-AppFramework-Message_Port_API
Summary: Message Port API
Requires: message-port
%description sub2-domain_API-AppFramework-Message_Port_API
This block supports message port API
%files sub2-domain_API-AppFramework-Message_Port_API

%package sub2-domain_API-AppFramework-Data_Control_API
Summary: Data Control API
Requires: data-control
%description sub2-domain_API-AppFramework-Data_Control_API
This block supports data control API
%files sub2-domain_API-AppFramework-Data_Control_API

%package sub2-domain_API-AppFramework-Native_EFL_Widget_App_Model
Summary: EFL widget app model
Requires: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Requires: appcore-widget
Requires: libwidget_service
Requires: libwidget_viewer
Requires: libwidget_viewer_evas
%description sub2-domain_API-AppFramework-Native_EFL_Widget_App_Model
This block supports native EFL widget app model
%files sub2-domain_API-AppFramework-Native_EFL_Widget_App_Model

%package sub2-domain_API-AppFramework-Notification_API
Summary: Notification API
Requires: notification
Requires: data-provider-master
%description sub2-domain_API-AppFramework-Notification_API
This block supports notification API
%files sub2-domain_API-AppFramework-Notification_API

%package sub2-domain_API-AppFramework-Shortcut_API
Summary: Shortcut API
Requires: libshortcut
Requires: data-provider-master
%description sub2-domain_API-AppFramework-Shortcut_API
This block supports shortcut API
%files sub2-domain_API-AppFramework-Shortcut_API

%package sub2-domain_API-AppFramework-Badge_API
Summary: Badge API
Requires: badge
Requires: data-provider-master
%description sub2-domain_API-AppFramework-Badge_API
This block supports badge API
%files sub2-domain_API-AppFramework-Badge_API

%package sub2-domain_API-AppFramework-Media_Key_API
Summary: Media Key API
Requires: capi-system-media-key
Requires: %{name}-sub2-domain_API-UI-Display_Server
%description sub2-domain_API-AppFramework-Media_Key_API
This block supports media key API
%files sub2-domain_API-AppFramework-Media_Key_API

%package sub2-domain_API-AppFramework-Attach_Panel
Summary:    Attach-Panel

# packakge list
Requires: attach-panel
Requires: attach-panel-gallery
Requires: attach-panel-camera
Requires: attach-panel-document
Requires: attach-panel-voicerecorder

Requires: %{name}-sub2-domain_API-Multimedia-Camera
Requires: %{name}-sub2-domain_API-System-Device_Battery
Requires: %{name}-sub2-domain_API-Multimedia-Recorder
Requires: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Requires: %{name}-sub2-domain_API-System-Storage

Suggests: org.tizen.app-selector-profile_mobile

%description sub2-domain_API-AppFramework-Attach_Panel
Attach panel provides functions to attach images, voices, contacts, events and files. User can attach images, take pictures, record voice and select files to attach into the caller app.
Currently, only mobile is supported, and if there is a profile you want, you can select the app-selector package corresponding to profile.

%files sub2-domain_API-AppFramework-Attach_Panel


##########
## Base ##
##########
%package sub1-domain_API-Base
Summary:	Base API Group
Suggests: %{name}-sub2-domain_API-Base-CPP_Standard_library
Suggests: %{name}-sub2-domain_API-Base-Common_Error
Suggests: %{name}-sub2-domain_API-Base-Glib
Suggests: %{name}-sub2-domain_API-Base-Glibc
Suggests: %{name}-sub2-domain_API-Base-LibXML
Suggests: %{name}-sub2-domain_API-Base-Minizip
Suggests: %{name}-sub2-domain_API-Base-OpenMP
Suggests: %{name}-sub2-domain_API-Base-Sqlite
Suggests: %{name}-sub2-domain_API-Base-Utils
Suggests: %{name}-sub2-domain_API-Base-zlib
%description sub1-domain_API-Base
Tizen block (set of packages) for Group of domain API-Base
%files sub1-domain_API-Base

%package sub2-domain_API-Base-CPP_Standard_library
Summary:    C++ Standard library
Requires: libstdc++
%description sub2-domain_API-Base-CPP_Standard_library
This Block is possible to user c++ standard library.

%files sub2-domain_API-Base-CPP_Standard_library

### TODO - Common-Error ###
# Summary, description

%package sub2-domain_API-Base-Common_Error
Summary:    Common-Error
%description sub2-domain_API-Base-Common_Error

### TODO ###
# packakge list

%files sub2-domain_API-Base-Common_Error

### TODO - Glib ###
# Summary, description

%package sub2-domain_API-Base-Glib
Summary:    Glib
%description sub2-domain_API-Base-Glib

### TODO ###
# packakge list

%files sub2-domain_API-Base-Glib

### TODO - Glibc ###
# Summary, description

%package sub2-domain_API-Base-Glibc
Summary:    Glib
%description sub2-domain_API-Base-Glibc

### TODO ###
# packakge list

%files sub2-domain_API-Base-Glibc

### TODO - LibXML ###
# Summary, description

%package sub2-domain_API-Base-LibXML
Summary:    LibXML
%description sub2-domain_API-Base-LibXML

### TODO ###
# packakge list

%files sub2-domain_API-Base-LibXML

### TODO - Minizip ###
# Summary, description

%package sub2-domain_API-Base-Minizip
Summary:    Minizip
%description sub2-domain_API-Base-Minizip

### TODO ###
# packakge list

%files sub2-domain_API-Base-Minizip

### TODO - OpenMP ###
# Summary, description

%package sub2-domain_API-Base-OpenMP
Summary:    OpenMP
%description sub2-domain_API-Base-OpenMP

### TODO ###
# packakge list

%files sub2-domain_API-Base-OpenMP

%package sub2-domain_API-Base-Sqlite
Summary:    Sqlite
Requires: sqlite
%description sub2-domain_API-Base-Sqlite
This block is possible to use sqlite3 and libsqlite.

### TODO ###
# packakge list

%files sub2-domain_API-Base-Sqlite


%package sub2-domain_API-Base-Utils
Summary:    Base-Utils
Requires: capi-base-utils
%description sub2-domain_API-Base-Utils
This block supports base-utils API for internationalization and localization

%files sub2-domain_API-Base-Utils

### TODO - zlib ###
# Summary, description

%package sub2-domain_API-Base-zlib
Summary:    zlib
%description sub2-domain_API-Base-zlib

### TODO ###
# packakge list

%files sub2-domain_API-Base-zlib


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
Requires:	%{name}-sub2-domain_API-Network-WiFi
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Content-Download
Tizen block (set of packages) for API sets of domain API-Content-Download <br>
To use this feature, either Data Network or Wi-Fi connection is required.
%files sub2-domain_API-Content-Download

### TODO - MIME-Type ###
# Summary, description

%package sub2-domain_API-Content-MIME_Type
Summary:    MIME-Type
%description sub2-domain_API-Content-MIME_Type

### TODO ###
# packakge list

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

#############
## Context ##
#############
%package sub1-domain_API-Context
Summary:	Context API Group
Suggests: %{name}-sub2-domain_API-Context-Activity_Geusture_Recognition
Suggests: %{name}-sub2-domain_API-Context-Contextual_History
Suggests: %{name}-sub2-domain_API-Context-Contextual_Tirgger
%description sub1-domain_API-Context
Tizen block (set of packages) for Group of domain API-Context
%files sub1-domain_API-Context

### TODO - Activity-Geusture-Recognition ###
# Summary, description

%package sub2-domain_API-Context-Activity_Geusture_Recognition
Summary:    Activiti-Geusture-Recognition
%description sub2-domain_API-Context-Activity_Geusture_Recognition

### TODO ###
# packakge list

%files sub2-domain_API-Context-Activity_Geusture_Recognition

### TODO - Contextual-History ###
# Summary, description

%package sub2-domain_API-Context-Contextual_History
Summary:    Contextual-History
%description sub2-domain_API-Context-Contextual_History

### TODO ###
# packakge list

%files sub2-domain_API-Context-Contextual_History

### TODO - Contextual-Tirgger ###
# Summary, description

%package sub2-domain_API-Context-Contextual_Tirgger
Summary:    Contextual-Tirgger
%description sub2-domain_API-Context-Contextual_Tirgger

### TODO ###
# packakge list

%files sub2-domain_API-Context-Contextual_Tirgger



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

%package sub2-domain_API-Location-Geofence_Manager
Summary:    Geofence-Manager
Requires:	capi-geofence-manager
Requires:	geofence-server
Requires:	location-geofence-server
Requires:	%{name}-sub2-domain_API-Location-Location_Manager
%description sub2-domain_API-Location-Geofence_Manager
This block supports managing Geofence Service.
%files sub2-domain_API-Location-Geofence_Manager

##########
## Maps ##
##########
%package sub1-domain_API-Maps
Summary:	Maps API Group
Suggests: %{name}-sub2-domain_API-Maps-Maps_Service
Suggests: %{name}-sub2-domain_API-Maps-Here_Plugin
Suggests: %{name}-sub2-domain_API-Maps-Mapzen_Plugin
%description sub1-domain_API-Maps
Tizen block (set of packages) for Group of domain API-Maps
%files sub1-domain_API-Maps

%package sub2-domain_API-Maps-Maps_Service
Summary:    Masp_Service
Requires:	capi-maps-service
Suggests:	%{name}-sub2-domain_API-Maps-Here_Plugin
Suggests:	%{name}-sub2-domain_API-Maps-Mapzen_Plugin

%description sub2-domain_API-Maps-Maps_Service
This block supports Maps Service.<br>
One of HERE or MAPZEN plugin must be selected.


%files sub2-domain_API-Maps-Maps_Service

%package sub2-domain_API-Maps-Here_Plugin
Summary:    Here_Plugin
Requires:	maps-plugin-here
Requires:	heremaps-uc-launcher
Requires:	org.tizen.heremaps-uc

%description sub2-domain_API-Maps-Here_Plugin
This block supports HERE Plugin.


%files sub2-domain_API-Maps-Here_Plugin

%package sub2-domain_API-Maps-Mapzen_Plugin
Summary:    Mapzen_Plugin
Requires:	maps-plugin-mapzen

%description sub2-domain_API-Maps-Mapzen_Plugin
This block supports MAPZEN plugin.

### TODO ###
# packakge list

%files sub2-domain_API-Maps-Mapzen_Plugin

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
Suggests:%{name}-sub2-domain_API-Network-WiFi

%description sub2-domain_API-Messaging-Email
This block supports managing Email service.<br>
Telephony or WiFi should be selected to use Email service.<br>
Telephony would be available when Telephony is selected.<br>
Wifi would be available when Wifi is selected.


%files sub2-domain_API-Messaging-Email

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

%package sub2-domain_API-Messaging-Push
Summary:	Push Client
Requires:	libpush
Suggests:	%{name}-sub1-domain_API-Telephony
Suggests:	%{name}-sub2-domain_API-Network-WiFi
%description sub2-domain_API-Messaging-Push
This block supports transferation push messages between devices and server. Also, to use this feature, either Data Network or Wi-Fi connection is required. Once you check the Push Client before Image Creation, it will be included the image. For this, either Data Network or Wi-Fi connection is required.
%files sub2-domain_API-Messaging-Push

################
## Multimedia ##
################
%package sub1-domain_API-Multimedia
Summary:	Multimedia API Group
Suggests: %{name}-sub2-domain_API-Multimedia-Audio_IO
Suggests: %{name}-sub2-domain_API-Multimedia-Camera
Suggests: %{name}-sub2-domain_API-Multimedia-Image_Util
Suggests: %{name}-sub2-domain_API-Multimedia-Media_Codec
Suggests: %{name}-sub2-domain_API-Multimedia-Media_Controller
Suggests: %{name}-sub2-domain_API-Multimedia-Media_Demuxer
Suggests: %{name}-sub2-domain_API-Multimedia-Media_Muxer
Suggests: %{name}-sub2-domain_API-Multimedia-Media_Streamer
Suggests: %{name}-sub2-domain_API-Multimedia-Media_Tool
Suggests: %{name}-sub2-domain_API-Multimedia-Media_Vision_Barcode
Suggests: %{name}-sub2-domain_API-Multimedia-Media_Vision_Face
Suggests: %{name}-sub2-domain_API-Multimedia-Media_Vision_Image
Suggests: %{name}-sub2-domain_API-Multimedia-Media_Vision_Surveillance
Suggests: %{name}-sub2-domain_API-Multimedia-Metadata_Editor
Suggests: %{name}-sub2-domain_API-Multimedia-Metadata_Extractor
Suggests: %{name}-sub2-domain_API-Multimedia-OpenAL
Suggests: %{name}-sub2-domain_API-Multimedia-Player
Suggests: %{name}-sub2-domain_API-Multimedia-Radio
Suggests: %{name}-sub2-domain_API-Multimedia-Recorder
Suggests: %{name}-sub2-domain_API-Multimedia-Screen_Mirroring
Suggests: %{name}-sub2-domain_API-Multimedia-Sound_Manager
Suggests: %{name}-sub2-domain_API-Multimedia-Thumbnail_Util
Suggests: %{name}-sub2-domain_API-Multimedia-Tone_Player
Suggests: %{name}-sub2-domain_API-Multimedia-Video_Util
Suggests: %{name}-sub2-domain_API-Multimedia-WAV_Player
Suggests: %{name}-sub2-domain_API-Multimedia-libEXIF
%description sub1-domain_API-Multimedia
Tizen block (set of packages) for Group of domain API-Multimedia
%files sub1-domain_API-Multimedia

### TODO - Audio_IO ###
# Summary, description

%package sub2-domain_API-Multimedia-Audio_IO
Summary:    Audio_IO
%description sub2-domain_API-Multimedia-Audio_IO

### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Audio_IO

### TODO - Camera ##
# Summary, description

%package sub2-domain_API-Multimedia-Camera
Summary:    Camera
%description sub2-domain_API-Multimedia-Camera
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Camera

%package sub2-domain_API-Multimedia-Image_Util
Summary:    Image_Util
Requires: capi-media-image-util
%description sub2-domain_API-Multimedia-Image_Util
Enabling Image Util and it is possible to use Image Util API
%files sub2-domain_API-Multimedia-Image_Util

### TODO - Media_Codec ##
# Summary, description

%package sub2-domain_API-Multimedia-Media_Codec
Summary:    Media_Codec
%description sub2-domain_API-Multimedia-Media_Codec
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Media_Codec

%package sub2-domain_API-Multimedia-Media_Controller
Summary:    Media_Controller
Requires: capi-media-controller
Requires: mediacontroller
%description sub2-domain_API-Multimedia-Media_Controller
Enabling Media Controller and it is possible to use Media Controller API
%files sub2-domain_API-Multimedia-Media_Controller

%package sub2-domain_API-Multimedia-Media_Demuxer
Summary:    Media_Demuxer
Requires: capi-mediademuxer
Requires: gst-plugins-bad
Requires: gst-plugins-good
%description sub2-domain_API-Multimedia-Media_Demuxer
Enabling Media Demuxer and it is possible to use Media Demuxer API <br>
Media Demuxer API provides functions for demuxing media data <br>
%files sub2-domain_API-Multimedia-Media_Demuxer


%package sub2-domain_API-Multimedia-Media_Muxer
Summary:    Media_Muxer
Requires: capi-mediamuxer
Requires: gst-plugins-bad
Requires: gst-plugins-good
Requires: gst-plugins-tizen
%description sub2-domain_API-Multimedia-Media_Muxer
Enabling Media Muxer and it is possible to use Media Muxer API <br>
Media Muxer API provides functions for muxing media data <br>
%files sub2-domain_API-Multimedia-Media_Muxer

### TODO - Media_Streamer ##
# Summary, description

%package sub2-domain_API-Multimedia-Media_Streamer
Summary:    Media_Streamer
%description sub2-domain_API-Multimedia-Media_Streamer
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Media_Streamer

### TODO - Media_Tool ##
# Summary, description

%package sub2-domain_API-Multimedia-Media_Tool
Summary:    Media_Tool
%description sub2-domain_API-Multimedia-Media_Tool
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Media_Tool

### TODO - Media_Vision_Barcode ##
# Summary, description

%package sub2-domain_API-Multimedia-Media_Vision_Barcode
Summary:    Media_Vision_Barcode
%description sub2-domain_API-Multimedia-Media_Vision_Barcode
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Media_Vision_Barcode

### TODO - Media_Vision_Face ##
# Summary, description

%package sub2-domain_API-Multimedia-Media_Vision_Face
Summary:    Media_Vision_Face
%description sub2-domain_API-Multimedia-Media_Vision_Face
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Media_Vision_Face

### TODO - Media_Vision_Image ##
# Summary, description

%package sub2-domain_API-Multimedia-Media_Vision_Image
Summary:    Media_Vision_Image
%description sub2-domain_API-Multimedia-Media_Vision_Image
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Media_Vision_Image

### TODO - Media_Vision_Surveillance ##
# Summary, description

%package sub2-domain_API-Multimedia-Media_Vision_Surveillance
Summary:    Media_Vision_Surveillance
%description sub2-domain_API-Multimedia-Media_Vision_Surveillance
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Media_Vision_Surveillance

%package sub2-domain_API-Multimedia-Metadata_Editor
Summary:    Metadata_Editor
Requires: capi-media-metadata-editor
%description sub2-domain_API-Multimedia-Metadata_Editor
Enabling Metadata Editor and it is possible to use Metadata Editor API
%files sub2-domain_API-Multimedia-Metadata_Editor

%package sub2-domain_API-Multimedia-Metadata_Extractor
Summary:    Metadata_Extractor
Requires: capi-media-metadata-extractor
%description sub2-domain_API-Multimedia-Metadata_Extractor
Enabling Metadata Extractor and it is possible to use Metadata Extractor API
%files sub2-domain_API-Multimedia-Metadata_Extractor

### TODO - OpenAL ##
# Summary, description

%package sub2-domain_API-Multimedia-OpenAL
Summary:    OpenAL
%description sub2-domain_API-Multimedia-OpenAL
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-OpenAL

### TODO - Player ##
# Summary, description

%package sub2-domain_API-Multimedia-Player
Summary:    Player
%description sub2-domain_API-Multimedia-Player
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Player


%package sub2-domain_API-Multimedia-Radio
Summary:    Radio
Requires: capi-media-radio
Requires: pulseaudio
Requires: pulseaudio-module-bluetooth
Requires: pulseaudio-modules-tizen

# TM1
Suggests: audio-hal-sc7727
Suggests: audio-config-sc-TM1-sc7730

# multimedia-config
Suggests: mmfw-sysconf-target-tm1

# mobile bluetooth
Suggests: bluez
Suggests: rfkill
Suggests: bluetooth-firmware-sprd-TM1

%description sub2-domain_API-Multimedia-Radio
Enabling Radio and it is possible to use Radio API <br>
Radio API provides functions for accessing the radio <br>
About OPTIONAL selection:<br>
You should choose packages depends on target and hardware.<br>
TM1: bulez, rfkill, bluetoothe-firmware-sprd-TM1 <br>

%files sub2-domain_API-Multimedia-Radio

### TODO - Recorder ##
# Summary, description

%package sub2-domain_API-Multimedia-Recorder
Summary:    Recorder
%description sub2-domain_API-Multimedia-Recorder
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Recorder

%package sub2-domain_API-Multimedia-Screen_Mirroring
Summary:Screen_Mirroring
Requires:capi-media-screen-mirroring
Requires:libmm-wfd
Requires:gst-rtsp-server
Requires:gst-plugins-tizen
Requires:gst-plugins-base
Requires:gst-plugins-bad
Requires:gst-plugins-good
Requires:gst-plugins-ugly
Requires:gst-libav
Requires:gstreamer
Requires:pulseaudio
Requires:pulseaudio-module-bluetooth
Requires:pulseaudio-modules-tizen
Requires:%{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Requires:%{name}-sub2-domain_API-Network-WiFi_Direct
Requires:%{name}-sub2-domain_API-Network-WiFi_Manager
Requires:%{name}-sub2-domain_API-UI-TBM_Surface

#TM1
Suggests:audio-hal-sc7727
Suggests:audio-config-sc-TM1-sc7730

#TM2
Suggests:audio-hal-wm5110
Suggests:alsa-ucm-data-wm5110

#RPI3
Suggests:audio-hal-bcm2837

#ARTIK710
Suggests:audio-hal-alc5658
Suggests:alsa-ucm-data-alc5658

#multimedia-config
Suggests:mmfw-sysconf-target-artik10
Suggests:mmfw-sysconf-target-n4
Suggests:mmfw-sysconf-target-rpi3
Suggests:mmfw-sysconf-target-tm1

%description sub2-domain_API-Multimedia-Screen_Mirroring
Screen Mirroiring provides the ability to connect to and disconnect from a screen mirroring source, start, pause, and resume the screen mirroring as a 'SINK' (source: Stream sender, sink:Stream receiver). It follows 'Miracast standard'. OPTIONAL : You should choose packages depends on target and hardware. First, Check config file 'mmfw-sysconf-target-{DEVICE_WHAT_YOU_WANT}(e.g mmfw-sysconf-target-tm1). Second, check audio HAL depends on target. TM1:audio-hal-sc7727,audio-config-sc-TM1-sc7730. TM2(n4):audio-hal-wm5110,alsa-ucm-data-wm5110. RPI3:audio-hal-bcm2837, ARTIK710:audio-hal-alc5658,alsa-ucm-data-alc5658.

%files sub2-domain_API-Multimedia-Screen_Mirroring

### TODO - Sound_Manager ##
# Summary, description

%package sub2-domain_API-Multimedia-Sound_Manager
Summary:    Sound_Manager
%description sub2-domain_API-Multimedia-Sound_Manager
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Sound_Manager

%package sub2-domain_API-Multimedia-Thumbnail_Util
Summary:    Thumbnail_Util
Requires: capi-media-thumbnail-util
Requires: media-server
Requires: media-thumbnail-server
%description sub2-domain_API-Multimedia-Thumbnail_Util
Enabling Thumbnail Util and it is possible to use Thumbnail Util API
%files sub2-domain_API-Multimedia-Thumbnail_Util

### TODO - Tone_Player ##
# Summary, description

%package sub2-domain_API-Multimedia-Tone_Player
Summary:    Tone_Player
%description sub2-domain_API-Multimedia-Tone_Player
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Tone_Player

%package sub2-domain_API-Multimedia-Video_Util
Summary:    Video_Util
Requires: capi-media-video-util
Requires: gst-plugins-bad
Requires: gst-plugins-good
Requires: gst-plugins-ugly
Requires: gst-plugins-tizen
Requires: gst-libav
%description sub2-domain_API-Multimedia-Video_Util
Enabling Video Util and it is possible to use Video Util API <br>
Video Util API provides fuctions that transcode a media file <br>

%files sub2-domain_API-Multimedia-Video_Util

### TODO - WAV_Player ##
# Summary, description

%package sub2-domain_API-Multimedia-WAV_Player
Summary:    WAV_Player
%description sub2-domain_API-Multimedia-WAV_Player
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-WAV_Player

### TODO - libEXIF ##
# Summary, description

%package sub2-domain_API-Multimedia-libEXIF
Summary:    libEXIF
%description sub2-domain_API-Multimedia-libEXIF
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-libEXIF

#############
## Netowrk ##
#############
%package sub1-domain_API-Network
Summary:	Network API Group
Suggests: %{name}-sub2-domain_API-Network-Bluetooth_BREDR
Suggests: %{name}-sub2-domain_API-Network-Bluetooth_Call_Audio
Suggests: %{name}-sub2-domain_API-Network-Bluetooth_Media_Audio
Suggests: %{name}-sub2-domain_API-Network-Bluetooth_Transfer
Suggests: %{name}-sub2-domain_API-Network-Bluetooth_LE
Suggests: %{name}-sub2-domain_API-Network-ASP
Suggests: %{name}-sub2-domain_API-Network-Connection
Suggests: %{name}-sub2-domain_API-Network-Curl
Suggests: %{name}-sub2-domain_API-Network-DNSSD
Suggests: %{name}-sub2-domain_API-Network-HTTP
Suggests: %{name}-sub2-domain_API-Network-IoTCon
Suggests: %{name}-sub2-domain_API-Network-MTP
Suggests: %{name}-sub2-domain_API-Network-NFC
Suggests: %{name}-sub2-domain_API-Network-SSDP
Suggests: %{name}-sub2-domain_API-Network-STC
Suggests: %{name}-sub2-domain_API-Network-Smartcard
Suggests: %{name}-sub2-domain_API-Network-VPN_Service
Suggests: %{name}-sub2-domain_API-Network-WiFi
Suggests: %{name}-sub2-domain_API-Network-WiFi_Manager
Suggests: %{name}-sub2-domain_API-Network-WiFi_Direct
%description sub1-domain_API-Network
Tizen block (set of packages) for Group of domain API-Network
%files sub1-domain_API-Network



%package sub2-domain_API-Network-Bluetooth_BREDR
Summary:    Bluetooth_BREDR

Requires: capi-network-bluetooth
Requires: bluetooth-frwk-service
Requires: bluetooth-frwk-core
Requires: libbluetooth
Requires: bluez
Requires: bluetooth-tools

#BREDR only
Suggests: bluez-extension-bredr

#Firmware
Suggests: bluetooth-firmware-bcm
Suggests: bluetooth-firmware-bcm-artik
Suggests: bluetooth-firmware-bcm-exynos3250
Suggests: bluetooth-firmware-bcm-exynos7270
Suggests: bluetooth-firmware-sprd-TM1

#Profiles
Suggests: bluetooth-frwk-profile_common
Suggests: bluetooth-frwk-profile_mobile
Suggests: bluetooth-frwk-profile_wearable
Suggests: bluetooth-frwk-profile_tv
Suggests: bluetooth-frwk-profile_ivi
Suggests: bluetooth-tools-no-firmware
Suggests: bluetooth-tools-profile_common
Suggests: bluetooth-tools-profile_ivi
Suggests: bluetooth-tools-profile_mobile
Suggests: bluetooth-tools-profile_wearable
Suggests: bluez-profile_common
Suggests: bluez-profile_tv
Suggests: bluez-profile_wearable

#Headed/Headless
Suggests: bluetooth-frwk-plugin-headed
Suggests: org.tizen.bt-syspopup
Suggests: org.tizen.bt-syspopup-profile_wearable
Suggests: org.tizen.bt-syspopup-profile_common

%description sub2-domain_API-Network-Bluetooth_BREDR
Enabling Bluetooth BREDR and it is possible to Bluetooth BREDR API<br>
[Select Packages]<br>
1. Firmware<br>
- TM1 : bluetooth-firmware-sprd-TM1<br>
- TM2 : bluetooth-firmware-bcm<br>
- TW1 : bluetooth-firmware-bcm-exynos3250<br>
- TW2 : bluetooth-firmware-bcm-exynos7270<br>
- Artik : bluetooth-firmware-bcm-artik<br>
2. BREDR only<br>
- bluez-extension-bredr<br>
3. Profiles<br>
- mobile : bluetooth-frwk-profile_mobile, bluetooth-tools-profile_mobile, bluez-profile_common<br>
- wearable : bluetooth-frwk-profile_wearable, bluetooth-tools-profile_wearable, bluez-profile_wearable<br>
- common : bluetooth-frwk-profile_common, bluetooth-tools-profile_common, bluez-profile_common<br>
- tv : bluetooth-frwk-profile_tv, bluetooth-tools-profile_common, bluez-profile_tv<br>
- ivi : bluetooth-frwk-profile_ivi, bluetooth-tools-profile_ivi, bluez-profile_common<br>
4. Headed device<br>
- wearable : bluetooth-frwk-plugin-headed, org.tizen.bt-syspopup, org.tizen.bt-syspopup-profile_wearable<br>
- not wearable : bluetooth-frwk-plugin-headed, org.tizen.bt-syspopup, org.tizen.bt-syspopup-profile_common
%files sub2-domain_API-Network-Bluetooth_BREDR


%package sub2-domain_API-Network-Bluetooth_Call_Audio
Summary:    Bluetooth_Call_Audio

Requires: %{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires: bluetooth-agent

#Profiles
Suggests: bluetooth-agent-profile_common
Suggests: bluetooth-agent-profile_ivi
Suggests: bluetooth-agent-profile_wearable

%description sub2-domain_API-Network-Bluetooth_Call_Audio
Enabling Bluetooth Call Audio functionality<br>
[Select Packages]<br>
1. Profiles<br>
- mobile : bluetooth-agent-profile_common<br>
- ivi : bluetooth-agent-profile_ivi<br>
- wearable : bluetooth-agent-profile_wearable
%files sub2-domain_API-Network-Bluetooth_Call_Audio

%package sub2-domain_API-Network-Bluetooth_Media_Audio
Summary:    Bluetooth_Media_Audio

Requires: %{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires: sbc
Requires: pulseaudio-module-bluetooth

%description sub2-domain_API-Network-Bluetooth_Media_Audio
Enabling Bluetooth Media Audio functionality

%files sub2-domain_API-Network-Bluetooth_Media_Audio

%package sub2-domain_API-Network-Bluetooth_Transfer
Summary:    Bluetooth_Transfer

Requires: %{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires: obexd

%description sub2-domain_API-Network-Bluetooth_Transfer
Enabling Bluetooth Transfer functionality(OPP, PBAP)

%files sub2-domain_API-Network-Bluetooth_Transfer

%package sub2-domain_API-Network-Bluetooth_LE
Summary:    Bluetooth_LE

Requires: capi-network-bluetooth
Requires: bluetooth-frwk-service
Requires: bluetooth-frwk-core
Requires: libbluetooth
Requires: bluez
Requires: bluetooth-tools
Requires: bluez-extension-le

#Firmware
Suggests: bluetooth-firmware-bcm
Suggests: bluetooth-firmware-bcm-artik
Suggests: bluetooth-firmware-bcm-exynos3250
Suggests: bluetooth-firmware-bcm-exynos7270
Suggests: bluetooth-firmware-sprd-TM1

#Profiles
Suggests: bluetooth-frwk-profile_common
Suggests: bluetooth-frwk-profile_mobile
Suggests: bluetooth-frwk-profile_wearable
Suggests: bluetooth-frwk-profile_tv
Suggests: bluetooth-frwk-profile_ivi
Suggests: bluetooth-tools-no-firmware
Suggests: bluetooth-tools-profile_common
Suggests: bluetooth-tools-profile_ivi
Suggests: bluetooth-tools-profile_mobile
Suggests: bluetooth-tools-profile_wearable
Suggests: bluez-profile_common
Suggests: bluez-profile_tv
Suggests: bluez-profile_wearable


#Headed/Headless
Suggests: bluetooth-frwk-plugin-headed
Suggests: org.tizen.bt-syspopup
Suggests: org.tizen.bt-syspopup-profile_wearable
Suggests: org.tizen.bt-syspopup-profile_common

%description sub2-domain_API-Network-Bluetooth_LE
Enabling Bluetooth LE Only functionality<br>
[Select Packages]<br>
1. Firmware<br>
- TM1 : bluetooth-firmware-sprd-TM1<br>
- TM2 : bluetooth-firmware-bcm<br>
- TW1 : bluetooth-firmware-bcm-exynos3250<br>
- TW2 : bluetooth-firmware-bcm-exynos7270<br>
- Artik : bluetooth-firmware-bcm-artik<br>
2. Profiles<br>
- mobile : bluetooth-frwk-profile_mobile, bluetooth-tools-profile_mobile, bluez-profile_common<br>
- wearable : bluetooth-frwk-profile_wearable, bluetooth-tools-profile_wearable, bluez-profile_wearable<br>
- common : bluetooth-frwk-profile_common, bluetooth-tools-profile_common, bluez-profile_common<br>
- tv : bluetooth-frwk-profile_tv, bluetooth-tools-profile_common, bluez-profile_tv<br>
- ivi : bluetooth-frwk-profile_ivi, bluetooth-tools-profile_ivi, bluez-profile_common<br>
3. Headed device<br>
- wearable : bluetooth-frwk-plugin-headed, org.tizen.bt-syspopup, org.tizen.bt-syspopup-profile_wearable<br>
- not wearable : bluetooth-frwk-plugin-headed, org.tizen.bt-syspopup, org.tizen.bt-syspopup-profile_common
%files sub2-domain_API-Network-Bluetooth_LE

%package sub2-domain_API-Network-ASP
Summary:    ASP
Requires:	capi-network-asp
Requires:	asp-manager
Requires:	%{name}-sub2-domain_API-Network-DNSSD
Suggests:   %{name}-sub2-domain_API-Network-WiFi_Direct
%description sub2-domain_API-Network-ASP
Tizen block (set of packages) for API sets of domain API-Network-ASP <br>
To use this feature, either Data Network or Wi-Fi connection is required <br>
and you need the package either DNSSD or WiFi Direct. A default is DNSSD.
%files sub2-domain_API-Network-ASP

%package sub2-domain_API-Network-Connection
Summary:    Connection
Requires:	capi-network-connection
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Network-Connection
Tizen block (set of packages) for API sets of domain API-Network-Connection <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-Connection

%package sub2-domain_API-Network-Curl
Summary:    Curl
Requires:	libcurl
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Network-Curl
Tizen block (set of packages) for API sets of domain API-Network-Curl <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-Curl

%package sub2-domain_API-Network-DNSSD
Summary:    DNS-SD
Requires:	libnsd-dns-sd
Requires:	mdnsresponder
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Network-DNSSD
Tizen block (set of packages) for API sets of domain API-Network-DNSSD <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-DNSSD

%package sub2-domain_API-Network-HTTP
Summary:    HTTP
Requires:	capi-network-http
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Network-HTTP
Tizen block (set of packages) for API sets of domain API-Network-HTTP <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-HTTP

%package sub2-domain_API-Network-IoTCon
Summary:    IoTCon
Requires: iotcon
Requires: %{name}-sub2-domain_API-Network-WiFi
%description sub2-domain_API-Network-IoTCon
This block supports Tizen IoT Connectivity Service & Library(Client) based on Iotivity. <br>
It supports resource management, remote resource management, CRUDN request/response and resource representation. <br>
To use this feature, Wi-Fi connection is required.
%files sub2-domain_API-Network-IoTCon

### TODO - MTP ##
# Summary, description

%package sub2-domain_API-Network-MTP
Summary:    MTP
%description sub2-domain_API-Network-MTP
### TODO ###
# packakge list

%files sub2-domain_API-Network-MTP
### TODO - NFC ##
# Summary, description

%package sub2-domain_API-Network-NFC
Summary:    NFC
%description sub2-domain_API-Network-NFC
### TODO ###
# packakge list

%files sub2-domain_API-Network-NFC

%package sub2-domain_API-Network-SSDP
Summary:    SSDP
Requires:	libnsd-ssdp
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Network-SSDP
Tizen block (set of packages) for API sets of domain API-Network-SSDP <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-SSDP

%package sub2-domain_API-Network-STC
Summary:    STC
Requires:	capi-network-stc
Requires:	stc-manager
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Network-STC
Tizen block (set of packages) for API sets of domain API-Network-STC <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-STC

### TODO - Smartcard ##
# Summary, description

%package sub2-domain_API-Network-Smartcard
Summary:    Smartcard
%description sub2-domain_API-Network-Smartcard
### TODO ###
# packakge list

%files sub2-domain_API-Network-Smartcard

%package sub2-domain_API-Network-VPN_Service
Summary:    VPN_Service
Requires:	capi-vpnsvc
#Requires:	net-config
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
%description sub2-domain_API-Network-VPN_Service
Tizen block (set of packages) for API sets of domain API-Network-VPN_Service <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-VPN_Service

%package sub2-domain_API-Network-WiFi
Summary:    WiFi
Requires:	capi-network-wifi
Requires:	net-config
Requires:	connman
Requires:	wpa_supplicant

#Profiles
Suggests:	wpa_supplicant-extension-TM1
Suggests:	wpa_supplicant-extension-TM2
Suggests:	wpa_supplicant-profile_common
Suggests:	wpa_supplicant-profile_tv
Suggests:	net-config-profile_tv
Suggests:	connman-extension-ivi
Suggests:	connman-extension-tv

#Headed/Headless
Suggests:	net-config-plugin-headed

%description sub2-domain_API-Network-WiFi
Tizen block (set of packages) for API sets of domain API-Network-WiFi <br>
TM1 target (headed setting UI) : wpa_supplicant-extension-TM1, net-config-plugin-headed <br>
TM1 target (headless) : wpa_supplicant-extension-TM1 <br>
TM2 target (headed settgin UI) : wpa_supplicant-extension-TM2, net-config-plugin-headed <br>
TM2 target (headless) : wpa_supplicant-extension-TM2 <br>
TW1 target (headed setting UI) : wpa_supplicant-profile_common, net-config-plugin-headed <br>
TW1 target (headless) : wpa_supplicant-profile_common <br>
TW2 target (headed setting UI) : wpa_supplicant-profile_common, net-config-plugin-headed <br>
TW2 target (headless): wpa_supplicant-profile_common <br>
tv profile : wpa_supplicant-profile_common, net-config-profile_tv, connman-extension-tv <br>
ivi profile : wpa_supplicant-profile_common, connman-extension-ivi <br>
common profile : wpa_supplicant-profile_common <br>
%files sub2-domain_API-Network-WiFi

%package sub2-domain_API-Network-WiFi_Manager
Summary:    WiFi_Manager
Requires:	capi-network-wifi
Requires:	net-config
Requires:	connman
Requires:	wpa_supplicant

#Profiles
Suggests:	wpa_supplicant-extension-TM1
Suggests:	wpa_supplicant-extension-TM2
Suggests:	wpa_supplicant-profile_common
Suggests:	wpa_supplicant-profile_tv
Suggests:	net-config-profile_tv
Suggests:	connman-extension-ivi
Suggests:	connman-extension-tv

#Headed/Headless
Suggests:	net-config-plugin-headed

%description sub2-domain_API-Network-WiFi_Manager
Tizen block (set of packages) for API sets of domain API-Network-WiFi_Manager <br>
TM1 target (headed setting UI) : wpa_supplicant-extension-TM1, net-config-plugin-headed <br>
TM1 target (headless) : wpa_supplicant-extension-TM1 <br>
TM2 target (headed settgin UI) : wpa_supplicant-extension-TM2, net-config-plugin-headed <br>
TM2 target (headless) : wpa_supplicant-extension-TM2 <br>
TW1 target (headed setting UI) : wpa_supplicant-profile_common, net-config-plugin-headed <br>
TW1 target (headless) : wpa_supplicant-profile_common <br>
TW2 target (headed setting UI) : wpa_supplicant-profile_common, net-config-plugin-headed <br>
TW2 target (headless): wpa_supplicant-profile_common <br>
tv profile : wpa_supplicant-profile_common, net-config-profile_tv, connman-extension-tv <br>
ivi profile : wpa_supplicant-profile_common, connman-extension-ivi <br>
common profile : wpa_supplicant-profile_common <br>
%files sub2-domain_API-Network-WiFi_Manager

%package sub2-domain_API-Network-WiFi_Direct
Summary:    WiFi_Direct
Requires:	capi-network-wifi-direct
Requires:	wifi-direct-manager
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager

#Profiles
Suggests:	wifi-direct-manager-profile_common
Suggests:	wifi-direct-manager-profile_mobile
Suggests:	wifi-direct-manager-profile_tv
Suggests:	wifi-direct-manager-profile_wearable
Suggests:	wifi-direct-manager-extension-TM1

#Plugins
Suggests:	wifi-direct-plugin-wpasupplicant-extension-TM1
Suggests:	wifi-direct-plugin-wpasupplicant-profile_common
Suggests:	wifi-direct-plugin-wpasupplicant-profile_mobile
Suggests:	wifi-direct-plugin-wpasupplicant-profile_tv
Suggests:	wifi-direct-plugin-wpasupplicant-profile_wearable

%description sub2-domain_API-Network-WiFi_Direct
Tizen block (set of packages) for API sets of domain API-Network-WiFiDirect <br>
TM1 target : wifi-direct-manager-extension-TM1, wifi-direct-manager-profile_mobile, wifi-direct-plugin-wpasupplicant-extension-TM1, wifi-direct-plugin-wpasupplicant-profile_mobile <br>
TM2 target : wifi-direct-manager-profile_mobile, wifi-direct-plugin-wpasupplicant-profile_mobile <br>
TW1 target : wifi-direct-manager-profile_wearable, wifi-direct-plugin-wpasupplicant-profile_wearable <br>
TW2 target : wifi-direct-manager-profile_wearable, wifi-direct-plugin-wpasupplicant-profile_wearable <br>
tv profile : wifi-direct-manager-profile_tv, wifi-direct-plugin-wpasupplicant-profile_tv <br>
ivi profile : wifi-direct-manager-profile_common, wifi-direct-plugin-wpasupplicant-profile_common <br>
common profile : Not supported <br>
%files sub2-domain_API-Network-WiFi_Direct

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
%description sub1-domain_API-Security
Tizen block (set of packages) for Group of domain API-Security
%files sub1-domain_API-Security

### TODO - CSR ##
# Summary, description

%package sub2-domain_API-Security-CSR
Summary:    CSR
%description sub2-domain_API-Security-CSR
### TODO ###
# packakge list

%files sub2-domain_API-Security-CSR

### TODO - Device_Policy ##
# Summary, description

%package sub2-domain_API-Security-Device_Policy
Summary:    Device_Policy
%description sub2-domain_API-Security-Device_Policy
### TODO ###
# packakge list

%files sub2-domain_API-Security-Device_Policy

### TODO - Key_Manager ##
# Summary, description

%package sub2-domain_API-Security-Key_Manager
Summary:    Key_Manager
%description sub2-domain_API-Security-Key_Manager
### TODO ###
# packakge list

%files sub2-domain_API-Security-Key_Manager

### TODO - OpenSSL ##
# Summary, description

%package sub2-domain_API-Security-OpenSSL
Summary:    OpenSSL
%description sub2-domain_API-Security-OpenSSL
### TODO ###
# packakge list

%files sub2-domain_API-Security-OpenSSL

### TODO - Privilege_Info ##
# Summary, description

%package sub2-domain_API-Security-Privilege_Info
Summary:    Privilege_Info
%description sub2-domain_API-Security-Privilege_Info
### TODO ###
# packakge list

%files sub2-domain_API-Security-Privilege_Info

### TODO - YACA ##
# Summary, description

%package sub2-domain_API-Security-YACA
Summary:    YACA
%description sub2-domain_API-Security-YACA
### TODO ###
# packakge list

%files sub2-domain_API-Security-YACA

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

%package sub2-domain_API-Social-Contacts
Summary: Contacts
Requires:libcontacts-service
Requires:contacts-service
Requires:session-utils

%description sub2-domain_API-Social-Contacts
This block supports managing Contacts service

%files sub2-domain_API-Social-Contacts

%package sub2-domain_API-Social-Phonenumber_utils
Summary: Phonenumber_utils
Requires:phonenumber-utils

%description sub2-domain_API-Social-Phonenumber_utils
This block supports managing Phonenumber utils

%files sub2-domain_API-Social-Phonenumber_utils

############
## System ##
############
%package sub1-domain_API-System
Summary:	System API Group
Suggests: %{name}-sub2-domain_API-System-Device_Battery
Suggests: %{name}-sub2-domain_API-System-Device_Callback
Suggests: %{name}-sub2-domain_API-System-Device_Haptic
Suggests: %{name}-sub2-domain_API-System-Device_IR
Suggests: %{name}-sub2-domain_API-System-Device_Led
Suggests: %{name}-sub2-domain_API-System-Device_Power
Suggests: %{name}-sub2-domain_API-System-Feedback
Suggests: %{name}-sub2-domain_API-System-Runtime_information
Suggests: %{name}-sub2-domain_API-System-Sensor_Listener
Suggests: %{name}-sub2-domain_API-System-Sensor_Recorder
Suggests: %{name}-sub2-domain_API-System-Storage
Suggests: %{name}-sub2-domain_API-System-System_Information
Suggests: %{name}-sub2-domain_API-System-System_Settings
Suggests: %{name}-sub2-domain_API-System-T_Trace
Suggests: %{name}-sub2-domain_API-System-USB_Host
Suggests: %{name}-sub2-domain_API-System-dlog
%description sub1-domain_API-System
Tizen block (set of packages) for Group of domain API-System
%files sub1-domain_API-System

### TODO - Device_Battery ##
# Summary, description

%package sub2-domain_API-System-Device_Battery
Summary:    Device_Battery
%description sub2-domain_API-System-Device_Battery
### TODO ###
# packakge list

%files sub2-domain_API-System-Device_Battery

### TODO - Device_Callback ##
# Summary, description

%package sub2-domain_API-System-Device_Callback
Summary:    Device_Callback
%description sub2-domain_API-System-Device_Callback
### TODO ###
# packakge list

%files sub2-domain_API-System-Device_Callback

### TODO - Device_Haptic ##
# Summary, description

%package sub2-domain_API-System-Device_Haptic
Summary:    Device_Haptic
%description sub2-domain_API-System-Device_Haptic
### TODO ###
# packakge list

%files sub2-domain_API-System-Device_Haptic

### TODO - Device_IR ##
# Summary, description

%package sub2-domain_API-System-Device_IR
Summary:    Device_IR
%description sub2-domain_API-System-Device_IR
### TODO ###
# packakge list

%files sub2-domain_API-System-Device_IR

### TODO - Device_Led ##
# Summary, description

%package sub2-domain_API-System-Device_Led
Summary:    Device_Led
%description sub2-domain_API-System-Device_Led
### TODO ###
# packakge list

%files sub2-domain_API-System-Device_Led

### TODO - Device_Power ##
# Summary, description

%package sub2-domain_API-System-Device_Power
Summary:    Device_Power
%description sub2-domain_API-System-Device_Power
### TODO ###
# packakge list

%files sub2-domain_API-System-Device_Power

### TODO - Feedback ##
# Summary, description

%package sub2-domain_API-System-Feedback
Summary:    Feedback
%description sub2-domain_API-System-Feedback
### TODO ###
# packakge list

%files sub2-domain_API-System-Feedback

### TODO - Runtime_information ##
# Summary, description

%package sub2-domain_API-System-Runtime_information
Summary:    Runtime_information
%description sub2-domain_API-System-Runtime_information
### TODO ###
# packakge list

%files sub2-domain_API-System-Runtime_information

%package sub2-domain_API-System-Sensor_Listener
Summary:    Sensor_Listener
Requires:   capi-system-sensor
Requires:   sensord
Suggests:   sensor-hal-tm1
Suggests:   sensor-hal-tm2
Suggests:   sensor-hal-tw1
Suggests:   sensor-hal-tw2

%description sub2-domain_API-System-Sensor_Listener
This block supports sensor listener API to detect sensors and monitor sensor events.<br>
You should choose HAL packages depends on target and hardware.
For example, if you want make a binary for TM1, you can choose the sensor-hal-tm1 package.<br>

%files sub2-domain_API-System-Sensor_Listener

%package sub2-domain_API-System-Sensor_Recorder
Summary:    Sensor_Recorder
Requires:   context-sensor-recorder
Requires:   %{name}-sub2-domain_API-System-Sensor_Listener

%description sub2-domain_API-System-Sensor_Recorder
This block supports sensor recorder API to record sensor data.<br>
You should choose HAL packages depends on target and hardware. HAL packages are listed in the Sensor_Listener block.
For example, if you want make a binary for TM1, you can choose the sensor-hal-tm1 package.<br>

%files sub2-domain_API-System-Sensor_Recorder

### TODO - Storage ##
# Summary, description

%package sub2-domain_API-System-Storage
Summary:    Storage
%description sub2-domain_API-System-Storage
### TODO ###
# packakge list

%files sub2-domain_API-System-Storage

### TODO - System_Information ##
# Summary, description

%package sub2-domain_API-System-System_Information
Summary:    System_Information
%description sub2-domain_API-System-System_Information
### TODO ###
# packakge list

%files sub2-domain_API-System-System_Information

### TODO - System_Settings ##
# Summary, description

%package sub2-domain_API-System-System_Settings
Summary:    System_Settings
%description sub2-domain_API-System-System_Settings
### TODO ###
# packakge list

%files sub2-domain_API-System-System_Settings

%package sub2-domain_API-System-T_Trace
Summary:    T_Trace
Requires: ttrace
%description sub2-domain_API-System-T_Trace
This block is possible to use ttrace.

%files sub2-domain_API-System-T_Trace

### TODO - USB_Host ##
# Summary, description

%package sub2-domain_API-System-USB_Host
Summary:    USB_Host
%description sub2-domain_API-System-USB_Host
### TODO ###
# packakge list

%files sub2-domain_API-System-USB_Host

### TODO - dlog ##
# Summary, description

%package sub2-domain_API-System-dlog
Summary:    dlog
%description sub2-domain_API-System-dlog
### TODO ###
# packakge list

%files sub2-domain_API-System-dlog


###############
## Telephony ##
###############
%package sub1-domain_API-Telephony
Summary:	Telephony API
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

########
## UI ##
########
%package sub1-domain_API-UI
Summary:	UI API Group
Suggests: %{name}-sub2-domain_API-UI-Cairo
Suggests: %{name}-sub2-domain_API-UI-Clipboard_History_Manager
Suggests: %{name}-sub2-domain_API-UI-DALi
Suggests: %{name}-sub2-domain_API-UI-EFL_MainLoop
Suggests: %{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Suggests: %{name}-sub2-domain_API-UI-EFL_ELM_Accessbility
Suggests: %{name}-sub2-domain_API-UI-EFL_Extension
Suggests: %{name}-sub2-domain_API-UI-External_Output_Manager
Suggests: %{name}-sub2-domain_API-UI-FontConfig
Suggests: %{name}-sub2-domain_API-UI-Freetype
Suggests: %{name}-sub2-domain_API-UI-HarfBuzz
Suggests: %{name}-sub2-domain_API-UI-Minicontrol
Suggests: %{name}-sub2-domain_API-UI-SDL_GL
Suggests: %{name}-sub2-domain_API-UI-SDL_Vulkan
Suggests: %{name}-sub2-domain_API-UI-TBM_Surface
Suggests: %{name}-sub2-domain_API-UI-Tizen_WS_Shell
Suggests: %{name}-sub2-domain_API-UI-UI_View_Manager
Suggests: %{name}-sub2-domain_API-UI-Vulkan
Suggests: %{name}-sub2-domain_API-UI-Display_Server
%description sub1-domain_API-UI
Tizen block (set of packages) for Group of domain API-UI
%files sub1-domain_API-UI

### TODO - Cairo ##
# Summary, description

%package sub2-domain_API-UI-Cairo
Summary:    Cairo
%description sub2-domain_API-UI-Cairo
### TODO ###
# packakge list

%files sub2-domain_API-UI-Cairo

### TODO - Clipboard_History_Manager ##
# Summary, description

%package sub2-domain_API-UI-Clipboard_History_Manager
Summary:    Clipboard_History_Manager
%description sub2-domain_API-UI-Clipboard_History_Manager
### TODO ###
# packakge list

%files sub2-domain_API-UI-Clipboard_History_Manager


### TODO - DALi ##
# Summary, description

%package sub2-domain_API-UI-DALi
Summary:    DALi
%description sub2-domain_API-UI-DALi
### TODO ###
# packakge list

%files sub2-domain_API-UI-DALi


### TODO - EFL_MainLoop ##
# Summary, description

%package sub2-domain_API-UI-EFL_MainLoop
Summary:    EFL_MainLoop
%description sub2-domain_API-UI-EFL_MainLoop
### TODO ###
# packakge list

%files sub2-domain_API-UI-EFL_MainLoop


### TODO - EFL_NativeUIToolkit ##
# Summary, description

%package sub2-domain_API-UI-EFL_NativeUIToolkit
Summary:    EFL_NativeUIToolkit
%description sub2-domain_API-UI-EFL_NativeUIToolkit
### TODO ###
# packakge list

%files sub2-domain_API-UI-EFL_NativeUIToolkit


### TODO - EFL_ELM_Accessbility ##
# Summary, description

%package sub2-domain_API-UI-EFL_ELM_Accessbility
Summary:    EFL_ELM_Accessbility
%description sub2-domain_API-UI-EFL_ELM_Accessbility
### TODO ###
# packakge list

%files sub2-domain_API-UI-EFL_ELM_Accessbility


### TODO - EFF_Extension ##
# Summary, description

%package sub2-domain_API-UI-EFL_Extension
Summary:    EFL_Extension
%description sub2-domain_API-UI-EFL_Extension
### TODO ###
# packakge list

%files sub2-domain_API-UI-EFL_Extension


### TODO - External_Output_Manager ##
# Summary, description

%package sub2-domain_API-UI-External_Output_Manager
Summary:    External_Output_Manager
%description sub2-domain_API-UI-External_Output_Manager
### TODO ###
# packakge list

%files sub2-domain_API-UI-External_Output_Manager


### TODO - FontConfig ##
# Summary, description

%package sub2-domain_API-UI-FontConfig
Summary:    FontConfig
%description sub2-domain_API-UI-FontConfig
### TODO ###
# packakge list

%files sub2-domain_API-UI-FontConfig


### TODO - Freetype ##
# Summary, description

%package sub2-domain_API-UI-Freetype
Summary:    Freetype
%description sub2-domain_API-UI-Freetype
### TODO ###
# packakge list

%files sub2-domain_API-UI-Freetype


### TODO - HarfBuzz ##
# Summary, description

%package sub2-domain_API-UI-HarfBuzz
Summary:    HarfBuzz
%description sub2-domain_API-UI-HarfBuzz
### TODO ###
# packakge list

%files sub2-domain_API-UI-HarfBuzz


### TODO - Minicontrol ##
# Summary, description

%package sub2-domain_API-UI-Minicontrol
Summary:    Minicontrol
%description sub2-domain_API-UI-Minicontrol
### TODO ###
# packakge list

%files sub2-domain_API-UI-Minicontrol


%package sub2-domain_API-UI-SDL_GL
Summary:    OpenGL ES with SDL
Requires:   SDL2
Requires:   %{name}-sub2-domain_API-UI-Display_Server
%description sub2-domain_API-UI-SDL_GL
OpenGL ES is a standard specification, defining a cross-language, and cross-platform OpenGL ES API to write the applications that produce 2D and 3D computer graphics.<br>
SDL makes much easier to use the OpenGL ES API in Tizen.<br>
OpenGL ES 1.1, 2.0, 3.0, 3.1 and 3.2 are supported in Tizen.<br>
Some devices may not support OpenGL ES. So you should check whether OpenGL ES and specific versions support with <a href=https://developer.tizen.org/development/guides/native-application/system/system-information>System information APIs.<br>


%files sub2-domain_API-UI-SDL_GL


%package sub2-domain_API-UI-SDL_Vulkan
Summary:    Vulkan with SDL
Requires:   SDL2
Requires:   %{name}-sub2-domain_API-UI-Vulkan
%description sub2-domain_API-UI-SDL_Vulkan
Vulkan is a generation API for high-efficiency access to graphics and computing on modern GPUs.<br>
SDL makes much easier to use the Vulkan API in Tizen.<br>
The Tizen platform supports the Vulkan API in order to provide the most cutting-edge 3D programming tools for you to create high-quality games and real-time graphics in application.<br>
%files sub2-domain_API-UI-SDL_Vulkan


### TODO - TBM_Surface ##
# Summary, description

%package sub2-domain_API-UI-TBM_Surface
Summary:    TBM_Surface
%description sub2-domain_API-UI-TBM_Surface
### TODO ###
# packakge list

%files sub2-domain_API-UI-TBM_Surface


### TODO - Tizen_WS_Shell ##
# Summary, description

%package sub2-domain_API-UI-Tizen_WS_Shell
Summary:    Tizen_WS_Shell
%description sub2-domain_API-UI-Tizen_WS_Shell
### TODO ###
# packakge list

%files sub2-domain_API-UI-Tizen_WS_Shell


### TODO - UI_View_Manager ##
# Summary, description

%package sub2-domain_API-UI-UI_View_Manager
Summary:    UI_View_Manager
%description sub2-domain_API-UI-UI_View_Manager
### TODO ###
# packakge list

%files sub2-domain_API-UI-UI_View_Manager


### TODO - Vulkan ##
# Summary, description

%package sub2-domain_API-UI-Vulkan
Summary:    Vulkan
%description sub2-domain_API-UI-Vulkan
### TODO ###
# packakge list

%files sub2-domain_API-UI-Vulkan


### TODO - Display_Server ##
# Summary, description

%package sub2-domain_API-UI-Display_Server
Summary:    Display_Server
Requires:   enlightenment
#Profiles
Suggests:   e-tizen-data-profile_common
Suggests:   e-tizen-data-profile_mobile
Suggests:   e-tizen-data-profile_wearable
Suggests:   e-tizen-data-profile_tv
Suggests:   e-tizen-data-profile_ivi

#DisplayHAL-TBM
Suggests:   libtbm-sprd
Suggests:   libtbm-exynos
Suggests:   libtbm-exynos-tgm
Suggests:   libtbm-nexell
Suggests:   libtbm-vc4
Suggests:   libtbm-vigs
Suggests:   libtbm-dumb

#DisplayHAL-TDM
Suggests:   libtdm-sprd
Suggests:   libtdm-exynos
Suggests:   libtdm-exynos-deconfb
Suggests:   libtdm-drm
Suggests:   libtdm-vc4

%description sub2-domain_API-UI-Display_Server
Tizen block (set of packages) for Group of Display Server
Display Server Block is core block for UI. It contains the wayland display server,
modules for server and display HAL for target.
There are three categories to choose.
1. Server config for each profile
   There are 5 profiles(common, mobile, wearable, tv, ivi).
2. Tizen Buffer Manager(TBM) Backend
3. Tizen Display Manager(TDM) Backend
   You should choose a tbm and tdm backend for your target.
   For example, if you want make binary for TM1, you can choose the libtbm-sprd and the libtdm-sprd

%files sub2-domain_API-UI-Display_Server


#########
## UIX ##
#########
%package sub1-domain_API-UIX
Summary:	UIX API Group
Suggests: %{name}-sub2-domain_API-UIX-Input_Method
Suggests: %{name}-sub2-domain_API-UIX-STT
Suggests: %{name}-sub2-domain_API-UIX-TTS
Suggests: %{name}-sub2-domain_API-UIX-Voice_control
Suggests: %{name}-sub2-domain_API-UIX-Voice_control_elementary
%description sub1-domain_API-UIX
Tizen block (set of packages) for Group of domain API-UIX
%files sub1-domain_API-UIX

### TODO - Input_Method ##
# Summary, description

%package sub2-domain_API-UIX-Input_Method
Summary:    Input_Method
%description sub2-domain_API-UIX-Input_Method
### TODO ###
# packakge list

%files sub2-domain_API-UIX-Input_Method


%package sub2-domain_API-UIX-STT
Summary:    STT

Requires: stt
Requires: org.tizen.stt-engine-default
Requires: gawk
Requires: %{name}-sub2-domain_API-Multimedia-Audio_IO
Requires: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model

%description sub2-domain_API-UIX-STT
STT(Speech-To-Text) provides functions to recognize the speech.

%files sub2-domain_API-UIX-STT


%package sub2-domain_API-UIX-TTS
Summary:    TTS

Requires: tts
Requires: org.tizen.tts-engine-default
Requires: tts-engine-rsc
Requires: gawk
Requires: %{name}-sub2-domain_API-Multimedia-Audio_IO
Requires: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model

%description sub2-domain_API-UIX-TTS
TTS(Text-To-Speech) provides functions to synthesize voice from text and play synthesized sound data.

%files sub2-domain_API-UIX-TTS


%package sub2-domain_API-UIX-Voice_control
Summary:    Voice_control

Requires: voice-control
Requires: vc-engine-default
Requires: %{name}-sub2-domain_API-UIX-STT

%description sub2-domain_API-UIX-Voice_control
Voice control provides functions to register commands and get notification when registered command is recognized.

%files sub2-domain_API-UIX-Voice_control


%package sub2-domain_API-UIX-Voice_control_elementary
Summary:    Voice_control_elementary

Requires: voice-control-elm
Requires: %{name}-sub2-domain_API-UIX-Voice_control

%description sub2-domain_API-UIX-Voice_control_elementary
Voice control elementary provides functions to control widget by voice commands.

%files sub2-domain_API-UIX-Voice_control_elementary


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

### TODO - json_Glib ##
# Summary, description

%package sub2-domain_API-Web-json_Glib
Summary:    json_Glib
%description sub2-domain_API-Web-json_Glib
### TODO ###
# packakge list

%files sub2-domain_API-Web-json_Glib


%package sub2-domain_API-Web-WebView
Summary:    WebView

Requires: chromium-efl
Requires: %{name}-sub2-domain_API-UI-Display_Server
Requires: %{name}-sub2-domain_API-UI-FontConfig

%description sub2-domain_API-Web-WebView
The WebView API provides functions to display web pages and control web pages.

%files sub2-domain_API-Web-WebView
