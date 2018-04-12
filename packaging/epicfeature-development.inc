# Maintainer: MyungJoo Ham <myungjoo.ham@samsung.com> : Awaiting for successor.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-feature_Development
Summary:	Development Tools
Suggests:	%{name}-sub1-feature_Development-Build
Suggests:	%{name}-sub1-feature_Development-Language
Suggests:	%{name}-sub1-feature_Development-Debug
Suggests:	%{name}-sub1-feature_Development-Utility
%description root-feature_Development
Develpoment tools that are generally not required by target devices while
being useful for developers.
%files root-feature_Development

%package sub1-feature_Development-Build
Summary:	Build tools and compilers
Suggests:	%{name}-sub2-feature_Development-Build-GCC
Suggests:	%{name}-sub2-feature_Development-Build-LLVM
Suggests:	%{name}-sub2-feature_Development-Build-CS_dotnet
Suggests:	make
Suggests:	cmake
Suggests:	dotnet-build-tools
Suggests:	ninja
%description sub1-feature_Development-Build
Build tools and compilers from Tizen
%files sub1-feature_Development-Build

%package sub2-feature_Development-Build-GCC
Summary:	GCC, the GNU Compiler Collection
Requires:	gcc
Suggests:	cpp
Suggests:	gcc-c++
Suggests:	libstdc++
Suggests:	libstdc++-devel
Suggests:	libgcc
Suggests:	libgomp
Suggests:	libobjc
Suggests:	libcc1
%description sub2-feature_Development-Build-GCC
%files sub2-feature_Development-Build-GCC

%package sub2-feature_Development-Build-LLVM
Summary:	The LLVM Compiler Infrastructure
Requires:	llvm
Requires:	clang
Suggests:	lldb
Suggests:	lldb-devel
Suggests:	llvm-devel
Suggests:	clang-devel
Suggests:	libllvm
%description sub2-feature_Development-Build-LLVM
%files sub2-feature_Development-Build-LLVM

%package sub2-feature_Development-Build-CS_dotnet
Summary:	C# Build Toold (dotnet-core)
Requires:	dotnet-build-tools
%description sub2-feature_Development-Build-CS_dotnet
%files sub2-feature_Development-Build-CS_dotnet






%package sub1-feature_Development-Language
Summary:	Languages (Runtime)
Suggests:	%{name}-sub2-feature_Development-Language-python
Suggests:	%{name}-sub2-feature_Development-Language-python3
Suggests:	%{name}-sub2-feature_Development-Language-perl
Suggests:	lua
Suggests:	%{name}-sub2-feature_Development-Language-CS_dotnet
%description sub1-feature_Development-Language
Language Support (Runtimes)
%files sub1-feature_Development-Language


%package sub2-feature_Development-Language-CS_dotnet
Summary:	C# Runtime (dotnet-core)
Requires:	coreclr
Requires:	mscorlib
Suggests:	coreclr-extra
Requires:	corefx-native
Requires:	corefx-managed
Suggests:	corefx-managed-ref
Suggests:	corefx-test
Suggests:	dotnet-launcher
Suggests:	scd-launcher
%description sub2-feature_Development-Language-CS_dotnet
%files sub2-feature_Development-Language-CS_dotnet



%package sub2-feature_Development-Language-python
Summary:	Python 2
Requires:	python
Suggests:	python-curses
Suggests:	python-devel
Suggests:	python-libxml2
Suggests:	python-lxml
Suggests:	python-rpm
Suggests:	python-xml
Suggests:	libpython
%description sub2-feature_Development-Language-python
%files sub2-feature_Development-Language-python

%package sub2-feature_Development-Language-python3
Summary:	Python 3
Requires:	python3
Suggests:	python3-base
Suggests:	python3-curses
Suggests:	python3-devel
Suggests:	python3-dummy
Suggests:	python3-idle
Suggests:	python3-testsuite
Suggests:	python3-tools
Suggests:	libpython3
%description sub2-feature_Development-Language-python3
%files sub2-feature_Development-Language-python3

%package sub2-feature_Development-Language-perl
Summary:	Perl
Requires:	perl
Suggests:	perl-Devel-Symdump
Suggests:	perl-HTML-Parser
Suggests:	perl-HTML-Parser-docs
Suggests:	perl-XML-Parser
Suggests:	perl-gettext
%description sub2-feature_Development-Language-perl
%files sub2-feature_Development-Language-perl




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
Suggests:	bash
Suggests:	bc
Suggests:	binutils
Suggests:	busybox
Suggests:	coreutils
Suggests:	diffutils
Suggests:	findutils
Suggests:	gawk
Suggests:	grep
Suggests:	gzip
Suggests:	net-tools
Suggests:	rpm
Suggests:	sed
Suggests:	tar
Suggests:	unzip
Suggests:	xz
Suggests:	zip
%description sub1-feature_Development-Utility
Other utilities useful for in-target developoment
%files sub1-feature_Development-Utility


