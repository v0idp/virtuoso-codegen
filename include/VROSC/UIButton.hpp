// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UIInteractable
#include "VROSC/UIInteractable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextMesh
  class TextMesh;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SimpleHaptic
  class SimpleHaptic;
  // Forward declaring type: ClickData
  class ClickData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIButton
  class UIButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIButton*, "VROSC", "UIButton");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIButton
  // [TokenAttribute] Offset: FFFFFFFF
  class UIButton : public ::VROSC::UIInteractable {
    public:
    public:
    // private UnityEngine.TextMesh _label
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::TextMesh* label;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextMesh*) == 0x8);
    // private TMPro.TextMeshPro _tmpLabel
    // Size: 0x8
    // Offset: 0x90
    ::TMPro::TextMeshPro* tmpLabel;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // protected VROSC.SimpleHaptic _hapticFeedBack
    // Size: 0x8
    // Offset: 0x98
    ::VROSC::SimpleHaptic* hapticFeedBack;
    // Field size check
    static_assert(sizeof(::VROSC::SimpleHaptic*) == 0x8);
    // public System.Action OnButtonPress
    // Size: 0x8
    // Offset: 0xA0
    ::System::Action* OnButtonPress;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.TextMesh _label
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextMesh*& dyn__label();
    // Get instance field reference: private TMPro.TextMeshPro _tmpLabel
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__tmpLabel();
    // Get instance field reference: protected VROSC.SimpleHaptic _hapticFeedBack
    [[deprecated("Use field access instead!")]] ::VROSC::SimpleHaptic*& dyn__hapticFeedBack();
    // Get instance field reference: public System.Action OnButtonPress
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_OnButtonPress();
    // public System.String get_Text()
    // Offset: 0xA33BB0
    ::StringW get_Text();
    // private System.Void Start()
    // Offset: 0xA33C54
    void Start();
    // protected System.Void ButtonWasPressed(VROSC.ClickData clickData)
    // Offset: 0xA33D0C
    void ButtonWasPressed(::VROSC::ClickData* clickData);
    // public System.Void SetText(System.String text)
    // Offset: 0xA33D7C
    void SetText(::StringW text);
    // public override System.Boolean get_InteractionStopsLaser()
    // Offset: 0xA33BA8
    // Implemented from: VROSC.UIInteractable
    // Base method: System.Boolean UIInteractable::get_InteractionStopsLaser()
    bool get_InteractionStopsLaser();
    // public System.Void .ctor()
    // Offset: 0xA33E6C
    // Implemented from: VROSC.UIInteractable
    // Base method: System.Void UIInteractable::.ctor()
    // Base method: System.Void Clickable::.ctor()
    // Base method: System.Void Interactable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIButton*, creationType>()));
    }
  }; // VROSC.UIButton
  #pragma pack(pop)
  static check_size<sizeof(UIButton), 160 + sizeof(::System::Action*)> __VROSC_UIButtonSizeCheck;
  static_assert(sizeof(UIButton) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIButton::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::UIButton::*)()>(&VROSC::UIButton::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIButton*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIButton::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIButton::*)()>(&VROSC::UIButton::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIButton*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIButton::ButtonWasPressed
// Il2CppName: ButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIButton::*)(::VROSC::ClickData*)>(&VROSC::UIButton::ButtonWasPressed)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIButton*), "ButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData});
  }
};
// Writing MetadataGetter for method: VROSC::UIButton::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIButton::*)(::StringW)>(&VROSC::UIButton::SetText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIButton*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: VROSC::UIButton::get_InteractionStopsLaser
// Il2CppName: get_InteractionStopsLaser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UIButton::*)()>(&VROSC::UIButton::get_InteractionStopsLaser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIButton*), "get_InteractionStopsLaser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
