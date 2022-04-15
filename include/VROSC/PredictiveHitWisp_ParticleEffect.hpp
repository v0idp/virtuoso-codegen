// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.PredictiveHitWisp
#include "VROSC/PredictiveHitWisp.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PredictiveHitWisp::ParticleEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PredictiveHitWisp::ParticleEffect*, "VROSC", "PredictiveHitWisp/ParticleEffect");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PredictiveHitWisp/VROSC.ParticleEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class PredictiveHitWisp::ParticleEffect : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private System.Int32 _emitAmount
    // Size: 0x4
    // Offset: 0x18
    int emitAmount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.ParticleSystem _particleSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn__particleSystem();
    // Get instance field reference: private System.Int32 _emitAmount
    [[deprecated("Use field access instead!")]] int& dyn__emitAmount();
    // public System.Void .ctor()
    // Offset: 0x8CE28C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PredictiveHitWisp::ParticleEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PredictiveHitWisp::ParticleEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PredictiveHitWisp::ParticleEffect*, creationType>()));
    }
    // public System.Void Trigger(UnityEngine.Vector3 hitpoint, UnityEngine.Vector3 lookDirection)
    // Offset: 0x8CE164
    void Trigger(::UnityEngine::Vector3 hitpoint, ::UnityEngine::Vector3 lookDirection);
    // System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x8CE06C
    void SetColor(::UnityEngine::Color color);
  }; // VROSC.PredictiveHitWisp/VROSC.ParticleEffect
  #pragma pack(pop)
  static check_size<sizeof(PredictiveHitWisp::ParticleEffect), 24 + sizeof(int)> __VROSC_PredictiveHitWisp_ParticleEffectSizeCheck;
  static_assert(sizeof(PredictiveHitWisp::ParticleEffect) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PredictiveHitWisp::ParticleEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::PredictiveHitWisp::ParticleEffect::Trigger
// Il2CppName: Trigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PredictiveHitWisp::ParticleEffect::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&VROSC::PredictiveHitWisp::ParticleEffect::Trigger)> {
  static const MethodInfo* get() {
    static auto* hitpoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lookDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitWisp::ParticleEffect*), "Trigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitpoint, lookDirection});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitWisp::ParticleEffect::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PredictiveHitWisp::ParticleEffect::*)(::UnityEngine::Color)>(&VROSC::PredictiveHitWisp::ParticleEffect::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitWisp::ParticleEffect*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
