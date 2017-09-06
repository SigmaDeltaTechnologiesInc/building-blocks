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
Suggests:	%{name}-sub2-domain_API-Network-WiFi
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
Requires: amd-mod-rua
Requires: amd-mod-share
Requires: amd-mod-splash-screen
Requires: amd-mod-ui-core
Requires: amd-mod-wayland-core
Requires: %{name}-sub2-domain_API-UI-Display_Server
Requires: %{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires: %{name}-sub2-domain_API-UI-EFL_Extension
Requires: %{name}-sub2-domain_API-UI-FontConfig
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
%posttrans sub2-domain_API-AppFramework-Native_EFL_Widget_App_Model
%tizen_feature tizen.org/feature/shell.appwidget true

%package sub2-domain_API-AppFramework-Notification_API
Summary: Notification API
Requires: notification
Requires: data-provider-master
%description sub2-domain_API-AppFramework-Notification_API
This block supports notification API
%files sub2-domain_API-AppFramework-Notification_API
%posttrans sub2-domain_API-AppFramework-Notification_API
%tizen_feature tizen.org/feature/notification true

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
%posttrans sub2-domain_API-AppFramework-Badge_API
%tizen_feature tizen.org/feature/badge true

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

%package sub2-domain_API-Base-Common_Error
Summary:    Common-Error
Requires: libcom_err
%description sub2-domain_API-Base-Common_Error
Tizen block (set of packages) for Group of sub domain Common-Error

%files sub2-domain_API-Base-Common_Error

# Summary, description

%package sub2-domain_API-Base-Glib
Summary:    Glib

Requires: libglib
Requires: libgio
Requires: libgmodule
Requires: libgobject
Requires: libgthread

%description sub2-domain_API-Base-Glib

General Purpose Utility library

%files sub2-domain_API-Base-Glib


%package sub2-domain_API-Base-Glibc
Summary:    Glibc

Requires:glibc

%description sub2-domain_API-Base-Glibc
Glibc library

%files sub2-domain_API-Base-Glibc

%package sub2-domain_API-Base-LibXML
Summary:    LibXML
Requires: libxml2

%description sub2-domain_API-Base-LibXML

A library to manipulate XML files


%files sub2-domain_API-Base-LibXML

%package sub2-domain_API-Base-Minizip
Summary:    Minizip

Requires: minizip

%description sub2-domain_API-Base-Minizip

Data Compression Library


%files sub2-domain_API-Base-Minizip

%package sub2-domain_API-Base-OpenMP
Summary:    OpenMP
Requires: libgomp
%description sub2-domain_API-Base-OpenMP

an application programming interface (API) that supports multi-platform shared memory multiprocessing

%files sub2-domain_API-Base-OpenMP

%package sub2-domain_API-Base-Sqlite
Summary:    Sqlite
Requires: sqlite

%description sub2-domain_API-Base-Sqlite
This block is possible to use sqlite3 and libsqlite.

%files sub2-domain_API-Base-Sqlite


%package sub2-domain_API-Base-Utils
Summary:    Base-Utils
Requires: capi-base-utils

%description sub2-domain_API-Base-Utils
This block supports base-utils API for internationalization and localization

%files sub2-domain_API-Base-Utils

%package sub2-domain_API-Base-zlib
Summary:    zlib
Requires: zlib

%description sub2-domain_API-Base-zlib

Data Compression Library


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

#############
## Context ##
#############
%package sub1-domain_API-Context
Summary:	Context API Group
Suggests: %{name}-sub2-domain_API-Context-Activity_Geusture_Recognition
Suggests: %{name}-sub2-domain_API-Context-Contextual_History
Suggests: %{name}-sub2-domain_API-Context-Contextual_Trigger
%description sub1-domain_API-Context
Tizen block (set of packages) for Group of domain API-Context
%files sub1-domain_API-Context

%package sub2-domain_API-Context-Activity_Geusture_Recognition
Summary:    Activity/Geusture Recognition
Requires: capi-context-motion
Requires: %{name}-sub2-domain_API-System-Sensor_Listener
%description sub2-domain_API-Context-Activity_Geusture_Recognition
Activity/Gesture Recognition provides functions to recognize user activities and gestures.
%files sub2-domain_API-Context-Activity_Geusture_Recognition

%package sub2-domain_API-Context-Contextual_History
Summary:    Contextual History
Requires: capi-context
Requires: context-app-history
%description sub2-domain_API-Context-Contextual_History
Contextual History provides functions to retrieve user's device usage statistics and patterns.
%files sub2-domain_API-Context-Contextual_History

%package sub2-domain_API-Context-Contextual_Trigger
Summary:    Contextual Trigger
Requires: capi-context
Requires: context-job-scheduler
%description sub2-domain_API-Context-Contextual_Trigger
Contextual Trigger provides functions to define task triggering rules based on device status and user activities.
%files sub2-domain_API-Context-Contextual_Trigger



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
Summary:	Maps_Service
Requires:	capi-maps-service
Requires:	%{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires:	%{name}-sub2-domain_API-Network-Connection
Suggests:	%{name}-sub2-domain_API-Maps-Here_Plugin
Suggests:	%{name}-sub2-domain_API-Maps-Mapzen_Plugin

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

%package sub2-domain_API-Maps-Mapzen_Plugin
Summary:    Mapzen_Plugin
Requires:	maps-plugin-mapzen

%description sub2-domain_API-Maps-Mapzen_Plugin
This block supports MAPZEN plugin.

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
Suggests:	%{name}-sub2-domain_API-Network-WiFi
%description sub2-domain_API-Messaging-Push
This block supports transferation push messages between devices and server. Also, to use this feature, either Data Network or Wi-Fi connection is required. Once you check the Push Client before Image Creation, it will be included the image. For this, either Data Network or Wi-Fi connection is required.
%files sub2-domain_API-Messaging-Push
%posttrans sub2-domain_API-Messaging-Push
%tizen_feature tizen.org/feature/network.push true

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
Suggests: %{name}-sub2-domain_API-Multimedia-Stream_Recorder
Suggests: %{name}-sub2-domain_API-Multimedia-Thumbnail_Util
Suggests: %{name}-sub2-domain_API-Multimedia-Tone_Player
Suggests: %{name}-sub2-domain_API-Multimedia-Video_Util
Suggests: %{name}-sub2-domain_API-Multimedia-WAV_Player
Suggests: %{name}-sub2-domain_API-Multimedia-libEXIF
Suggests: %{name}-sub2-domain_API-Multimedia-AudioCore
Suggests: %{name}-sub2-domain_API-Multimedia-Configuration
%description sub1-domain_API-Multimedia
Tizen block (set of packages) for Group of domain API-Multimedia
%files sub1-domain_API-Multimedia

%package sub2-domain_API-Multimedia-Audio_IO
Summary:    Audio_IO

# packakge list
Requires:capi-media-audio-io
Requires:%{name}-sub2-domain_API-Multimedia-AudioCore

%description sub2-domain_API-Multimedia-Audio_IO
AudioIO provides functions to play/record raw PCM audio data.

%files sub2-domain_API-Multimedia-Audio_IO

%package sub2-domain_API-Multimedia-Camera
Summary:    Camera
Requires:capi-media-camera
Requires:mmsvc-camera
Requires:mused
Requires:%{name}-sub2-domain_API-Multimedia-AudioCore
Requires:%{name}-sub2-domain_API-Multimedia-Configuration
Requires:%{name}-sub2-domain_API-UI-TBM_Surface

#camera
Suggests:gst-plugins-camera-n4
Suggests:gst-plugins-good

%description sub2-domain_API-Multimedia-Camera
The camera provides the ability to capture photos and support setting up notifications for state changes of capturing, previewing, focusing, information about resolution and binary format and functions for picture manipulations like sepia negative and many more.
OPTIONAL : You should choose packages depends on target and hardware.
First, Check config file 'mmfw-sysconf-target-{DEVICE_WHAT_YOU_WANT}'(e.g mmfw-sysconf-target-tm1).
Second, check camera plugin depends on target.
TM1:camera-interface-sprd-sc7730, gst-plugins-camera-sc7730s, gst-plugins-good.
TM2(n4):gst-plugins-camera-n4, gst-plugins-good

%files sub2-domain_API-Multimedia-Camera

%package sub2-domain_API-Multimedia-Image_Util
Summary:    Image_Util
Requires: capi-media-image-util
%description sub2-domain_API-Multimedia-Image_Util
Enabling Image Util and it is possible to use Image Util API
%files sub2-domain_API-Multimedia-Image_Util

%package sub2-domain_API-Multimedia-Media_Codec
Summary:    Media_Codec
Requires: capi-media-codec
Requires: gst-libav
Requires: gst-plugins-bad
Requires: %{name}-sub2-domain_API-UI-TBM_Surface
Requires: %{name}-sub2-domain_API-Multimedia-Configuration

Suggests: gst-omx
Suggests: libomxil-e54xx

#TW1
Suggests: libomxil-e3250-v4l2
#TW2
Suggests: libomxil-e7270-v4l2


%description sub2-domain_API-Multimedia-Media_Codec
Enabling Media Codec and it is possible to user Media Codec API
About OPTIONAL selection:<br>
You should choose packages depends on target and hardware.<br>
Select the config file 'mmfw-sysconf-target-{DEVICE_WHAT_YOU_WANT}'(e.g mmfw-sysconf-target-tm1).<br>
TM2(n4) : libomxil-e54xx <br>
TW1 : libomxil-e3250-v4l2 <br>
TW2 : libomxil-e7270-v4l2 <br>
XU3 : libomxil-e54xx <br>
AT5/10 : libomxil-e54xx <br>
ARTIK710 : libomxil-e54xx <br>
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

%package sub2-domain_API-Multimedia-Media_Streamer
Summary:  Media_Streamer
Requires: capi-media-streamer
Requires: gst-plugins-good
Requires: gst-plugins-bad
Requires: gst-plugins-ugly
Requires: gst-plugins-tizen
Requires: gst-libav
Requires: libmm-utility
Requires: %{name}-sub2-domain_API-Multimedia-AudioCore
Requires: %{name}-sub2-domain_API-Multimedia-Configuration

# required building block for video rendering
Requires: %{name}-sub2-domain_API-System-Storage
Requires: %{name}-sub2-domain_API-UI-TBM_Surface
Requires: %{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires: %{name}-sub2-domain_API-Network-WiFi

%description sub2-domain_API-Multimedia-Media_Streamer
This block supports constructing the custom player and it gives the ability to controlling playback attributes.<br>
About OPTIONAL selection:<br>
You should choose packages depends on target and hardware.<br>
First, Select the config file 'mmfw-sysconf-target-{DEVICE_WHAT_YOU_WANT}'(e.g mmfw-sysconf-target-tm1).<br>
Second, Select the audio HAL depends on target. <br>

%files sub2-domain_API-Multimedia-Media_Streamer


%package sub2-domain_API-Multimedia-Media_Tool
Summary:    Media_Tool
Requires: capi-media-tool
Requires: %{name}-sub2-domain_API-UI-TBM_Surface
%description sub2-domain_API-Multimedia-Media_Tool
Enabling Media Tool and it is possible to user Media Tool API
%files sub2-domain_API-Multimedia-Media_Tool

%package sub2-domain_API-Multimedia-Media_Vision_Barcode
Summary:    Media_Vision_Barcode
Requires: capi-media-vision-barcode

%description sub2-domain_API-Multimedia-Media_Vision_Barcode
MediaVision Barcode API to generate or detect Barcode/QRcode

%files sub2-domain_API-Multimedia-Media_Vision_Barcode
%posttrans sub2-domain_API-Multimedia-Media_Vision_Barcode
%tizen_feature tizen.org/feature/vision.barcode_detection true
%tizen_feature tizen.org/feature/vision.barcode_generation true

%package sub2-domain_API-Multimedia-Media_Vision_Face
Summary:    Media_Vision_Face
Requires: capi-media-vision-face

%description sub2-domain_API-Multimedia-Media_Vision_Face
MediaVision Face API to detect, recognize, or track faces on images

%files sub2-domain_API-Multimedia-Media_Vision_Face
%posttrans sub2-domain_API-Multimedia-Media_Vision_Face
%tizen_feature tizen.org/feature/vision.face_recognition true

%package sub2-domain_API-Multimedia-Media_Vision_Image
Summary:    Media_Vision_Image
Requires: capi-media-vision-image

%description sub2-domain_API-Multimedia-Media_Vision_Image
MediaVision Image API to recognize and track planar objects on an image

%files sub2-domain_API-Multimedia-Media_Vision_Image
%posttrans sub2-domain_API-Multimedia-Media_Vision_Image
%tizen_feature tizen.org/feature/vision.image_recognition true


%package sub2-domain_API-Multimedia-Media_Vision_Surveillance
Summary:    Media_Vision_Surveillance
Requires: capi-media-vision-surveillance

%description sub2-domain_API-Multimedia-Media_Vision_Surveillance
MediaVision Surveillance API to enable video surveillance by subscribing events,
person (dis)appearance, recognized face, movement changes on videos.

%files sub2-domain_API-Multimedia-Media_Vision_Surveillance
%posttrans sub2-domain_API-Multimedia-Media_Vision_Surveillance
%tizen_feature tizen.org/feature/vision.face_recognition true
%tizen_feature tizen.org/feature/vision.image_recognition true

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

%package sub2-domain_API-Multimedia-OpenAL
Summary:    OpenAL

# packakge list
Requires:openal-soft
Requires:%{name}-sub2-domain_API-Multimedia-AudioCore

Suggests:freealut

%description sub2-domain_API-Multimedia-OpenAL
OpenAL is designed for efficient rendering of 3-D positional audio.

%files sub2-domain_API-Multimedia-OpenAL

%package sub2-domain_API-Multimedia-Player
Summary:  Player
Requires: capi-media-player
Requires: mmsvc-player
Requires: gst-plugins-good
Requires: gst-plugins-bad
Requires: gst-plugins-ugly
Requires: gst-plugins-tizen
Requires: gst-libav
Requires: %{name}-sub2-domain_API-Multimedia-AudioCore
Requires: %{name}-sub2-domain_API-Multimedia-Configuration

# required building block for video rendering
Requires: %{name}-sub2-domain_API-System-Storage
Requires: %{name}-sub2-domain_API-UI-TBM_Surface
Requires: %{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Requires: %{name}-sub2-domain_API-Network-WiFi

# target specific package list
Suggests: gst-omx
Suggests: libomxil-e54xx
Suggests: libomxil-e3250-v4l2
Suggests: libomxil-e7270-v4l2
Suggests: libomxil-vc4


%description sub2-domain_API-Multimedia-Player
This block supports playing multimedia content. Content can be played from a file, from the network, or from memory. <br>
It gives the ability to controlling media playback attributes, perform various status queries, and control the display. <br>
About OPTIONAL selection: <br>
You should choose packages depends on target and hardware. <br>
First, You have to select the gst-omx package except TM1 target to use hardware video decoder. <br>
Second, Select the config file 'mmfw-sysconf-target-{DEVICE_WHAT_YOU_WANT}'(e.g mmfw-sysconf-target-tm1). <br>
Third, Select the audio HAL and libomx package depends on target. <br>
TM2(n4) : libomxil-e54xx <br>
TW1 : libomxil-e3250-v4l2 <br>
TW2 : libomxil-e7270-v4l2 <br>
XU3 : libomxil-e54xx <br>
RPI3 : libomxil-vc4 <br>
AT5/10 : libomxil-e54xx <br>
ARTIK710 : libomxil-e54xx <br>
%files sub2-domain_API-Multimedia-Player


%package sub2-domain_API-Multimedia-Radio
Summary:    Radio
Requires: capi-media-radio
Requires: %{name}-sub2-domain_API-Multimedia-AudioCore
Requires: %{name}-sub2-domain_API-Multimedia-Configuration

%description sub2-domain_API-Multimedia-Radio
Enabling Radio and it is possible to use Radio API <br>
Radio API provides functions for accessing the radio <br>

%files sub2-domain_API-Multimedia-Radio

%package sub2-domain_API-Multimedia-Recorder
Summary:    Recorder
Requires:capi-media-recorder
Requires:mmsvc-recorder
Requires:mused
Requires:gst-plugins-good
Requires:gst-libav
Requires:gst-plugins-tizen
Requires:%{name}-sub2-domain_API-Multimedia-AudioCore
Requires:%{name}-sub2-domain_API-Multimedia-Configuration
Requires:%{name}-sub2-domain_API-UI-TBM_Surface
Requires:%{name}-sub2-domain_API-System-Storage

#codec
Suggests:libomxil-e3250-v4l2
Suggests:libomxil-e7270-v4l2
Suggests:libomxil-e54xx

%description sub2-domain_API-Multimedia-Recorder
The recorder provides the ability to create audio/video recorder, to start, stop and save the recorded content. It also provides methods to get/set various attributes of recorder.
OPTIONAL : You should choose packages depends on target and hardware.
First, Check config file 'mmfw-sysconf-target-{DEVICE_WHAT_YOU_WANT}'(e.g mmfw-sysconf-target-tm1).
Second, Check audio HAL depends on target.
Third, Check codec depends on target.
gst-plugins-sprdcodec-sc7730
libomxil-e3250-v4l2
libomxil-e7270-v4l2
libomxil-e54xx

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
Requires:%{name}-sub2-domain_API-Multimedia-AudioCore
Requires:%{name}-sub2-domain_API-Multimedia-Configuration
Requires:%{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Requires:%{name}-sub2-domain_API-Network-WiFi_Direct
Requires:%{name}-sub2-domain_API-Network-WiFi_Manager
Requires:%{name}-sub2-domain_API-UI-TBM_Surface

%description sub2-domain_API-Multimedia-Screen_Mirroring
Screen Mirroiring provides the ability to connect to and disconnect from a screen mirroring source, start, pause, and resume the screen mirroring as a 'SINK' (source: Stream sender, sink:Stream receiver). It follows 'Miracast standard'. OPTIONAL : You should choose packages depends on target and hardware. First, Check config file 'mmfw-sysconf-target-{DEVICE_WHAT_YOU_WANT}'(e.g mmfw-sysconf-target-tm1). Second, check audio HAL depends on target.
%files sub2-domain_API-Multimedia-Screen_Mirroring

%package sub2-domain_API-Multimedia-Sound_Manager
Summary:    Sound_Manager

# packakge list
Requires:capi-media-sound-manager
Requires:%{name}-sub2-domain_API-Multimedia-AudioCore

%description sub2-domain_API-Multimedia-Sound_Manager
Sound_Manager provides functions to get and set of sound parameters such as volume,device and focus operations.

%files sub2-domain_API-Multimedia-Sound_Manager

%package sub2-domain_API-Multimedia-Stream_Recorder
Summary:    Stream Recorder
Requires:capi-media-streamrecorder
Requires:libmm-streamrecorder
Requires:gst-plugins-tizen
Requires:gst-plugins-base
Requires:gst-plugins-bad
Requires:gst-plugins-good
Requires:gst-plugins-ugly
Requires:gst-libav
Requires:gstreamer
Requires:%{name}-sub2-domain_API-UI-TBM_Surface
Requires:%{name}-sub2-domain_API-System-Storage
Requires:%{name}-sub2-domain_API-Multimedia-Configuration

%description sub2-domain_API-Multimedia-Stream_Recorder
StreamRecorder provides APIs for raw image and audio data recording.

%files sub2-domain_API-Multimedia-Stream_Recorder

%package sub2-domain_API-Multimedia-Thumbnail_Util
Summary:    Thumbnail_Util
Requires: capi-media-thumbnail-util
Requires: media-server
Requires: media-thumbnail-server
%description sub2-domain_API-Multimedia-Thumbnail_Util
Enabling Thumbnail Util and it is possible to use Thumbnail Util API
%files sub2-domain_API-Multimedia-Thumbnail_Util

%package sub2-domain_API-Multimedia-Tone_Player
Summary:    Tone_Player

# packakge list
Requires:capi-media-tone-player
Requires:%{name}-sub2-domain_API-Multimedia-AudioCore

%description sub2-domain_API-Multimedia-Tone_Player
Tone_Player provides functions for playing the DTMF or predefined tone.

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
%posttrans sub2-domain_API-Multimedia-Video_Util
%tizen_feature tizen.org/feature/multimedia.transcoder true

%package sub2-domain_API-Multimedia-WAV_Player
Summary:    WAV_Player

# packakge list
Requires:capi-media-wav-player
Requires:%{name}-sub2-domain_API-Multimedia-AudioCore

%description sub2-domain_API-Multimedia-WAV_Player
Wav_Player provides functions for playing the waveform audio file format(*.wav,*.ogg).

%files sub2-domain_API-Multimedia-WAV_Player

%package sub2-domain_API-Multimedia-libEXIF
Summary:    libEXIF
Requires:libexif

%description sub2-domain_API-Multimedia-libEXIF
The libEXIF provides the ability to reads and writes EXIF metainformation from and to image files.

%files sub2-domain_API-Multimedia-libEXIF

%package sub2-domain_API-Multimedia-AudioCore
Summary: AudioCore
Requires:pulseaudio-modules-tizen
Requires: %{name}-sub2-domain_API-Multimedia-Configuration

Suggests:pulseaudio-module-bluetooth

#Utilities
Suggests:alsa-utils
Suggests:pulseaudio-utils

#TM1
Suggests:audio-hal-sc7727
Suggests:audio-config-sc-TM1-sc7730

#TM2
Suggests:audio-hal-wm5110
Suggests:alsa-ucm-data-wm5110

#TW1
Suggests:audio-hal-wm1831
Suggests:audio-config-wm1831-orbis

#TW2
Suggests:audio-hal-wm1831-tw2
Suggests:audio-config-wm1831-tw2

#ARTIK 5/10
Suggests:audio-hal-ak4953
Suggests:alsa-ucm-data-ak4953
#ARTIK 710
Suggests:audio-hal-alc5658
Suggests:alsa-ucm-data-alc5658

#RPI3
Suggests:audio-hal-bcm2837

%description sub2-domain_API-Multimedia-AudioCore
AudioCore block includes core audio modules including pulseaudio and essential pulseaudio-modules.<br>
Following optional H/W packages must be selected based on actual target.<br>
TM1 : audio-hal-sc7727, audio-config-sc-TM1-sc7730<br>
TM2 : audio-hal-wm5110, alsa-ucm-data-wm5110<br>
TW1 : audio-hal-wm1831, audio-config-wm1831-orbis<br>
TW2 : audio-hal-wm1831-tw2, audio-config-wm1831-tw2<br>
U3/XU3 : audio-hal-max98090, alsa-ucm-data-max98090<br>
ARTIK 5/10 : audio-hal-ak4953, alsa-ucm-data-ak4953<br>
ARTIK 710 : audio-hal-alc5658, alsa-ucm-data-alc5658<br>
RPI3 : audio-hal-bcm2837, mmfw-sysconf-target-rpi3<br>

%files sub2-domain_API-Multimedia-AudioCore

%package sub2-domain_API-Multimedia-Configuration
Summary: Configuration

Suggests:mmfw-sysconf-target-tm1
Suggests:mmfw-sysconf-target-n4
Suggests:mmfw-sysconf-target-tw1
Suggests:mmfw-sysconf-target-tw2
Suggests:mmfw-sysconf-target-artik10
Suggests:mmfw-sysconf-target-rpi3
Suggests:mmfw-sysconf-target-u3

%description sub2-domain_API-Multimedia-Configuration
Multimedia Framework system configuration package including ini, conf and etc files.

%files sub2-domain_API-Multimedia-Configuration

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
%posttrans sub2-domain_API-Network-Bluetooth_BREDR
%tizen_feature tizen.org/feature/network.bluetooth true
%tizen_feature tizen.org/feature/network.bluetooth.health true
%tizen_feature tizen.org/feature/network.bluetooth.hid true
%tizen_feature tizen.org/feature/network.bluetooth.hid_device true

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
%posttrans sub2-domain_API-Network-Bluetooth_Call_Audio
%tizen_feature tizen.org/feature/network.bluetooth.audio.call true

%package sub2-domain_API-Network-Bluetooth_Media_Audio
Summary:    Bluetooth_Media_Audio

Requires: %{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires: sbc
Requires: pulseaudio-module-bluetooth

%description sub2-domain_API-Network-Bluetooth_Media_Audio
Enabling Bluetooth Media Audio functionality

%files sub2-domain_API-Network-Bluetooth_Media_Audio
%posttrans sub2-domain_API-Network-Bluetooth_Media_Audio
%tizen_feature tizen.org/feature/network.bluetooth.audio.media true
%tizen_feature tizen.org/feature/network.bluetooth.audio.controller true

%package sub2-domain_API-Network-Bluetooth_Transfer
Summary:    Bluetooth_Transfer

Requires: %{name}-sub2-domain_API-Network-Bluetooth_BREDR
Requires: obexd

%description sub2-domain_API-Network-Bluetooth_Transfer
Enabling Bluetooth Transfer functionality(OPP, PBAP)

%files sub2-domain_API-Network-Bluetooth_Transfer
%posttrans sub2-domain_API-Network-Bluetooth_Transfer
%tizen_feature tizen.org/feature/network.bluetooth.opp true
%tizen_feature tizen.org/feature/network.bluetooth.phonebook.client true

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
%posttrans sub2-domain_API-Network-Bluetooth_LE
%tizen_feature tizen.org/feature/network.bluetooth.le true
%tizen_feature tizen.org/feature/network.bluetooth.ipsp true

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
%posttrans sub2-domain_API-Network-ASP
%tizen_feature tizen.org/feature/network.asp true

%package sub2-domain_API-Network-Connection
Summary:    Connection
Requires:	capi-network-connection
Requires:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Network-Connection
Tizen block (set of packages) for API sets of domain API-Network-Connection <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-Connection

%package sub2-domain_API-Network-Curl
Summary:    Curl
Requires:	libcurl
Requires:	%{name}-sub2-domain_API-Network-WiFi
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
Requires:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Network-DNSSD
Tizen block (set of packages) for API sets of domain API-Network-DNSSD <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-DNSSD
%posttrans sub2-domain_API-Network-DNSSD
%tizen_feature tizen.org/feature/network.service_discovery.dnssd true

%package sub2-domain_API-Network-HTTP
Summary:    HTTP
Requires:	capi-network-http
Requires:	%{name}-sub2-domain_API-Network-WiFi
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
%posttrans sub2-domain_API-Network-IoTCon
%tizen_feature tizen.org/feature/iot.ocf true

%package sub2-domain_API-Network-MTP
Summary:    MTP
Requires: capi-network-mtp
Requires: mtp-initiator
Requires: libmtp
%description sub2-domain_API-Network-MTP
Enabling MTP(Media Transfer Protocol) Initiator and it is possible to user MTP API
%files sub2-domain_API-Network-MTP
%posttrans sub2-domain_API-Network-MTP
%tizen_feature tizen.org/feature/network.mtp true

%package sub2-domain_API-Network-NFC
Summary:    NFC
Requires: capi-network-nfc
Requires: nfc-common-lib
Requires: nfc-manager
%description sub2-domain_API-Network-NFC
Enabling NFC Manager and it is possible to user NFC API
%files sub2-domain_API-Network-NFC
%posttrans sub2-domain_API-Network-NFC
%tizen_feature tizen.org/feature/network.nfc true

%package sub2-domain_API-Network-SSDP
Summary:    SSDP
Requires:	libnsd-ssdp
Requires:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Network-SSDP
Tizen block (set of packages) for API sets of domain API-Network-SSDP <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-SSDP
%posttrans sub2-domain_API-Network-SSDP
%tizen_feature tizen.org/feature/network.service_discovery.ssdp true

%package sub2-domain_API-Network-STC
Summary:    STC
Requires:	capi-network-stc
Requires:	stc-manager
Requires:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
Suggests:	%{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Network-STC
Tizen block (set of packages) for API sets of domain API-Network-STC <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-STC
%posttrans sub2-domain_API-Network-STC
%tizen_feature tizen.org/feature/network.traffic_control true

%package sub2-domain_API-Network-Smartcard
Summary:    Smartcard
Requires: capi-network-smartcard
Requires: smartcard-service-common
Requires: smartcard-service
Suggests: smartcard-plugin-nfc
Suggests: smartcard-plugin-uicc
Suggests: %{name}-sub2-domain_API-Network-NFC
Suggests: %{name}-sub1-domain_API-Telephony
%description sub2-domain_API-Network-Smartcard
Enabling Smartcard(Secure Element) Manager and it is possible to user Smartcard API. <br>
In case of USIM device, 'smartcard-plugin-uicc' and 'sub1-domain_API-Telephony' have to be chosen. <br>
In case of embedded SE, 'smartcard-plugin-nfc' and 'sub2-domain_API-Network-NFC' have to be chosen.
%files sub2-domain_API-Network-Smartcard
%posttrans sub2-domain_API-Network-Smartcard
%tizen_feature tizen.org/feature/network.secure_element true
%tizen_feature tizen.org/feature/network.secure_element.ese true
%tizen_feature tizen.org/feature/network.secure_element.uicc true

%package sub2-domain_API-Network-VPN_Service
Summary:    VPN_Service
Requires:	capi-vpnsvc
#Requires:	net-config
Requires:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager
%description sub2-domain_API-Network-VPN_Service
Tizen block (set of packages) for API sets of domain API-Network-VPN_Service <br>
To use this feature, either Data Network or Wi-Fi connection is required. <br>
%files sub2-domain_API-Network-VPN_Service
%posttrans sub2-domain_API-Network-VPN_Service
%tizen_feature tizen.org/feature/network.vpn true

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
%posttrans sub2-domain_API-Network-WiFi
%tizen_feature tizen.org/feature/network.wifi true

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
%posttrans sub2-domain_API-Network-WiFi_Manager
%tizen_feature tizen.org/feature/network.wifi true

%package sub2-domain_API-Network-WiFi_Direct
Summary:    WiFi_Direct
Requires:	capi-network-wifi-direct
Requires:	wifi-direct-manager
Requires:	wifi-direct-plugin-wpasupplicant
Requires:	%{name}-sub2-domain_API-Network-WiFi
Requires:	%{name}-sub2-domain_API-Network-WiFi_Manager

#Profiles
Suggests:	wifi-direct-manager-profile_common
Suggests:	wifi-direct-manager-profile_mobile
Suggests:	wifi-direct-manager-profile_tv
Suggests:	wifi-direct-manager-profile_wearable
Suggests:	wifi-direct-manager-extension-TM1

%description sub2-domain_API-Network-WiFi_Direct
Tizen block (set of packages) for API sets of domain API-Network-WiFiDirect <br>
TM1 target : wifi-direct-manager-extension-TM1, wifi-direct-manager-profile_mobile <br>
TM2 target : wifi-direct-manager-profile_mobile <br>
TW1 target : wifi-direct-manager-profile_wearable <br>
TW2 target : wifi-direct-manager-profile_wearable <br>
tv profile : wifi-direct-manager-profile_tv <br>
ivi profile : wifi-direct-manager-profile_common <br>
common profile : Not supported <br>
%files sub2-domain_API-Network-WiFi_Direct
%posttrans sub2-domain_API-Network-WiFi_Direct
%tizen_feature tizen.org/feature/network.wifi.direct true
%tizen_feature tizen.org/feature/network.wifi.direct.display true
%tizen_feature tizen.org/feature/network.wifi.direct.service_discovery false

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

############
## System ##
############
%package sub1-domain_API-System
Summary:	System API Group
Suggests: %{name}-sub2-domain_API-System-Device_Battery
Suggests: %{name}-sub2-domain_API-System-Device_Callback
Suggests: %{name}-sub2-domain_API-System-Device_Display
Suggests: %{name}-sub2-domain_API-System-Device_Haptic
Suggests: %{name}-sub2-domain_API-System-Device_IR
Suggests: %{name}-sub2-domain_API-System-Device_Led
Suggests: %{name}-sub2-domain_API-System-Device_Power
Suggests: %{name}-sub2-domain_API-System-Feedback
Suggests: %{name}-sub2-domain_API-System-Runtime_information
Suggests: %{name}-sub2-domain_API-System-Runtime_information_Light
Suggests: %{name}-sub2-domain_API-System-Runtime_information_Headless
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

%package sub2-domain_API-System-Device_Battery
Summary:    Device_Battery
Requires: deviced
Requires: capi-system-device
Suggests: deviced-profile_mobile
Suggests: deviced-profile_common
Suggests: deviced-profile_wearable
Suggests: deviced-profile_tv
Suggests: deviced-profile_ivi
Suggests: device-manager-plugin-sc7730
Suggests: device-manager-plugin-artik
Suggests: device-manager-plugin-emul
Suggests: device-manager-plugin-exynos3250
Suggests: device-manager-plugin-exynos5433
Suggests: device-manager-plugin-exynos7270
Suggests: device-manager-plugin-odroid
Suggests: device-manager-plugin-rpi3
%description sub2-domain_API-System-Device_Battery
Tizen block (set of packages) for Group of sub domain Device_Battery.
If you do not want to use Device_Battery APIs, you do not need to choose.
However, if you want to use them, you have to choose at least one item in each deviced-profile_xxxx and device-manager-plugin-xxxx.
Those have a dependancy on Profile and Hardware.
So, before you select, you have to make sure that which Profile and hardware you have.
Then choose proper combination.
For example, deviced-profile_mobile and device-manager-plugin-sc7730 for mobile
             deviced-profile_common and device-manager-plugin-rpi3 for rpi3
%files sub2-domain_API-System-Device_Battery
%posttrans sub2-domain_API-System-Device_Battery
%tizen_feature tizen.org/feature/battery true

%package sub2-domain_API-System-Device_Callback
Summary:    Device_Callback
Requires: deviced
Requires: capi-system-device
Suggests: deviced-profile_mobile
Suggests: deviced-profile_common
Suggests: deviced-profile_wearable
Suggests: deviced-profile_tv
Suggests: deviced-profile_ivi
Suggests: device-manager-plugin-sc7730
Suggests: device-manager-plugin-artik
Suggests: device-manager-plugin-emul
Suggests: device-manager-plugin-exynos3250
Suggests: device-manager-plugin-exynos5433
Suggests: device-manager-plugin-exynos7270
Suggests: device-manager-plugin-odroid
Suggests: device-manager-plugin-rpi3
%description sub2-domain_API-System-Device_Callback
Tizen block (set of packages) for Group of sub domain Device_Callback.
If you do not want to use Device_Callback APIs, you do not need to choose.
However, if you want to use them, you have to choose at least one item in each deviced-profile_xxxx and device-manager-plugin-xxxx.
Those have a dependancy on Profile and Hardware.
So, before you select, you have to make sure that which Profile and hardware you have.
Then choose proper combination.
For example, deviced-profile_mobile and device-manager-plugin-sc7730 for mobile
             deviced-profile_common and device-manager-plugin-rpi3 for rpi3
%files sub2-domain_API-System-Device_Callback

%package sub2-domain_API-System-Device_Display
Summary:  Device_Display
Requires: deviced
Requires: capi-system-device
Suggests: deviced-profile_mobile
Suggests: deviced-profile_common
Suggests: deviced-profile_wearable
Suggests: deviced-profile_tv
Suggests: deviced-profile_ivi
Suggests: device-manager-plugin-sc7730
Suggests: device-manager-plugin-artik
Suggests: device-manager-plugin-emul
Suggests: device-manager-plugin-exynos3250
Suggests: device-manager-plugin-exynos5433
Suggests: device-manager-plugin-exynos7270
Suggests: device-manager-plugin-odroid
Suggests: device-manager-plugin-rpi3
%description sub2-domain_API-System-Device_Display
Tizen block (set of packages) for Group of sub domain Device_Display.
If you do not want to use Device_Display APIs, you do not need to choose.
However, if you want to use them, you have to choose at least one item in each deviced-profile_xxxx and device-manager-plugin-xxxx.
Those have a dependancy on Profile and Hardware.
So, before you select, you have to make sure that which Profile and hardware you have.
Then choose proper combination.
For example, deviced-profile_mobile and device-manager-plugin-sc7730 for mobile
             deviced-profile_common and device-manager-plugin-rpi3 for rpi3
%files sub2-domain_API-System-Device_Display

%package sub2-domain_API-System-Device_Haptic
Summary:    Device_Haptic
Requires: feedbackd
Requires: capi-system-device
Suggests: feedbackd-profile_mobile
Suggests: feedbackd-profile_wearable
%description sub2-domain_API-System-Device_Haptic
Tizen block (set of packages) for Group of sub domain Device_Haptic.
If you do not want to use Device_Haptic APIs, you do not need to choose.
However, if you want to use them, you have to choose at least one item in feedbackd-profile_xxxx.
Haptic has a dependancy on Profile.
Before you select, you have to make sure that which Profile you have.
Then choose proper one.
For example, feedbackd-profile_mobile for mobile
%files sub2-domain_API-System-Device_Haptic

%package sub2-domain_API-System-Device_IR
Summary:    Device_IR
Requires: deviced
Requires: capi-system-device
Suggests: deviced-profile_mobile
Suggests: deviced-profile_common
Suggests: deviced-profile_wearable
Suggests: deviced-profile_tv
Suggests: deviced-profile_ivi
Suggests: device-manager-plugin-sc7730
Suggests: device-manager-plugin-artik
Suggests: device-manager-plugin-emul
Suggests: device-manager-plugin-exynos3250
Suggests: device-manager-plugin-exynos5433
Suggests: device-manager-plugin-exynos7270
Suggests: device-manager-plugin-odroid
Suggests: device-manager-plugin-rpi3
%description sub2-domain_API-System-Device_IR
Tizen block (set of packages) for Group of sub domain Device_IR.
If you do not want to use Device_IR APIs, you do not need to choose.
However, if you want to use them, you have to choose at least one item in each deviced-profile_xxxx and device-manager-plugin-xxxx.
Those have a dependancy on Profile and Hardware.
So, before you select, you have to make sure that which Profile and hardware you have.
Then choose proper combination.
For example, deviced-profile_mobile and device-manager-plugin-sc7730 for mobile
             deviced-profile_common and device-manager-plugin-rpi3 for rpi3
%files sub2-domain_API-System-Device_IR
%posttrans sub2-domain_API-System-Device_IR
%tizen_feature tizen.org/feature/consumer_ir true

%package sub2-domain_API-System-Device_Led
Summary:    Device_Led
Requires: deviced
Requires: capi-system-device
Suggests: deviced-profile_mobile
Suggests: deviced-profile_common
Suggests: deviced-profile_wearable
Suggests: deviced-profile_tv
Suggests: deviced-profile_ivi
Suggests: device-manager-plugin-sc7730
Suggests: device-manager-plugin-artik
Suggests: device-manager-plugin-emul
Suggests: device-manager-plugin-exynos3250
Suggests: device-manager-plugin-exynos5433
Suggests: device-manager-plugin-exynos7270
Suggests: device-manager-plugin-odroid
Suggests: device-manager-plugin-rpi3
%description sub2-domain_API-System-Device_Led
Tizen block (set of packages) for Group of sub domain Device_Led.
If you do not want to use Device_Led APIs, you do not need to choose.
However, if you want to use them, you have to choose at least one item in each deviced-profile_xxxx and device-manager-plugin-xxxx.
Those have a dependancy on Profile and Hardware.
So, before you select, you have to make sure that which Profile and hardware you have.
Then choose proper combination.
For example, deviced-profile_mobile and device-manager-plugin-sc7730 for mobile
             deviced-profile_common and device-manager-plugin-rpi3 for rpi3
%files sub2-domain_API-System-Device_Led
%posttrans sub2-domain_API-System-Device_Led
%tizen_feature tizen.org/feature/led true

%package sub2-domain_API-System-Device_Power
Summary:    Device_Power
Requires: deviced
Requires: capi-system-device
Suggests: deviced-profile_mobile
Suggests: deviced-profile_common
Suggests: deviced-profile_wearable
Suggests: deviced-profile_tv
Suggests: deviced-profile_ivi
Suggests: device-manager-plugin-sc7730
Suggests: device-manager-plugin-artik
Suggests: device-manager-plugin-emul
Suggests: device-manager-plugin-exynos3250
Suggests: device-manager-plugin-exynos5433
Suggests: device-manager-plugin-exynos7270
Suggests: device-manager-plugin-odroid
Suggests: device-manager-plugin-rpi3
%description sub2-domain_API-System-Device_Power
If you do not want to use Device_Power APIs, you do not need to choose.
However, if you want to use them, you have to choose at least one item in each deviced-profile_xxxx and device-manager-plugin-xxxx.
Those have a dependancy on Profile and Hardware.
So, before you select, you have to make sure that which Profile and hardware you have
Then choose proper combination.
For example, deviced-profile_mobile and device-manager-plugin-sc7730 for mobile
             deviced-profile_common and device-manager-plugin-rpi3 for rpi3
%files sub2-domain_API-System-Device_Power

%package sub2-domain_API-System-Feedback
Summary:    Feedback
Requires: %{name}-sub2-domain_API-Multimedia-Audio_IO
Requires: feedbackd
Requires: libfeedback
Suggests: feedbackd-profile_mobile
Suggests: feedbackd-profile_wearable
Suggests: svi-data-profile_common
Suggests: svi-data-profile_mobile
Suggests: svi-data-profile_wearable
%description sub2-domain_API-System-Feedback
Tizen block (set of packages) for Group of sub domain Feedback.
Feedback is only available for mobile, wearable and common.
If you do not want to use Feedback APIs, you do not need to choose.
However, if you want to use them, you have to choose at least one item in each feedbackd-profile_xxxx and svi-data-profile_xxxx.
Those have a dependancy on Profile.
Before you select, you have to make sure that which Profile you have.
Then choose proper combination.
For example, svi-data-profile_common for common
             feedbackd-profile_mobile and svi-data-profile_mobile for mobile
%files sub2-domain_API-System-Feedback

%package sub2-domain_API-System-Runtime_information
Summary:    Runtime information with Resourced
Requires:   capi-system-runtime-info
Requires:   resourced
Conflicts:  %{name}-sub2-domain_API-System-Runtime_information_Light
Conflicts:  %{name}-sub2-domain_API-System-Runtime_information_Headless
%description sub2-domain_API-System-Runtime_information
capi-system-runtime-info provides the current system state.<br>
To get the process information, it needs resourced.<br>
This building block uses full-featured resourced.
%files sub2-domain_API-System-Runtime_information

%package sub2-domain_API-System-Runtime_information_Light
Summary:    Runtime information with Resourced-light
Requires:   capi-system-runtime-info
Requires:   resourced-light
Conflicts:  %{name}-sub2-domain_API-System-Runtime_information
Conflicts:  %{name}-sub2-domain_API-System-Runtime_information_Headless
%description sub2-domain_API-System-Runtime_information_Light
capi-system-runtime-info provides the current system state.<br>
To get the process information, it needs resourced.<br>
This building block uses light-weight resourced.
%files sub2-domain_API-System-Runtime_information_Light

%package sub2-domain_API-System-Runtime_information_Headless
Summary:    Runtime information with Resourced-headless
Requires:   capi-system-runtime-info
Requires:   resourced-headless
Requires:   resourced-headless-common
Requires:   resourced-headless-proc-usage
Conflicts:  %{name}-sub2-domain_API-System-Runtime_information
Conflicts:  %{name}-sub2-domain_API-System-Runtime_information_Light
%description sub2-domain_API-System-Runtime_information_Headless
capi-system-runtime-info provides the current system state.<br>
To get the process information, it needs resourced.<br>
This building block uses the resourced for headless device.
%files sub2-domain_API-System-Runtime_information_Headless

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
For example, if you want to make a binary for TM1, you can choose the sensor-hal-tm1 package.<br>

%files sub2-domain_API-System-Sensor_Listener

%package sub2-domain_API-System-Sensor_Recorder
Summary:    Sensor_Recorder
Requires:   context-sensor-recorder
Requires:   %{name}-sub2-domain_API-System-Sensor_Listener

%description sub2-domain_API-System-Sensor_Recorder
This block supports sensor recorder API to record sensor data.<br>
You should choose HAL packages depends on target and hardware. HAL packages are listed in the Sensor_Listener block.
For example, if you want to make a binary for TM1, you can choose the sensor-hal-tm1 package.<br>

%files sub2-domain_API-System-Sensor_Recorder

%package sub2-domain_API-System-Storage
Summary:    Storage
Requires: storaged
Requires: storaged-module_block
Requires: storaged-module_storage
%description sub2-domain_API-System-Storage
Tizen block (set of packages) for Group of sub domain Storage
%files sub2-domain_API-System-Storage

%package sub2-domain_API-System-System_Information
Summary:    System information
Requires:   capi-system-info
%description sub2-domain_API-System-System_Information
capi-system-info provides a (fixed) device capability.
%files sub2-domain_API-System-System_Information

%package sub2-domain_API-System-System_Settings
Summary:    System_Settings
Requires:   capi-system-system-settings
%description sub2-domain_API-System-System_Settings
System setting api for get,set configuration
%files sub2-domain_API-System-System_Settings

%posttrans sub2-domain_API-System-System_Settings

%tizen_feature tizen.org/feature/systemsetting true
%tizen_feature tizen.org/feature/systemsetting.notification_email true


%package sub2-domain_API-System-T_Trace
Summary:    T_Trace
Requires: ttrace
%description sub2-domain_API-System-T_Trace
This block is possible to use ttrace.

%files sub2-domain_API-System-T_Trace

%package sub2-domain_API-System-USB_Host
Summary:    USB_Host
Requires: capi-system-usbhost
Requires: libusb
%description sub2-domain_API-System-USB_Host
Tizen block (set of packages) for Group of sub domain USB_Host
%files sub2-domain_API-System-USB_Host
%posttrans sub2-domain_API-System-USB_Host
%tizen_feature tizen.org/feature/usb.host true

%package sub2-domain_API-System-dlog
Summary:    dlog
Requires: libdlog
Requires: dlogutil
%description sub2-domain_API-System-dlog
Tizen block (set of packages) for Group of sub domain dlog
%files sub2-domain_API-System-dlog


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

%package sub2-domain_API-UI-Cairo
Summary:    Cairo
Requires:  libcairo
Suggests:  libcairo-gobject
Suggests:  libcairo-script-interpreter
%description sub2-domain_API-UI-Cairo
Cairo is a 2D graphics library with cross-device output support
while taking advantage of display hardware acceleration when available.<br>
libcairo (mandatory) contains 2D graphics functions for rendering to various output.<br>
libcairo-gobject contains functions integrate cairo with Glib's GObject type.<br>
libcairo-script-interpreter contains functions for executing and manipulating cairo execution traces.<br>

%files sub2-domain_API-UI-Cairo

%package sub2-domain_API-UI-Clipboard_History_Manager
Summary:    Clipboard History Manager
Requires:   cbhm
Requires:   %{name}-sub2-domain_API-UI-EFL_NativeUIToolkit

%description sub2-domain_API-UI-Clipboard_History_Manager
Tizen Clipboard History Manager Service

%files sub2-domain_API-UI-Clipboard_History_Manager


%package sub2-domain_API-UI-DALi
Summary:    DALi
Requires: dali-toolkit
Requires: dali-adaptor
Requires: %{name}-sub2-domain_API-UI-Display_Server
Requires: %{name}-sub2-domain_API-UI-FontConfig
# Profile
Suggests: dali-adaptor-profile_common
Suggests: dali-adaptor-profile_mobile
Suggests: dali-adaptor-profile_tv
Suggests: dali-adaptor-profile_wearable
Suggests: dali-adaptor-profile_ivi
# Resource
Suggests: dali-toolkit-resources_480x800
Suggests: dali-toolkit-resources_720x1280
Suggests: dali-toolkit-resources_1920x1080
# Extension
Suggests: dali-extension
Suggests: dali-extension-key-extension
# Video view support
Suggests: dali-adaptor-dali-video-player-plugin
Suggests: %{name}-sub2-domain_API-Multimedia-Player

%description sub2-domain_API-UI-DALi
Cross-platform 3D UI Toolkit for embedded systems.
DALi's 3D user interface engine enables you to create rich and high-performance UI applications.
You should consider options
1. dali-toolkit-resources_*x* for screen resolution.
2. dali-adaptor-dali-video-player-plugin and Player if you use dali-toolkit::VideoView.
3. dali-extension and dali-extension-key-extension if you want to add custom key map.


%files sub2-domain_API-UI-DALi


%package sub2-domain_API-UI-EFL_MainLoop
Summary:    EFL_MainLoop
Requires:   ecore-core

%description sub2-domain_API-UI-EFL_MainLoop
This is the core main-loop, system events and execution layer. This
handles running the main loop, integrating with external data and
timing sources (the system clock, file descriptors, system signals),
and producing an event queue, walking that queue and dispatching
events to appropriate callbacks.

%files sub2-domain_API-UI-EFL_MainLoop


%package sub2-domain_API-UI-EFL_NativeUIToolkit
Summary:    EFL_NativeUIToolkit
Requires:   ecore-buffer
Requires:   ecore-drm
Requires:   elementary
Requires:   %{name}-sub2-domain_API-UI-Display_Server
#config
Requires:   efl-config
#misc
Suggests:   efl-misc-profile_common
Suggests:   efl-misc-profile_mobile
Suggests:   efl-misc-profile_wearable
Suggests:   efl-misc-profile_tv
Suggests:   efl-misc-profile_ivi
#modules
Suggests:   efl-modules-profile_common
Suggests:   efl-modules-profile_mobile
Suggests:   efl-modules-profile_wearable
Suggests:   efl-modules-profile_tv
Suggests:   efl-modules-profile_ivi
#themes
Suggests:   efl-theme-tizen-common
Suggests:   efl-theme-tizen-mobile
Suggests:   efl-theme-tizen-wearable
Suggests:   efl-theme-tizen-tv
Suggests:   efl-theme-tizen-ivi
#functions
Suggests:   elementary-tizen
Suggests:   download-fonts-service

%description sub2-domain_API-UI-EFL_NativeUIToolkit
NativeUIToolkit block contains widget set(elementary).
you can consider the following options for this block.
1. choose misc, config, modules, theme depending on your profile.
   (common, mobile, wearable, tv, ivi)
2. elementary-tizen is an alternative package for Tizen devices
   that uses different set of source code.
3. download-fonts-service supports third party font apps.

%files sub2-domain_API-UI-EFL_NativeUIToolkit


%package sub2-domain_API-UI-EFL_ELM_Accessbility
Summary:    EFL_ELM_Accessbility
Requires:   libatk-bridge-2_0-0
Requires:   at-spi2-core
Requires:   libatspi0
Requires:   typelib-1_0-Atspi-2_0
Requires:   org.tizen.screen-reader
Requires:   e-mod-tizen-screen-reader
Requires:   %{name}-sub2-domain_API-UI-EFL_NativeUIToolkit
Suggests:   org.tizen.accessibility-setting
%description sub2-domain_API-UI-EFL_ELM_Accessbility
EFL_ELM_Accessbility

%files sub2-domain_API-UI-EFL_ELM_Accessbility


%package sub2-domain_API-UI-EFL_Extension
Summary:    EFL_Extension
Requires:   efl-extension
Requires:   %{name}-sub2-domain_API-UI-EFL_NativeUIToolkit

%description sub2-domain_API-UI-EFL_Extension
EFL extension library

%files sub2-domain_API-UI-EFL_Extension


%package sub2-domain_API-UI-External_Output_Manager
Summary:    External_Output_Manager
Requires: libeom
Requires: %{name}-sub2-domain_API-UI-Display_Server

%description sub2-domain_API-UI-External_Output_Manager
The External Output Manager (EOM) is for managing external outputs.<br>
User can get the information of external outputs and control them via eom API.

%files sub2-domain_API-UI-External_Output_Manager


%package sub2-domain_API-UI-FontConfig
Summary:    FontConfig
Requires:   fontconfig
Requires:   default-fonts-fc-sdk
Requires:   default-fonts-sdk

%description sub2-domain_API-UI-FontConfig
Fontconfig is designed to locate fonts within the
system and select them according to requirements specified by
applications.

%files sub2-domain_API-UI-FontConfig


%package sub2-domain_API-UI-Freetype
Summary:    Freetype
Requires:   libfreetype

%description sub2-domain_API-UI-Freetype
The FreeType engine is a free and portable font rendering
engine, developed to provide advanced font support for a variety of
platforms and environments. FreeType is a library which can open and
manages font files as well as efficiently load, hint and render
individual glyphs. FreeType is not a font server or a complete
text-rendering library.

%files sub2-domain_API-UI-Freetype


%package sub2-domain_API-UI-HarfBuzz
Summary:    HarfBuzz
Requires:   libharfbuzz

%description sub2-domain_API-UI-HarfBuzz
HarfBuzz is an OpenType text shaping engine.

%files sub2-domain_API-UI-HarfBuzz


%package sub2-domain_API-UI-Minicontrol
Summary:    Minicontrol
Requires: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Requires: minicontrol
%description sub2-domain_API-UI-Minicontrol
This block supports minicontol API which enables simple control UX in the notification panel
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


%package sub2-domain_API-UI-TBM_Surface
Summary:    TBM_Surface
Requires: libtbm
Requires: %{name}-sub2-domain_API-UI-Display_Server
%description sub2-domain_API-UI-TBM_Surface
TBM Surface API provides user interface for The TBM Surface.<br>
The user can get pointer of plane in the surface.<br>
The user can store data to low level graphic buffer by using pointer of each plane.

%files sub2-domain_API-UI-TBM_Surface

%package sub2-domain_API-UI-Tizen_WS_Shell
Summary:    Tizen_WS_Shell
Requires: tzsh
Requires: %{name}-sub2-domain_API-UI-Display_Server
%description sub2-domain_API-UI-Tizen_WS_Shell
The Tizen WS Shell (tzsh) provides APIs to communicate with the window manager.

%files sub2-domain_API-UI-Tizen_WS_Shell


%package sub2-domain_API-UI-UI_View_Manager
Summary:    ViewManager
Requires:   ui-viewmgr
Requires:   %{name}-sub2-domain_API-UI-EFL_NativeUIToolkit

%description sub2-domain_API-UI-UI_View_Manager
View manager library

%files sub2-domain_API-UI-UI_View_Manager


%package sub2-domain_API-UI-Vulkan
Summary:    Vulkan
Requires: Vulkan-LoaderAndValidationLayers
#Requires: vulkan-wsi-tizen
Requires: %{name}-sub2-domain_API-UI-Display_Server

%description sub2-domain_API-UI-Vulkan
Vulkan is a new generation graphics and compute API that provides high-efficiency, Cross-platform access to modern GPUs used in a wide variety of devices from PCs and consoles to mobile phones and embedded platforms.<br>
Some devices may not support Vulkan.

%files sub2-domain_API-UI-Vulkan


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

#GL plugins
Suggests:   mesa

%description sub2-domain_API-UI-Display_Server
Tizen block (set of packages) for Group of Display Server
Display Server Block is core block for UI. It contains the wayland display server,
modules for server and display HAL for target.<br>
There are three categories to choose.<br>
1. Server config for each profile<br>
   There are 5 profiles(common, mobile, wearable, tv, ivi).<br>
2. Tizen Buffer Manager(TBM) Backend<br>
3. Tizen Display Manager(TDM) Backend<br>
   You should choose a tbm and tdm backend for your target.<br>
   For example, if you want make binary for TM1, you can choose the libtbm-sprd and the libtdm-sprd<br>

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

%package sub2-domain_API-UIX-Input_Method
Summary:    Input_Method
Requires: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Requires: isf
Requires: ise-default
Requires: capi-ui-inputmethod
Requires: capi-ui-inputmethod-manager
Requires: org.tizen.inputmethod-setting

Suggests: ise-default-profile_common
Suggests: ise-default-profile_ivi
Suggests: ise-default-profile_mobile
Suggests: ise-default-profile_tv
Suggests: ise-default-profile_wearable
Suggests: ise-default-profile_wearable-extension-circle

Suggests: isf-config-common
Suggests: isf-config-ivi
Suggests: isf-config-mobile
Suggests: isf-config-tv
Suggests: isf-config-wearable

Suggests: org.tizen.inputmethod-setting-profile_common
Suggests: org.tizen.inputmethod-setting-profile_mobile
Suggests: org.tizen.inputmethod-setting-profile_wearable
Suggests: org.tizen.inputmethod-setting-profile_wearable-extension-circle

%description sub2-domain_API-UIX-Input_Method
This block supports Input Method API for starting IME application lifecycle, methods to interact with current UI state of IME, and getting attributes/events.
And a user can manage the installed IMEs in the system.<br>
You should add additional packages by referring to the below information.<br>

common profile: ise-default-profile_common, isf-config-common, org.tizen.inputmethod-setting-profile_common<br>
ivi profile: ise-default-profile_ivi, isf-config-ivi<br>
mobile profile: ise-default-profile_mobile, isf-config-mobile, org.tizen.inputmethod-setting-profile_mobile<br>
tv profile: ise-default-profile_tv, isf-config-tv<br>
wearable profile: ise-default-profile_wearable, isf-config-wearable, org.tizen.inputmethod-setting-profile_wearable<br>
wearable_circle: ise-default-profile_wearable-extension-circle, isf-config-wearable, org.tizen.inputmethod-setting-profile_wearable-extension-circle<br>
%files sub2-domain_API-UIX-Input_Method


%package sub2-domain_API-UIX-STT
Summary:    STT

Requires: stt
Requires: org.tizen.stt-engine-default
Requires: %{name}-sub2-domain_API-Multimedia-Audio_IO
Requires: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model

%description sub2-domain_API-UIX-STT
STT(Speech-To-Text) provides functions to recognize the speech.

%files sub2-domain_API-UIX-STT
%posttrans sub2-domain_API-UIX-STT
%tizen_feature tizen.org/feature/speech.recognition true


%package sub2-domain_API-UIX-TTS
Summary:    TTS

Requires: tts
Requires: org.tizen.tts-engine-default
Requires: tts-engine-rsc
Requires: %{name}-sub2-domain_API-Multimedia-Audio_IO
Requires: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model

%description sub2-domain_API-UIX-TTS
TTS(Text-To-Speech) provides functions to synthesize voice from text and play synthesized sound data.

%files sub2-domain_API-UIX-TTS
%posttrans sub2-domain_API-UIX-TTS
%tizen_feature tizen.org/feature/speech.synthesis true


%package sub2-domain_API-UIX-Voice_control
Summary:    Voice_control

Requires: voice-control
Requires: vc-engine-default
Requires: %{name}-sub2-domain_API-UIX-STT

%description sub2-domain_API-UIX-Voice_control
Voice control provides functions to register commands and get notification when registered command is recognized.

%files sub2-domain_API-UIX-Voice_control
%posttrans sub2-domain_API-UIX-Voice_control
%tizen_feature tizen.org/feature/speech.control true


%package sub2-domain_API-UIX-Voice_control_elementary
Summary:    Voice_control_elementary

Requires: voice-control-elm
Requires: %{name}-sub2-domain_API-UIX-Voice_control

%description sub2-domain_API-UIX-Voice_control_elementary
Voice control elementary provides functions to control widget by voice commands.

%files sub2-domain_API-UIX-Voice_control_elementary
%posttrans sub2-domain_API-UIX-Voice_control_elementary
%tizen_feature tizen.org/feature/speech.control true


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
