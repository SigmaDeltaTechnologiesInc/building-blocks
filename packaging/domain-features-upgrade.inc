# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

###################
## Tizen Upgrade ##
###################
%package sub1-domain_Feature-Upgrade
Summary:	Tizen Upgrade Feature
Requires: system-rw-update
Requires: initrd-fota
Requires: initrd-recovery
Requires: tota-ua
Requires: factory-reset
Suggests: building-blocks-sub1-Preset_partition-2parts_ramdisk_recovery
Suggests: building-blocks-sub1-Preset_partition-3parts_ramdisk_recovery
Suggests: reboot-param-helper
%description sub1-domain_Feature-Upgrade
Tizen block (set of packages) for supporting to upgrade new tizen image.
If you select this feature, you should select one of partition preset including the recovery part such as building-blocks-sub1-Preset_partition-2parts_ramdisk_recovery.
In case of RPi3, reboot-param-helper is also required for reboot parameter.
%files sub1-domain_Feature-Upgrade
