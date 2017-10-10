# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


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

# required building block
Requires: %{name}-sub2-domain_API-System-Storage
Requires: %{name}-sub2-domain_API-UI-TBM_Surface

# suggest building block for network streaming
Suggests: %{name}-sub2-domain_API-Network-WiFi

# suggest building block for video rendering
Suggests: %{name}-sub2-domain_API-UI-EFL_NativeUIToolkit

# target specific package list
Suggests: gst-omx
Suggests: libomxil-e54xx
Suggests: libomxil-e3250-v4l2
Suggests: libomxil-e7270-v4l2
Suggests: libomxil-vc4


%description sub2-domain_API-Multimedia-Player
This block supports playing multimedia content. Content can be played from a file, from the network, or from memory. <br>
It gives the ability to controlling media playback attributes, perform various status queries, and control the display. <br>
<br>
About OPTIONAL selection: <br><br>
You have to choose wifi building block for network streaming. <br>
- Wifi in Network API Group <br>
You have to choose efl building block for video rendering. <br>
- EFL_NativeUIToolkit in UI API Group <br>
<br>
You have to choose packages depends on target and hardware. <br>
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

#ARTIK 530/710
Suggests:audio-hal-alc5658
Suggests:alsa-ucm-data-alc5658

#RPI3
Suggests:audio-hal-bcm2837
Suggests:alsa-ucm-data-rpi3

%description sub2-domain_API-Multimedia-AudioCore
AudioCore block includes core audio modules including pulseaudio and essential pulseaudio-modules.<br>
Following optional H/W packages must be selected based on actual target.<br>
TM1 : audio-hal-sc7727, audio-config-sc-TM1-sc7730<br>
TM2 : audio-hal-wm5110, alsa-ucm-data-wm5110<br>
TW1 : audio-hal-wm1831, audio-config-wm1831-orbis<br>
TW2 : audio-hal-wm1831-tw2, audio-config-wm1831-tw2<br>
U3/XU3 : audio-hal-max98090, alsa-ucm-data-max98090<br>
ARTIK 530/710 : audio-hal-alc5658, alsa-ucm-data-alc5658<br>
RPI3 : audio-hal-bcm2837, alsa-ucm-data-rpi3<br>

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
