# Maintainer: MyungJoo Ham <myungjoo.ham@samsung.com> : Awaiting for successor.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.


%package root-preset
Summary:	Tizen Platform Presets
Suggests:	%{name}-sub1-preset-mobile
Suggests:	%{name}-sub1-preset-tv
Suggests:	%{name}-sub1-preset-wearable
Suggests:	%{name}-sub1-preset-ivi
Suggests:	%{name}-sub1-preset-iot
Suggests:	%{name}-sub1-preset-common
Suggests:	%{name}-sub1-preset-home_appliance
%description root-preset
Tizen Platform Presets as Package Selection Example
%files root-preset

%include_if_mainbuild %{SOURCE3100}
%include_if_mainbuild %{SOURCE3200}
%include_if_mainbuild %{SOURCE3300}
%include_if_mainbuild %{SOURCE3400}
%include_if_mainbuild %{SOURCE3500}
%include_if_mainbuild %{SOURCE3600}
%include_if_mainbuild %{SOURCE3700}

