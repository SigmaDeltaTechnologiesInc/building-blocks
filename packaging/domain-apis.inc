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

### TODO - Account Manager ###
# Summary, description

%package sub2-domain_API-Account-Account_Manager
Summary:	Account Manager
%description sub2-domain_API-Account-Account_Manager

### TODO ###
# packakge list

%files sub2-domain_API-Account-Account_Manager

### TODO - FIDO Client###
# Summary, description

%package sub2-domain_API-Account-FIDO_Client
Summary:	FIDO Client
%description sub2-domain_API-Account-FIDO_Client

### TODO ###
# packakge list

%files sub2-domain_API-Account-FIDO_Client

### TODO - OAuth2.0 ###
# Summary, description

%package sub2-domain_API-Account-OAuth2
Summary:	OAuth2.0
%description sub2-domain_API-Account-OAuth2

### TODO ###
# packakge list

%files sub2-domain_API-Account-OAuth2

### TODO - Sync Manager ###
# Summary, description

%package sub2-domain_API-Account-Sync_Manager
Summary:	Sync Manager
%description sub2-domain_API-Account-Sync_Manager

### TODO ###
# packakge list

%files sub2-domain_API-Account-Sync_Manager

### TODO - libOAuth ###
# Summary, description

%package sub2-domain_API-Account-libOAuth
Summary:	libOAuth
%description sub2-domain_API-Account-libOAuth

### TODO ###
# packakge list

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

### TODO - CPP-Standard-library ###
# Summary, description

%package sub2-domain_API-Base-CPP_Standard_library
Summary:    C++-Standard-library
%description sub2-domain_API-Base-CPP_Standard_library

### TODO ###
# packakge list

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

### TODO - Sqlite ###
# Summary, description

%package sub2-domain_API-Base-Sqlite
Summary:    Sqlite
%description sub2-domain_API-Base-Sqlite

### TODO ###
# packakge list

%files sub2-domain_API-Base-Sqlite

### TODO - Utils ###
# Summary, description

%package sub2-domain_API-Base-Utils
Summary:    Utils
%description sub2-domain_API-Base-Utils

### TODO ###
# packakge list

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

### TODO - Download ###
# Summary, description

%package sub2-domain_API-Content-Download
Summary:    Download
%description sub2-domain_API-Content-Download

### TODO ###
# packakge list

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

### TODO - Location-Manager ###
# Summary, description

%package sub2-domain_API-Location-Location_Manager
Summary:    Location-Manager
%description sub2-domain_API-Location-Location_Manager

### TODO ###
# packakge list

%files sub2-domain_API-Location-Location_Manager

### TODO - Geofence-Manager ###
# Summary, description

%package sub2-domain_API-Location-Geofence_Manager
Summary:    Geofence-Manager
%description sub2-domain_API-Location-Geofence_Manager

### TODO ###
# packakge list

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

### TODO - Maps_Service ###
# Summary, description

%package sub2-domain_API-Maps-Maps_Service
Summary:    Masp_Service
%description sub2-domain_API-Maps-Maps_Service

### TODO ###
# packakge list

%files sub2-domain_API-Maps-Maps_Service

### TODO - Here_Plugin ###
# Summary, description

%package sub2-domain_API-Maps-Here_Plugin
Summary:    Here_Plugin
%description sub2-domain_API-Maps-Here_Plugin

### TODO ###
# packakge list

%files sub2-domain_API-Maps-Here_Plugin

### TODO - Mapzen_Plugin ###
# Summary, description

%package sub2-domain_API-Maps-Mapzen_Plugin
Summary:    Mapzen_Plugin
%description sub2-domain_API-Maps-Mapzen_Plugin

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

### TODO - Email ###
# Summary, description

%package sub2-domain_API-Messaging-Email
Summary:    Email
%description sub2-domain_API-Messaging-Email

### TODO ###
# packakge list

%files sub2-domain_API-Messaging-Email

### TODO - Messages ###
# Summary, description

%package sub2-domain_API-Messaging-Messages
Summary:    Messages
%description sub2-domain_API-Messaging-Messages

### TODO ###
# packakge list

%files sub2-domain_API-Messaging-Messages

### TODO - Push ###
# Summary, description

%package sub2-domain_API-Messaging-Push
Summary:    Push
%description sub2-domain_API-Messaging-Push

### TODO ###
# packakge list

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

### TODO - Media_Demuxer ##
# Summary, description

%package sub2-domain_API-Multimedia-Media_Demuxer
Summary:    Media_Demuxer
%description sub2-domain_API-Multimedia-Media_Demuxer
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Media_Demuxer

### TODO - Media_Muxer ##
# Summary, description

