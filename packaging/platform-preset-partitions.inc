# Maintainer: Tizen IoT PM
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

############################
### Preset for Partition ###
############################
%package root-Preset_partition
Summary:    Partition Presets
Suggests:	%{name}-sub1-Preset_partition-2parts_ramdisk_recovery
Suggests:	%{name}-sub1-Preset_partition-3parts_ramdisk_recovery
Suggests:	%{name}-sub1-Preset_partition-2parts_ramdisk
Suggests:	%{name}-sub1-Preset_partition-3parts_ramdisk
Suggests:	%{name}-sub1-Preset_partition-3parts

%description root-Preset_partition
__EXPAND__: preset
The Supported Partions.
%files root-Preset_partition


#########################################
### 2 Parts with ramdisk and recovery ###
#########################################
%package sub1-Preset_partition-2parts_ramdisk_recovery
Summary:    Partition 2 with ramdisk and recovery

Requires:  system-plugin-config-2parts
Conflicts: %{name}-sub1-Preset_partition-2parts_ramdisk
Conflicts: %{name}-sub1-Preset_partition-3parts_ramdisk
Conflicts: %{name}-sub1-Preset_partition-3parts
Conflicts: %{name}-sub1-Preset_partition-3parts_ramdisk_recovery

%description sub1-Preset_partition-2parts_ramdisk_recovery
__PARTITION__: common-mbr-2parts-rpi3-ramdisk-recovery
part '\' , '\opt', '\mnt\initrd', '\mnt\initrd-recovery'
%files sub1-Preset_partition-2parts_ramdisk_recovery

#########################################
### 3 Parts with ramdisk and recovery ###
#########################################
%package sub1-Preset_partition-3parts_ramdisk_recovery
Summary:    Partition 3 with ramdisk and recovery
Requires:	system-plugin-u3

Conflicts: %{name}-sub1-Preset_partition-2parts_ramdisk_recovery
Conflicts: %{name}-sub1-Preset_partition-2parts_ramdisk
Conflicts: %{name}-sub1-Preset_partition-3parts_ramdisk
Conflicts: %{name}-sub1-Preset_partition-3parts

%description sub1-Preset_partition-3parts_ramdisk_recovery
__PARTITION__: common-3parts-ramdisk-recovery
part '\' , '\opt', '\opt\usr', '\mnt\initrd', '\mnt\initrd-recovery'
%files sub1-Preset_partition-3parts_ramdisk_recovery

############################
### 2 Parts with ramdisk ###
############################
%package sub1-Preset_partition-2parts_ramdisk
Summary:    Partition 2 with ramdisk

Requires:  system-plugin-config-2parts
Conflicts: %{name}-sub1-Preset_partition-2parts_ramdisk_recovery
Conflicts: %{name}-sub1-Preset_partition-3parts_ramdisk_recovery
Conflicts: %{name}-sub1-Preset_partition-3parts_ramdisk
Conflicts: %{name}-sub1-Preset_partition-3parts

%description sub1-Preset_partition-2parts_ramdisk
__PARTITION__: common-mbr-2parts-artik530_710-ramdisk
part "\" , "\opt", "\mnt\initrd"
%files sub1-Preset_partition-2parts_ramdisk

############################
### 3 Parts with ramdisk ###
############################
%package sub1-Preset_partition-3parts_ramdisk
Summary:    Partition 3 with ramdisk
Requires:	system-plugin-u3

Conflicts: %{name}-sub1-Preset_partition-2parts_ramdisk_recovery
Conflicts: %{name}-sub1-Preset_partition-3parts_ramdisk_recovery
Conflicts: %{name}-sub1-Preset_partition-2parts_ramdisk
Conflicts: %{name}-sub1-Preset_partition-3parts

%description sub1-Preset_partition-3parts_ramdisk
__PARTITION__: common-3parts-ramdisk
part "\" , "\opt", "\opt\usr", "\mnt\initrd"
%files sub1-Preset_partition-3parts_ramdisk

###############
### 3 Parts ###
###############
%package sub1-Preset_partition-3parts
Summary:    Partition 3
Requires:	system-plugin-u3
Requires:	system-plugin-init_wrapper

Conflicts: %{name}-sub1-Preset_partition-2parts_ramdisk_recovery
Conflicts: %{name}-sub1-Preset_partition-3parts_ramdisk_recovery
Conflicts: %{name}-sub1-Preset_partition-2parts_ramdisk
Conflicts: %{name}-sub1-Preset_partition-3parts_ramdisk

%description sub1-Preset_partition-3parts
__PARTITION__: common-mbr-3parts
part "\" , "\opt", "\opt\usr"
%files sub1-Preset_partition-3parts

