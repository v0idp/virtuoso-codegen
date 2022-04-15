// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AnimatedAppear/VROSC.Mode
#include "VROSC/AnimatedAppear_Mode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableAsset
  class PlayableAsset;
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AnimatedAppearSettings
  class AnimatedAppearSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AnimatedAppearSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppearSettings*, "VROSC", "AnimatedAppearSettings");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AnimatedAppearSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimatedAppearSettings : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean _play
    // Size: 0x1
    // Offset: 0x10
    bool play;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: play and: timeline
    char __padding0[0x7] = {};
    // private UnityEngine.Playables.PlayableAsset _timeline
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Playables::PlayableAsset* timeline;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableAsset*) == 0x8);
    // private VROSC.AnimatedAppear/VROSC.Mode _mode
    // Size: 0x4
    // Offset: 0x20
    ::VROSC::AnimatedAppear::Mode mode;
    // Field size check
    static_assert(sizeof(::VROSC::AnimatedAppear::Mode) == 0x4);
    // Padding between fields: mode and: director
    char __padding2[0x4] = {};
    // private UnityEngine.Playables.PlayableDirector _director
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Playables::PlayableDirector* director;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableDirector*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean _play
    [[deprecated("Use field access instead!")]] bool& dyn__play();
    // Get instance field reference: private UnityEngine.Playables.PlayableAsset _timeline
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableAsset*& dyn__timeline();
    // Get instance field reference: private VROSC.AnimatedAppear/VROSC.Mode _mode
    [[deprecated("Use field access instead!")]] ::VROSC::AnimatedAppear::Mode& dyn__mode();
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _director
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableDirector*& dyn__director();
    // public UnityEngine.Playables.PlayableAsset get_Timeline()
    // Offset: 0x96AA1C
    ::UnityEngine::Playables::PlayableAsset* get_Timeline();
    // public VROSC.AnimatedAppear/VROSC.Mode get_Mode()
    // Offset: 0x96AA24
    ::VROSC::AnimatedAppear::Mode get_Mode();
    // public System.Boolean get_Play()
    // Offset: 0x96AA2C
    bool get_Play();
    // public System.Boolean get_IsPlaying()
    // Offset: 0x96925C
    bool get_IsPlaying();
    // public System.Void .ctor()
    // Offset: 0x96AB00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedAppearSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AnimatedAppearSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedAppearSettings*, creationType>()));
    }
    // public System.Void Stop()
    // Offset: 0x969BB0
    void Stop();
    // public System.Void SetTimelineActive(UnityEngine.GameObject target, System.Boolean play)
    // Offset: 0x969A6C
    void SetTimelineActive(::UnityEngine::GameObject* target, bool play);
    // private System.Void GetOrAddDirector(UnityEngine.GameObject target)
    // Offset: 0x96AA34
    void GetOrAddDirector(::UnityEngine::GameObject* target);
    // System.Void Unload(UnityEngine.GameObject target)
    // Offset: 0x969FE0
    void Unload(::UnityEngine::GameObject* target);
    // UnityEngine.Vector3 GetDir()
    // Offset: 0x969D94
    ::UnityEngine::Vector3 GetDir();
  }; // VROSC.AnimatedAppearSettings
  #pragma pack(pop)
  static check_size<sizeof(AnimatedAppearSettings), 40 + sizeof(::UnityEngine::Playables::PlayableDirector*)> __VROSC_AnimatedAppearSettingsSizeCheck;
  static_assert(sizeof(AnimatedAppearSettings) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AnimatedAppearSettings::get_Timeline
// Il2CppName: get_Timeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableAsset* (VROSC::AnimatedAppearSettings::*)()>(&VROSC::AnimatedAppearSettings::get_Timeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearSettings*), "get_Timeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AnimatedAppearSettings::get_Mode
// Il2CppName: get_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AnimatedAppear::Mode (VROSC::AnimatedAppearSettings::*)()>(&VROSC::AnimatedAppearSettings::get_Mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearSettings*), "get_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AnimatedAppearSettings::get_Play
// Il2CppName: get_Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AnimatedAppearSettings::*)()>(&VROSC::AnimatedAppearSettings::get_Play)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearSettings*), "get_Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AnimatedAppearSettings::get_IsPlaying
// Il2CppName: get_IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AnimatedAppearSettings::*)()>(&VROSC::AnimatedAppearSettings::get_IsPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearSettings*), "get_IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AnimatedAppearSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AnimatedAppearSettings::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AnimatedAppearSettings::*)()>(&VROSC::AnimatedAppearSettings::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearSettings*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AnimatedAppearSettings::SetTimelineActive
// Il2CppName: SetTimelineActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AnimatedAppearSettings::*)(::UnityEngine::GameObject*, bool)>(&VROSC::AnimatedAppearSettings::SetTimelineActive)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* play = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearSettings*), "SetTimelineActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, play});
  }
};
// Writing MetadataGetter for method: VROSC::AnimatedAppearSettings::GetOrAddDirector
// Il2CppName: GetOrAddDirector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AnimatedAppearSettings::*)(::UnityEngine::GameObject*)>(&VROSC::AnimatedAppearSettings::GetOrAddDirector)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearSettings*), "GetOrAddDirector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: VROSC::AnimatedAppearSettings::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AnimatedAppearSettings::*)(::UnityEngine::GameObject*)>(&VROSC::AnimatedAppearSettings::Unload)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearSettings*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: VROSC::AnimatedAppearSettings::GetDir
// Il2CppName: GetDir
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::AnimatedAppearSettings::*)()>(&VROSC::AnimatedAppearSettings::GetDir)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearSettings*), "GetDir", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
