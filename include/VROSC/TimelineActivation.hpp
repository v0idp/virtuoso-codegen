// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
  // Forward declaring type: PlayableAsset
  class PlayableAsset;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TimelineActivation
  class TimelineActivation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TimelineActivation);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TimelineActivation*, "VROSC", "TimelineActivation");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TimelineActivation
  // [TokenAttribute] Offset: FFFFFFFF
  class TimelineActivation : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Playables.PlayableDirector _director
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Playables::PlayableDirector* director;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableDirector*) == 0x8);
    // private UnityEngine.Playables.PlayableAsset _enterTimeline
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Playables::PlayableAsset* enterTimeline;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableAsset*) == 0x8);
    // private UnityEngine.Playables.PlayableAsset _exitTimeline
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Playables::PlayableAsset* exitTimeline;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableAsset*) == 0x8);
    // private System.Boolean _stopBeforePlay
    // Size: 0x1
    // Offset: 0x30
    bool stopBeforePlay;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _director
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableDirector*& dyn__director();
    // Get instance field reference: private UnityEngine.Playables.PlayableAsset _enterTimeline
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableAsset*& dyn__enterTimeline();
    // Get instance field reference: private UnityEngine.Playables.PlayableAsset _exitTimeline
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableAsset*& dyn__exitTimeline();
    // Get instance field reference: private System.Boolean _stopBeforePlay
    [[deprecated("Use field access instead!")]] bool& dyn__stopBeforePlay();
    // public System.Void .ctor()
    // Offset: 0xA27444
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelineActivation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TimelineActivation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelineActivation*, creationType>()));
    }
    // public System.Void Activate(System.Boolean shouldBeActive)
    // Offset: 0xA271C8
    void Activate(bool shouldBeActive);
    // protected System.Void OnActivateStart()
    // Offset: 0xA272FC
    void OnActivateStart();
    // protected System.Void OnDeactivateStart()
    // Offset: 0xA27300
    void OnDeactivateStart();
    // public System.Void EditorUnloadDirector()
    // Offset: 0xA27304
    void EditorUnloadDirector();
    // public System.Void EditorLoadDirector(System.Boolean enter)
    // Offset: 0xA27394
    void EditorLoadDirector(bool enter);
  }; // VROSC.TimelineActivation
  #pragma pack(pop)
  static check_size<sizeof(TimelineActivation), 48 + sizeof(bool)> __VROSC_TimelineActivationSizeCheck;
  static_assert(sizeof(TimelineActivation) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TimelineActivation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::TimelineActivation::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TimelineActivation::*)(bool)>(&VROSC::TimelineActivation::Activate)> {
  static const MethodInfo* get() {
    static auto* shouldBeActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TimelineActivation*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldBeActive});
  }
};
// Writing MetadataGetter for method: VROSC::TimelineActivation::OnActivateStart
// Il2CppName: OnActivateStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TimelineActivation::*)()>(&VROSC::TimelineActivation::OnActivateStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TimelineActivation*), "OnActivateStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TimelineActivation::OnDeactivateStart
// Il2CppName: OnDeactivateStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TimelineActivation::*)()>(&VROSC::TimelineActivation::OnDeactivateStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TimelineActivation*), "OnDeactivateStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TimelineActivation::EditorUnloadDirector
// Il2CppName: EditorUnloadDirector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TimelineActivation::*)()>(&VROSC::TimelineActivation::EditorUnloadDirector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TimelineActivation*), "EditorUnloadDirector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TimelineActivation::EditorLoadDirector
// Il2CppName: EditorLoadDirector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TimelineActivation::*)(bool)>(&VROSC::TimelineActivation::EditorLoadDirector)> {
  static const MethodInfo* get() {
    static auto* enter = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TimelineActivation*), "EditorLoadDirector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enter});
  }
};
