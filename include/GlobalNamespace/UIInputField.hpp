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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ClickData
  class ClickData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UIInputField
  class UIInputField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UIInputField);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIInputField*, "", "UIInputField");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: UIInputField
  // [TokenAttribute] Offset: FFFFFFFF
  class UIInputField : public ::VROSC::UIInteractable {
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
    // protected System.String _descriptionText
    // Size: 0x8
    // Offset: 0x88
    ::StringW descriptionText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected TMPro.TextMeshPro _textInput
    // Size: 0x8
    // Offset: 0x90
    ::TMPro::TextMeshPro* textInput;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // protected TMPro.TextMeshPro _placeholderText
    // Size: 0x8
    // Offset: 0x98
    ::TMPro::TextMeshPro* placeholderText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // protected UnityEngine.GameObject _toggleObject
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::GameObject* toggleObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.Boolean _isActive
    // Size: 0x1
    // Offset: 0xA8
    bool isActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isActive and: OnSelected
    char __padding4[0x7] = {};
    // public System.Action`1<UIInputField> OnSelected
    // Size: 0x8
    // Offset: 0xB0
    ::System::Action_1<::GlobalNamespace::UIInputField*>* OnSelected;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::UIInputField*>*) == 0x8);
    // public System.Action`1<System.String> OnValueChanged
    // Size: 0x8
    // Offset: 0xB8
    ::System::Action_1<::StringW>* OnValueChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: protected System.String _descriptionText
    ::StringW& dyn__descriptionText();
    // Get instance field reference: protected TMPro.TextMeshPro _textInput
    ::TMPro::TextMeshPro*& dyn__textInput();
    // Get instance field reference: protected TMPro.TextMeshPro _placeholderText
    ::TMPro::TextMeshPro*& dyn__placeholderText();
    // Get instance field reference: protected UnityEngine.GameObject _toggleObject
    ::UnityEngine::GameObject*& dyn__toggleObject();
    // Get instance field reference: protected System.Boolean _isActive
    bool& dyn__isActive();
    // Get instance field reference: public System.Action`1<UIInputField> OnSelected
    ::System::Action_1<::GlobalNamespace::UIInputField*>*& dyn_OnSelected();
    // Get instance field reference: public System.Action`1<System.String> OnValueChanged
    ::System::Action_1<::StringW>*& dyn_OnValueChanged();
    // public System.String get_Text()
    // Offset: 0x139C994
    ::StringW get_Text();
    // protected System.Void Awake()
    // Offset: 0x139C9B8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x139CA90
    void OnDestroy();
    // public System.Void Toggle()
    // Offset: 0x139CD54
    void Toggle();
    // public System.Void Select()
    // Offset: 0x139CD68
    void Select();
    // public System.Void Deselect(System.Boolean releaseKeyboard)
    // Offset: 0x139CB7C
    void Deselect(bool releaseKeyboard);
    // public System.Void SetText(System.String text)
    // Offset: 0x139CFCC
    void SetText(::StringW text);
    // protected System.Void KeyboardClosed()
    // Offset: 0x139D088
    void KeyboardClosed();
    // protected System.Void InputFieldPressed(VROSC.ClickData clickData)
    // Offset: 0x139D090
    void InputFieldPressed(::VROSC::ClickData* clickData);
    // public override System.Boolean get_InteractionStopsLaser()
    // Offset: 0x139C98C
    // Implemented from: VROSC.UIInteractable
    // Base method: System.Boolean UIInteractable::get_InteractionStopsLaser()
    bool get_InteractionStopsLaser();
    // public System.Void .ctor()
    // Offset: 0x139D094
    // Implemented from: VROSC.UIInteractable
    // Base method: System.Void UIInteractable::.ctor()
    // Base method: System.Void Clickable::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIInputField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UIInputField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIInputField*, creationType>()));
    }
    // protected override System.Void OnDisable()
    // Offset: 0x139CB50
    // Implemented from: VROSC.Interactable
    // Base method: System.Void Interactable::OnDisable()
    void OnDisable();
  }; // UIInputField
  #pragma pack(pop)
  static check_size<sizeof(UIInputField), 184 + sizeof(::System::Action_1<::StringW>*)> __GlobalNamespace_UIInputFieldSizeCheck;
  static_assert(sizeof(UIInputField) == 0xC0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UIInputField::*)()>(&GlobalNamespace::UIInputField::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIInputField*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIInputField::*)()>(&GlobalNamespace::UIInputField::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIInputField*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIInputField::*)()>(&GlobalNamespace::UIInputField::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIInputField*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::Toggle
// Il2CppName: Toggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIInputField::*)()>(&GlobalNamespace::UIInputField::Toggle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIInputField*), "Toggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::Select
// Il2CppName: Select
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIInputField::*)()>(&GlobalNamespace::UIInputField::Select)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIInputField*), "Select", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::Deselect
// Il2CppName: Deselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIInputField::*)(bool)>(&GlobalNamespace::UIInputField::Deselect)> {
  static const MethodInfo* get() {
    static auto* releaseKeyboard = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIInputField*), "Deselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{releaseKeyboard});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIInputField::*)(::StringW)>(&GlobalNamespace::UIInputField::SetText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIInputField*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::KeyboardClosed
// Il2CppName: KeyboardClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIInputField::*)()>(&GlobalNamespace::UIInputField::KeyboardClosed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIInputField*), "KeyboardClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::InputFieldPressed
// Il2CppName: InputFieldPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIInputField::*)(::VROSC::ClickData*)>(&GlobalNamespace::UIInputField::InputFieldPressed)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIInputField*), "InputFieldPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::get_InteractionStopsLaser
// Il2CppName: get_InteractionStopsLaser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UIInputField::*)()>(&GlobalNamespace::UIInputField::get_InteractionStopsLaser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIInputField*), "get_InteractionStopsLaser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UIInputField::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIInputField::*)()>(&GlobalNamespace::UIInputField::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIInputField*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
