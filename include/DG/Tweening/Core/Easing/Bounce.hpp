// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: DG.Tweening.Core.Easing
namespace DG::Tweening::Core::Easing {
  // Forward declaring type: Bounce
  class Bounce;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Core::Easing::Bounce);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Easing::Bounce*, "DG.Tweening.Core.Easing", "Bounce");
// Type namespace: DG.Tweening.Core.Easing
namespace DG::Tweening::Core::Easing {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Core.Easing.Bounce
  // [TokenAttribute] Offset: FFFFFFFF
  class Bounce : public ::Il2CppObject {
    public:
    // static public System.Single EaseIn(System.Single time, System.Single duration, System.Single unusedOvershootOrAmplitude, System.Single unusedPeriod)
    // Offset: 0x1090D1C
    static float EaseIn(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod);
    // static public System.Single EaseOut(System.Single time, System.Single duration, System.Single unusedOvershootOrAmplitude, System.Single unusedPeriod)
    // Offset: 0x1090D3C
    static float EaseOut(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod);
    // static public System.Single EaseInOut(System.Single time, System.Single duration, System.Single unusedOvershootOrAmplitude, System.Single unusedPeriod)
    // Offset: 0x1090E00
    static float EaseInOut(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod);
  }; // DG.Tweening.Core.Easing.Bounce
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Core::Easing::Bounce::EaseIn
// Il2CppName: EaseIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float)>(&DG::Tweening::Core::Easing::Bounce::EaseIn)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* unusedOvershootOrAmplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* unusedPeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Easing::Bounce*), "EaseIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, duration, unusedOvershootOrAmplitude, unusedPeriod});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Easing::Bounce::EaseOut
// Il2CppName: EaseOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float)>(&DG::Tweening::Core::Easing::Bounce::EaseOut)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* unusedOvershootOrAmplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* unusedPeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Easing::Bounce*), "EaseOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, duration, unusedOvershootOrAmplitude, unusedPeriod});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::Easing::Bounce::EaseInOut
// Il2CppName: EaseInOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float)>(&DG::Tweening::Core::Easing::Bounce::EaseInOut)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* unusedOvershootOrAmplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* unusedPeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::Easing::Bounce*), "EaseInOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, duration, unusedOvershootOrAmplitude, unusedPeriod});
  }
};