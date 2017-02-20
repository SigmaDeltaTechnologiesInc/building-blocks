# There are meta packages only.
%define debug_package %{nil}

Name:		building-blocks
Version:	0.0.1
Release:	0
License:	Apache-2
Summary:	The Root of All Tizen Meta Packages (building blocks)
Url:		http://tizen.org
Group:		Meta
Source0:	%{name}-%{version}.tar.gz
Source1:	domain-systemfw.inc

Suggests:	%{name}-root-Headless
Suggests:	%{name}-root-Kernel
Suggests:	%{name}-root-UI

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

# Include "systemfw" domain. The script should not execute "include" if the contexst is in GBS service in OBS or GBS-Export
%{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1}"), "f") then print("%include %{SOURCE1}") end}}

%package root-Headless
Summary:	Enable Tizen Headless Device
Conflicts:	efl
Conflicts:	wayland
Requires:	%{name}-sub1-Headless-Minimal
Suggests:	%{name}-sub1-Headless-Network
%description root-Headless
Enableing this means that you are going to create Tizen headless device.
This disables all display depending packages.
%files root-Headless

%package sub1-Headless-Minimal
Summary:	Minimal Tizen Image Configuration for Headless
Requires:	bash
Requires:	systemd
%description sub1-Headless-Minimal
Include minimal set of packages for headless.
%files sub1-Headless-Minimal

%package sub1-Headless-Network
Summary:	Headless Network Packages
Requires:	wpa-supplicant
Suggests:	bluez
%description sub1-Headless-Network
Include network packages for headless.
%files sub1-Headless-Network

%package root-UI
Summary:	UI Related Packages
Requires:	efl
Requires:	wayland
%description root-UI
UI Frameworks of Tizen
%files root-UI


# Note to S-Core
# When a block name is "chooseonlyone_*", its UI-shown name is "*" and the elements are shown with radio-button (choose only one) UI.
# Recommended: add only one Requires here.
# TIC is going to choose only one package that provides the "requires" package.
# In this example, TIC is going to choose one pakcage that Provides linux-kernel >= 3.10 if root-chooseonlyone_Kernel is chosen.
# By default, any package is going to be chosen unless there is another dependencies.
%package root-chooseonlyone_Kernel
Summary:	Linux Kernel
Requires:	linux-kernel >= 3.10
%description root-Kernel
Include Linux Kernel in the Platform Image
%files root-Kernel
