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
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIButton
  class UIButton;
  // Forward declaring type: UISpinnerData
  class UISpinnerData;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: MinMaxInt
  class MinMaxInt;
  // Forward declaring type: ClickData
  class ClickData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
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
  // Forward declaring type: UISpinner
  class UISpinner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UISpinner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISpinner*, "VROSC", "UISpinner");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xEC
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UISpinner
  // [TokenAttribute] Offset: FFFFFFFF
  class UISpinner : public ::VROSC::UIInteractable {
    public:
    // Nested type: ::VROSC::UISpinner::$GrabSpinnerRemotely$d__33
    class $GrabSpinnerRemotely$d__33;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Boolean <IsGrabbingRemotely>k__BackingField
    // Size: 0x1
    // Offset: 0x88
    bool IsGrabbingRemotely;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsGrabbingRemotely and: Selection
    char __padding0[0x3] = {};
    // private System.Int32 <Selection>k__BackingField
    // Size: 0x4
    // Offset: 0x8C
    int Selection;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single <Value>k__BackingField
    // Size: 0x4
    // Offset: 0x90
    float Value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: Value and: nextButton
    char __padding2[0x4] = {};
    // protected VROSC.UIButton _nextButton
    // Size: 0x8
    // Offset: 0x98
    ::VROSC::UIButton* nextButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // protected VROSC.UIButton _previousButton
    // Size: 0x8
    // Offset: 0xA0
    ::VROSC::UIButton* previousButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // public System.Action`1<System.Int32> OnSelectionChanged
    // Size: 0x8
    // Offset: 0xA8
    ::System::Action_1<int>* OnSelectionChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<int>*) == 0x8);
    // private TMPro.TextMeshPro _valueDisplay
    // Size: 0x8
    // Offset: 0xB0
    ::TMPro::TextMeshPro* valueDisplay;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.UISpinnerData _data
    // Size: 0x8
    // Offset: 0xB8
    ::VROSC::UISpinnerData* data;
    // Field size check
    static_assert(sizeof(::VROSC::UISpinnerData*) == 0x8);
    // private UnityEngine.RectTransform _sizeTransform
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::RectTransform* sizeTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private VROSC.InputDevice _grabbingDevice
    // Size: 0x8
    // Offset: 0xC8
    ::VROSC::InputDevice* grabbingDevice;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private VROSC.MinMaxInt _remapValue
    // Size: 0x8
    // Offset: 0xD0
    ::VROSC::MinMaxInt* remapValue;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxInt*) == 0x8);
    // private VROSC.TriggerButton _grabbingButton
    // Size: 0x14
    // Offset: 0xD8
    ::VROSC::TriggerButton grabbingButton;
    // Field size check
    static_assert(sizeof(::VROSC::TriggerButton) == 0x14);
    public:
    // Get static field: static public System.Boolean InverseSpinners
    static bool _get_InverseSpinners();
    // Set static field: static public System.Boolean InverseSpinners
    static void _set_InverseSpinners(bool value);
    // Get instance field reference: private System.Boolean <IsGrabbingRemotely>k__BackingField
    bool& dyn_$IsGrabbingRemotely$k__BackingField();
    // Get instance field reference: private System.Int32 <Selection>k__BackingField
    int& dyn_$Selection$k__BackingField();
    // Get instance field reference: private System.Single <Value>k__BackingField
    float& dyn_$Value$k__BackingField();
    // Get instance field reference: protected VROSC.UIButton _nextButton
    ::VROSC::UIButton*& dyn__nextButton();
    // Get instance field reference: protected VROSC.UIButton _previousButton
    ::VROSC::UIButton*& dyn__previousButton();
    // Get instance field reference: public System.Action`1<System.Int32> OnSelectionChanged
    ::System::Action_1<int>*& dyn_OnSelectionChanged();
    // Get instance field reference: private TMPro.TextMeshPro _valueDisplay
    ::TMPro::TextMeshPro*& dyn__valueDisplay();
    // Get instance field reference: private VROSC.UISpinnerData _data
    ::VROSC::UISpinnerData*& dyn__data();
    // Get instance field reference: private UnityEngine.RectTransform _sizeTransform
    ::UnityEngine::RectTransform*& dyn__sizeTransform();
    // Get instance field reference: private VROSC.InputDevice _grabbingDevice
    ::VROSC::InputDevice*& dyn__grabbingDevice();
    // Get instance field reference: private VROSC.MinMaxInt _remapValue
    ::VROSC::MinMaxInt*& dyn__remapValue();
    // Get instance field reference: private VROSC.TriggerButton _grabbingButton
    ::VROSC::TriggerButton& dyn__grabbingButton();
    // public System.Boolean get_IsGrabbingRemotely()
    // Offset: 0x13A3F00
    bool get_IsGrabbingRemotely();
    // private System.Void set_IsGrabbingRemotely(System.Boolean value)
    // Offset: 0x13A3EF4
    void set_IsGrabbingRemotely(bool value);
    // public System.Int32 get_Selection()
    // Offset: 0x13A3F10
    int get_Selection();
    // private System.Void set_Selection(System.Int32 value)
    // Offset: 0x13A3F08
    void set_Selection(int value);
    // public System.Single get_Value()
    // Offset: 0x13A3F20
    float get_Value();
    // private System.Void set_Value(System.Single value)
    // Offset: 0x13A3F18
    void set_Value(float value);
    // public UnityEngine.Vector2 get_Size()
    // Offset: 0x13A3F28
    ::UnityEngine::Vector2 get_Size();
    // public VROSC.UISpinnerData get_Data()
    // Offset: 0x13A4018
    ::VROSC::UISpinnerData* get_Data();
    // private System.Void Start()
    // Offset: 0x13A4020
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x13A4304
    void OnEnable();
    // public System.Void Setup(VROSC.MinMaxInt remapValue, System.Int32 startValue)
    // Offset: 0x13A4660
    void Setup(::VROSC::MinMaxInt* remapValue, int startValue);
    // private System.Void ButtonWasPressed(VROSC.ClickData clickData, System.Boolean pressed)
    // Offset: 0x13A4848
    void ButtonWasPressed(::VROSC::ClickData* clickData, bool pressed);
    // private System.Collections.IEnumerator GrabSpinnerRemotely(VROSC.InputDevice device, VROSC.TriggerButton grabbingButton)
    // Offset: 0x13A4980
    ::System::Collections::IEnumerator* GrabSpinnerRemotely(::VROSC::InputDevice* device, ::VROSC::TriggerButton grabbingButton);
    // private System.Void StopGrabSpinnerRemotely(VROSC.InputDevice device)
    // Offset: 0x13A45B4
    void StopGrabSpinnerRemotely(::VROSC::InputDevice* device);
    // private System.Void StopGrabSpinner(VROSC.InputDevice device, VROSC.TriggerButton button)
    // Offset: 0x13A4A08
    void StopGrabSpinner(::VROSC::InputDevice* device, ::VROSC::TriggerButton button);
    // public System.Void SetRemappedValue(System.Int32 value)
    // Offset: 0x13A4AD4
    void SetRemappedValue(int value);
    // public System.Void SetSelectedIndex(System.Int32 index, System.Boolean force, System.Boolean useCallback)
    // Offset: 0x13A4688
    void SetSelectedIndex(int index, bool force, bool useCallback);
    // public System.Void SetFloatValue(System.Single value)
    // Offset: 0x13A4AFC
    void SetFloatValue(float value);
    // public System.Void Next()
    // Offset: 0x13A4BAC
    void Next();
    // private System.Void Previous()
    // Offset: 0x13A4BC0
    void Previous();
    // private System.Void SetButtonsDisabled(System.Boolean disabled)
    // Offset: 0x13A4404
    void SetButtonsDisabled(bool disabled);
    // private UnityEngine.Vector2 GetSize()
    // Offset: 0x13A3F2C
    ::UnityEngine::Vector2 GetSize();
    // private System.Void OnDrawGizmos()
    // Offset: 0x13A4C10
    void OnDrawGizmos();
    // public override System.Boolean get_InteractionStopsLaser()
    // Offset: 0x13A3EEC
    // Implemented from: VROSC.UIInteractable
    // Base method: System.Boolean UIInteractable::get_InteractionStopsLaser()
    bool get_InteractionStopsLaser();
    // public System.Void .ctor()
    // Offset: 0x13A4C70
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
    static UISpinner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UISpinner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UISpinner*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x13A4CE4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // protected override System.Void OnDisable()
    // Offset: 0x13A4490
    // Implemented from: VROSC.Interactable
    // Base method: System.Void Interactable::OnDisable()
    void OnDisable();
    // public override System.Void SetDisabled(System.Object disabler, System.Boolean shouldBeDisabled)
    // Offset: 0x13A4BD4
    // Implemented from: VROSC.Interactable
    // Base method: System.Void Interactable::SetDisabled(System.Object disabler, System.Boolean shouldBeDisabled)
    void SetDisabled(::Il2CppObject* disabler, bool shouldBeDisabled);
  }; // VROSC.UISpinner
  #pragma pack(pop)
  static check_size<sizeof(UISpinner), 216 + sizeof(::VROSC::TriggerButton)> __VROSC_UISpinnerSizeCheck;
  static_assert(sizeof(UISpinner) == 0xEC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UISpinner::get_IsGrabbingRemotely
// Il2CppName: get_IsGrabbingRemotely
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UISpinner::*)()>(&VROSC::UISpinner::get_IsGrabbingRemotely)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "get_IsGrabbingRemotely", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::set_IsGrabbingRemotely
// Il2CppName: set_IsGrabbingRemotely
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(bool)>(&VROSC::UISpinner::set_IsGrabbingRemotely)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "set_IsGrabbingRemotely", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::get_Selection
// Il2CppName: get_Selection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UISpinner::*)()>(&VROSC::UISpinner::get_Selection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "get_Selection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::set_Selection
// Il2CppName: set_Selection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(int)>(&VROSC::UISpinner::set_Selection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "set_Selection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::UISpinner::*)()>(&VROSC::UISpinner::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(float)>(&VROSC::UISpinner::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::UISpinner::*)()>(&VROSC::UISpinner::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UISpinnerData* (VROSC::UISpinner::*)()>(&VROSC::UISpinner::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)()>(&VROSC::UISpinner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)()>(&VROSC::UISpinner::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(::VROSC::MinMaxInt*, int)>(&VROSC::UISpinner::Setup)> {
  static const MethodInfo* get() {
    static auto* remapValue = &::il2cpp_utils::GetClassFromName("VROSC", "MinMaxInt")->byval_arg;
    static auto* startValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remapValue, startValue});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::ButtonWasPressed
