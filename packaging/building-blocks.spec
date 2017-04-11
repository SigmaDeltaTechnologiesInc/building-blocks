# There are meta packages only.
%define __debug_install_post %{nil}
%define debug_package %{nil}

Name:		building-blocks
Version:	0.0.1
Release:	0
License:	Apache-2.0
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
Source2020:	epicfeature-platform.inc

Source3100:	platform-preset-mobile.inc
Source3200:	platform-preset-wearable.inc
Source3300:	platform-preset-tv.inc
Source3400:	platform-preset-ivi.inc
Source3500:	platform-preset-iot.inc
Source3600:	platform-preset-common.inc
Source3700:	platform-preset-home_appliance.inc
Source3800:	platform-preset-boards.inc
Source3900:	platform-preset-smart.inc

# To get .ks files
BuildRequires:	image-configurations

# To get blocked .yaml files, idea from YD Seo.
BuildRequires:	meta-common
BuildRequires:	meta-mobile
BuildRequires:	meta-wearable
BuildRequires:	meta-tv
BuildRequires:	meta-ivi

# To check the rules
BuildRequires:	python

# Root Categories
Suggests:	%{name}-category-domains
Suggests:	%{name}-category-epicfeatures
Suggests:	%{name}-category-Presets

%description
The root of all Tizen building block meta packages.
Every root-level Tizen building block should be included by this.
Any "minimal" required packages should be somehow (directly or indirectly)
required (included) by this package.
In Tizen building blocks, "Requires" means mandatory package.
"Suggests" means optional package.
"Recommened" is reserved for future usage.
"Conflicts" is to unselect unconditionally.


%package	category-domains
Summary:	Tizen Techinical Domains
Suggests:	%{name}-root-domain_Kernel
Suggests:	%{name}-root-domain_SystemFW
Suggests:	%{name}-root-domain_AppFW
Suggests:	%{name}-root-domain_Window
Suggests:	%{name}-root-domain_graphics
Suggests:	%{name}-root-domain_network
Suggests:	%{name}-root-domain_multimedia
Suggests:	%{name}-root-domain_HAL
Suggests:	%{name}-root-domain_serviceFW
Suggests:	%{name}-root-domain_UI
Suggests:	%{name}-root-domain_UIX
Suggests:	%{name}-root-domain_security
%description	category-domains
This meta package lists all Tizen blocks (meta packages) designating
techinical domains.
%files		category-domains
# Intentionally empty


%package	category-epicfeatures
Summary:	Tizen Major Features
Suggests:	%{name}-root-feature_Headless
Suggests:	%{name}-root-feature_Headed
Suggests:	%{name}-root-feature_Development
Suggests:	%{name}-root-feature_Platform
%description	category-epicfeatures
This meta package lists all Tizen blocks (meta packages) designating
major features that are supposed to be orthogonal to each other
and to most domains.
%files		category-epicfeatures
# Intentionally empty


%package	category-Preset
Summary:	Tizen Presets
Suggests:	%{name}-root-Preset_boards
Suggests:	%{name}-root-Preset_sd
Suggests:	%{name}-root-Preset_iot
%description	category-Preset
This meta pacakge lists all Tizen blocks (meta packages) designating
Tizen platform presets, HAL/device-support presets, and
presets describing specific products.
%files		category-Preset
# Intentionally empty


# Do not try to include files unless RPMBUILD has already expanded source files to SOURCES
# Use Source1001 (domain-kernel) as the probing point.
%define include_if_mainbuild() %{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1001}"), "f") then print("%include "..rpm.expand("%{1}").." ") end}}

# Create a target device preset from .ks file used to create device iamge.
# This script writes build-spec when building the build-spec itself. :)
# Importing .kg file with list_with_require() based on image-configuration will work
# after Tizen:Unified starts to generate its own platform images.
%define list_with_require() %{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1001}"), "f") then \
	local start = 0 \
	if posix.access(rpm.expand("%{1}")) then \
		for line in io.lines(rpm.expand("%{1}")) do \
			if (string.match(line, '%%end')) then break end \
			if (string.match(line, '%%packages')) then \
				start = 1 \
			else \
				if (start == 1) then \
					if (string.match(line, '#')) then \
					elseif (string.sub(line, 1, 1) == '-') then \
					elseif (string.len(line) == 0) then\
					else \
						print("Requires: "..line) \
						print("\\n") \
					end \
				end \
			end \
		end \
	else \
		print("Requires: CANNOT_FIND_REQUIRED_FILES\\n") \
	end \
end}}

