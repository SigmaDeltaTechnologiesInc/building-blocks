# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-domain_API
Summary:	Tizen API Sets
Suggests:	%{name}-sub1-domain_API-Account
Suggests:	%{name}-sub1-domain_API-AppFramework
Suggests:	%{name}-sub1-domain_API-Base
Suggests:	%{name}-sub1-domain_API-Content
Suggests:	%{name}-sub1-domain_API-Context
Suggests:	%{name}-sub1-domain_API-Location
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
Tizen packages blocked and sorted by API sets defined in https://developer.tizen.org/development/api-references/native-application
%files root-domain_API


%package sub1-domain_API-Account
Summary:	Account
Suggests:	%{name}-sub2-domain_API-Account-AccountManager
Suggests:	%{name}-sub2-domain_API-Account-FIDO
Suggests:	%{name}-sub2-domain_API-Account-OAuth2
Suggests:	%{name}-sub2-domain_API-Account-SyncManager
Suggests:	%{name}-sub2-domain_API-Account-libOAuth
%description sub1-domain_API-Account
Tizen block (set of packages) for API sets of domain API-Account
%files sub1-domain_API-Account

%package sub2-domain_API-Account-AccountManager
Summary:	Account Manager
Requires:	libaccount-service
%description sub2-domain_API-Account-AccountManager
Tizen block (set of packages) for API sets of domain API-Account-AccountManager
%files sub2-domain_API-Account-AccountManager

%package sub2-domain_API-Account-FIDO
Summary:	FIDO
Requires:	fido-client
%description sub2-domain_API-Account-FIDO
Tizen block (set of packages) for API sets of domain API-Account-FIDO
%files sub2-domain_API-Account-FIDO

%package sub2-domain_API-Account-OAuth2
Summary:	OAuth
Requires:	oauth2
%description sub2-domain_API-Account-OAuth2
Tizen block (set of packages) for API sets of domain API-Account-OAuth
%files sub2-domain_API-Account-OAuth2

%package sub2-domain_API-Account-SyncManager
Summary:	SyncManager
Requires:	sync-service
Requires:	libcore-sync-client
%description sub2-domain_API-Account-SyncManager
Tizen block (set of packages) for API sets of domain API-Account-SyncManager
%files sub2-domain_API-Account-SyncManager

%package sub2-domain_API-Account-libOAuth
Summary:	libOAuth
Requires:	liboauth
%description sub2-domain_API-Account-libOAuth
Tizen block (set of packages) for API sets of domain API-Account-libOAuth
%files sub2-domain_API-Account-libOAuth



%package sub1-domain_API-AppFramework
Summary:	Application Framework
Suggests:	%{name}-sub2-domain_API-AppFramework-Application
Suggests:	%{name}-sub2-domain_API-AppFramework-AppManager
Suggests:	%{name}-sub2-domain_API-AppFramework-AttachPanel
Suggests:	%{name}-sub2-domain_API-AppFramework-Badge
Suggests:	%{name}-sub2-domain_API-AppFramework-Bundle
Suggests:	%{name}-sub2-domain_API-AppFramework-DataControl
Suggests:	%{name}-sub2-domain_API-AppFramework-MessagePort
Suggests:	%{name}-sub2-domain_API-AppFramework-Notification
Suggests:	%{name}-sub2-domain_API-AppFramework-PackageManager
Suggests:	%{name}-sub2-domain_API-AppFramework-ServiceApplication
Suggests:	%{name}-sub2-domain_API-AppFramework-Shortcut
Suggests:	%{name}-sub2-domain_API-AppFramework-Widget
%description sub1-domain_API-AppFramework
Tizen block (set of packages) for API sets of domain API-AppFramework
%files sub1-domain_API-AppFramework

%package sub2-domain_API-AppFramework-Application
Summary:	Application
Suggests:	capi-appfw-alarm
Requires:	capi-appfw-application
%description sub2-domain_API-AppFramework-Application
Tizen block (set of packages) for API sets of domain API-AppFramework-Application
%files sub2-domain_API-AppFramework-Application

%package sub2-domain_API-AppFramework-AppManager
Summary:	AppManager
Requires:	capi-appfw-app-manager
%description sub2-domain_API-AppFramework-AppManager
Tizen block (set of packages) for API sets of domain API-AppFramework-AppManager
%files sub2-domain_API-AppFramework-AppManager

%package sub2-domain_API-AppFramework-AttachPanel
Summary:	AttachPanel
Requires:	attach-panel
%description sub2-domain_API-AppFramework-AttachPanel
Tizen block (set of packages) for API sets of domain API-AppFramework-AttachPanel
%files sub2-domain_API-AppFramework-AttachPanel

%package sub2-domain_API-AppFramework-Badge
Summary:	Badge
Requires:	badge
%description sub2-domain_API-AppFramework-Badge
Tizen block (set of packages) for API sets of domain API-AppFramework-Badge
%files sub2-domain_API-AppFramework-Badge

%package sub2-domain_API-AppFramework-Bundle
Summary:	Bundle
Requires:	bundle
%description sub2-domain_API-AppFramework-Bundle
Tizen block (set of packages) for API sets of domain API-AppFramework-Bundle
%files sub2-domain_API-AppFramework-Bundle

%package sub2-domain_API-AppFramework-DataControl
Summary:	DataControl
Requires:	data-control
%description sub2-domain_API-AppFramework-DataControl
Tizen block (set of packages) for API sets of domain API-AppFramework-DataControl
%files sub2-domain_API-AppFramework-DataControl

