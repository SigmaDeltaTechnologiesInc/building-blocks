# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

###################
## AppFrammework ##
###################
%package sub1-domain_API-AppFramework
Summary:	Application Framework Native API Group
Suggests: %{name}-sub2-domain_API-AppFramework-TPK_Installation
Suggests: %{name}-sub2-domain_API-AppFramework-External_Storage_Installation
Suggests: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Suggests: %{name}-sub2-domain_API-AppFramework-Alarm_API
Suggests: %{name}-sub2-domain_API-AppFramework-Message_Port_API
Suggests: %{name}-sub2-domain_API-AppFramework-Data_Control_API
Suggests: %{name}-sub2-domain_API-AppFramework-Event_API
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

%package sub2-domain_API-AppFramework-External_Storage_Installation
Summary: Package management in external storage (SD card)
Requires: app2sd
Requires: app2sd-plugin
%description sub2-domain_API-AppFramework-External_Storage_Installation
This block supports package management in external storage (SD card)
%files sub2-domain_API-AppFramework-External_Storage_Installation

%package sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Summary: Native EFL UI app model
Requires: capi-appfw-application
Requires: amd-mod-cynara-core
Requires: amd-mod-extractor
Requires: amd-mod-input
Requires: launchpad
Requires: launchpad-loader
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
Requires: %{name}-sub2-domain_API-AppFramework-Notification_API
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

%package sub2-domain_API-AppFramework-Event_API
Summary: App Event API
Requires: capi-appfw-event
Requires: esd
%description sub2-domain_API-AppFramework-Event_API
This block supports system event listening for applications. It also supports event broadcasting among applications.
%files sub2-domain_API-AppFramework-Event_API

%package sub2-domain_API-AppFramework-Native_EFL_Widget_App_Model
Summary: EFL widget app model
Requires: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Requires: appcore-widget
Requires: libwidget_service
Requires: libwidget_viewer
Requires: libwidget_viewer_evas
Requires: amd-mod-widget
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
%posttrans sub2-domain_API-AppFramework-Shortcut_API
%tizen_feature tizen.org/feature/shortcut true

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
Requires: %{name}-sub2-domain_API-System-Device
Requires: %{name}-sub2-domain_API-Multimedia-Recorder
Requires: %{name}-sub2-domain_API-AppFramework-Native_EFL_UI_app_model
Requires: %{name}-sub2-domain_API-System-Storage

Suggests: org.tizen.app-selector-profile_mobile

%description sub2-domain_API-AppFramework-Attach_Panel
Attach panel provides functions to attach images, voices, contacts, events and files. User can attach images, take pictures, record voice and select files to attach into the caller app.
Currently, only mobile is supported, and if there is a profile you want, you can select the app-selector package corresponding to profile.

%files sub2-domain_API-AppFramework-Attach_Panel
%posttrans sub2-domain_API-AppFramework-Attach_Panel
%tizen_feature tizen.org/feature/attach_panel true
