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
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass34_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModuleUI/DG.Tweening.<>c__DisplayClass34_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DOTweenModuleUI::$$c__DisplayClass34_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.UI.Text target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UI::Text* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::UI::Text*
    constexpr operator ::UnityEngine::UI::Text*() const noexcept {
      return target;
    }
    // Get instance field reference: public UnityEngine.UI.Text target
    ::UnityEngine::UI::Text*& dyn_target();
    // UnityEngine.Color <DOColor>b__0()
    // Offset: 0x1265570
    ::UnityEngine::Color $DOColor$b__0();
    // System.Void <DOColor>b__1(UnityEngine.Color x)
    // Offset: 0x1265594
    void $DOColor$b__1(::UnityEngine::Color x);
    // public System.Void .ctor()
    // Offset: 0x1265568
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenModuleUI::$$c__DisplayClass34_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenModuleUI::$$c__DisplayClass34_0*, creationType>()));
    }
  }; // DG.Tweening.DOTweenModuleUI/DG.Tweening.<>c__DisplayClass34_0
  #pragma pack(pop)
  static check_size<sizeof(DOTweenModuleUI::$$c__DisplayClass34_0), 16 + sizeof(::UnityEngine::UI::Text*)> __DG_Tweening_DOTweenModuleUI_$$c__DisplayClass34_0SizeCheck;
  static_assert(sizeof(DOTweenModuleUI::$$c__DisplayClass34_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0::$DOColor$b__0
// Il2CppName: <DOColor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0::*)()>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0::$DOColor$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0*), "<DOColor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0::$DOColor$b__1
// Il2CppName: <DOColor>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0::*)(::UnityEngine::Color)>(&DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0::$DOColor$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0*), "<DOColor>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUI::$$c__DisplayClass34_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
