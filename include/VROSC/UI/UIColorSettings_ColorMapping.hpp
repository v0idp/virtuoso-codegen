// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UI.UIColorSettings
#include "VROSC/UI/UIColorSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: UIColorGetter
  class UIColorGetter;
  // Forward declaring type: UIExplicitColor
  class UIExplicitColor;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::UIColorSettings::ColorMapping);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIColorSettings::ColorMapping*, "VROSC.UI", "UIColorSettings/ColorMapping");
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.UIColorSettings/VROSC.UI.ColorMapping
  // [TokenAttribute] Offset: FFFFFFFF
  class UIColorSettings::ColorMapping : public ::Il2CppObject {
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
    // private VROSC.UI.UIColorGetter _colorGetter
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::UI::UIColorGetter* colorGetter;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UIColorGetter*) == 0x8);
    // private VROSC.UI.UIExplicitColor _color
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UI::UIExplicitColor* color;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UIExplicitColor*) == 0x8);
    public:
    // Get instance field reference: private VROSC.UI.UIColorGetter _colorGetter
    ::VROSC::UI::UIColorGetter*& dyn__colorGetter();
    // Get instance field reference: private VROSC.UI.UIExplicitColor _color
    ::VROSC::UI::UIExplicitColor*& dyn__color();
    // public System.Void UpdateColor()
    // Offset: 0x140E454
    void UpdateColor();
    // public System.Void .ctor()
    // Offset: 0x140E4E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIColorSettings::ColorMapping* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::UIColorSettings::ColorMapping::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIColorSettings::ColorMapping*, creationType>()));
    }
  }; // VROSC.UI.UIColorSettings/VROSC.UI.ColorMapping
  #pragma pack(pop)
  static check_size<sizeof(UIColorSettings::ColorMapping), 24 + sizeof(::VROSC::UI::UIExplicitColor*)> __VROSC_UI_UIColorSettings_ColorMappingSizeCheck;
  static_assert(sizeof(UIColorSettings::ColorMapping) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::UIColorSettings::ColorMapping::UpdateColor
// Il2CppName: UpdateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIColorSettings::ColorMapping::*)()>(&VROSC::UI::UIColorSettings::ColorMapping::UpdateColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIColorSettings::ColorMapping*), "UpdateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIColorSettings::ColorMapping::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
