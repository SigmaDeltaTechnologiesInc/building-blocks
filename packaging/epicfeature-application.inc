# Maintainer: TBD (PM)
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

%package root-feature_App
Summary:	Tizen IoT Applications
Suggests:	%{name}-sub1-feature_App-IoT_Headed_Ref
Suggests:	%{name}-sub1-feature_App-IoT_Headless_Ref
%description root-feature_App
Tizen applications built at build.tizen.org and released via download.tizen.org
%files root-feature_App


%package sub1-feature_App-IoT_Headed_Ref
Summary:	IoT Headed Reference Apps
Suggests:	org.tizen.setting-profile_common
Suggests:	ug-bluetooth-efl
Suggests:	wifi-efl-ug
%description sub1-feature_App-IoT_Headed_Ref
Tizen Applications for IoT Headed
%files sub1-feature_App-IoT_Headed_Ref

%package sub1-feature_App-IoT_Headless_Ref
Summary:	IoT Headless Reference Apps
%description sub1-feature_App-IoT_Headless_Ref
Tizen Applications for IoT Headless
%files sub1-feature_App-IoT_Headless_Ref
