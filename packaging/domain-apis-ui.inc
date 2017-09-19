# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


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
Suggests: %{name}-sub2-domain_API-UI-Display_Server_Headless
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

Suggests: %{name}-sub2-domain_API-UI-Display_Server
Suggests: %{name}-sub2-domain_API-UI-Display_Server_Headless

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
Suggests:   libtdm-nexell
Suggests:   libtdm-vc4
Suggests:   libtdm-drm

#GL plugins
Suggests:   mesa

Conflicts:	%{name}-sub2-domain_API-UI-Display_Server_Headless

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

%package sub2-domain_API-UI-Display_Server_Headless
Summary:    Display_Server(Headless)
Requires:   pepper-doctor

Conflicts:	%{name}-sub2-domain_API-UI-Display_Server

%description sub2-domain_API-UI-Display_Server_Headless
Tizen block (set of packages) for Group of Display Server for headless or simple display target.
Display Server Block is core block for UI. It contains the wayland display server, however the server
support just simple protocol for user input and buffer management.

%files sub2-domain_API-UI-Display_Server_Headless

