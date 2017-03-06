# Maintainer: MyungJoo Ham <myungjoo.ham@samsung.com> : Awaiting for successor.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-feature_Development
Summary:	Development Tools
Suggests:	%{name}-sub1-feature_Development-Build
Suggests:	%{name}-sub1-feature_Development-Debug
Suggests:	%{name}-sub1-feature_Development-Utility
%description root-feature_Development
Develpoment tools that are generally not required by target devices while
being useful for developers.
%files root-feature_Development

%package sub1-feature_Development-Build
Summary:	Build tools and compilers
Suggests:	gcc
Suggests:	llvm
Suggests:	clang
Suggests:	make
Suggests:	cmake
%description sub1-feature_Development-Build
Build tools and compilers from Tizen
%files sub1-feature_Development-Build


%package sub1-feature_Development-Debug
Summary:	Debugging tools
Suggests:	gdb
Suggests:	lldb
Suggests:	valgrind
Suggests:	sdbd
%description sub1-feature_Development-Debug
Debugging tools installable at Tizen targets
%files sub1-feature_Development-Debug


%package sub1-feature_Development-Utility
Summary:	Other utilities
Suggests:	rpm
Suggests:	tar
Suggests:	gzip
Suggests:	zip
Suggests:	unzip
Suggests:	bash
Suggests:	findutils
Suggests:	coreutils
Suggests:	busybox
Suggests:	sed
Suggests:	net-tools
Suggests:	xz
%description sub1-feature_Development-Utility
Other utilities useful for in-target developoment
%files sub1-feature_Development-Utility


