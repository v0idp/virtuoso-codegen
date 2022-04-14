// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: UIColorSettings
  class UIColorSettings;
  // Forward declaring type: UITwoToneColor
  class UITwoToneColor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Interactable
  class Interactable;
}
// Completed forward declares
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Forward declaring type: UIScheme
  class UIScheme;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::UIScheme);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIScheme*, "VROSC.UI", "UIScheme");
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.UIScheme
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 781078
  class UIScheme : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private VROSC.UI.UIColorSettings _colorSettings
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UI::UIColorSettings* colorSettings;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UIColorSettings*) == 0x8);
    // private System.Boolean _editorSetting
    // Size: 0x1
    // Offset: 0x20
    bool editorSetting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private VROSC.UI.UIScheme <Current>k__BackingField
    static ::VROSC::UI::UIScheme* _get_$Current$k__BackingField();
    // Set static field: static private VROSC.UI.UIScheme <Current>k__BackingField
    static void _set_$Current$k__BackingField(::VROSC::UI::UIScheme* value);
    // Get instance field reference: private VROSC.UI.UIColorSettings _colorSettings
    [[deprecated]] ::VROSC::UI::UIColorSettings*& dyn__colorSettings();
    // Get instance field reference: private System.Boolean _editorSetting
    [[deprecated]] bool& dyn__editorSetting();
    // static public VROSC.UI.UIScheme get_Current()
    // Offset: 0x1913534
    static ::VROSC::UI::UIScheme* get_Current();
    // static public System.Void set_Current(VROSC.UI.UIScheme value)
    // Offset: 0x1913580
    static void set_Current(::VROSC::UI::UIScheme* value);
    // private System.Void OnEnable()
    // Offset: 0x19135D0
    void OnEnable();
    // public UnityEngine.Color GetControllerButtonColor(System.Boolean highlight, System.Boolean pressed)
    // Offset: 0x1913670
    ::UnityEngine::Color GetControllerButtonColor(bool highlight, bool pressed);
    // public VROSC.UI.UITwoToneColor GetScalePanelColor(System.Int32 axis, System.Boolean natural, VROSC.Interactable interactable)
    // Offset: 0x1913364
    ::VROSC::UI::UITwoToneColor* GetScalePanelColor(int axis, bool natural, ::VROSC::Interactable* interactable);
    // static public System.Void UpdateForEditor()
    // Offset: 0x19136D8
    static void UpdateForEditor();
    // public System.Void .ctor()
    // Offset: 0x1913734
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIScheme* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::UIScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIScheme*, creationType>()));
    }
  }; // VROSC.UI.UIScheme
  #pragma pack(pop)
  static check_size<sizeof(UIScheme), 32 + sizeof(bool)> __VROSC_UI_UISchemeSizeCheck;
  static_assert(sizeof(UIScheme) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::UIScheme::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::UIScheme* (*)()>(&VROSC::UI::UIScheme::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIScheme*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIScheme::set_Current
// Il2CppName: set_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::VROSC::UI::UIScheme*)>(&VROSC::UI::UIScheme::set_Current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC.UI", "UIScheme")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIScheme*), "set_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIScheme::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIScheme::*)()>(&VROSC::UI::UIScheme::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIScheme*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIScheme::GetControllerButtonColor
// Il2CppName: GetControllerButtonColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::UI::UIScheme::*)(bool, bool)>(&VROSC::UI::UIScheme::GetControllerButtonColor)> {
  static const MethodInfo* get() {
    static auto* highlight = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* pressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIScheme*), "GetControllerButtonColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highlight, pressed});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIScheme::GetScalePanelColor
// Il2CppName: GetScalePanelColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::UITwoToneColor* (VROSC::UI::UIScheme::*)(int, bool, ::VROSC::Interactable*)>(&VROSC::UI::UIScheme::GetScalePanelColor)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* natural = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* interactable = &::il2cpp_utils::GetClassFromName("VROSC", "Interactable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIScheme*), "GetScalePanelColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, natural, interactable});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIScheme::UpdateForEditor
// Il2CppName: UpdateForEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::UI::UIScheme::UpdateForEditor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIScheme*), "UpdateForEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIScheme::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
