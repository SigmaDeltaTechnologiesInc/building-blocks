# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


############
## System ##
############
%package sub1-domain_API-System
Summary:	System API Group
Suggests: %{name}-sub2-domain_API-System-Device
Suggests: %{name}-sub2-domain_API-System-Device_Haptic
Suggests: %{name}-sub2-domain_API-System-Feedback
Suggests: %{name}-sub2-domain_API-System-Runtime_Information
Suggests: %{name}-sub2-domain_API-System-Sensor_Listener
Suggests: %{name}-sub2-domain_API-System-Sensor_Recorder
Suggests: %{name}-sub2-domain_API-System-Storage
Suggests: %{name}-sub2-domain_API-System-System_Information
Suggests: %{name}-sub2-domain_API-System-System_Settings
Suggests: %{name}-sub2-domain_API-System-T_Trace
Suggests: %{name}-sub2-domain_API-System-USB_Host
Suggests: %{name}-sub2-domain_API-System-dlog
Suggests: %{name}-sub2-domain_API-System-Update_Control
%description sub1-domain_API-System
Tizen block (set of packages) for Group of domain API-System
%files sub1-domain_API-System

%package sub2-domain_API-System-Device
Summary:  Device
Requires: deviced
Requires: capi-system-device
Suggests: device-manager-plugin-sc7730
Suggests: device-manager-plugin-artik
Suggests: device-manager-plugin-emul
Suggests: device-manager-plugin-exynos3250
Suggests: device-manager-plugin-exynos5433
Suggests: device-manager-plugin-exynos7270
Suggests: device-manager-plugin-odroid
Suggests: device-manager-plugin-rpi3
%description sub2-domain_API-System-Device
Tizen block (set of packages) for Group of sub domain Device.
If you do not want to use Device APIs, you do not need to choose.
However, if you want to use them, you have to choose at least one item in each device-manager-plugin-xxxx.
Those have a dependancy on Hardware.
So, before you select, you have to make sure that which hardware you have.
Then choose proper combination.
For example, device-manager-plugin-sc7730 for mobile
             device-manager-plugin-rpi3 for rpi3
%files sub2-domain_API-System-Device

%package sub2-domain_API-System-Device_Haptic
Summary:  Device_Haptic
Requires: feedbackd
Requires: capi-system-device
Suggests: feedbackd-driver-external
Suggests: feedbackd-driver-standard
Suggests: feedbackd-driver-gpio
Suggests: feedbackd-driver-circle
%description sub2-domain_API-System-Device_Haptic
Tizen block (set of packages) for Group of sub domain Device_Haptic.
If you do not want to use Device_Haptic APIs, you do not need to choose.
However, if you want to use them, you have to choose at least one item in feedbackd-driver-xxxx.
Haptic has a dependancy on Profile.
Before you select, you have to make sure that which Profile you have.
Then choose proper one.
For example, feedbackd-driver-circle for tw1
%files sub2-domain_API-System-Device_Haptic
%posttrans sub2-domain_API-System-Device_Haptic
%tizen_feature tizen.org/feature/feedback.vibration true

%package sub2-domain_API-System-Feedback
Summary:  Feedback
Requires: %{name}-sub2-domain_API-Multimedia-Audio_IO
Requires: feedbackd
Requires: libfeedback
Suggests: feedbackd-driver-external
Suggests: feedbackd-driver-standard
Suggests: feedbackd-driver-gpio
Suggests: feedbackd-driver-circle
Suggests: svi-data-profile_common
Suggests: svi-data-profile_mobile
Suggests: svi-data-profile_wearable
%description sub2-domain_API-System-Feedback
Tizen block (set of packages) for Group of sub domain Feedback.
Feedback is only available for mobile, wearable and common.
If you do not want to use Feedback APIs, you do not need to choose.
However, if you want to use them, you have to choose at least one item in feedbackd-driver-xxxx.
Those have a dependancy on Profile.
Before you select, you have to make sure that which Profile you have.
Then choose proper combination.
For example, svi-data-profile_common for common
%files sub2-domain_API-System-Feedback
%posttrans sub2-domain_API-System-Feedback
%tizen_feature tizen.org/feature/feedback.vibration true

%package sub2-domain_API-System-Runtime_Information
Summary:    Runtime information
Requires:   capi-system-runtime-info
Suggests:   %{name}-sub1-domain_Feature-Resource_manager
Suggests:   %{name}-sub1-domain_Feature-Resource_manager_Light
Suggests:   %{name}-sub1-domain_Feature-Resource_manager_Headless
%description sub2-domain_API-System-Runtime_Information
capi-system-runtime-info provides the current system state.<br>
To get the process information, you need to add one of these resource manager features below;<br>
  * Tizen Resource Manager - Full Featured<br>
  * Tizen Resource Manager - For Headless Devices<br>
  * Tizen Resource Manager - Light-Weight   
%files sub2-domain_API-System-Runtime_Information

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

%package sub2-domain_API-System-Update_Control
Summary:    Update Control
Requires: update-control
%description sub2-domain_API-System-Update_Control
Tizen block (set of packages) for Group of sub domain Update_Control
%files sub2-domain_API-System-Update_Control
%posttrans sub2-domain_API-System-Update_Control
%tizen_feature tizen.org/feature/device_update true
