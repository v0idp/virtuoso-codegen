// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.DOTweenModulePhysics2D
#include "DG/Tweening/DOTweenModulePhysics2D.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass0_0*, "DG.Tweening", "DOTweenModulePhysics2D/<>c__DisplayClass0_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModulePhysics2D/DG.Tweening.<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DOTweenModulePhysics2D::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rigidbody2D target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rigidbody2D* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody2D*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Rigidbody2D*
    constexpr operator ::UnityEngine::Rigidbody2D*() const noexcept {
      return target;
    }
    // Get instance field reference: public UnityEngine.Rigidbody2D target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody2D*& dyn_target();
    // public System.Void .ctor()
    // Offset: 0x17DBD48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenModulePhysics2D::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenModulePhysics2D::$$c__DisplayClass0_0*, creationType>()));
    }
    // UnityEngine.Vector2 <DOMove>b__0()
    // Offset: 0x17E2EF8
    ::UnityEngine::Vector2 $DOMove$b__0();
  }; // DG.Tweening.DOTweenModulePhysics2D/DG.Tweening.<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(DOTweenModulePhysics2D::$$c__DisplayClass0_0), 16 + sizeof(::UnityEngine::Rigidbody2D*)> __DG_Tweening_DOTweenModulePhysics2D_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(DOTweenModulePhysics2D::$$c__DisplayClass0_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass0_0::$DOMove$b__0
// Il2CppName: <DOMove>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass0_0::*)()>(&DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass0_0::$DOMove$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics2D::$$c__DisplayClass0_0*), "<DOMove>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
