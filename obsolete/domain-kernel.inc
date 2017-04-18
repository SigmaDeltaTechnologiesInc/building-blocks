# Maintainer: Inki Dae <inki.dae@samsung.com>
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-domain_Kernel
Summary:	Tizen Kernel Domain
Suggests:	%{name}-sub1-domain_Kernel-chooseonlyone_Kernel
%description root-domain_Kernel
This domain, "Kernel", introdues packages and sub-domains/features
of Tizen Kernel packages.
This is maintained by Inki Dae.
%files root-domain_Kernel
# Keep this empty



# Note to S-Core
# When a block name is "chooseonlyone_*", its UI-shown name is "*" and the elements are shown with radio-button (choose only one) UI.
# Recommended: add only one Requires here.
# TIC is going to choose only one package that provides the "requires" package.
# In this example, TIC is going to choose one pakcage that Provides linux-kernel >= 3.10 if root-domain_chooseonlyone_Kernel is chosen.
# By default, any package is going to be chosen unless there is another dependencies.

%package sub1-domain_Kernel-chooseonlyone_Kernel
Summary:	Linux Kernel
Requires:	linux-kernel >= 3.10

%description sub1-domain_Kernel-chooseonlyone_Kernel
Include Linux Kernel in the Platform Image

%files sub1-domain_Kernel-chooseonlyone_Kernel
# Keep this empty




# END