%package sub2-domain_API-AppFramework-MessagePort
Summary:	MessagePort
Requires:	message-port
%description sub2-domain_API-AppFramework-MessagePort
Tizen block (set of packages) for API sets of domain API-AppFramework-MessagePort
%files sub2-domain_API-AppFramework-MessagePort

%package sub2-domain_API-AppFramework-Notification
Summary:	Notification
Requires:	notification
%description sub2-domain_API-AppFramework-Notification
Tizen block (set of packages) for API sets of domain API-AppFramework-Notification
%files sub2-domain_API-AppFramework-Notification

%package sub2-domain_API-AppFramework-PackageManager
Summary:	PackageManager
Requires:	capi-appfw-package-manager
%description sub2-domain_API-AppFramework-PackageManager
Tizen block (set of packages) for API sets of domain API-AppFramework-PackageManager
%files sub2-domain_API-AppFramework-PackageManager

%package sub2-domain_API-AppFramework-ServiceApplication
Summary:	ServiceApplication
Requires:	appcore-agent
%description sub2-domain_API-AppFramework-ServiceApplication
Tizen block (set of packages) for API sets of domain API-AppFramework-ServiceApplication
%files sub2-domain_API-AppFramework-ServiceApplication

%package sub2-domain_API-AppFramework-Shortcut
Summary:	Shortcut
Requires:	libshortcut
%description sub2-domain_API-AppFramework-Shortcut
Tizen block (set of packages) for API sets of domain API-AppFramework-Shortcut
%files sub2-domain_API-AppFramework-Shortcut

%package sub2-domain_API-AppFramework-Widget
Summary:	Widget
Requires:	appcore-widget
Requires:	libwidget_service
Requires:	libwidget_viewer
%description sub2-domain_API-AppFramework-Widget
Tizen block (set of packages) for API sets of domain API-AppFramework-Widget
%files sub2-domain_API-AppFramework-Widget



%package sub1-domain_API-Base
Summary:	Base
Requires:	capi-base-common
Suggests:	glib2
Requires:	glibc
Suggests:	libxml2
Suggests:	minizip
Suggests:	libgomp
Suggests:	sqlite
Suggests:	libicu
Suggests:	zlib
%description sub1-domain_API-Base
Tizen block (set of packages) for API sets of domain API-Base
%files sub1-domain_API-Base



%package sub1-domain_API-Content
Summary:	Content
Suggests:	%{name}-sub2-domain_API-Content-Download
Suggests:	%{name}-sub2-domain_API-Content-MIMEType
Suggests:	%{name}-sub2-domain_API-Content-MediaContent
%description sub1-domain_API-Content
Tizen block (set of packages) for API sets of domain API-Content
%files sub1-domain_API-Content

%package sub2-domain_API-Content-Download
Summary:	Download
Requires:	capi-web-url-download
%description sub2-domain_API-Content-Download
Tizen block (set of packages) for API sets of sub2-domain_API-Content-Download
%files sub2-domain_API-Content-Download

%package sub2-domain_API-Content-MIMEType
Summary:	MIME Type
Requires:	capi-content-mime-type
%description sub2-domain_API-Content-MIMEType
Tizen block (set of packages) for API sets of sub2-domain_API-Content-MIMEType
%files sub2-domain_API-Content-MIMEType

%package sub2-domain_API-Content-MediaContent
Summary:	Media Content
Requires:	capi-content-media-content
%description sub2-domain_API-Content-MediaContent
Tizen block (set of packages) for API sets of sub2-domain_API-Content-MediaContent
%files sub2-domain_API-Content-MediaContent




%package sub1-domain_API-Context
Summary:	Context
Suggests:	%{name}-sub2-domain_API-Context-ActivityRecognition
Suggests:	%{name}-sub2-domain_API-Context-ContextualHistory
Suggests:	%{name}-sub2-domain_API-Context-ContextualTrigger
Suggests:	%{name}-sub2-domain_API-Context-GestureRecognition
%description sub1-domain_API-Context
Tizen block (set of packages) for API sets of domain API-Context
%files sub1-domain_API-Context

%package sub2-domain_API-Context-ActivityRecognition
Summary:	Activity Recognition
Requires:	motion
%description sub2-domain_API-Context-ActivityRecognition
Tizen block (set of packages) for API sets of sub2-domain_API-Context-ActivityRecognition
%files sub2-domain_API-Context-ActivityRecognition

%package sub2-domain_API-Context-ContextualHistory
Summary:	Contextual History
Requires:	context
%description sub2-domain_API-Context-ContextualHistory
Tizen block (set of packages) for API sets of sub2-domain_API-Context-ContextualHistory
%files sub2-domain_API-Context-ContextualHistory

%package sub2-domain_API-Context-ContextualTrigger
Summary:	Contextual Trigger
Requires:	context
%description sub2-domain_API-Context-ContextualTrigger
Tizen block (set of packages) for API sets of sub2-domain_API-Context-ContextualTrigger
%files sub2-domain_API-Context-ContextualTrigger

%package sub2-domain_API-Context-GestureRecognition
Summary:	Gesture Recognition
Requires:	motion
%description sub2-domain_API-Context-GestureRecognition
Tizen block (set of packages) for API sets of sub2-domain_API-Context-GestureRecognition
%files sub2-domain_API-Context-GestureRecognition




