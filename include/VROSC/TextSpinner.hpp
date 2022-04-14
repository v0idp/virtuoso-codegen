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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TextSpinnerItem
  class TextSpinnerItem;
  // Forward declaring type: MinMaxFloat
  class MinMaxFloat;
  // Forward declaring type: SimpleHaptic
  class SimpleHaptic;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TextSpinner
  class TextSpinner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TextSpinner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TextSpinner*, "VROSC", "TextSpinner");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TextSpinner
  // [TokenAttribute] Offset: FFFFFFFF
  class TextSpinner : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Int32 <SelectedValue>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int SelectedValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxDisplay
    // Size: 0x4
    // Offset: 0x1C
    int maxDisplay;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private VROSC.TextSpinnerItem _valuePrefab
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::TextSpinnerItem* valuePrefab;
    // Field size check
    static_assert(sizeof(::VROSC::TextSpinnerItem*) == 0x8);
    // private VROSC.MinMaxFloat _rotationRange
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::MinMaxFloat* rotationRange;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxFloat*) == 0x8);
    // private System.Single _maxVisibleAngle
    // Size: 0x4
    // Offset: 0x30
    float maxVisibleAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _valueDistance
    // Size: 0x4
    // Offset: 0x34
    float valueDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _valueTickAngle
    // Size: 0x4
    // Offset: 0x38
    float valueTickAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: valueTickAngle and: rotator
    char __padding6[0x4] = {};
    // private UnityEngine.Transform _rotator
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* rotator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.AnimationCurve _rotationCurve
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AnimationCurve* rotationCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _scaleCurve
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AnimationCurve* scaleCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [HeaderAttribute] Offset: 0x78A4AC
    // private VROSC.SimpleHaptic _hapticFeedBack
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::SimpleHaptic* hapticFeedBack;
    // Field size check
    static_assert(sizeof(::VROSC::SimpleHaptic*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.TextSpinnerItem> _textLines
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::VROSC::TextSpinnerItem*>* textLines;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::TextSpinnerItem*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> _textValues
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::StringW>* textValues;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private VROSC.InputDevice _inputDevice
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::InputDevice* inputDevice;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 <SelectedValue>k__BackingField
    [[deprecated]] int& dyn_$SelectedValue$k__BackingField();
    // Get instance field reference: private System.Int32 _maxDisplay
    [[deprecated]] int& dyn__maxDisplay();
    // Get instance field reference: private VROSC.TextSpinnerItem _valuePrefab
    [[deprecated]] ::VROSC::TextSpinnerItem*& dyn__valuePrefab();
    // Get instance field reference: private VROSC.MinMaxFloat _rotationRange
    [[deprecated]] ::VROSC::MinMaxFloat*& dyn__rotationRange();
    // Get instance field reference: private System.Single _maxVisibleAngle
    [[deprecated]] float& dyn__maxVisibleAngle();
    // Get instance field reference: private System.Single _valueDistance
    [[deprecated]] float& dyn__valueDistance();
    // Get instance field reference: private System.Single _valueTickAngle
    [[deprecated]] float& dyn__valueTickAngle();
    // Get instance field reference: private UnityEngine.Transform _rotator
    [[deprecated]] ::UnityEngine::Transform*& dyn__rotator();
    // Get instance field reference: private UnityEngine.AnimationCurve _rotationCurve
    [[deprecated]] ::UnityEngine::AnimationCurve*& dyn__rotationCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _scaleCurve
    [[deprecated]] ::UnityEngine::AnimationCurve*& dyn__scaleCurve();
    // Get instance field reference: private VROSC.SimpleHaptic _hapticFeedBack
    [[deprecated]] ::VROSC::SimpleHaptic*& dyn__hapticFeedBack();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.TextSpinnerItem> _textLines
    [[deprecated]] ::System::Collections::Generic::List_1<::VROSC::TextSpinnerItem*>*& dyn__textLines();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> _textValues
    [[deprecated]] ::System::Collections::Generic::List_1<::StringW>*& dyn__textValues();
    // Get instance field reference: private VROSC.InputDevice _inputDevice
    [[deprecated]] ::VROSC::InputDevice*& dyn__inputDevice();
    // public System.Int32 get_SelectedValue()
    // Offset: 0xA2500C
    int get_SelectedValue();
    // private System.Void set_SelectedValue(System.Int32 value)
    // Offset: 0xA25004
    void set_SelectedValue(int value);
    // public System.Void SetValues(System.Collections.Generic.List`1<System.String> texts, VROSC.InputDevice inputDevice)
    // Offset: 0xA25014
    void SetValues(::System::Collections::Generic::List_1<::StringW>* texts, ::VROSC::InputDevice* inputDevice);
    // private System.Void ClearTextLines()
    // Offset: 0xA25194
    void ClearTextLines();
    // public System.Void UpdateValues(System.Single currentValue)
    // Offset: 0xA25458
    void UpdateValues(float currentValue);
    // private System.Void SetSelectedValue(System.Int32 newSelectedValue)
    // Offset: 0xA258E8
    void SetSelectedValue(int newSelectedValue);
    // public System.Void .ctor()
    // Offset: 0xA259A0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextSpinner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TextSpinner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextSpinner*, creationType>()));
    }
  }; // VROSC.TextSpinner
  #pragma pack(pop)
  static check_size<sizeof(TextSpinner), 112 + sizeof(::VROSC::InputDevice*)> __VROSC_TextSpinnerSizeCheck;
  static_assert(sizeof(TextSpinner) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TextSpinner::get_SelectedValue
// Il2CppName: get_SelectedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::TextSpinner::*)()>(&VROSC::TextSpinner::get_SelectedValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TextSpinner*), "get_SelectedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TextSpinner::set_SelectedValue
// Il2CppName: set_SelectedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TextSpinner::*)(int)>(&VROSC::TextSpinner::set_SelectedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TextSpinner*), "set_SelectedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TextSpinner::SetValues
// Il2CppName: SetValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TextSpinner::*)(::System::Collections::Generic::List_1<::StringW>*, ::VROSC::InputDevice*)>(&VROSC::TextSpinner::SetValues)> {
  static const MethodInfo* get() {
    static auto* texts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TextSpinner*), "SetValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texts, inputDevice});
  }
};
// Writing MetadataGetter for method: VROSC::TextSpinner::ClearTextLines
// Il2CppName: ClearTextLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TextSpinner::*)()>(&VROSC::TextSpinner::ClearTextLines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TextSpinner*), "ClearTextLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TextSpinner::UpdateValues
// Il2CppName: UpdateValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TextSpinner::*)(float)>(&VROSC::TextSpinner::UpdateValues)> {
  static const MethodInfo* get() {
    static auto* currentValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TextSpinner*), "UpdateValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentValue});
  }
};
// Writing MetadataGetter for method: VROSC::TextSpinner::SetSelectedValue
// Il2CppName: SetSelectedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TextSpinner::*)(int)>(&VROSC::TextSpinner::SetSelectedValue)> {
  static const MethodInfo* get() {
    static auto* newSelectedValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TextSpinner*), "SetSelectedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newSelectedValue});
  }
};
// Writing MetadataGetter for method: VROSC::TextSpinner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
