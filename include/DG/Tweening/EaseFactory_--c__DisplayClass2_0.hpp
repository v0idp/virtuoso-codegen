// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.EaseFactory
#include "DG/Tweening/EaseFactory.hpp"
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
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::EaseFactory::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::EaseFactory::$$c__DisplayClass2_0*, "DG.Tweening", "EaseFactory/<>c__DisplayClass2_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.EaseFactory/DG.Tweening.<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EaseFactory::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Single motionDelay
    // Size: 0x4
    // Offset: 0x10
    float motionDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: motionDelay and: customEase
    char __padding0[0x4] = {};
    // public DG.Tweening.EaseFunction customEase
    // Size: 0x8
    // Offset: 0x18
    ::DG::Tweening::EaseFunction* customEase;
    // Field size check
    static_assert(sizeof(::DG::Tweening::EaseFunction*) == 0x8);
    public:
    // Get instance field reference: public System.Single motionDelay
    [[deprecated]] float& dyn_motionDelay();
    // Get instance field reference: public DG.Tweening.EaseFunction customEase
    [[deprecated]] ::DG::Tweening::EaseFunction*& dyn_customEase();
    // System.Single <StopMotion>b__0(System.Single time, System.Single duration, System.Single overshootOrAmplitude, System.Single period)
    // Offset: 0x18634B0
    float $StopMotion$b__0(float time, float duration, float overshootOrAmplitude, float period);
    // public System.Void .ctor()
    // Offset: 0x18634A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EaseFactory::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::EaseFactory::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EaseFactory::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // DG.Tweening.EaseFactory/DG.Tweening.<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(EaseFactory::$$c__DisplayClass2_0), 24 + sizeof(::DG::Tweening::EaseFunction*)> __DG_Tweening_EaseFactory_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(EaseFactory::$$c__DisplayClass2_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::EaseFactory::$$c__DisplayClass2_0::$StopMotion$b__0
// Il2CppName: <StopMotion>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DG::Tweening::EaseFactory::$$c__DisplayClass2_0::*)(float, float, float, float)>(&DG::Tweening::EaseFactory::$$c__DisplayClass2_0::$StopMotion$b__0)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* overshootOrAmplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* period = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::EaseFactory::$$c__DisplayClass2_0*), "<StopMotion>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, duration, overshootOrAmplitude, period});
  }
};
// Writing MetadataGetter for method: DG::Tweening::EaseFactory::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
