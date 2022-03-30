// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.Ease
#include "DG/Tweening/Ease.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: EaseFunction
  class EaseFunction;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Forward declaring type: EaseFactory
  class EaseFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::EaseFactory);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::EaseFactory*, "DG.Tweening", "EaseFactory");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.EaseFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class EaseFactory : public ::Il2CppObject {
    public:
    // Nested type: ::DG::Tweening::EaseFactory::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // static public DG.Tweening.EaseFunction StopMotion(System.Int32 motionFps, System.Nullable`1<DG.Tweening.Ease> ease)
    // Offset: 0x109B48C
    static ::DG::Tweening::EaseFunction* StopMotion(int motionFps, ::System::Nullable_1<::DG::Tweening::Ease> ease);
    // static public DG.Tweening.EaseFunction StopMotion(System.Int32 motionFps, UnityEngine.AnimationCurve animCurve)
    // Offset: 0x109CC60
    static ::DG::Tweening::EaseFunction* StopMotion(int motionFps, ::UnityEngine::AnimationCurve* animCurve);
    // static public DG.Tweening.EaseFunction StopMotion(System.Int32 motionFps, DG.Tweening.EaseFunction customEase)
    // Offset: 0x109CBA0
    static ::DG::Tweening::EaseFunction* StopMotion(int motionFps, ::DG::Tweening::EaseFunction* customEase);
    // public System.Void .ctor()
    // Offset: 0x109CD10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EaseFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::EaseFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EaseFactory*, creationType>()));
    }
  }; // DG.Tweening.EaseFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::EaseFactory::StopMotion
// Il2CppName: StopMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::EaseFunction* (*)(int, ::System::Nullable_1<::DG::Tweening::Ease>)>(&DG::Tweening::EaseFactory::StopMotion)> {
  static const MethodInfo* get() {
    static auto* motionFps = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ease = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DG.Tweening", "Ease")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::EaseFactory*), "StopMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{motionFps, ease});
  }
};
// Writing MetadataGetter for method: DG::Tweening::EaseFactory::StopMotion
// Il2CppName: StopMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::EaseFunction* (*)(int, ::UnityEngine::AnimationCurve*)>(&DG::Tweening::EaseFactory::StopMotion)> {
  static const MethodInfo* get() {
    static auto* motionFps = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* animCurve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::EaseFactory*), "StopMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{motionFps, animCurve});
  }
};
// Writing MetadataGetter for method: DG::Tweening::EaseFactory::StopMotion
// Il2CppName: StopMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::EaseFunction* (*)(int, ::DG::Tweening::EaseFunction*)>(&DG::Tweening::EaseFactory::StopMotion)> {
  static const MethodInfo* get() {
    static auto* motionFps = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* customEase = &::il2cpp_utils::GetClassFromName("DG.Tweening", "EaseFunction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::EaseFactory*), "StopMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{motionFps, customEase});
  }
};
// Writing MetadataGetter for method: DG::Tweening::EaseFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
