// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: UITwoToneColor
  class UITwoToneColor;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Forward declaring type: UIColorSettings
  class UIColorSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::UIColorSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIColorSettings*, "VROSC.UI", "UIColorSettings");
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.UIColorSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class UIColorSettings : public ::Il2CppObject {
    public:
    // Nested type: ::VROSC::UI::UIColorSettings::ColorMapping
    class ColorMapping;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [HeaderAttribute] Offset: 0x67734C
    // public System.Collections.Generic.List`1<VROSC.UI.UIColorSettings/VROSC.UI.ColorMapping> _mappedColors
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::VROSC::UI::UIColorSettings::ColorMapping*>* mappedColors;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::UI::UIColorSettings::ColorMapping*>*) == 0x8);
    // [HeaderAttribute] Offset: 0x677398
    // private VROSC.UI.UITwoToneColor xAxisNaturals
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UI::UITwoToneColor* xAxisNaturals;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UITwoToneColor*) == 0x8);
    // private VROSC.UI.UITwoToneColor xAxisHalfs
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UI::UITwoToneColor* xAxisHalfs;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UITwoToneColor*) == 0x8);
    // private VROSC.UI.UITwoToneColor yAxisNaturals
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::UI::UITwoToneColor* yAxisNaturals;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UITwoToneColor*) == 0x8);
    // private VROSC.UI.UITwoToneColor yAxisHalfs
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::UI::UITwoToneColor* yAxisHalfs;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UITwoToneColor*) == 0x8);
    // private VROSC.UI.UITwoToneColor zAxisNaturals
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::UI::UITwoToneColor* zAxisNaturals;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UITwoToneColor*) == 0x8);
    // private VROSC.UI.UITwoToneColor zAxisHalfs
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::UI::UITwoToneColor* zAxisHalfs;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UITwoToneColor*) == 0x8);
    // [RangeAttribute] Offset: 0x677434
    // private System.Single _hoverMultiplier
    // Size: 0x4
    // Offset: 0x48
    float hoverMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x677474
    // private System.Single _pressedMultiplier
    // Size: 0x4
    // Offset: 0x4C
    float pressedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x6774B4
    // private System.Single _disabledDesaturation
    // Size: 0x4
    // Offset: 0x50
    float disabledDesaturation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x6774F4
    // private System.Single _disabledDarken
    // Size: 0x4
    // Offset: 0x54
    float disabledDarken;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0x677534
    // private UnityEngine.Color _controllerButtonHighlight
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Color controllerButtonHighlight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _controllerButtonPressed
    // Size: 0x10
    // Offset: 0x68
    ::UnityEngine::Color controllerButtonPressed;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _controllerButtonNormal
    // Size: 0x10
    // Offset: 0x78
    ::UnityEngine::Color controllerButtonNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<VROSC.UI.UIColorSettings/VROSC.UI.ColorMapping> _mappedColors
    ::System::Collections::Generic::List_1<::VROSC::UI::UIColorSettings::ColorMapping*>*& dyn__mappedColors();
    // Get instance field reference: private VROSC.UI.UITwoToneColor xAxisNaturals
    ::VROSC::UI::UITwoToneColor*& dyn_xAxisNaturals();
    // Get instance field reference: private VROSC.UI.UITwoToneColor xAxisHalfs
    ::VROSC::UI::UITwoToneColor*& dyn_xAxisHalfs();
    // Get instance field reference: private VROSC.UI.UITwoToneColor yAxisNaturals
    ::VROSC::UI::UITwoToneColor*& dyn_yAxisNaturals();
    // Get instance field reference: private VROSC.UI.UITwoToneColor yAxisHalfs
    ::VROSC::UI::UITwoToneColor*& dyn_yAxisHalfs();
    // Get instance field reference: private VROSC.UI.UITwoToneColor zAxisNaturals
    ::VROSC::UI::UITwoToneColor*& dyn_zAxisNaturals();
    // Get instance field reference: private VROSC.UI.UITwoToneColor zAxisHalfs
    ::VROSC::UI::UITwoToneColor*& dyn_zAxisHalfs();
    // Get instance field reference: private System.Single _hoverMultiplier
    float& dyn__hoverMultiplier();
    // Get instance field reference: private System.Single _pressedMultiplier
    float& dyn__pressedMultiplier();
    // Get instance field reference: private System.Single _disabledDesaturation
    float& dyn__disabledDesaturation();
    // Get instance field reference: private System.Single _disabledDarken
    float& dyn__disabledDarken();
    // Get instance field reference: private UnityEngine.Color _controllerButtonHighlight
    ::UnityEngine::Color& dyn__controllerButtonHighlight();
    // Get instance field reference: private UnityEngine.Color _controllerButtonPressed
    ::UnityEngine::Color& dyn__controllerButtonPressed();
    // Get instance field reference: private UnityEngine.Color _controllerButtonNormal
    ::UnityEngine::Color& dyn__controllerButtonNormal();
    // public System.Void UpdateColors()
    // Offset: 0x139B498
    void UpdateColors();
    // public VROSC.UI.UITwoToneColor GetScalePanelColor(System.Int32 axis, System.Boolean natural, System.Boolean isPressed, System.Boolean isHovering, System.Boolean isDisabled)
    // Offset: 0x139B5B0
    ::VROSC::UI::UITwoToneColor* GetScalePanelColor(int axis, bool natural, bool isPressed, bool isHovering, bool isDisabled);
    // public UnityEngine.Color GetControllerButtonColor(System.Boolean highlight, System.Boolean pressed)
    // Offset: 0x139B6A0
    ::UnityEngine::Color GetControllerButtonColor(bool highlight, bool pressed);
    // private VROSC.UI.UITwoToneColor ModifyColorByInteractivity(VROSC.UI.UITwoToneColor color, System.Boolean isPressed, System.Boolean isHovering, System.Boolean isDisabled)
    // Offset: 0x139B664
    ::VROSC::UI::UITwoToneColor* ModifyColorByInteractivity(::VROSC::UI::UITwoToneColor* color, bool isPressed, bool isHovering, bool isDisabled);
    // private VROSC.UI.UITwoToneColor GetColorByAxis(System.Int32 axis, System.Boolean natural)
    // Offset: 0x139B610
    ::VROSC::UI::UITwoToneColor* GetColorByAxis(int axis, bool natural);
    // public System.Void .ctor()
    // Offset: 0x139B8D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIColorSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::UIColorSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIColorSettings*, creationType>()));
    }
  }; // VROSC.UI.UIColorSettings
  #pragma pack(pop)
  static check_size<sizeof(UIColorSettings), 120 + sizeof(::UnityEngine::Color)> __VROSC_UI_UIColorSettingsSizeCheck;
  static_assert(sizeof(UIColorSettings) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::UIColorSettings::UpdateColors
// Il2CppName: UpdateColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIColorSettings::*)()>(&VROSC::UI::UIColorSettings::UpdateColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIColorSettings*), "UpdateColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIColorSettings::GetScalePanelColor
// Il2CppName: GetScalePanelColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::UITwoToneColor* (VROSC::UI::UIColorSettings::*)(int, bool, bool, bool, bool)>(&VROSC::UI::UIColorSettings::GetScalePanelColor)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* natural = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isPressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isHovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDisabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIColorSettings*), "GetScalePanelColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, natural, isPressed, isHovering, isDisabled});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIColorSettings::GetControllerButtonColor
// Il2CppName: GetControllerButtonColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::UI::UIColorSettings::*)(bool, bool)>(&VROSC::UI::UIColorSettings::GetControllerButtonColor)> {
  static const MethodInfo* get() {
    static auto* highlight = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* pressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIColorSettings*), "GetControllerButtonColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highlight, pressed});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIColorSettings::ModifyColorByInteractivity
// Il2CppName: ModifyColorByInteractivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::UITwoToneColor* (VROSC::UI::UIColorSettings::*)(::VROSC::UI::UITwoToneColor*, bool, bool, bool)>(&VROSC::UI::UIColorSettings::ModifyColorByInteractivity)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("VROSC.UI", "UITwoToneColor")->byval_arg;
    static auto* isPressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isHovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDisabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIColorSettings*), "ModifyColorByInteractivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, isPressed, isHovering, isDisabled});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIColorSettings::GetColorByAxis
// Il2CppName: GetColorByAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::UITwoToneColor* (VROSC::UI::UIColorSettings::*)(int, bool)>(&VROSC::UI::UIColorSettings::GetColorByAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* natural = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIColorSettings*), "GetColorByAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, natural});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIColorSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!