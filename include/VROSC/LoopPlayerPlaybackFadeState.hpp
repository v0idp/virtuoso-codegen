// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopPlayerPlaybackState
#include "VROSC/LoopPlayerPlaybackState.hpp"
// Including type: VROSC.LoopPlaybackConfig
#include "VROSC/LoopPlaybackConfig.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayerPlaybackFadeState
  class LoopPlayerPlaybackFadeState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackFadeState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackFadeState*, "VROSC", "LoopPlayerPlaybackFadeState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlayerPlaybackFadeState
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopPlayerPlaybackFadeState : public ::VROSC::LoopPlayerPlaybackState {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    public:
    // protected System.Single _fadeStartValue
    // Size: 0x4
    // Offset: 0x28
    float fadeStartValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Single _fadeStopValue
    // Size: 0x4
    // Offset: 0x2C
    float fadeStopValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: protected System.Single _fadeStartValue
    [[deprecated("Use field access instead!")]] float& dyn__fadeStartValue();
    // Get instance field reference: protected System.Single _fadeStopValue
    [[deprecated("Use field access instead!")]] float& dyn__fadeStopValue();
    // public System.Int32 GetFadeOutLength(VROSC.LoopPlaybackConfig/VROSC.FadeDuration fade, System.Int32 tailLength)
    // Offset: 0x19BD0BC
    int GetFadeOutLength(::VROSC::LoopPlaybackConfig::FadeDuration fade, int tailLength);
    // public System.Int32 GetFadeInLength(VROSC.LoopPlaybackConfig/VROSC.FadeDuration fade)
    // Offset: 0x19BD300
    int GetFadeInLength(::VROSC::LoopPlaybackConfig::FadeDuration fade);
    // public System.Int32 GetFadeLength(VROSC.LoopPlaybackConfig/VROSC.FadeDuration fade)
    // Offset: 0x19BD188
    int GetFadeLength(::VROSC::LoopPlaybackConfig::FadeDuration fade);
    // protected System.Void .ctor()
    // Offset: 0x19BD310
    // Implemented from: VROSC.LoopPlayerPlaybackState
    // Base method: System.Void LoopPlayerPlaybackState::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlayerPlaybackFadeState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlayerPlaybackFadeState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlayerPlaybackFadeState*, creationType>()));
    }
    // public override System.Single GetCurrentFade(System.Int32 atSample)
    // Offset: 0x19BD064
    // Implemented from: VROSC.LoopPlayerPlaybackState
    // Base method: System.Single LoopPlayerPlaybackState::GetCurrentFade(System.Int32 atSample)
    float GetCurrentFade(int atSample);
  }; // VROSC.LoopPlayerPlaybackFadeState
  #pragma pack(pop)
  static check_size<sizeof(LoopPlayerPlaybackFadeState), 44 + sizeof(float)> __VROSC_LoopPlayerPlaybackFadeStateSizeCheck;
  static_assert(sizeof(LoopPlayerPlaybackFadeState) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackFadeState::GetFadeOutLength
// Il2CppName: GetFadeOutLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopPlayerPlaybackFadeState::*)(::VROSC::LoopPlaybackConfig::FadeDuration, int)>(&VROSC::LoopPlayerPlaybackFadeState::GetFadeOutLength)> {
  static const MethodInfo* get() {
    static auto* fade = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfig/FadeDuration")->byval_arg;
    static auto* tailLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackFadeState*), "GetFadeOutLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fade, tailLength});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackFadeState::GetFadeInLength
// Il2CppName: GetFadeInLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopPlayerPlaybackFadeState::*)(::VROSC::LoopPlaybackConfig::FadeDuration)>(&VROSC::LoopPlayerPlaybackFadeState::GetFadeInLength)> {
  static const MethodInfo* get() {
    static auto* fade = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfig/FadeDuration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackFadeState*), "GetFadeInLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fade});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackFadeState::GetFadeLength
// Il2CppName: GetFadeLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopPlayerPlaybackFadeState::*)(::VROSC::LoopPlaybackConfig::FadeDuration)>(&VROSC::LoopPlayerPlaybackFadeState::GetFadeLength)> {
  static const MethodInfo* get() {
    static auto* fade = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfig/FadeDuration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackFadeState*), "GetFadeLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fade});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackFadeState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackFadeState::GetCurrentFade
// Il2CppName: GetCurrentFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::LoopPlayerPlaybackFadeState::*)(int)>(&VROSC::LoopPlayerPlaybackFadeState::GetCurrentFade)> {
  static const MethodInfo* get() {
    static auto* atSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackFadeState*), "GetCurrentFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{atSample});
  }
};
