# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

##########
## .NET ##
##########
%package sub1-domain_Feature-DotNET
Summary:	DotNET feature packages
Requires: coreclr
Requires: coreclr-extra
Requires: corefx-managed
Requires: corefx-native
Requires: dotnet-launcher
Requires: mscorlib
Requires: keyutils
Requires: csapi-tizenfx-common
Suggests: dali-csharp-binder
%description sub1-domain_Feature-DotNET
Tizen block (set of packages) for supporting .NET of Tizen
%files sub1-domain_Feature-DotNET
