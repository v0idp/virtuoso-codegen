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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Outline
  class Outline;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass12_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModuleUI/DG.Tweening.<>c__DisplayClass12_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DOTweenModuleUI::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.UI.Outline target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UI::Outline* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Outline*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::UI::Outline*
    constexpr operator ::UnityEngine::UI::Outline*() const noexcept {
      return target;
    }
    // Get instance field reference: public UnityEngine.UI.Outline target
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Outline*& dyn_target();
    // public System.Void .ctor()
    // Offset: 0x17DE4CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenModuleUI::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenModuleUI::$$c__DisplayClass12_0*, creationType>()));
    }
    // UnityEngine.Vector2 <DOScale>b__0()
    // Offset: 0x17E329C
    ::UnityEngine::Vector2 $DOScale$b__0();
    // System.Void <DOScale>b__1(UnityEngine.Vector2 x)
    // Offset: 0x17E32B8
    void $DOScale$b__1(::UnityEngine::Vector2 x);
  }; // DG.Tweening.DOTweenModuleUI/DG.Tweening.<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(DOTweenModuleUI::$$c__DisplayClass12_0), 16 + sizeof(::UnityEngine::UI::Outline*)> __DG_Tweening_DOTweenModuleUI_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(DOTweenModuleUI::$$c__DisplayClass12_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0::$DOScale$b__0
// Il2CppName: <DOScale>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0::*)()>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0::$DOScale$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0*), "<DOScale>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0::$DOScale$b__1
// Il2CppName: <DOScale>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0::*)(::UnityEngine::Vector2)>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0::$DOScale$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass12_0*), "<DOScale>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
