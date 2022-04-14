// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.DOTweenModulePhysics
#include "DG/Tweening/DOTweenModulePhysics.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass8_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModulePhysics/DG.Tweening.<>c__DisplayClass8_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DOTweenModulePhysics::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Transform trans
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* trans;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Rigidbody target
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rigidbody* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Transform trans
    [[deprecated]] ::UnityEngine::Transform*& dyn_trans();
    // Get instance field reference: public UnityEngine.Rigidbody target
    [[deprecated]] ::UnityEngine::Rigidbody*& dyn_target();
    // UnityEngine.Vector3 <DOLocalPath>b__0()
    // Offset: 0x17E2DC0
    ::UnityEngine::Vector3 $DOLocalPath$b__0();
    // System.Void <DOLocalPath>b__1(UnityEngine.Vector3 x)
    // Offset: 0x17E2DDC
    void $DOLocalPath$b__1(::UnityEngine::Vector3 x);
    // public System.Void .ctor()
    // Offset: 0x17DB7A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenModulePhysics::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenModulePhysics::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // DG.Tweening.DOTweenModulePhysics/DG.Tweening.<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(DOTweenModulePhysics::$$c__DisplayClass8_0), 24 + sizeof(::UnityEngine::Rigidbody*)> __DG_Tweening_DOTweenModulePhysics_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(DOTweenModulePhysics::$$c__DisplayClass8_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0::$DOLocalPath$b__0
// Il2CppName: <DOLocalPath>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0::*)()>(&DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0::$DOLocalPath$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0*), "<DOLocalPath>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0::$DOLocalPath$b__1
// Il2CppName: <DOLocalPath>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0::*)(::UnityEngine::Vector3)>(&DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0::$DOLocalPath$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0*), "<DOLocalPath>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
