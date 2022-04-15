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
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIScrollableItem
  class UIScrollableItem;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIInteractableColorSettings
  class UIInteractableColorSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIInteractableColorSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIInteractableColorSettings*, "VROSC", "UIInteractableColorSettings");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIInteractableColorSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class UIInteractableColorSettings : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Color _activeColor
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color activeColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _inactiveColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color inactiveColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _hoverColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color hoverColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _disabledColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color disabledColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private UnityEngine.Color _activeColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__activeColor();
    // Get instance field reference: private UnityEngine.Color _inactiveColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__inactiveColor();
    // Get instance field reference: private UnityEngine.Color _hoverColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__hoverColor();
    // Get instance field reference: private UnityEngine.Color _disabledColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__disabledColor();
    // public UnityEngine.Color get_ActiveColor()
    // Offset: 0x1912508
    ::UnityEngine::Color get_ActiveColor();
    // public UnityEngine.Color get_InactiveColor()
    // Offset: 0x1912514
    ::UnityEngine::Color get_InactiveColor();
    // public UnityEngine.Color get_HoverColor()
    // Offset: 0x1912520
    ::UnityEngine::Color get_HoverColor();
    // public UnityEngine.Color get_DisabledColor()
    // Offset: 0x191252C
    ::UnityEngine::Color get_DisabledColor();
    // public System.Void .ctor()
    // Offset: 0x191262C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIInteractableColorSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIInteractableColorSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIInteractableColorSettings*, creationType>()));
    }
    // public UnityEngine.Color GetColor(System.Boolean isHovering, System.Boolean isActive, System.Boolean isDisabled)
    // Offset: 0x1912538
    ::UnityEngine::Color GetColor(bool isHovering, bool isActive, bool isDisabled);
    // public UnityEngine.Color GetColor(VROSC.UIScrollableItem selectionBarButton)
    // Offset: 0x19125A4
    ::UnityEngine::Color GetColor(::VROSC::UIScrollableItem* selectionBarButton);
  }; // VROSC.UIInteractableColorSettings
  #pragma pack(pop)
  static check_size<sizeof(UIInteractableColorSettings), 64 + sizeof(::UnityEngine::Color)> __VROSC_UIInteractableColorSettingsSizeCheck;
  static_assert(sizeof(UIInteractableColorSettings) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIInteractableColorSettings::get_ActiveColor
// Il2CppName: get_ActiveColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::UIInteractableColorSettings::*)()>(&VROSC::UIInteractableColorSettings::get_ActiveColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIInteractableColorSettings*), "get_ActiveColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIInteractableColorSettings::get_InactiveColor
// Il2CppName: get_InactiveColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::UIInteractableColorSettings::*)()>(&VROSC::UIInteractableColorSettings::get_InactiveColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIInteractableColorSettings*), "get_InactiveColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIInteractableColorSettings::get_HoverColor
// Il2CppName: get_HoverColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::UIInteractableColorSettings::*)()>(&VROSC::UIInteractableColorSettings::get_HoverColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIInteractableColorSettings*), "get_HoverColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIInteractableColorSettings::get_DisabledColor
// Il2CppName: get_DisabledColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::UIInteractableColorSettings::*)()>(&VROSC::UIInteractableColorSettings::get_DisabledColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIInteractableColorSettings*), "get_DisabledColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIInteractableColorSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UIInteractableColorSettings::GetColor
// Il2CppName: GetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::UIInteractableColorSettings::*)(bool, bool, bool)>(&VROSC::UIInteractableColorSettings::GetColor)> {
  static const MethodInfo* get() {
    static auto* isHovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDisabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIInteractableColorSettings*), "GetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isHovering, isActive, isDisabled});
  }
};
// Writing MetadataGetter for method: VROSC::UIInteractableColorSettings::GetColor
// Il2CppName: GetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::UIInteractableColorSettings::*)(::VROSC::UIScrollableItem*)>(&VROSC::UIInteractableColorSettings::GetColor)> {
  static const MethodInfo* get() {
    static auto* selectionBarButton = &::il2cpp_utils::GetClassFromName("VROSC", "UIScrollableItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIInteractableColorSettings*), "GetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectionBarButton});
  }
};
