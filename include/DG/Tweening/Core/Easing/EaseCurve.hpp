// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: DG.Tweening.Core.Easing
namespace DG::Tweening::Core::Easing {
  // Forward declaring type: EaseCurve
  class EaseCurve;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Core::Easing::EaseCurve);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Easing::EaseCurve*, "DG.Tweening.Core.Easing", "EaseCurve");
// Type namespace: DG.Tweening.Core.Easing
namespace DG::Tweening::Core::Easing {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Core.Easing.EaseCurve
  // [TokenAttribute] Offset: FFFFFFFF
  class EaseCurve : public ::Il2CppObject {
    public:
    public:
    // private readonly UnityEngine.AnimationCurve _animCurve
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AnimationCurve* animCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::AnimationCurve*
    constexpr operator ::UnityEngine::AnimationCurve*() const noexcept {
      return animCurve;
    }
    // Get instance field reference: private readonly UnityEngine.AnimationCurve _animCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__animCurve();
    // public System.Void .ctor(UnityEngine.AnimationCurve animCurve)
    // Offset: 0x15DD2CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EaseCurve* New_ctor(::UnityEngine::AnimationCurve* animCurve) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Core::Easing::EaseCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EaseCurve*, creationType>(animCurve)));
    }
    // public System.Single Evaluate(System.Single time, System.Single duration, System.Single unusedOvershoot, System.Single unusedPeriod)
    // Offset: 0x15DDA14
    float Evaluate(float time, float duration, float unusedOvershoot, float unusedPeriod);
  }; // DG.Tweening.Core.Easing.EaseCurve
  #pragma pack(pop)
  static check_size<sizeof(EaseCurve), 16 + sizeof(::UnityEngine::AnimationCurve*)> __DG_Tweening_Core_Easing_EaseCurveSizeCheck;
  static_assert(sizeof(EaseCurve) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Core::Easing::EaseCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DG::Tweening::Core::Easing::EaseCurve::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DG::Tweening::Core::Easing::EaseCurve::*)(float, float, float, float)>(&DG::Tweening::Core::Easing::EaseCurve::Evaluate)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* unusedOvershoot = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* unusedPeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Easing::EaseCurve*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, duration, unusedOvershoot, unusedPeriod});
  }
};
