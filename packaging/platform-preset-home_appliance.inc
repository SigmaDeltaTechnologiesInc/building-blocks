# Maintainer: Tizen Home Appliance PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


%package sub1-Preset_sd-home_appliance
Summary:	Home Appliances Presets (no profile)
Conflicts:	%{name}-sub1-Preset_sd-mobile
Conflicts:	%{name}-sub1-Preset_sd-tv
Conflicts:	%{name}-sub1-Preset_sd-wearable
Conflicts:	%{name}-root-Preset-iot
Conflicts:	%{name}-sub1-Preset_sd-ivi
Conflicts:	%{name}-sub1-Preset_sd-common
Suggests:	%{name}-sub2-Preset_sd-home_appliance-refrigerator
Suggests:	%{name}-sub2-Preset_sd-home_appliance-air_purifier
Suggests:	%{name}-sub2-Preset_sd-home_appliance-robotic_vacuum
Suggests:	%{name}-sub2-Preset_sd-home_appliance-smart_oven
Suggests:	%{name}-sub2-Preset_sd-home_appliance-air_conditioner
Suggests:	%{name}-sub2-Preset_sd-home_appliance-washer
%description sub1-Preset_sd-home_appliance
Tizen Platform Presets for "Home Appliances"
%files sub1-Preset_sd-home_appliance



%package sub2-Preset_sd-home_appliance-refrigerator
Summary:	(Prototype) Refridgerator
%description sub2-Preset_sd-home_appliance-refrigerator
%files sub2-Preset_sd-home_appliance-refrigerator

%package sub2-Preset_sd-home_appliance-air_purifier
Summary:	(Prototype) Air Purifier
%description sub2-Preset_sd-home_appliance-air_purifier
%files sub2-Preset_sd-home_appliance-air_purifier

%package sub2-Preset_sd-home_appliance-robotic_vacuum
Summary:	(Prototype) Robotic Vacuum
%description sub2-Preset_sd-home_appliance-robotic_vacuum
%files sub2-Preset_sd-home_appliance-robotic_vacuum

%package sub2-Preset_sd-home_appliance-smart_oven
Summary:	(Prototype) Smart Oven
%description sub2-Preset_sd-home_appliance-smart_oven
%files sub2-Preset_sd-home_appliance-smart_oven

%package sub2-Preset_sd-home_appliance-air_conditioner
Summary:	(Prototype) Air Conditioner
%description sub2-Preset_sd-home_appliance-air_conditioner
%files sub2-Preset_sd-home_appliance-air_conditioner

%package sub2-Preset_sd-home_appliance-washer
Summary:	(Prototype) Washer and Dryer
%description sub2-Preset_sd-home_appliance-washer
%files sub2-Preset_sd-home_appliance-washer

