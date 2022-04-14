// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimeNotificationBehaviour
  class TimeNotificationBehaviour;
  // Forward declaring type: IMarker
  class IMarker;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: NotificationUtilities
  class NotificationUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::NotificationUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::NotificationUtilities*, "UnityEngine.Timeline", "NotificationUtilities");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.NotificationUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class NotificationUtilities : public ::Il2CppObject {
    public:
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.TimeNotificationBehaviour> CreateNotificationsPlayable(UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.IMarker> markers, UnityEngine.GameObject go)
    // Offset: 0xC79100
    static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* markers, ::UnityEngine::GameObject* go);
    // static public System.Boolean TrackTypeSupportsNotifications(System.Type type)
    // Offset: 0xC799FC
    static bool TrackTypeSupportsNotifications(::System::Type* type);
  }; // UnityEngine.Timeline.NotificationUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::NotificationUtilities::CreateNotificationsPlayable
// Il2CppName: CreateNotificationsPlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> (*)(::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*, ::UnityEngine::GameObject*)>(&UnityEngine::Timeline::NotificationUtilities::CreateNotificationsPlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* markers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "IMarker")})->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::NotificationUtilities*), "CreateNotificationsPlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, markers, go});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::NotificationUtilities::TrackTypeSupportsNotifications
// Il2CppName: TrackTypeSupportsNotifications
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&UnityEngine::Timeline::NotificationUtilities::TrackTypeSupportsNotifications)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::NotificationUtilities*), "TrackTypeSupportsNotifications", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
