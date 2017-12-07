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
Requires: system-recovery-non_gui
%description sub1-domain_Feature-Recovery
Tizen block (set of packages) for supporting to platform recovery.
* system-recovery does not support gui yet.
It includes factory-reset as a default recovery.
%files sub1-domain_Feature-Recovery
