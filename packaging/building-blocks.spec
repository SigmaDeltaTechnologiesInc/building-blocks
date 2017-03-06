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
Source2010:	epicfeature-development.inc

Source3001:	platform-preset.inc

# Do not try to include files if RPMBUILD has already expanded source files
# Use Source1001 (domain-kernel) as the probing point.
%define include_if_mainbuild() %{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1001}"), "f") then print("%include "..rpm.expand("%{1}")) end}}


Suggests:	%{name}-root-UI
Suggests:	%{name}-root-HAL
Suggests:	%{name}-root-Kernel
Suggests:	%{name}-root-System_FW

Suggests:	%{name}-root-feature_Headless
Suggests:	%{name}-root-feature_Headed

Suggests:	%{name}-root-feature_Development

Suggests:	%{name}-root-preset

%description
The root of all Tizen building block meta packages.
Every root-level Tizen building block should be included by this.
Any "minimal" required packages should be somehow (directly or indirectly)
required (included) by this package.
In Tizen building blocks, "Requires" means mandatory package.
"Suggests" means optional package.
"Recommened" is reserved for future usage.
"Conflicts" is to unselect unconditionally.


%files

############## DOMAINS ##################

# Include "Kernel" domain. The script should not execute "include" if the contexts is in GBS service in OBS or GBS-Export
%include_if_mainbuild %{SOURCE1001}

# Include "systemfw" domain. The script should not execute "include" if the contexts is in GBS service in OBS or GBS-Export
%include_if_mainbuild %{SOURCE1002}

# And other domains
%include_if_mainbuild %{SOURCE1010}
%include_if_mainbuild %{SOURCE1020}
%include_if_mainbuild %{SOURCE1030}
%include_if_mainbuild %{SOURCE1040}
%include_if_mainbuild %{SOURCE1050}
%include_if_mainbuild %{SOURCE1060}
%include_if_mainbuild %{SOURCE1070}
%include_if_mainbuild %{SOURCE1080}
%include_if_mainbuild %{SOURCE1090}
%include_if_mainbuild %{SOURCE1100}

############## EPIC FEATURES ######################

# Include "headless" epic feature. The script should not execute "include" if the contexts is in GBS service in OBS or GBS-Export
%include_if_mainbuild %{SOURCE2001}

%include_if_mainbuild %{SOURCE2010}


############# PLATFORM PRESET #####################

# Tizen Platform Presets.
# Unlike Preset-Recipes of TIC, you cannot deselect packages from these presets.
%include_if_mainbuild %{SOURCE3001}


%package root-UI
Summary:	UI Related Packages
Requires:	efl
Requires:	wayland
%description root-UI
UI Frameworks of Tizen
%files root-UI