%package sub1-domain_API-Location
Summary:	Location
Suggests:	%{name}-sub2-domain_API-Location-GeofenceManager
Suggests:	%{name}-sub2-domain_API-Location-LocationManager
Suggests:	%{name}-sub2-domain_API-Location-MapsService
%description sub1-domain_API-Location
Tizen block (set of packages) for API sets of domain API-Location
%files sub1-domain_API-Location

%package sub2-domain_API-Location-GeofenceManager
Summary:	Geofence Manager
Requires:	capi-geofence-manager
%description sub2-domain_API-Location-GeofenceManager
Tizen block (set of packages) for API sets of sub2-domain_API-Location-GeofenceManager
%files sub2-domain_API-Location-GeofenceManager

%package sub2-domain_API-Location-LocationManager
Summary:	Location Manager
Requires:	capi-location-manager
%description sub2-domain_API-Location-LocationManager
Tizen block (set of packages) for API sets of sub2-domain_API-Location-LocationManager
%files sub2-domain_API-Location-LocationManager

%package sub2-domain_API-Location-MapsService
Summary:	Maps Service
Requires:	capi-maps-service
%description sub2-domain_API-Location-MapsService
Tizen block (set of packages) for API sets of sub2-domain_API-Location-MapsService
%files sub2-domain_API-Location-MapsService





%package sub1-domain_API-Messaging
Summary:	Messaging
Suggests:	%{name}-sub2-domain_API-Messaging-Email
Suggests:	%{name}-sub2-domain_API-Messaging-Messages
Suggests:	%{name}-sub2-domain_API-Messaging-Push
%description sub1-domain_API-Messaging
Tizen block (set of packages) for API sets of domain API-Messaging
%files sub1-domain_API-Messaging

%package sub2-domain_API-Messaging-Email
Summary:	Email
Requires:	capi-messaging-email
%description sub2-domain_API-Messaging-Email
Tizen block (set of packages) for API sets of sub2-domain_API-Messaging-Email
%files sub2-domain_API-Messaging-Email

%package sub2-domain_API-Messaging-Messages
Summary:	Messages
Requires:	capi-messaging-messages
%description sub2-domain_API-Messaging-Messages
Tizen block (set of packages) for API sets of sub2-domain_API-Messaging-Messages
%files sub2-domain_API-Messaging-Messages

%package sub2-domain_API-Messaging-Push
Summary:	Push
Requires:	libpush
Requires:	push-tool
%description sub2-domain_API-Messaging-Push
Tizen block (set of packages) for API sets of sub2-domain_API-Messaging-Push
%files sub2-domain_API-Messaging-Push





%package sub1-domain_API-Multimedia
Summary:	Multimedia
Suggests:	%{name}-sub2-domain_API-Multimedia-AudioIO
Suggests:	%{name}-sub2-domain_API-Multimedia-Camera
Suggests:	%{name}-sub2-domain_API-Multimedia-ImageUtil
Suggests:	%{name}-sub2-domain_API-Multimedia-MediaCodec
Suggests:	%{name}-sub2-domain_API-Multimedia-MediaController
Suggests:	%{name}-sub2-domain_API-Multimedia-MediaDemuxer
Suggests:	%{name}-sub2-domain_API-Multimedia-MediaMuxer
Suggests:	%{name}-sub2-domain_API-Multimedia-MediaStreamer
Suggests:	%{name}-sub2-domain_API-Multimedia-MediaTool
Suggests:	%{name}-sub2-domain_API-Multimedia-MediaVision
Suggests:	%{name}-sub2-domain_API-Multimedia-MetadataEditor
Suggests:	%{name}-sub2-domain_API-Multimedia-MetadataExtractor
Suggests:	%{name}-sub2-domain_API-Multimedia-OpenAL
Suggests:	%{name}-sub2-domain_API-Multimedia-Player
Suggests:	%{name}-sub2-domain_API-Multimedia-Radio
Suggests:	%{name}-sub2-domain_API-Multimedia-Recorder
Suggests:	%{name}-sub2-domain_API-Multimedia-ScreenMirroring
Suggests:	%{name}-sub2-domain_API-Multimedia-SoundManager
Suggests:	%{name}-sub2-domain_API-Multimedia-StreamRecorder
Suggests:	%{name}-sub2-domain_API-Multimedia-ThumbnailUtil
Suggests:	%{name}-sub2-domain_API-Multimedia-TonePlayer
Suggests:	%{name}-sub2-domain_API-Multimedia-VideoUtil
Suggests:	%{name}-sub2-domain_API-Multimedia-WAVPlayer
Suggests:	%{name}-sub2-domain_API-Multimedia-libEXIF
%description sub1-domain_API-Multimedia
Tizen block (set of packages) for API sets of domain API-Multimedia
%files sub1-domain_API-Multimedia

%package sub2-domain_API-Multimedia-AudioIO
Summary:	Audio I/O
Requires:	capi-media-audio-io
%description sub2-domain_API-Multimedia-AudioIO
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-AudioIO
%files sub2-domain_API-Multimedia-AudioIO

%package sub2-domain_API-Multimedia-Camera
Summary:	Camera
Requires:	capi-media-camera
%description sub2-domain_API-Multimedia-Camera
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-Camera
%files sub2-domain_API-Multimedia-Camera

%package sub2-domain_API-Multimedia-ImageUtil
Summary:	Image Util
Requires:	capi-media-image-util
%description sub2-domain_API-Multimedia-ImageUtil
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-ImageUtil
%files sub2-domain_API-Multimedia-ImageUtil

