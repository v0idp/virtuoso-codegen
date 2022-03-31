// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UIInteractable
#include "VROSC/UIInteractable.hpp"
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
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: ClickData
  class ClickData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIColorPicker
  class UIColorPicker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIColorPicker);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPicker*, "VROSC", "UIColorPicker");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIColorPicker
  // [TokenAttribute] Offset: FFFFFFFF
  class UIColorPicker : public ::VROSC::UIInteractable {
    public:
    // Nested type: ::VROSC::UIColorPicker::UIColorPickerData
    class UIColorPickerData;
    // Nested type: ::VROSC::UIColorPicker::$GrabSliderRemotely$d__21
    class $GrabSliderRemotely$d__21;
    // Nested type: ::VROSC::UIColorPicker::$GrabPicker$d__23
    class $GrabPicker$d__23;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Color <Color>k__BackingField
    // Size: 0x10
    // Offset: 0x88
    ::UnityEngine::Color Color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Action`1<UnityEngine.Color> OnColorPicked
    // Size: 0x8
    // Offset: 0x98
    ::System::Action_1<::UnityEngine::Color>* OnColorPicked;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Color>*) == 0x8);
    // private VROSC.UIColorPicker/VROSC.UIColorPickerData _data
    // Size: 0x8
    // Offset: 0xA0
    ::VROSC::UIColorPicker::UIColorPickerData* data;
    // Field size check
    static_assert(sizeof(::VROSC::UIColorPicker::UIColorPickerData*) == 0x8);
    // private VROSC.InputDevice _grabbingDevice
    // Size: 0x8
    // Offset: 0xA8
    ::VROSC::InputDevice* grabbingDevice;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private VROSC.TriggerButton _grabbingButton
    // Size: 0x4
    // Offset: 0xB0
    ::VROSC::TriggerButton grabbingButton;
    // Field size check
    static_assert(sizeof(::VROSC::TriggerButton) == 0x4);
    // private System.Boolean _uiHelperActive
    // Size: 0x1
    // Offset: 0xB4
    bool uiHelperActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: uiHelperActive and: rectTransform
    char __padding5[0x3] = {};
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Color <Color>k__BackingField
    ::UnityEngine::Color& dyn_$Color$k__BackingField();
    // Get instance field reference: public System.Action`1<UnityEngine.Color> OnColorPicked
    ::System::Action_1<::UnityEngine::Color>*& dyn_OnColorPicked();
    // Get instance field reference: private VROSC.UIColorPicker/VROSC.UIColorPickerData _data
    ::VROSC::UIColorPicker::UIColorPickerData*& dyn__data();
    // Get instance field reference: private VROSC.InputDevice _grabbingDevice
    ::VROSC::InputDevice*& dyn__grabbingDevice();
    // Get instance field reference: private VROSC.TriggerButton _grabbingButton
    ::VROSC::TriggerButton& dyn__grabbingButton();
    // Get instance field reference: private System.Boolean _uiHelperActive
    bool& dyn__uiHelperActive();
    // Get instance field reference: private UnityEngine.RectTransform _rectTransform
    ::UnityEngine::RectTransform*& dyn__rectTransform();
    // public UnityEngine.Vector2 get_Size()
    // Offset: 0x139A4A8
    ::UnityEngine::Vector2 get_Size();
    // public VROSC.UIColorPicker/VROSC.UIColorPickerData get_Data()
    // Offset: 0x139A5A0
    ::VROSC::UIColorPicker::UIColorPickerData* get_Data();
    // public UnityEngine.Color get_Color()
    // Offset: 0x139A5B4
    ::UnityEngine::Color get_Color();
    // private System.Void set_Color(UnityEngine.Color value)
    // Offset: 0x139A5A8
    void set_Color(::UnityEngine::Color value);
    // private System.Void Awake()
    // Offset: 0x139A5C0
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x139A71C
    void OnDestroy();
    // private System.Void OnEnable()
    // Offset: 0x139A7DC
    void OnEnable();
    // private System.Void StopGrabPicker(VROSC.InputDevice device, VROSC.TriggerButton button)
    // Offset: 0x139AA74
    void StopGrabPicker(::VROSC::InputDevice* device, ::VROSC::TriggerButton button);
    // private System.Void ButtonWasPressed(VROSC.ClickData clickData)
    // Offset: 0x139AB40
    void ButtonWasPressed(::VROSC::ClickData* clickData);
    // private System.Collections.IEnumerator GrabSliderRemotely(VROSC.InputDevice device, VROSC.TriggerButton grabbingButton)
    // Offset: 0x139AC7C
    ::System::Collections::IEnumerator* GrabSliderRemotely(::VROSC::InputDevice* device, ::VROSC::TriggerButton grabbingButton);
    // private System.Void StopGrabRemotely(VROSC.InputDevice device)
    // Offset: 0x139A9D4
    void StopGrabRemotely(::VROSC::InputDevice* device);
    // private System.Collections.IEnumerator GrabPicker(VROSC.InputDevice device, VROSC.TriggerButton grabbingButton, System.Boolean pointing)
    // Offset: 0x139ACFC
    ::System::Collections::IEnumerator* GrabPicker(::VROSC::InputDevice* device, ::VROSC::TriggerButton grabbingButton, bool pointing);
    // private System.Void GetRectTransform()
    // Offset: 0x139A684
    void GetRectTransform();
    // private UnityEngine.Vector2 GetSize()
    // Offset: 0x139A4AC
    ::UnityEngine::Vector2 GetSize();
    // public System.Void SetColor(UnityEngine.Color color, System.Boolean useCallback)
    // Offset: 0x139AD98
    void SetColor(::UnityEngine::Color color, bool useCallback);
    // public System.Void .ctor()
    // Offset: 0x139AE48
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
    static UIColorPicker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIColorPicker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIColorPicker*, creationType>()));
    }
    // protected override System.Void OnDisable()
    // Offset: 0x139A8C8
    // Implemented from: VROSC.Interactable
    // Base method: System.Void Interactable::OnDisable()
    void OnDisable();
  }; // VROSC.UIColorPicker
  #pragma pack(pop)
  static check_size<sizeof(UIColorPicker), 184 + sizeof(::UnityEngine::RectTransform*)> __VROSC_UIColorPickerSizeCheck;
  static_assert(sizeof(UIColorPicker) == 0xC0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIColorPicker::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::UIColorPicker::*)()>(&VROSC::UIColorPicker::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIColorPicker::UIColorPickerData* (VROSC::UIColorPicker::*)()>(&VROSC::UIColorPicker::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::get_Color
// Il2CppName: get_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::UIColorPicker::*)()>(&VROSC::UIColorPicker::get_Color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "get_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::set_Color
// Il2CppName: set_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::*)(::UnityEngine::Color)>(&VROSC::UIColorPicker::set_Color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "set_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::*)()>(&VROSC::UIColorPicker::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::*)()>(&VROSC::UIColorPicker::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::*)()>(&VROSC::UIColorPicker::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::StopGrabPicker
// Il2CppName: StopGrabPicker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::UIColorPicker::StopGrabPicker)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* button = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "StopGrabPicker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, button});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::ButtonWasPressed
// Il2CppName: ButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::*)(::VROSC::ClickData*)>(&VROSC::UIColorPicker::ButtonWasPressed)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "ButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::GrabSliderRemotely
// Il2CppName: GrabSliderRemotely
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::UIColorPicker::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::UIColorPicker::GrabSliderRemotely)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* grabbingButton = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "GrabSliderRemotely", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, grabbingButton});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::StopGrabRemotely
// Il2CppName: StopGrabRemotely
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::*)(::VROSC::InputDevice*)>(&VROSC::UIColorPicker::StopGrabRemotely)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "StopGrabRemotely", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::GrabPicker
// Il2CppName: GrabPicker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::UIColorPicker::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton, bool)>(&VROSC::UIColorPicker::GrabPicker)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* grabbingButton = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    static auto* pointing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "GrabPicker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, grabbingButton, pointing});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::GetRectTransform
// Il2CppName: GetRectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::*)()>(&VROSC::UIColorPicker::GetRectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "GetRectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::UIColorPicker::*)()>(&VROSC::UIColorPicker::GetSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::*)(::UnityEngine::Color, bool)>(&VROSC::UIColorPicker::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* useCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, useCallback});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UIColorPicker::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::*)()>(&VROSC::UIColorPicker::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
