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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ReverbManager
  class ReverbManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ReverbManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ReverbManager*, "VROSC", "ReverbManager");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ReverbManager
  // [TokenAttribute] Offset: FFFFFFFF
  class ReverbManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _drumsSendOff
    // Size: 0x4
    // Offset: 0x18
    float drumsSendOff;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _drumsSendMin
    // Size: 0x4
    // Offset: 0x1C
    float drumsSendMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _drumsSendMax
    // Size: 0x4
    // Offset: 0x20
    float drumsSendMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: drumsSendMax and: drumsSendCurve
    char __padding2[0x4] = {};
    // private UnityEngine.AnimationCurve _drumsSendCurve
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AnimationCurve* drumsSendCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _decayTimeMin
    // Size: 0x4
    // Offset: 0x30
    float decayTimeMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _decayTimeMax
    // Size: 0x4
    // Offset: 0x34
    float decayTimeMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _decayTimeCurve
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationCurve* decayTimeCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _reflectionsMin
    // Size: 0x4
    // Offset: 0x40
    float reflectionsMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _reflectionsMax
    // Size: 0x4
    // Offset: 0x44
    float reflectionsMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _reflectionsCurve
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AnimationCurve* reflectionsCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String DrumsReverbSendString
    static constexpr const char* DrumsReverbSendString = "DrumsReverbSend";
    // Get static field: static private System.String DrumsReverbSendString
    static ::StringW _get_DrumsReverbSendString();
    // Set static field: static private System.String DrumsReverbSendString
    static void _set_DrumsReverbSendString(::StringW value);
    // static field const value: static private System.String DecayTimeString
    static constexpr const char* DecayTimeString = "ReverbDecayTime";
    // Get static field: static private System.String DecayTimeString
    static ::StringW _get_DecayTimeString();
    // Set static field: static private System.String DecayTimeString
    static void _set_DecayTimeString(::StringW value);
    // static field const value: static private System.String ReflectionsString
    static constexpr const char* ReflectionsString = "ReverbReflections";
    // Get static field: static private System.String ReflectionsString
    static ::StringW _get_ReflectionsString();
    // Set static field: static private System.String ReflectionsString
    static void _set_ReflectionsString(::StringW value);
    // Get instance field reference: private System.Single _drumsSendOff
    [[deprecated("Use field access instead!")]] float& dyn__drumsSendOff();
    // Get instance field reference: private System.Single _drumsSendMin
    [[deprecated("Use field access instead!")]] float& dyn__drumsSendMin();
    // Get instance field reference: private System.Single _drumsSendMax
    [[deprecated("Use field access instead!")]] float& dyn__drumsSendMax();
    // Get instance field reference: private UnityEngine.AnimationCurve _drumsSendCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__drumsSendCurve();
    // Get instance field reference: private System.Single _decayTimeMin
    [[deprecated("Use field access instead!")]] float& dyn__decayTimeMin();
    // Get instance field reference: private System.Single _decayTimeMax
    [[deprecated("Use field access instead!")]] float& dyn__decayTimeMax();
    // Get instance field reference: private UnityEngine.AnimationCurve _decayTimeCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__decayTimeCurve();
    // Get instance field reference: private System.Single _reflectionsMin
    [[deprecated("Use field access instead!")]] float& dyn__reflectionsMin();
    // Get instance field reference: private System.Single _reflectionsMax
    [[deprecated("Use field access instead!")]] float& dyn__reflectionsMax();
    // Get instance field reference: private UnityEngine.AnimationCurve _reflectionsCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__reflectionsCurve();
    // public System.Void .ctor()
    // Offset: 0xB35FD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReverbManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ReverbManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReverbManager*, creationType>()));
    }
    // public System.Void SetDrumsReverbAmount(System.Single amount)
    // Offset: 0xB35DE0
    void SetDrumsReverbAmount(float amount);
    // public System.Void SetReverbLength(System.Single length)
    // Offset: 0xB35F50
    void SetReverbLength(float length);
    // private System.Void SetReverbParameter(System.String name, System.Single amount, UnityEngine.AnimationCurve curve, System.Single min, System.Single max)
    // Offset: 0xB35E9C
    void SetReverbParameter(::StringW name, float amount, ::UnityEngine::AnimationCurve* curve, float min, float max);
  }; // VROSC.ReverbManager
  #pragma pack(pop)
  static check_size<sizeof(ReverbManager), 72 + sizeof(::UnityEngine::AnimationCurve*)> __VROSC_ReverbManagerSizeCheck;
  static_assert(sizeof(ReverbManager) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ReverbManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::ReverbManager::SetDrumsReverbAmount
// Il2CppName: SetDrumsReverbAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ReverbManager::*)(float)>(&VROSC::ReverbManager::SetDrumsReverbAmount)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReverbManager*), "SetDrumsReverbAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount});
  }
};
// Writing MetadataGetter for method: VROSC::ReverbManager::SetReverbLength
// Il2CppName: SetReverbLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ReverbManager::*)(float)>(&VROSC::ReverbManager::SetReverbLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReverbManager*), "SetReverbLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: VROSC::ReverbManager::SetReverbParameter
// Il2CppName: SetReverbParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ReverbManager::*)(::StringW, float, ::UnityEngine::AnimationCurve*, float, float)>(&VROSC::ReverbManager::SetReverbParameter)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ReverbManager*), "SetReverbParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, amount, curve, min, max});
  }
};