%package sub2-domain_API-Multimedia-MediaCodec
Summary:	Media Codec
Requires:	capi-media-codec
%description sub2-domain_API-Multimedia-MediaCodec
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-MediaCodec
%files sub2-domain_API-Multimedia-MediaCodec

%package sub2-domain_API-Multimedia-MediaController
Summary:	Media Controller
Requires:	capi-media-controller
%description sub2-domain_API-Multimedia-MediaController
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-MediaController
%files sub2-domain_API-Multimedia-MediaController

%package sub2-domain_API-Multimedia-MediaDemuxer
Summary:	Media Demuxer
Requires:	capi-mediademuxer
%description sub2-domain_API-Multimedia-MediaDemuxer
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-MediaDemuxer
%files sub2-domain_API-Multimedia-MediaDemuxer

%package sub2-domain_API-Multimedia-MediaMuxer
Summary:	Media Muxer
Requires:	capi-mediamuxer
%description sub2-domain_API-Multimedia-MediaMuxer
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-MediaMuxer
%files sub2-domain_API-Multimedia-MediaMuxer

%package sub2-domain_API-Multimedia-MediaStreamer
Summary:	Media Streamer
Requires:	capi-media-streamer
%description sub2-domain_API-Multimedia-MediaStreamer
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-MediaStreamer
%files sub2-domain_API-Multimedia-MediaStreamer

%package sub2-domain_API-Multimedia-MediaTool
Summary:	Media Tool
Requires:	capi-media-tool
%description sub2-domain_API-Multimedia-MediaTool
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-MediaTool
%files sub2-domain_API-Multimedia-MediaTool

%package sub2-domain_API-Multimedia-MediaVision
Summary:	Media Vision
Requires:	capi-media-vision
%description sub2-domain_API-Multimedia-MediaVision
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-MediaVision
%files sub2-domain_API-Multimedia-MediaVision

%package sub2-domain_API-Multimedia-MetadataEditor
Summary:	Metadata Editor
Requires:	capi-media-metadata-editor
%description sub2-domain_API-Multimedia-MetadataEditor
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-MetadataEditor
%files sub2-domain_API-Multimedia-MetadataEditor

%package sub2-domain_API-Multimedia-MetadataExtractor
Summary:	Metadata Extractor
Requires:	capi-media-metadata-extractor
%description sub2-domain_API-Multimedia-MetadataExtractor
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-MetadataExtractor
%files sub2-domain_API-Multimedia-MetadataExtractor

%package sub2-domain_API-Multimedia-OpenAL
Summary:	OpenAL
Requires:	openal-soft
Requires:	capi-media-sound-manager
%description sub2-domain_API-Multimedia-OpenAL
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-OpenAL
%files sub2-domain_API-Multimedia-OpenAL

%package sub2-domain_API-Multimedia-Player
Summary:	Player
Requires:	capi-media-player
%description sub2-domain_API-Multimedia-Player
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-Player
%files sub2-domain_API-Multimedia-Player

%package sub2-domain_API-Multimedia-Radio
Summary:	Radio
Requires:	capi-media-radio
%description sub2-domain_API-Multimedia-Radio
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-Radio
%files sub2-domain_API-Multimedia-Radio

%package sub2-domain_API-Multimedia-Recorder
Summary:	Recorder
Requires:	capi-media-recorder
%description sub2-domain_API-Multimedia-Recorder
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-Recorder
%files sub2-domain_API-Multimedia-Recorder

%package sub2-domain_API-Multimedia-ScreenMirroring
Summary:	Screen Mirroring
Requires:	capi-media-screen-mirroring
%description sub2-domain_API-Multimedia-ScreenMirroring
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-ScreenMirroring
%files sub2-domain_API-Multimedia-ScreenMirroring

%package sub2-domain_API-Multimedia-SoundManager
Summary:	Sound Manager
Requires:	capi-media-sound-manager
%description sub2-domain_API-Multimedia-SoundManager
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-SoundManager
%files sub2-domain_API-Multimedia-SoundManager

%package sub2-domain_API-Multimedia-StreamRecorder
Summary:	StreamRecorder
Requires:	capi-media-streamrecorder
%description sub2-domain_API-Multimedia-StreamRecorder
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-StreamRecorder
%files sub2-domain_API-Multimedia-StreamRecorder

%package sub2-domain_API-Multimedia-ThumbnailUtil
Summary:	Thumbnail Util
Requires:	capi-media-thumbnail-util
%description sub2-domain_API-Multimedia-ThumbnailUtil
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-ThumbnailUtil
%files sub2-domain_API-Multimedia-ThumbnailUtil

%package sub2-domain_API-Multimedia-TonePlayer
Summary:	Tone Player
Requires:	capi-media-tone-player
%description sub2-domain_API-Multimedia-TonePlayer
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-TonePlayer
%files sub2-domain_API-Multimedia-TonePlayer

%package sub2-domain_API-Multimedia-VideoUtil
Summary:	Video Util
Requires:	capi-media-video-util
%description sub2-domain_API-Multimedia-VideoUtil
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-VideoUtil
%files sub2-domain_API-Multimedia-VideoUtil

%package sub2-domain_API-Multimedia-WAVPlayer
Summary:	WAV Player
Requires:	capi-media-wav-player
%description sub2-domain_API-Multimedia-WAVPlayer
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-WAVPlayer
%files sub2-domain_API-Multimedia-WAVPlayer

