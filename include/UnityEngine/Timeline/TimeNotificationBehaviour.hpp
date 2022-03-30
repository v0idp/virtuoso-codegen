// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
// Including type: UnityEngine.Timeline.NotificationFlags
#include "UnityEngine/Timeline/NotificationFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: DirectorWrapMode
  struct DirectorWrapMode;
  // Forward declaring type: INotification
  class INotification;
  // Forward declaring type: FrameData
  struct FrameData;
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Skipping declaration: NotificationEntry because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimeNotificationBehaviour
  class TimeNotificationBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TimeNotificationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeNotificationBehaviour*, "UnityEngine.Timeline", "TimeNotificationBehaviour");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimeNotificationBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeNotificationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
    public:
    // Nested type: ::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry
    struct NotificationEntry;
    // Nested type: ::UnityEngine::Timeline::TimeNotificationBehaviour::$$c
    class $$c;
    // Size: 0x24
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.NotificationEntry
    // [TokenAttribute] Offset: FFFFFFFF
    struct NotificationEntry/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Double time
      // Size: 0x8
      // Offset: 0x0
      double time;
      // Field size check
      static_assert(sizeof(double) == 0x8);
      // public UnityEngine.Playables.INotification payload
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Playables::INotification* payload;
      // Field size check
      static_assert(sizeof(::UnityEngine::Playables::INotification*) == 0x8);
      // public System.Boolean notificationFired
      // Size: 0x1
      // Offset: 0x10
      bool notificationFired;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: notificationFired and: flags
      char __padding2[0x1] = {};
      // public UnityEngine.Timeline.NotificationFlags flags
      // Size: 0x12
      // Offset: 0x12
      ::UnityEngine::Timeline::NotificationFlags flags;
      // Field size check
      static_assert(sizeof(::UnityEngine::Timeline::NotificationFlags) == 0x12);
      public:
      // Creating value type constructor for type: NotificationEntry
      constexpr NotificationEntry(double time_ = {}, ::UnityEngine::Playables::INotification* payload_ = {}, bool notificationFired_ = {}, ::UnityEngine::Timeline::NotificationFlags flags_ = {}) noexcept : time{time_}, payload{payload_}, notificationFired{notificationFired_}, flags{flags_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Double time
      double& dyn_time();
      // Get instance field reference: public UnityEngine.Playables.INotification payload
      ::UnityEngine::Playables::INotification*& dyn_payload();
      // Get instance field reference: public System.Boolean notificationFired
      bool& dyn_notificationFired();
      // Get instance field reference: public UnityEngine.Timeline.NotificationFlags flags
      ::UnityEngine::Timeline::NotificationFlags& dyn_flags();
      // public System.Boolean get_triggerInEditor()
      // Offset: 0x12D1F74
      bool get_triggerInEditor();
      // public System.Boolean get_prewarm()
      // Offset: 0x12D1F80
      bool get_prewarm();
      // public System.Boolean get_triggerOnce()
      // Offset: 0x12D1F8C
      bool get_triggerOnce();
    }; // UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.NotificationEntry
    #pragma pack(pop)
    static check_size<sizeof(TimeNotificationBehaviour::NotificationEntry), 18 + sizeof(::UnityEngine::Timeline::NotificationFlags)> __UnityEngine_Timeline_TimeNotificationBehaviour_NotificationEntrySizeCheck;
    static_assert(sizeof(TimeNotificationBehaviour::NotificationEntry) == 0x24);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Collections.Generic.List`1<UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.NotificationEntry> m_Notifications
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>* m_Notifications;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>*) == 0x8);
    // private System.Double m_PreviousTime
    // Size: 0x8
    // Offset: 0x18
    double m_PreviousTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Boolean m_NeedSortNotifications
    // Size: 0x1
    // Offset: 0x20
    bool m_NeedSortNotifications;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_NeedSortNotifications and: m_TimeSource
    char __padding2[0x7] = {};
    // private UnityEngine.Playables.Playable m_TimeSource
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Playables::Playable m_TimeSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::Playable) == 0xC);
    public:
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.NotificationEntry> m_Notifications
    ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>*& dyn_m_Notifications();
    // Get instance field reference: private System.Double m_PreviousTime
    double& dyn_m_PreviousTime();
    // Get instance field reference: private System.Boolean m_NeedSortNotifications
    bool& dyn_m_NeedSortNotifications();
    // Get instance field reference: private UnityEngine.Playables.Playable m_TimeSource
    ::UnityEngine::Playables::Playable& dyn_m_TimeSource();
    // public System.Void set_timeSource(UnityEngine.Playables.Playable value)
    // Offset: 0xA8541C
    void set_timeSource(::UnityEngine::Playables::Playable value);
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.TimeNotificationBehaviour> Create(UnityEngine.Playables.PlayableGraph graph, System.Double duration, UnityEngine.Playables.DirectorWrapMode loopMode)
    // Offset: 0xA82370
    static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> Create(::UnityEngine::Playables::PlayableGraph graph, double duration, ::UnityEngine::Playables::DirectorWrapMode loopMode);
    // public System.Void AddNotification(System.Double time, UnityEngine.Playables.INotification payload, UnityEngine.Timeline.NotificationFlags flags)
    // Offset: 0xA82490
    void AddNotification(double time, ::UnityEngine::Playables::INotification* payload, ::UnityEngine::Timeline::NotificationFlags flags);
    // private System.Void SortNotifications()
    // Offset: 0xA85628
    void SortNotifications();
    // static private System.Boolean CanRestoreNotification(UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.NotificationEntry e, UnityEngine.Playables.FrameData info, System.Double currentTime, System.Double previousTime)
    // Offset: 0xA86080
    static bool CanRestoreNotification(::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry e, ::UnityEngine::Playables::FrameData info, double currentTime, double previousTime);
    // private System.Void TriggerNotificationsInRange(System.Double start, System.Double end, UnityEngine.Playables.FrameData info, UnityEngine.Playables.Playable playable, System.Boolean checkState)
    // Offset: 0xA85E90
    void TriggerNotificationsInRange(double start, double end, ::UnityEngine::Playables::FrameData info, ::UnityEngine::Playables::Playable playable, bool checkState);
    // private System.Void SyncDurationWithExternalSource(UnityEngine.Playables.Playable playable)
    // Offset: 0xA85D94
    void SyncDurationWithExternalSource(::UnityEngine::Playables::Playable playable);
    // static private System.Void Trigger_internal(UnityEngine.Playables.Playable playable, UnityEngine.Playables.PlayableOutput output, ref UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.NotificationEntry e)
    // Offset: 0xA85928
    static void Trigger_internal(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::PlayableOutput output, ByRef<::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry> e);
    // static private System.Void Restore_internal(ref UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.NotificationEntry e)
    // Offset: 0xA860F0
    static void Restore_internal(ByRef<::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry> e);
    // public System.Void .ctor()
    // Offset: 0xA860F8
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeNotificationBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::TimeNotificationBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeNotificationBehaviour*, creationType>()));
    }
    // public override System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0xA85424
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(::UnityEngine::Playables::Playable playable);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0xA85764
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0xA859B4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
  }; // UnityEngine.Timeline.TimeNotificationBehaviour
  #pragma pack(pop)
  static check_size<sizeof(TimeNotificationBehaviour), 40 + sizeof(::UnityEngine::Playables::Playable)> __UnityEngine_Timeline_TimeNotificationBehaviourSizeCheck;
  static_assert(sizeof(TimeNotificationBehaviour) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry, "UnityEngine.Timeline", "TimeNotificationBehaviour/NotificationEntry");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::set_timeSource
// Il2CppName: set_timeSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::TimeNotificationBehaviour::set_timeSource)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "set_timeSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> (*)(::UnityEngine::Playables::PlayableGraph, double, ::UnityEngine::Playables::DirectorWrapMode)>(&UnityEngine::Timeline::TimeNotificationBehaviour::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* loopMode = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "DirectorWrapMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, duration, loopMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::AddNotification
// Il2CppName: AddNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(double, ::UnityEngine::Playables::INotification*, ::UnityEngine::Timeline::NotificationFlags)>(&UnityEngine::Timeline::TimeNotificationBehaviour::AddNotification)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* payload = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "INotification")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "NotificationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "AddNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, payload, flags});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::SortNotifications
// Il2CppName: SortNotifications
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)()>(&UnityEngine::Timeline::TimeNotificationBehaviour::SortNotifications)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "SortNotifications", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::CanRestoreNotification
// Il2CppName: CanRestoreNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry, ::UnityEngine::Playables::FrameData, double, double)>(&UnityEngine::Timeline::TimeNotificationBehaviour::CanRestoreNotification)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimeNotificationBehaviour/NotificationEntry")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* currentTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* previousTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "CanRestoreNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, info, currentTime, previousTime});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::TriggerNotificationsInRange
// Il2CppName: TriggerNotificationsInRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(double, double, ::UnityEngine::Playables::FrameData, ::UnityEngine::Playables::Playable, bool)>(&UnityEngine::Timeline::TimeNotificationBehaviour::TriggerNotificationsInRange)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* checkState = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "TriggerNotificationsInRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, info, playable, checkState});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::SyncDurationWithExternalSource
// Il2CppName: SyncDurationWithExternalSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::TimeNotificationBehaviour::SyncDurationWithExternalSource)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "SyncDurationWithExternalSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::Trigger_internal
// Il2CppName: Trigger_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::PlayableOutput, ByRef<::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>)>(&UnityEngine::Timeline::TimeNotificationBehaviour::Trigger_internal)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutput")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimeNotificationBehaviour/NotificationEntry")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "Trigger_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, output, e});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::Restore_internal
// Il2CppName: Restore_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>)>(&UnityEngine::Timeline::TimeNotificationBehaviour::Restore_internal)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimeNotificationBehaviour/NotificationEntry")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "Restore_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::OnGraphStart
// Il2CppName: OnGraphStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::TimeNotificationBehaviour::OnGraphStart)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "OnGraphStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::OnBehaviourPause
// Il2CppName: OnBehaviourPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::TimeNotificationBehaviour::OnBehaviourPause)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "OnBehaviourPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::PrepareFrame
// Il2CppName: PrepareFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::TimeNotificationBehaviour::PrepareFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour*), "PrepareFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};