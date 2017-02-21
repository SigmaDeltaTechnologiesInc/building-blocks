# There are meta packages only.
%define __debug_install_post %{nil}
%define debug_package %{nil}

Name:		building-blocks
Version:	0.0.1
Release:	0
License:	Apache-2
Summary:	The Root of All Tizen Meta Packages (building blocks)
Url:		http://tizen.org
Group:		Meta
Source0:	%{name}-%{version}.tar.gz
Source1001:	domain-kernel.inc
Source1002:	domain-systemfw.inc

Source1010:	domain-appfw.inc
Source1020:	domain-window-system.inc
Source1030:	domain-graphics.inc
Source1040:	domain-network.inc
Source1050:	domain-multimedia.inc
Source1060:	domain-hal.inc
Source1070:	domain-service-framework.inc
Source1080:	domain-UI.inc
Source1090:	domain-UIX.inc
Source1100:	domain-security.inc

Source2001:	epicfeature-headless.inc

Suggests:	%{name}-root-UI
Suggests:	%{name}-root-Kernel
Suggests:	%{name}-root-System_FW
Suggests:	%{name}-root-Headless

%description
The root of all Tizen building block meta packages.
Every root-level Tizen building block should be included by this.
Any "minimal" reauired packages should be somehow (directly or indirectly)
required (included) by this package.
In Tizen building blocks, "Requires" means mandatory package.
"Suggests" means optional package.
"Recommened" is reserved for future usage.
"Conflicts" is to unselect unconditionally.


%files

############## DOMAINS ##################

# Include "Kernel" domain. The script should not execute "include" if the contexst is in GBS service in OBS or GBS-Export
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1001}"), "f") then print("%include %{SOURCE1001}") end}}

# Include "systemfw" domain. The script should not execute "include" if the contexst is in GBS service in OBS or GBS-Export
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1002}"), "f") then print("%include %{SOURCE1002}") end}}

# And other domains
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1010}"), "f") then print("%include %{SOURCE1010}") end}}
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1020}"), "f") then print("%include %{SOURCE1020}") end}}
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1030}"), "f") then print("%include %{SOURCE1030}") end}}
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1040}"), "f") then print("%include %{SOURCE1040}") end}}
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1050}"), "f") then print("%include %{SOURCE1050}") end}}
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1060}"), "f") then print("%include %{SOURCE1060}") end}}
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1070}"), "f") then print("%include %{SOURCE1070}") end}}
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1080}"), "f") then print("%include %{SOURCE1080}") end}}
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1090}"), "f") then print("%include %{SOURCE1090}") end}}
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1100}"), "f") then print("%include %{SOURCE1100}") end}}


############## EPIC FEATURES ######################

# Include "headless" epic feature. The script should not execute "include" if the contexst is in GBS service in OBS or GBS-Export
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE2001}"), "f") then print("%include %{SOURCE2001}") end}}


%package root-UI
Summary:	UI Related Packages
Requires:	efl
Requires:	wayland
%description root-UI
UI Frameworks of Tizen
%files root-UI