%package sub2-domain_API-Multimedia-libEXIF
Summary:	libEXIF
Requires:	libexif
%description sub2-domain_API-Multimedia-libEXIF
Tizen block (set of packages) for API sets of sub2-domain_API-Multimedia-libEXIF
%files sub2-domain_API-Multimedia-libEXIF





%package sub1-domain_API-Network
Summary:	Network
Suggests:	%{name}-sub2-domain_API-Network-Bluetooth
Suggests:	%{name}-sub2-domain_API-Network-Connection
Suggests:	libcurl
Suggests:	%{name}-sub2-domain_API-Network-DNSSD
Suggests:	%{name}-sub2-domain_API-Network-HTTP
Suggests:	%{name}-sub2-domain_API-Network-IoTCon
Suggests:	%{name}-sub2-domain_API-Network-MTP
Suggests:	%{name}-sub2-domain_API-Network-NFC
Suggests:	%{name}-sub2-domain_API-Network-SSDP
Suggests:	%{name}-sub2-domain_API-Network-Smartcard
Suggests:	%{name}-sub2-domain_API-Network-VPNService
Suggests:	%{name}-sub2-domain_API-Network-WiFi
Suggests:	%{name}-sub2-domain_API-Network-WiFiDirect
%description sub1-domain_API-Network
Tizen block (set of packages) for API sets of domain API-Network
%files sub1-domain_API-Network

%package sub2-domain_API-Network-Bluetooth
Summary:	Bluetooth
Requires:	capi-network-bluetooth
%description sub2-domain_API-Network-Bluetooth
Tizen block (set of packages) for API sets of sub2-domain_API-Network-Bluetooth
%files sub2-domain_API-Network-Bluetooth

%package sub2-domain_API-Network-Connection
Summary:	Connection
Requires:	capi-network-connection
%description sub2-domain_API-Network-Connection
Tizen block (set of packages) for API sets of sub2-domain_API-Network-Connection
%files sub2-domain_API-Network-Connection

%package sub2-domain_API-Network-DNSSD
Summary:	DNSSD
Requires:	capi-network-nsd
Requires:	libnsd-dns-sd
%description sub2-domain_API-Network-DNSSD
Tizen block (set of packages) for API sets of sub2-domain_API-Network-DNSSD
%files sub2-domain_API-Network-DNSSD

%package sub2-domain_API-Network-HTTP
Summary:	HTTP
Requires:	capi-network-http
%description sub2-domain_API-Network-HTTP
Tizen block (set of packages) for API sets of sub2-domain_API-Network-HTTP
%files sub2-domain_API-Network-HTTP

%package sub2-domain_API-Network-IoTCon
Summary:	IoTCon
Requires:	iotcon
%description sub2-domain_API-Network-IoTCon
Tizen block (set of packages) for API sets of sub2-domain_API-Network-IoTCon
%files sub2-domain_API-Network-IoTCon

%package sub2-domain_API-Network-MTP
Summary:	MTP
Requires:	capi-network-mtp
%description sub2-domain_API-Network-MTP
Tizen block (set of packages) for API sets of sub2-domain_API-Network-MTP
%files sub2-domain_API-Network-MTP

%package sub2-domain_API-Network-NFC
Summary:	NFC
Requires:	capi-network-nfc
%description sub2-domain_API-Network-NFC
Tizen block (set of packages) for API sets of sub2-domain_API-Network-NFC
%files sub2-domain_API-Network-NFC

%package sub2-domain_API-Network-SSDP
Summary:	SSDP
Requires:	capi-network-nsd
Requires:	libnsd-ssdp
%description sub2-domain_API-Network-SSDP
Tizen block (set of packages) for API sets of sub2-domain_API-Network-SSDP
%files sub2-domain_API-Network-SSDP

%package sub2-domain_API-Network-Smartcard
Summary:	Smartcard
Requires:	capi-network-smartcard
%description sub2-domain_API-Network-Smartcard
Tizen block (set of packages) for API sets of sub2-domain_API-Network-Smartcard
%files sub2-domain_API-Network-Smartcard

%package sub2-domain_API-Network-VPNService
Summary:	VPN Service
Requires:	capi-vpnsvc
%description sub2-domain_API-Network-VPNService
Tizen block (set of packages) for API sets of sub2-domain_API-Network-VPNService
%files sub2-domain_API-Network-VPNService

%package sub2-domain_API-Network-WiFi
Summary:	WiFi
Requires:	capi-network-wifi-manager
Requires:	capi-network-wifi
%description sub2-domain_API-Network-WiFi
Tizen block (set of packages) for API sets of sub2-domain_API-Network-WiFi
%files sub2-domain_API-Network-WiFi

%package sub2-domain_API-Network-WiFiDirect
Summary:	WiFi Direct
Requires:	capi-network-wifi-direct
Suggests:	capi-network-wifi-direct-extension-features
%description sub2-domain_API-Network-WiFiDirect
Tizen block (set of packages) for API sets of sub2-domain_API-Network-WiFiDirect
%files sub2-domain_API-Network-WiFiDirect





%package sub1-domain_API-Security
Summary:	Security
Suggests:	%{name}-sub2-domain_API-Security-CSR
Suggests:	%{name}-sub2-domain_API-Security-DevicePolicyManager
Suggests:	%{name}-sub2-domain_API-Security-KeyManager
Suggests:	libopenssl
Suggests:	openssl
Suggests:	%{name}-sub2-domain_API-Security-PrivilegeInfo
Suggests:	%{name}-sub2-domain_API-Security-YACA
%description sub1-domain_API-Security
Tizen block (set of packages) for API sets of domain API-Security
%files sub1-domain_API-Security

