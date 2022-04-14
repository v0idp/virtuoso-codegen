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
  // Forward declaring type: CompressionManager
  class CompressionManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::CompressionManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CompressionManager*, "VROSC", "CompressionManager");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CompressionManager
  // [TokenAttribute] Offset: FFFFFFFF
  class CompressionManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _thresholdMin
    // Size: 0x4
    // Offset: 0x18
    float thresholdMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _thresholdMax
    // Size: 0x4
    // Offset: 0x1C
    float thresholdMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _thresholdCurve
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AnimationCurve* thresholdCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _makeupMin
    // Size: 0x4
    // Offset: 0x28
    float makeupMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _makeupMax
    // Size: 0x4
    // Offset: 0x2C
    float makeupMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _makeupCurve
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* makeupCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String DrumsThreshholdString
    static constexpr const char* DrumsThreshholdString = "DrumsCompressionThreshold";
    // Get static field: static private System.String DrumsThreshholdString
    static ::StringW _get_DrumsThreshholdString();
    // Set static field: static private System.String DrumsThreshholdString
    static void _set_DrumsThreshholdString(::StringW value);
    // static field const value: static private System.String DrumsMakeupString
    static constexpr const char* DrumsMakeupString = "DrumsCompressionMakeup";
    // Get static field: static private System.String DrumsMakeupString
    static ::StringW _get_DrumsMakeupString();
    // Set static field: static private System.String DrumsMakeupString
    static void _set_DrumsMakeupString(::StringW value);
    // Get instance field reference: private System.Single _thresholdMin
    [[deprecated]] float& dyn__thresholdMin();
    // Get instance field reference: private System.Single _thresholdMax
    [[deprecated]] float& dyn__thresholdMax();
    // Get instance field reference: private UnityEngine.AnimationCurve _thresholdCurve
    [[deprecated]] ::UnityEngine::AnimationCurve*& dyn__thresholdCurve();
    // Get instance field reference: private System.Single _makeupMin
    [[deprecated]] float& dyn__makeupMin();
    // Get instance field reference: private System.Single _makeupMax
    [[deprecated]] float& dyn__makeupMax();
    // Get instance field reference: private UnityEngine.AnimationCurve _makeupCurve
    [[deprecated]] ::UnityEngine::AnimationCurve*& dyn__makeupCurve();
    // public System.Void SetDrumsCompression(System.Single compression)
    // Offset: 0x94C5BC
    void SetDrumsCompression(float compression);
    // private System.Void SetCompressionParameter(System.String name, System.Single amount, UnityEngine.AnimationCurve curve, System.Single min, System.Single max)
    // Offset: 0x94C644
    void SetCompressionParameter(::StringW name, float amount, ::UnityEngine::AnimationCurve* curve, float min, float max);
    // public System.Void .ctor()
    // Offset: 0x94C6F8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompressionManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CompressionManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompressionManager*, creationType>()));
    }
  }; // VROSC.CompressionManager
  #pragma pack(pop)
  static check_size<sizeof(CompressionManager), 48 + sizeof(::UnityEngine::AnimationCurve*)> __VROSC_CompressionManagerSizeCheck;
  static_assert(sizeof(CompressionManager) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CompressionManager::SetDrumsCompression
// Il2CppName: SetDrumsCompression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CompressionManager::*)(float)>(&VROSC::CompressionManager::SetDrumsCompression)> {
  static const MethodInfo* get() {
    static auto* compression = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CompressionManager*), "SetDrumsCompression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compression});
  }
};
// Writing MetadataGetter for method: VROSC::CompressionManager::SetCompressionParameter
// Il2CppName: SetCompressionParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CompressionManager::*)(::StringW, float, ::UnityEngine::AnimationCurve*, float, float)>(&VROSC::CompressionManager::SetCompressionParameter)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CompressionManager*), "SetCompressionParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, amount, curve, min, max});
  }
};
// Writing MetadataGetter for method: VROSC::CompressionManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!