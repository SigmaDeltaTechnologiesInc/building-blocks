# Maintainer: TBD: This is temporary block for TDC Demo. You may proceed with this later anyway.
# You need ACK (+1) from the maintainer to be reviewed by building-blocks maintainers.

#############
## Context ##
#############
%package sub1-domain_API-Context
Summary:	Context API Group
Suggests: %{name}-sub2-domain_API-Context-Activity_Geusture_Recognition
Suggests: %{name}-sub2-domain_API-Context-Contextual_History
Suggests: %{name}-sub2-domain_API-Context-Contextual_Trigger
%description sub1-domain_API-Context
Tizen block (set of packages) for Group of domain API-Context
%files sub1-domain_API-Context

%package sub2-domain_API-Context-Activity_Geusture_Recognition
Summary:    Activity/Geusture Recognition
Requires: capi-context-motion
Requires: %{name}-sub2-domain_API-System-Sensor_Listener
%description sub2-domain_API-Context-Activity_Geusture_Recognition
Activity/Gesture Recognition provides functions to recognize user activities and gestures.
%files sub2-domain_API-Context-Activity_Geusture_Recognition

%package sub2-domain_API-Context-Contextual_History
Summary:    Contextual History
Requires: capi-context
Requires: context-app-history
%description sub2-domain_API-Context-Contextual_History
Contextual History provides functions to retrieve user's device usage statistics and patterns.
%files sub2-domain_API-Context-Contextual_History
%posttrans sub2-domain_API-Context-Contextual_History
%tizen_feature tizen.org/feature/app_history true

%package sub2-domain_API-Context-Contextual_Trigger
Summary:    Contextual Trigger
Requires: capi-context
Requires: context-job-scheduler
%description sub2-domain_API-Context-Contextual_Trigger
Contextual Trigger provides functions to define task triggering rules based on device status and user activities.
%files sub2-domain_API-Context-Contextual_Trigger
%posttrans sub2-domain_API-Context-Contextual_Trigger
%tizen_feature tizen.org/feature/contextual_trigger true