%package sub2-domain_API-Security-CSR
Summary:	CSR
Requires:	csr-framework
Requires:	libcsr-framework-common
Requires:	libcsr-framework-client
%description sub2-domain_API-Security-CSR
Tizen block (set of packages) for API sets of sub2-domain_API-Security-CSR
%files sub2-domain_API-Security-CSR

%package sub2-domain_API-Security-DevicePolicyManager
Summary:	DevicePolicyManager
Requires:	device-policy-manager
Suggests:	device-policy-manager-full
Suggests:	device-policy-manager-ext-password
Suggests:	device-policy-manager-minimal
Requires:	libdpm
Suggests:	libdpm-full
Suggests:	libdpm-ext-password
Suggests:	libdpm-minimalA\
Suggests:	libdsm
%description sub2-domain_API-Security-DevicePolicyManager
Tizen block (set of packages) for API sets of sub2-domain_API-Security-DevicePolicyManager
%files sub2-domain_API-Security-DevicePolicyManager

%package sub2-domain_API-Security-KeyManager
Summary:	KeyManager
Requires:	key-manager
Requires:	libkey-manager-common
Requires:	libkey-manager-client
Suggests:	key-manager-pam-plugin
%description sub2-domain_API-Security-KeyManager
Tizen block (set of packages) for API sets of sub2-domain_API-Security-KeyManager
%files sub2-domain_API-Security-KeyManager

%package sub2-domain_API-Security-PrivilegeInfo
Summary:	PrivilegeInfo
Requires:	privilege-info
%description sub2-domain_API-Security-PrivilegeInfo
Tizen block (set of packages) for API sets of sub2-domain_API-Security-PrivilegeInfo
%files sub2-domain_API-Security-PrivilegeInfo

%package sub2-domain_API-Security-YACA
Summary:	YACA
Requires:	yaca
%description sub2-domain_API-Security-YACA
Tizen block (set of packages) for API sets of sub2-domain_API-Security-YACA
%files sub2-domain_API-Security-YACA




%package sub1-domain_API-Social
Summary:	Social
Suggests:	%{name}-sub2-domain_API-Social-Calendar
Suggests:	%{name}-sub2-domain_API-Social-Contacts
Suggests:	%{name}-sub2-domain_API-Social-PhonenumberUtils
%description sub1-domain_API-Social
Tizen block (set of packages) for API sets of domain API-Social
%files sub1-domain_API-Social

%package sub2-domain_API-Social-Calendar
Summary:	Calendar
Requires:	calendar-service
%description sub2-domain_API-Social-Calendar
Tizen block (set of packages) for API sets of sub2-domain_API-Social-Calendar
%files sub2-domain_API-Social-Calendar

%package sub2-domain_API-Social-Contacts
Summary:	Contacts
Requires:	contacts-service2
%description sub2-domain_API-Social-Contacts
Tizen block (set of packages) for API sets of sub2-domain_API-Social-Contacts
%files sub2-domain_API-Social-Contacts

%package sub2-domain_API-Social-PhonenumberUtils
Summary:	Phonenumber Utils
Requires:	phonenumber-utils
%description sub2-domain_API-Social-PhonenumberUtils
Tizen block (set of packages) for API sets of sub2-domain_API-Social-PhonenumberUtils
%files sub2-domain_API-Social-PhonenumberUtils





%package sub1-domain_API-System
Summary:	System
Suggests:	%{name}-sub2-domain_API-System-Device
Suggests:	%{name}-sub2-domain_API-System-Feedback
Suggests:	%{name}-sub2-domain_API-System-MediaKey
Suggests:	%{name}-sub2-domain_API-System-RuntimeInformation
Suggests:	%{name}-sub2-domain_API-System-Sensor
Suggests:	%{name}-sub2-domain_API-System-Storage
Suggests:	%{name}-sub2-domain_API-System-SystemInformation
Suggests:	%{name}-sub2-domain_API-System-SystemSettings
Suggests:	%{name}-sub2-domain_API-System-Ttrace
Suggests:	%{name}-sub2-domain_API-System-USBHost
Suggests:	%{name}-sub2-domain_API-System-dlog
%description sub1-domain_API-System
Tizen block (set of packages) for API sets of domain API-System
%files sub1-domain_API-System

%package sub2-domain_API-System-Device
Summary:	Device
Requires:	deviced
Suggests:	deviced-profile_common
Suggests:	deviced-profile_ivi
Suggests:	deviced-profile_mobile
Suggests:	deviced-profile_tv
Suggests:	deviced-profile_wearable
Requires:	libdeviced
Requires:	deviced-tools
%description sub2-domain_API-System-Device
Tizen block (set of packages) for API sets of sub2-domain_API-System-Device
%files sub2-domain_API-System-Device

%package sub2-domain_API-System-Feedback
Summary:	Feedback
Requires:	libfeedback
Requires:	svi-data
%description sub2-domain_API-System-Feedback
Tizen block (set of packages) for API sets of sub2-domain_API-System-Feedback
%files sub2-domain_API-System-Feedback

