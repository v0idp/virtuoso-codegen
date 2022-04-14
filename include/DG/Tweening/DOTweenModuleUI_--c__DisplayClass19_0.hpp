// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.DOTweenModuleUI
#include "DG/Tweening/DOTweenModuleUI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass19_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModuleUI/DG.Tweening.<>c__DisplayClass19_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DOTweenModuleUI::$$c__DisplayClass19_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.RectTransform target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::RectTransform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::RectTransform*
    constexpr operator ::UnityEngine::RectTransform*() const noexcept {
      return target;
    }
    // Get instance field reference: public UnityEngine.RectTransform target
    [[deprecated]] ::UnityEngine::RectTransform*& dyn_target();
    // UnityEngine.Vector3 <DOAnchorPos3DZ>b__0()
    // Offset: 0x17E3424
    ::UnityEngine::Vector3 $DOAnchorPos3DZ$b__0();
    // System.Void <DOAnchorPos3DZ>b__1(UnityEngine.Vector3 x)
    // Offset: 0x17E3440
    void $DOAnchorPos3DZ$b__1(::UnityEngine::Vector3 x);
    // public System.Void .ctor()
    // Offset: 0x17DF0F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenModuleUI::$$c__DisplayClass19_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenModuleUI::$$c__DisplayClass19_0*, creationType>()));
    }
  }; // DG.Tweening.DOTweenModuleUI/DG.Tweening.<>c__DisplayClass19_0
  #pragma pack(pop)
  static check_size<sizeof(DOTweenModuleUI::$$c__DisplayClass19_0), 16 + sizeof(::UnityEngine::RectTransform*)> __DG_Tweening_DOTweenModuleUI_$$c__DisplayClass19_0SizeCheck;
  static_assert(sizeof(DOTweenModuleUI::$$c__DisplayClass19_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0::$DOAnchorPos3DZ$b__0
// Il2CppName: <DOAnchorPos3DZ>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0::*)()>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0::$DOAnchorPos3DZ$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0*), "<DOAnchorPos3DZ>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0::$DOAnchorPos3DZ$b__1
// Il2CppName: <DOAnchorPos3DZ>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0::*)(::UnityEngine::Vector3)>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0::$DOAnchorPos3DZ$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0*), "<DOAnchorPos3DZ>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass19_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
