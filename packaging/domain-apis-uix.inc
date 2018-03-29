# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


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
Requires: %{name}-sub2-domain_API-AppFramework-TPK_Installation

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
Requires: %{name}-sub2-domain_API-AppFramework-TPK_Installation

%description sub2-domain_API-UIX-TTS
TTS(Text-To-Speech) provides functions to synthesize voice from text and play synthesized sound data.

%files sub2-domain_API-UIX-TTS
%posttrans sub2-domain_API-UIX-TTS
%tizen_feature tizen.org/feature/speech.synthesis true


%package sub2-domain_API-UIX-Voice_control
Summary:    Voice_control

Requires: voice-control
Requires: org.tizen.vc-engine-default
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