%package sub2-domain_API-System-MediaKey
Summary:	Media Key
Requires:	capi-system-media-key
%description sub2-domain_API-System-MediaKey
Tizen block (set of packages) for API sets of sub2-domain_API-System-MediaKey
%files sub2-domain_API-System-MediaKey

%package sub2-domain_API-System-RuntimeInformation
Summary:	Runtime Information
Requires:	capi-system-runtime-info
%description sub2-domain_API-System-RuntimeInformation
Tizen block (set of packages) for API sets of sub2-domain_API-System-RuntimeInformation
%files sub2-domain_API-System-RuntimeInformation

%package sub2-domain_API-System-Sensor
Summary:	Sensor
Requires:	capi-system-sensor
Requires:	sensord
Requires:	libsensord
%description sub2-domain_API-System-Sensor
Tizen block (set of packages) for API sets of sub2-domain_API-System-Sensor
%files sub2-domain_API-System-Sensor

%package sub2-domain_API-System-Storage
Summary:	Storage
Requires:	libstorage
%description sub2-domain_API-System-Storage
Tizen block (set of packages) for API sets of sub2-domain_API-System-Storage
%files sub2-domain_API-System-Storage

%package sub2-domain_API-System-SystemInformation
Summary:	System Information
Requires:	capi-system-info
%description sub2-domain_API-System-SystemInformation
Tizen block (set of packages) for API sets of sub2-domain_API-System-System Information
%files sub2-domain_API-System-SystemInformation

%package sub2-domain_API-System-SystemSettings
Summary:	System Settings
Requires:	capi-system-system-settings
%description sub2-domain_API-System-SystemSettings
Tizen block (set of packages) for API sets of sub2-domain_API-System-System Settings
%files sub2-domain_API-System-SystemSettings

%package sub2-domain_API-System-Ttrace
Summary:	T-trace
Requires:	ttrace
%description sub2-domain_API-System-Ttrace
Tizen block (set of packages) for API sets of sub2-domain_API-System-Ttrace
%files sub2-domain_API-System-Ttrace

%package sub2-domain_API-System-USBHost
Summary:	USBHost
Requires:	capi-system-usbhost
%description sub2-domain_API-System-USBHost
Tizen block (set of packages) for API sets of sub2-domain_API-System-USBHost
%files sub2-domain_API-System-USBHost

%package sub2-domain_API-System-dlog
Summary:	dlog
Requires:	dlogutil
Requires:	libdlog
Suggests:	dlogbackend-kmsg
Suggests:	dlogbackend-logger
%description sub2-domain_API-System-dlog
Tizen block (set of packages) for API sets of sub2-domain_API-System-dlog
%files sub2-domain_API-System-dlog





%package sub1-domain_API-Telephony
Summary:	Telephony
Requires:	capi-telephony
%description sub1-domain_API-Telephony
Tizen block (set of packages) for API sets of domain API-Telephony
%files sub1-domain_API-Telephony


%package sub1-domain_API-UI
Summary:	UI
Suggests:	%{name}-sub2-domain_API-UI-Cairo
Suggests:	%{name}-sub2-domain_API-UI-ClipboardHistoryManager
Suggests:	%{name}-sub2-domain_API-UI-DALi
Suggests:	%{name}-sub2-domain_API-UI-EFL
Suggests:	%{name}-sub2-domain_API-UI-EFLUTIL
Suggests:	%{name}-sub2-domain_API-UI-EflExtension
Suggests:	%{name}-sub2-domain_API-UI-ExternalOutputManager
Suggests:	fontconfig
Suggests:	libfreetype
Suggests:	libharfbuzz
Suggests:	%{name}-sub2-domain_API-UI-Minicontrol
Suggests:	SDL2
Suggests:	%{name}-sub2-domain_API-UI-TBMSurface
Suggests:	%{name}-sub2-domain_API-UI-TizenWSShell
Suggests:	%{name}-sub2-domain_API-UI-UIViewManager
Suggests:	%{name}-sub2-domain_API-UI-Vulkan
%description sub1-domain_API-UI
Tizen block (set of packages) for API sets of domain API-UI
%files sub1-domain_API-UI

%package sub2-domain_API-UI-Cairo
Summary:	Cairo
Requires:	cairo
%description sub2-domain_API-UI-Cairo
Tizen block (set of packages) for API sets of sub2-domain_API-UI-Cairo
%files sub2-domain_API-UI-Cairo

%package sub2-domain_API-UI-ClipboardHistoryManager
Summary:	Clipboard History Manager
Requires:	cbhm
%description sub2-domain_API-UI-ClipboardHistoryManager
Tizen block (set of packages) for API sets of sub2-domain_API-UI-ClipboardHistoryManager
%files sub2-domain_API-UI-ClipboardHistoryManager

%package sub2-domain_API-UI-DALi
Summary:	DALi
Requires:	dali
Requires:	dali-adaptor
Suggests:	dali-adaptor-profile_common
Suggests:	dali-adaptor-profile_ivi
Suggests:	dali-adaptor-profile_mobile
Suggests:	dali-adaptor-profile_tv
Suggests:	dali-adaptor-profile_wearable
Requires:	dali-toolkit
%description sub2-domain_API-UI-DALi
Tizen block (set of packages) for API sets of sub2-domain_API-UI-DALi
%files sub2-domain_API-UI-DALi

%package sub2-domain_API-UI-EFL
Summary:	EFL
Requires:	ecore
Requires:	edje
Requires:	eet
Requires:	eina
Requires:	eio
Requires:	eldbus
Requires:	elementary
Requires:	evas
%description sub2-domain_API-UI-EFL
Tizen block (set of packages) for API sets of sub2-domain_API-UI-EFL
%files sub2-domain_API-UI-EFL