# Create Suggests List of blocks with yaml file list
# DIRECTORY, Prefix-To-Be-Removed, Prefix-for-block-name
%define list_suggest() %{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1001}"), "f") then \
	for f in posix.files(rpm.expand("%{1}")) do \
		local line =  string.sub(f, string.len(rpm.expand("%{2}"))+2) \
		local prefix = string.sub(f, 1, string.len(rpm.expand("%{2}"))) \
		if (string.sub(line, 1, 10) == 'adaptation') then \
		elseif (string.sub(line, 1, 4) == 'boot') then \
		elseif (prefix == rpm.expand("%{2}")) then \
			line = string.gsub(line, "-", "_")
			print("Suggests: "..rpm.expand("%{3}").."zblock_"..line) \
			print("\\n") \
		end \
	end \
end}}


# Create Requires List of packages for all blocks with yaml file list
# DIRECTORY, Prefix-To-Be-Removed, Prefix-for-block-name
%define list_require() %{expand:%{lua:if posix.access(rpm.expand("%{SOURCE1001}"), "f") then \
	for f in posix.files(rpm.expand("%{1}")) do \
		local line =  string.sub(f, string.len(rpm.expand("%{2}"))+2) \
		local prefix = string.sub(f, 1, string.len(rpm.expand("%{2}"))) \
		if (string.sub(line, 1, 10) == 'adaptation') then \
		elseif (string.sub(line, 1, 4) == 'boot') then \
		elseif (prefix == rpm.expand("%{2}")) then \
			local pkg = rpm.expand("%{3}").."zblock_"..string.gsub(line, "-", "_") \
			local summary_available = 0 \
			local filename = rpm.expand("%{1}").."/"..f \
			print("\\n") \
			print("%%package "..pkg.."\\n") \
			if posix.access(filename) then \
				for tag in io.lines(filename) do \
					if (string.sub(tag, 1, 8) == "Summary:") then \
						print(tag) \
						print("\\n") \
						summary_available = 1 \
						break \
					end \
				end \
			end \
			if (summary_available == 0) then \
				print("Summary: "..f) \
				print("\\n") \
			end \
			if posix.access(filename) then \
				for line in io.lines(rpm.expand("%{1}").."/"..f) do \
					if (string.match(line, 'Packages:')) then \
						start = 1 \
					elseif (string.sub(line, 1, 2) == '- ') then \
						if (start == 1) then \
							print("Requires: "..string.sub(line, 3)) \
							print("\\n") \
						end \
					elseif (string.sub(line, 1, 1) == '#') then \
					elseif (string.len(line) == 0) then \
					else \
						start = 0
					end \
				end \
			else \
				print("Requires: CANNOT_FIND_REQUIRED_FILES\\n") \
			end \
			print("%%description "..pkg.."\\n") \
			print("Auto Generated Block (zblock) of "..f.."\\n") \
			print("%%files "..pkg.."\\n") \
			print("\\n\\n\\n") \
		end \
	end \
end}}

%prep
%setup

%build

# Auto require generation still requires further decision making. This shows the basic data for it in the build log.
ls -l %{_datadir}/image-configurations/*

# rule_checker returns non-zero if there is an error in *.inc, breaking the build
python ./rule_checker.py

%files

############## DOMAINS ##################

# Include "Kernel" domain. The script should not execute "include" if the contexts is in GBS service in OBS or GBS-Export
%{include_if_mainbuild %{SOURCE1001}}

# Include "systemfw" domain. The script should not execute "include" if the contexts is in GBS service in OBS or GBS-Export
%{include_if_mainbuild %{SOURCE1002}}

# And other domains
%{include_if_mainbuild %{SOURCE1010}}
%{include_if_mainbuild %{SOURCE1020}}
%{include_if_mainbuild %{SOURCE1030}}
%{include_if_mainbuild %{SOURCE1040}}
%{include_if_mainbuild %{SOURCE1050}}
%{include_if_mainbuild %{SOURCE1060}}
%{include_if_mainbuild %{SOURCE1070}}
%{include_if_mainbuild %{SOURCE1080}}
%{include_if_mainbuild %{SOURCE1090}}
%{include_if_mainbuild %{SOURCE1100}}

############## EPIC FEATURES ######################

# Include "headless" epic feature. The script should not execute "include" if the contexts is in GBS service in OBS or GBS-Export
%{include_if_mainbuild %{SOURCE2001}}

# Dev tools
%{include_if_mainbuild %{SOURCE2010}}

# Platform features
%{include_if_mainbuild %{SOURCE2020}}


############# PLATFORM PRESET #####################

# Tizen Platform Presets.
# Unlike Preset-Recipes of TIC, you cannot deselect packages from these presets.
%{include_if_mainbuild %{SOURCE3100}}
%{include_if_mainbuild %{SOURCE3200}}
%{include_if_mainbuild %{SOURCE3300}}
%{include_if_mainbuild %{SOURCE3400}}
%{include_if_mainbuild %{SOURCE3500}}
%{include_if_mainbuild %{SOURCE3600}}
%{include_if_mainbuild %{SOURCE3700}}
%{include_if_mainbuild %{SOURCE3800}}
%{include_if_mainbuild %{SOURCE3900}}


