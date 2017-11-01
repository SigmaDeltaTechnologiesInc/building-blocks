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
Suggests: tota-ua-target_rpi3
%description sub1-domain_Feature-Upgrade
Tizen block (set of packages) for supporting to upgrade new tizen image.
If you select this feature, you should select a partition including the recovery part such as building-blocks-sub1-Preset_partition-2parts_ramdisk_recovery.
%files sub1-domain_Feature-Upgrade