%package sub2-domain_API-Multimedia-Media_Muxer
Summary:    Media_Muxer
%description sub2-domain_API-Multimedia-Media_Muxer
### TODO ###
# packakge list

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

### TODO - Radio ##
# Summary, description

%package sub2-domain_API-Multimedia-Radio
Summary:    Radio
%description sub2-domain_API-Multimedia-Radio
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Radio

### TODO - Recorder ##
# Summary, description

%package sub2-domain_API-Multimedia-Recorder
Summary:    Recorder
%description sub2-domain_API-Multimedia-Recorder
### TODO ###
# packakge list

%files sub2-domain_API-Multimedia-Recorder

### TODO - Screen_Mirroring ##
# Summary, description

%package sub2-domain_API-Multimedia-Screen_Mirroring
Summary:    Screen_Mirroring
%description sub2-domain_API-Multimedia-Screen_Mirroring
### TODO ###
# packakge list

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

### TODO - Video_Util ##
# Summary, description

%package sub2-domain_API-Multimedia-Video_Util
Summary:    Video_Util
%description sub2-domain_API-Multimedia-Video_Util
### TODO ###
# packakge list

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


### TODO - Bluetooth_BREDR ##
# Summary, description

%package sub2-domain_API-Network-Bluetooth_BREDR
Summary:    Bluetooth_BREDR
%description sub2-domain_API-Network-Bluetooth_BREDR
### TODO ###
# packakge list

%files sub2-domain_API-Network-Bluetooth_BREDR

### TODO - Bluetooth_Call_Audio ##
# Summary, description

%package sub2-domain_API-Network-Bluetooth_Call_Audio
Summary:    Bluetooth_Call_Audio
%description sub2-domain_API-Network-Bluetooth_Call_Audio
### TODO ###
# packakge list

%files sub2-domain_API-Network-Bluetooth_Call_Audio
### TODO - Bluetooth_Media_Audio ##
# Summary, description

%package sub2-domain_API-Network-Bluetooth_Media_Audio
Summary:    Bluetooth_Media_Audio
%description sub2-domain_API-Network-Bluetooth_Media_Audio
### TODO ###
# packakge list

%files sub2-domain_API-Network-Bluetooth_Media_Audio
### TODO - Bluetooth_Transfer ##
# Summary, description

%package sub2-domain_API-Network-Bluetooth_Transfer
Summary:    Bluetooth_Transfer
%description sub2-domain_API-Network-Bluetooth_Transfer
### TODO ###
# packakge list

%files sub2-domain_API-Network-Bluetooth_Transfer
### TODO - Bluetooth_LE ##
# Summary, description

%package sub2-domain_API-Network-Bluetooth_LE
Summary:    Bluetooth_LE
%description sub2-domain_API-Network-Bluetooth_LE
### TODO ###
# packakge list

%files sub2-domain_API-Network-Bluetooth_LE
### TODO - ASP ##
# Summary, description

%package sub2-domain_API-Network-ASP
Summary:    ASP
%description sub2-domain_API-Network-ASP
### TODO ###
# packakge list

%files sub2-domain_API-Network-ASP
### TODO - Connection ##
# Summary, description

%package sub2-domain_API-Network-Connection
Summary:    Connection
%description sub2-domain_API-Network-Connection
### TODO ###
# packakge list

%files sub2-domain_API-Network-Connection
### TODO - Curl ##
# Summary, description

%package sub2-domain_API-Network-Curl
Summary:    Curl
%description sub2-domain_API-Network-Curl
### TODO ###
# packakge list

%files sub2-domain_API-Network-Curl
### TODO - DNSSD ##
# Summary, description

%package sub2-domain_API-Network-DNSSD
Summary:    DNSSD
%description sub2-domain_API-Network-DNSSD
### TODO ###
# packakge list

%files sub2-domain_API-Network-DNSSD
### TODO - HTTP ##
# Summary, description

%package sub2-domain_API-Network-HTTP
Summary:    HTTP
%description sub2-domain_API-Network-HTTP
### TODO ###
# packakge list

%files sub2-domain_API-Network-HTTP
### TODO - IoTCon ##
# Summary, description

%package sub2-domain_API-Network-IoTCon
Summary:    IoTCon
%description sub2-domain_API-Network-IoTCon
### TODO ###
# packakge list

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
### TODO - SSDP ##
# Summary, description

%package sub2-domain_API-Network-SSDP
Summary:    SSDP
%description sub2-domain_API-Network-SSDP
### TODO ###
# packakge list

%files sub2-domain_API-Network-SSDP
### TODO - STC ##
# Summary, description

%package sub2-domain_API-Network-STC
Summary:    STC
%description sub2-domain_API-Network-STC
### TODO ###
# packakge list

%files sub2-domain_API-Network-STC
### TODO - Smartcard ##
# Summary, description