// Il2CppName: ButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(::VROSC::ClickData*, bool)>(&VROSC::UISpinner::ButtonWasPressed)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    static auto* pressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "ButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData, pressed});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::GrabSpinnerRemotely
// Il2CppName: GrabSpinnerRemotely
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::UISpinner::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::UISpinner::GrabSpinnerRemotely)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* grabbingButton = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "GrabSpinnerRemotely", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, grabbingButton});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::StopGrabSpinnerRemotely
// Il2CppName: StopGrabSpinnerRemotely
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(::VROSC::InputDevice*)>(&VROSC::UISpinner::StopGrabSpinnerRemotely)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "StopGrabSpinnerRemotely", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::StopGrabSpinner
// Il2CppName: StopGrabSpinner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::UISpinner::StopGrabSpinner)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* button = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "StopGrabSpinner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, button});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::SetRemappedValue
// Il2CppName: SetRemappedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(int)>(&VROSC::UISpinner::SetRemappedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "SetRemappedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::SetSelectedIndex
// Il2CppName: SetSelectedIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(int, bool, bool)>(&VROSC::UISpinner::SetSelectedIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "SetSelectedIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, force, useCallback});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::SetFloatValue
// Il2CppName: SetFloatValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(float)>(&VROSC::UISpinner::SetFloatValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "SetFloatValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)()>(&VROSC::UISpinner::Next)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::Previous
// Il2CppName: Previous
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)()>(&VROSC::UISpinner::Previous)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "Previous", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::SetButtonsDisabled
// Il2CppName: SetButtonsDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(bool)>(&VROSC::UISpinner::SetButtonsDisabled)> {
  static const MethodInfo* get() {
    static auto* disabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "SetButtonsDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disabled});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::UISpinner::*)()>(&VROSC::UISpinner::GetSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)()>(&VROSC::UISpinner::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::get_InteractionStopsLaser
// Il2CppName: get_InteractionStopsLaser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UISpinner::*)()>(&VROSC::UISpinner::get_InteractionStopsLaser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "get_InteractionStopsLaser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UISpinner::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::UISpinner::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)()>(&VROSC::UISpinner::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinner::SetDisabled
// Il2CppName: SetDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinner::*)(::Il2CppObject*, bool)>(&VROSC::UISpinner::SetDisabled)> {
  static const MethodInfo* get() {
    static auto* disabler = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* shouldBeDisabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinner*), "SetDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disabler, shouldBeDisabled});
  }
};