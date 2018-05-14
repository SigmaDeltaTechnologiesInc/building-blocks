# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


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
Suggests: bluetooth-firmware-bcm-rpi3

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
- RPI3 : bluetooth-firmware-bcm-rpi3<br>
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
%tizen_feature tizen.org/feature/network.bluetooth.oob true

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

#LE only
Suggests: bluez-extension-le

#Firmware
Suggests: bluetooth-firmware-bcm
Suggests: bluetooth-firmware-bcm-artik
Suggests: bluetooth-firmware-bcm-exynos3250
Suggests: bluetooth-firmware-bcm-exynos7270
Suggests: bluetooth-firmware-sprd-TM1
Suggests: bluetooth-firmware-bcm-rpi3

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
- RPI3 : bluetooth-firmware-bcm-rpi3<br>
2. LE only<br>
- bluez-extension-le<br>
3. Profiles<br>
- mobile : bluetooth-frwk-profile_mobile, bluetooth-tools-profile_mobile, bluez-profile_common<br>
- wearable : bluetooth-frwk-profile_wearable, bluetooth-tools-profile_wearable, bluez-profile_wearable<br>
- common : bluetooth-frwk-profile_common, bluetooth-tools-profile_common, bluez-profile_common<br>
- tv : bluetooth-frwk-profile_tv, bluetooth-tools-profile_common, bluez-profile_tv<br>
- ivi : bluetooth-frwk-profile_ivi, bluetooth-tools-profile_ivi, bluez-profile_common<br>
4. Headed device<br>
- wearable : bluetooth-frwk-plugin-headed, org.tizen.bt-syspopup, org.tizen.bt-syspopup-profile_wearable<br>
- not wearable : bluetooth-frwk-plugin-headed, org.tizen.bt-syspopup, org.tizen.bt-syspopup-profile_common
%files sub2-domain_API-Network-Bluetooth_LE
%posttrans sub2-domain_API-Network-Bluetooth_LE
%tizen_feature tizen.org/feature/network.bluetooth.le true
%tizen_feature tizen.org/feature/network.bluetooth.le.ipsp false
%tizen_feature tizen.org/feature/network.bluetooth.le.gatt.server true
%tizen_feature tizen.org/feature/network.bluetooth.le.gatt.client true

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
Requires:	capi-network-wifi-manager
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