%package sub2-domain_API-UI-EFLUTIL
Summary:	EFL UTIL
Requires:	capi-ui-efl-util
%description sub2-domain_API-UI-EFLUTIL
Tizen block (set of packages) for API sets of sub2-domain_API-UI-EFLUTIL
%files sub2-domain_API-UI-EFLUTIL

%package sub2-domain_API-UI-EflExtension
Summary:	Efl Extension
Requires:	efl-extension
%description sub2-domain_API-UI-EflExtension
Tizen block (set of packages) for API sets of sub2-domain_API-UI-EflExtension
%files sub2-domain_API-UI-EflExtension

%package sub2-domain_API-UI-ExternalOutputManager
Summary:	External Output Manager
Requires:	libeom
%description sub2-domain_API-UI-ExternalOutputManager
Tizen block (set of packages) for API sets of sub2-domain_API-UI-ExternalOutputManager
%files sub2-domain_API-UI-ExternalOutputManager

%package sub2-domain_API-UI-Minicontrol
Summary:	Minicontrol
Requires:	minicontrol
%description sub2-domain_API-UI-Minicontrol
Tizen block (set of packages) for API sets of sub2-domain_API-UI-Minicontrol
%files sub2-domain_API-UI-Minicontrol

%package sub2-domain_API-UI-TBMSurface
Summary:	TBM Surface
Requires:	libtbm
%description sub2-domain_API-UI-TBMSurface
Tizen block (set of packages) for API sets of sub2-domain_API-UI-TBMSurface
%files sub2-domain_API-UI-TBMSurface

%package sub2-domain_API-UI-TizenWSShell
Summary:	Tizen WS Shell
Requires:	tzsh
%description sub2-domain_API-UI-TizenWSShell
Tizen block (set of packages) for API sets of sub2-domain_API-UI-TizenWSShell
%files sub2-domain_API-UI-TizenWSShell

%package sub2-domain_API-UI-UIViewManager
Summary:	UI View Manager
Requires:	ui-viewmgr
%description sub2-domain_API-UI-UIViewManager
Tizen block (set of packages) for API sets of sub2-domain_API-UI-UIViewManager
%files sub2-domain_API-UI-UIViewManager

%package sub2-domain_API-UI-Vulkan
Summary:	Vulkan
Requires:	Vulkan-LoaderAndValidationLayers
%description sub2-domain_API-UI-Vulkan
Tizen block (set of packages) for API sets of sub2-domain_API-UI-Vulkan
%files sub2-domain_API-UI-Vulkan





%package sub1-domain_API-UIX
Summary:	UIX
Suggests:	%{name}-sub2-domain_API-UIX-InputMethod
Suggests:	%{name}-sub2-domain_API-UIX-InputMethodManager
Suggests:	%{name}-sub2-domain_API-UIX-STT
Suggests:	%{name}-sub2-domain_API-UIX-TTS
Suggests:	%{name}-sub2-domain_API-UIX-VoiceControl
Suggests:	%{name}-sub2-domain_API-UIX-VoiceControlElementary
%description sub1-domain_API-UIX
Tizen block (set of packages) for API sets of domain API-UIX
%files sub1-domain_API-UIX

%package sub2-domain_API-UIX-InputMethod
Summary:	Input Method
Requires:	capi-ui-inputmethod
%description sub2-domain_API-UIX-InputMethod
Tizen block (set of packages) for API sets of sub2-domain_API-UIX-InputMethod
%files sub2-domain_API-UIX-InputMethod

%package sub2-domain_API-UIX-InputMethodManager
Summary:	Input Method Manager
Requires:	capi-ui-inputmethod-manager
%description sub2-domain_API-UIX-InputMethodManager
Tizen block (set of packages) for API sets of sub2-domain_API-UIX-InputMethodManager
%files sub2-domain_API-UIX-InputMethodManager

%package sub2-domain_API-UIX-STT
Summary:	STT
Requires:	stt
%description sub2-domain_API-UIX-STT
Tizen block (set of packages) for API sets of sub2-domain_API-UIX-STT
%files sub2-domain_API-UIX-STT

%package sub2-domain_API-UIX-TTS
Summary:	TTS
Requires:	tts
%description sub2-domain_API-UIX-TTS
Tizen block (set of packages) for API sets of sub2-domain_API-UIX-TTS
%files sub2-domain_API-UIX-TTS

%package sub2-domain_API-UIX-VoiceControl
Summary:	Voice Control
Requires:	voice-control
%description sub2-domain_API-UIX-VoiceControl
Tizen block (set of packages) for API sets of sub2-domain_API-UIX-VoiceControl
%files sub2-domain_API-UIX-VoiceControl

%package sub2-domain_API-UIX-VoiceControlElementary
Summary:	Voice Control Elementary
Requires:	voice-control-elm
%description sub2-domain_API-UIX-VoiceControlElementary
Tizen block (set of packages) for API sets of sub2-domain_API-UIX-VoiceControlElementary
%files sub2-domain_API-UIX-VoiceControlElementary





%package sub1-domain_API-Web
Summary:	Web
Suggests:	libjson-glib
Suggests:	chromium-efl
%description sub1-domain_API-Web
Tizen block (set of packages) for API sets of domain API-Web
%files sub1-domain_API-Web

