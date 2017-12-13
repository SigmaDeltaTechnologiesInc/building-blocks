# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

####################
## Tizen Recovery ##
####################
%package sub1-domain_Feature-Recovery
Summary:	Tizen Recovery Feature
Requires: system-recovery
Requires: initrd-recovery
Requires: factory-reset
Requires: factory-reset-userdata-backup
Requires: system-recovery-non_gui
Suggests: building-blocks-sub1-Preset_partition-2parts_ramdisk_recovery
Suggests: building-blocks-sub1-Preset_partition-3parts_ramdisk_recovery
Suggests: reboot-param-helper
%description sub1-domain_Feature-Recovery
Tizen block (set of packages) for supporting to platform recovery.<br>
* system-recovery does not support gui yet.<br>
It includes factory-reset as a default recovery.<br>
Notice:<br>
If you select this feature, you should select one of partition preset including the recovery part such as building-blocks-sub1-Preset_partition-2parts_ramdisk_recovery.<br>
In case of RPi3, reboot-param-helper is also required for reboot parameter.<br>
%files sub1-domain_Feature-Recovery