%package sub2-domain_API-Network-Smartcard
Summary:    Smartcard
%description sub2-domain_API-Network-Smartcard
### TODO ###
# packakge list

%files sub2-domain_API-Network-Smartcard
### TODO - VPN_Service ##
# Summary, description

%package sub2-domain_API-Network-VPN_Service
Summary:    VPN_Service
%description sub2-domain_API-Network-VPN_Service
### TODO ###
# packakge list

%files sub2-domain_API-Network-VPN_Service
### TODO - WiFi ##
# Summary, description

%package sub2-domain_API-Network-WiFi
Summary:    WiFi
%description sub2-domain_API-Network-WiFi
### TODO ###
# packakge list

%files sub2-domain_API-Network-WiFi
### TODO - WiFi_Manager ##
# Summary, description

%package sub2-domain_API-Network-WiFi_Manager
Summary:    WiFi_Manager
%description sub2-domain_API-Network-WiFi_Manager
### TODO ###
# packakge list

%files sub2-domain_API-Network-WiFi_Manager
### TODO - WiFi_Direct ##
# Summary, description

%package sub2-domain_API-Network-WiFi_Direct
Summary:    WiFi_Direct
%description sub2-domain_API-Network-WiFi_Direct
### TODO ###
# packakge list

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

### TODO - Calendar ##
# Summary, description

%package sub2-domain_API-Social-Calendar
Summary:    Calendar
%description sub2-domain_API-Social-Calendar
### TODO ###
# packakge list

%files sub2-domain_API-Social-Calendar

### TODO - Contacts ##
# Summary, description

%package sub2-domain_API-Social-Contacts
Summary:    Contacts
%description sub2-domain_API-Social-Contacts
### TODO ###
# packakge list

%files sub2-domain_API-Social-Contacts

### TODO - Phonenumber_utils ##
# Summary, description

%package sub2-domain_API-Social-Phonenumber_utils
Summary:    Phonenumber_utils
%description sub2-domain_API-Social-Phonenumber_utils
### TODO ###
# packakge list

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
Suggests: %{name}-sub2-domain_API-System-Sensor_Listener_Utility
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

### TODO - Sensor_Listener_Utility ##
# Summary, description

%package sub2-domain_API-System-Sensor_Listener_Utility
Summary:    Sensor_Listener_Utility
%description sub2-domain_API-System-Sensor_Listener_Utility
### TODO ###
# packakge list

%files sub2-domain_API-System-Sensor_Listener_Utility

### TODO - Sensor_Recorder ##
# Summary, description

%package sub2-domain_API-System-Sensor_Recorder
Summary:    Sensor_Recorder
%description sub2-domain_API-System-Sensor_Recorder
### TODO ###
# packakge list

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

### TODO - T_Trace ##
# Summary, description

%package sub2-domain_API-System-T_Trace
Summary:    T_Trace
%description sub2-domain_API-System-T_Trace
### TODO ###
# packakge list

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
Requires: capi-telphony
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


### TODO - SDL_GL ##
# Summary, description

%package sub2-domain_API-UI-SDL_GL
Summary:    SDL_GL
%description sub2-domain_API-UI-SDL_GL
### TODO ###
# packakge list

%files sub2-domain_API-UI-SDL_GL


### TODO - SDL_Vulkan ##
# Summary, description

%package sub2-domain_API-UI-SDL_Vulkan
Summary:    SDL_Vulkan
%description sub2-domain_API-UI-SDL_Vulkan
### TODO ###
# packakge list

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

### TODO - STT ##
# Summary, description

%package sub2-domain_API-UIX-STT
Summary:    STT
%description sub2-domain_API-UIX-STT
### TODO ###
# packakge list

%files sub2-domain_API-UIX-STT


### TODO - TTS ##
# Summary, description

%package sub2-domain_API-UIX-TTS
Summary:    TTS
%description sub2-domain_API-UIX-TTS
### TODO ###
# packakge list

%files sub2-domain_API-UIX-TTS


### TODO - Voice_control ##
# Summary, description

%package sub2-domain_API-UIX-Voice_control
Summary:    Voice_control
%description sub2-domain_API-UIX-Voice_control
### TODO ###
# packakge list

%files sub2-domain_API-UIX-Voice_control


### TODO - Voice_control_elementary ##
# Summary, description

%package sub2-domain_API-UIX-Voice_control_elementary
Summary:    Voice_control_elementary
%description sub2-domain_API-UIX-Voice_control_elementary
### TODO ###
# packakge list

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

### TODO - WebView ##
# Summary, description

%package sub2-domain_API-Web-WebView
Summary:    WebView
%description sub2-domain_API-Web-WebView
### TODO ###
# packakge list

%files sub2-domain_API-Web-WebView


