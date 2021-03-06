// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIToggle
  class UIToggle;
  // Forward declaring type: EnvironmentData
  class EnvironmentData;
  // Forward declaring type: EnvironmentPanelUI
  class EnvironmentPanelUI;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: EnvironmentUIButton
  class EnvironmentUIButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::EnvironmentUIButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnvironmentUIButton*, "VROSC", "EnvironmentUIButton");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.EnvironmentUIButton
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentUIButton : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.UIToggle _toggle
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UIToggle* toggle;
    // Field size check
    static_assert(sizeof(::VROSC::UIToggle*) == 0x8);
    // private VROSC.EnvironmentData _target
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::EnvironmentData* target;
    // Field size check
    static_assert(sizeof(::VROSC::EnvironmentData*) == 0x8);
    // private UnityEngine.Renderer _preview
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Renderer* preview;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private TMPro.TextMeshPro _nameLabel
    // Size: 0x8
    // Offset: 0x30
    ::TMPro::TextMeshPro* nameLabel;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.EnvironmentPanelUI _environmentPanelUI
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::EnvironmentPanelUI* environmentPanelUI;
    // Field size check
    static_assert(sizeof(::VROSC::EnvironmentPanelUI*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.UIToggle _toggle
    [[deprecated("Use field access instead!")]] ::VROSC::UIToggle*& dyn__toggle();
    // Get instance field reference: private VROSC.EnvironmentData _target
    [[deprecated("Use field access instead!")]] ::VROSC::EnvironmentData*& dyn__target();
    // Get instance field reference: private UnityEngine.Renderer _preview
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__preview();
    // Get instance field reference: private TMPro.TextMeshPro _nameLabel
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__nameLabel();
    // Get instance field reference: private VROSC.EnvironmentPanelUI _environmentPanelUI
    [[deprecated("Use field access instead!")]] ::VROSC::EnvironmentPanelUI*& dyn__environmentPanelUI();
    // public VROSC.EnvironmentData get_EnvironmentData()
    // Offset: 0x8EF670
    ::VROSC::EnvironmentData* get_EnvironmentData();
    // public System.Void .ctor()
    // Offset: 0x8EF904
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentUIButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::EnvironmentUIButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentUIButton*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x8EF678
    void Awake();
    // public System.Void Setup(VROSC.EnvironmentPanelUI environmentPanelUI)
    // Offset: 0x8EF808
    void Setup(::VROSC::EnvironmentPanelUI* environmentPanelUI);
    // public System.Void SetActive(VROSC.EnvironmentData activeEnvironment)
    // Offset: 0x8EF2D4
    void SetActive(::VROSC::EnvironmentData* activeEnvironment);
    // private System.Void OnDestroy()
    // Offset: 0x8EF810
    void OnDestroy();
    // private System.Void ButtonPressed(VROSC.InputDevice device, System.Boolean toggled)
    // Offset: 0x8EF8E4
    void ButtonPressed(::VROSC::InputDevice* device, bool toggled);
  }; // VROSC.EnvironmentUIButton
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentUIButton), 56 + sizeof(::VROSC::EnvironmentPanelUI*)> __VROSC_EnvironmentUIButtonSizeCheck;
  static_assert(sizeof(EnvironmentUIButton) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::EnvironmentUIButton::get_EnvironmentData
// Il2CppName: get_EnvironmentData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::EnvironmentData* (VROSC::EnvironmentUIButton::*)()>(&VROSC::EnvironmentUIButton::get_EnvironmentData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnvironmentUIButton*), "get_EnvironmentData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::EnvironmentUIButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::EnvironmentUIButton::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnvironmentUIButton::*)()>(&VROSC::EnvironmentUIButton::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnvironmentUIButton*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::EnvironmentUIButton::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnvironmentUIButton::*)(::VROSC::EnvironmentPanelUI*)>(&VROSC::EnvironmentUIButton::Setup)> {
  static const MethodInfo* get() {
    static auto* environmentPanelUI = &::il2cpp_utils::GetClassFromName("VROSC", "EnvironmentPanelUI")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnvironmentUIButton*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentPanelUI});
  }
};
// Writing MetadataGetter for method: VROSC::EnvironmentUIButton::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnvironmentUIButton::*)(::VROSC::EnvironmentData*)>(&VROSC::EnvironmentUIButton::SetActive)> {
  static const MethodInfo* get() {
    static auto* activeEnvironment = &::il2cpp_utils::GetClassFromName("VROSC", "EnvironmentData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnvironmentUIButton*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeEnvironment});
  }
};
// Writing MetadataGetter for method: VROSC::EnvironmentUIButton::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnvironmentUIButton::*)()>(&VROSC::EnvironmentUIButton::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnvironmentUIButton*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::EnvironmentUIButton::ButtonPressed
// Il2CppName: ButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnvironmentUIButton::*)(::VROSC::InputDevice*, bool)>(&VROSC::EnvironmentUIButton::ButtonPressed)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* toggled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnvironmentUIButton*), "ButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, toggled});
  }
};
