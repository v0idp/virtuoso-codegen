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
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: UIScheme
  class UIScheme;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: UISchemeController
  class UISchemeController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UISchemeController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISchemeController*, "VROSC", "UISchemeController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UISchemeController
  // [TokenAttribute] Offset: FFFFFFFF
  class UISchemeController : public ::Il2CppObject {
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
    // private VROSC.UI.UIScheme _uIScheme
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::UI::UIScheme* uIScheme;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UIScheme*) == 0x8);
    public:
    // Creating conversion operator: operator ::VROSC::UI::UIScheme*
    constexpr operator ::VROSC::UI::UIScheme*() const noexcept {
      return uIScheme;
    }
    // Get instance field reference: private VROSC.UI.UIScheme _uIScheme
    ::VROSC::UI::UIScheme*& dyn__uIScheme();
    // public VROSC.UI.UIScheme get_UIScheme()
    // Offset: 0x139FE10
    ::VROSC::UI::UIScheme* get_UIScheme();
    // System.Void Setup()
    // Offset: 0x139FE18
    void Setup();
    // public System.Void .ctor()
    // Offset: 0x139FE68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UISchemeController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UISchemeController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UISchemeController*, creationType>()));
    }
  }; // VROSC.UISchemeController
  #pragma pack(pop)
  static check_size<sizeof(UISchemeController), 16 + sizeof(::VROSC::UI::UIScheme*)> __VROSC_UISchemeControllerSizeCheck;
  static_assert(sizeof(UISchemeController) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UISchemeController::get_UIScheme
// Il2CppName: get_UIScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::UIScheme* (VROSC::UISchemeController::*)()>(&VROSC::UISchemeController::get_UIScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISchemeController*), "get_UIScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISchemeController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISchemeController::*)()>(&VROSC::UISchemeController::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISchemeController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISchemeController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
