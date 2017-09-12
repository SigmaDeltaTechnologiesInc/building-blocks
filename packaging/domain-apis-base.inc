# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

##########
## Base ##
##########
%package sub1-domain_API-Base
Summary:	Base API Group
Suggests: %{name}-sub2-domain_API-Base-CPP_Standard_library
Suggests: %{name}-sub2-domain_API-Base-Common_Error
Suggests: %{name}-sub2-domain_API-Base-Glib
Suggests: %{name}-sub2-domain_API-Base-Glibc
Suggests: %{name}-sub2-domain_API-Base-LibXML
Suggests: %{name}-sub2-domain_API-Base-Minizip
Suggests: %{name}-sub2-domain_API-Base-OpenMP
Suggests: %{name}-sub2-domain_API-Base-Sqlite
Suggests: %{name}-sub2-domain_API-Base-Utils
Suggests: %{name}-sub2-domain_API-Base-zlib
%description sub1-domain_API-Base
Tizen block (set of packages) for Group of domain API-Base
%files sub1-domain_API-Base

%package sub2-domain_API-Base-CPP_Standard_library
Summary:    C++ Standard library
Requires: libstdc++
%description sub2-domain_API-Base-CPP_Standard_library
This Block is possible to user c++ standard library.

%files sub2-domain_API-Base-CPP_Standard_library

%package sub2-domain_API-Base-Common_Error
Summary:    Common-Error
Requires: libcom_err
%description sub2-domain_API-Base-Common_Error
Tizen block (set of packages) for Group of sub domain Common-Error

%files sub2-domain_API-Base-Common_Error

# Summary, description

%package sub2-domain_API-Base-Glib
Summary:    Glib

Requires: libglib
Requires: libgio
Requires: libgmodule
Requires: libgobject
Requires: libgthread

%description sub2-domain_API-Base-Glib

General Purpose Utility library

%files sub2-domain_API-Base-Glib


%package sub2-domain_API-Base-Glibc
Summary:    Glibc

Requires:glibc

%description sub2-domain_API-Base-Glibc
Glibc library

%files sub2-domain_API-Base-Glibc

%package sub2-domain_API-Base-LibXML
Summary:    LibXML
Requires: libxml2

%description sub2-domain_API-Base-LibXML

A library to manipulate XML files


%files sub2-domain_API-Base-LibXML

%package sub2-domain_API-Base-Minizip
Summary:    Minizip

Requires: minizip

%description sub2-domain_API-Base-Minizip

Data Compression Library


%files sub2-domain_API-Base-Minizip

%package sub2-domain_API-Base-OpenMP
Summary:    OpenMP
Requires: libgomp
%description sub2-domain_API-Base-OpenMP

an application programming interface (API) that supports multi-platform shared memory multiprocessing

%files sub2-domain_API-Base-OpenMP

%package sub2-domain_API-Base-Sqlite
Summary:    Sqlite
Requires: sqlite

%description sub2-domain_API-Base-Sqlite
This block is possible to use sqlite3 and libsqlite.

%files sub2-domain_API-Base-Sqlite


%package sub2-domain_API-Base-Utils
Summary:    Base-Utils
Requires: capi-base-utils

%description sub2-domain_API-Base-Utils
This block supports base-utils API for internationalization and localization

%files sub2-domain_API-Base-Utils

%package sub2-domain_API-Base-zlib
Summary:    zlib
Requires: zlib

%description sub2-domain_API-Base-zlib

Data Compression Library


%files sub2-domain_API-Base-zlib

