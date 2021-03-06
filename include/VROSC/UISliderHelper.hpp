// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UISliderBase
#include "VROSC/UISliderBase.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SimpleHaptic
  class SimpleHaptic;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: UISlider
  class UISlider;
  // Forward declaring type: TooltipData
  class TooltipData;
  // Skipping declaration: TriggerButton because it is already included!
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: UISliderHelper
  class UISliderHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UISliderHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISliderHelper*, "VROSC", "UISliderHelper");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x148
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UISliderHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class UISliderHelper : public ::VROSC::UISliderBase {
    public:
    // Writing base type padding for base size: 0xBC to desired offset: 0xC0
    char ___base_padding[0x4] = {};
    // Nested type: ::VROSC::UISliderHelper::$MoveOutObject$d__27
    class $MoveOutObject$d__27;
    // Nested type: ::VROSC::UISliderHelper::$GrabSliderRemotely$d__28
    class $GrabSliderRemotely$d__28;
    public:
    // [HeaderAttribute] Offset: 0x78A9DC
    // private TMPro.TextMeshPro _name
    // Size: 0x8
    // Offset: 0xC0
    ::TMPro::TextMeshPro* name;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private TMPro.TextMeshPro _value
    // Size: 0x8
    // Offset: 0xC8
    ::TMPro::TextMeshPro* value;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private TMPro.TextMeshPro _valueMin
    // Size: 0x8
    // Offset: 0xD0
    ::TMPro::TextMeshPro* valueMin;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private TMPro.TextMeshPro _valueMax
    // Size: 0x8
    // Offset: 0xD8
    ::TMPro::TextMeshPro* valueMax;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // [HeaderAttribute] Offset: 0x78AA58
    // private System.Single _directionOffset
    // Size: 0x4
    // Offset: 0xE0
    float directionOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _verticalOffset
    // Size: 0x4
    // Offset: 0xE4
    float verticalOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _offsetVisually
    // Size: 0x1
    // Offset: 0xE8
    bool offsetVisually;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _moveTowardsFace
    // Size: 0x1
    // Offset: 0xE9
    bool moveTowardsFace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: moveTowardsFace and: lookAtCamera
    char __padding7[0x2] = {};
    // [RangeAttribute] Offset: 0x78AAD4
    // private System.Single _lookAtCamera
    // Size: 0x4
    // Offset: 0xEC
    float lookAtCamera;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minDistance
    // Size: 0x4
    // Offset: 0xF0
    float minDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: minDistance and: visual
    char __padding9[0x4] = {};
    // [HeaderAttribute] Offset: 0x78AB24
    // private UnityEngine.GameObject _visual
    // Size: 0x8
    // Offset: 0xF8
    ::UnityEngine::GameObject* visual;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Transform _targetBone
    // Size: 0x8
    // Offset: 0x100
    ::UnityEngine::Transform* targetBone;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [HeaderAttribute] Offset: 0x78AB80
    // private System.Single _moveDuration
    // Size: 0x4
    // Offset: 0x108
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: moveDuration and: moveCurve
    char __padding12[0x4] = {};
    // private UnityEngine.AnimationCurve _moveCurve
    // Size: 0x8
    // Offset: 0x110
    ::UnityEngine::AnimationCurve* moveCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [HeaderAttribute] Offset: 0x78ABDC
    // private VROSC.SimpleHaptic _hapticFeedBack
    // Size: 0x8
    // Offset: 0x118
    ::VROSC::SimpleHaptic* hapticFeedBack;
    // Field size check
    static_assert(sizeof(::VROSC::SimpleHaptic*) == 0x8);
    // private UnityEngine.Vector2 _size
    // Size: 0x8
    // Offset: 0x120
    ::UnityEngine::Vector2 size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private VROSC.InputDevice _grabbingDevice
    // Size: 0x8
    // Offset: 0x128
    ::VROSC::InputDevice* grabbingDevice;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private System.Single _currentValue
    // Size: 0x4
    // Offset: 0x130
    float currentValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _ticks
    // Size: 0x4
    // Offset: 0x134
    int ticks;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private VROSC.UISlider _targetSlider
    // Size: 0x8
    // Offset: 0x138
    ::VROSC::UISlider* targetSlider;
    // Field size check
    static_assert(sizeof(::VROSC::UISlider*) == 0x8);
    // private VROSC.TooltipData _toggleIntegerMode
    // Size: 0x8
    // Offset: 0x140
    ::VROSC::TooltipData* toggleIntegerMode;
    // Field size check
    static_assert(sizeof(::VROSC::TooltipData*) == 0x8);
    public:
    // Get instance field reference: private TMPro.TextMeshPro _name
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__name();
    // Get instance field reference: private TMPro.TextMeshPro _value
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__value();
    // Get instance field reference: private TMPro.TextMeshPro _valueMin
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__valueMin();
    // Get instance field reference: private TMPro.TextMeshPro _valueMax
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__valueMax();
    // Get instance field reference: private System.Single _directionOffset
    [[deprecated("Use field access instead!")]] float& dyn__directionOffset();
    // Get instance field reference: private System.Single _verticalOffset
    [[deprecated("Use field access instead!")]] float& dyn__verticalOffset();
    // Get instance field reference: private System.Boolean _offsetVisually
    [[deprecated("Use field access instead!")]] bool& dyn__offsetVisually();
    // Get instance field reference: private System.Boolean _moveTowardsFace
    [[deprecated("Use field access instead!")]] bool& dyn__moveTowardsFace();
    // Get instance field reference: private System.Single _lookAtCamera
    [[deprecated("Use field access instead!")]] float& dyn__lookAtCamera();
    // Get instance field reference: private System.Single _minDistance
    [[deprecated("Use field access instead!")]] float& dyn__minDistance();
    // Get instance field reference: private UnityEngine.GameObject _visual
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__visual();
    // Get instance field reference: private UnityEngine.Transform _targetBone
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__targetBone();
    // Get instance field reference: private System.Single _moveDuration
    [[deprecated("Use field access instead!")]] float& dyn__moveDuration();
    // Get instance field reference: private UnityEngine.AnimationCurve _moveCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__moveCurve();
    // Get instance field reference: private VROSC.SimpleHaptic _hapticFeedBack
    [[deprecated("Use field access instead!")]] ::VROSC::SimpleHaptic*& dyn__hapticFeedBack();
    // Get instance field reference: private UnityEngine.Vector2 _size
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__size();
    // Get instance field reference: private VROSC.InputDevice _grabbingDevice
    [[deprecated("Use field access instead!")]] ::VROSC::InputDevice*& dyn__grabbingDevice();
    // Get instance field reference: private System.Single _currentValue
    [[deprecated("Use field access instead!")]] float& dyn__currentValue();
    // Get instance field reference: private System.Int32 _ticks
    [[deprecated("Use field access instead!")]] int& dyn__ticks();
    // Get instance field reference: private VROSC.UISlider _targetSlider
    [[deprecated("Use field access instead!")]] ::VROSC::UISlider*& dyn__targetSlider();
    // Get instance field reference: private VROSC.TooltipData _toggleIntegerMode
    [[deprecated("Use field access instead!")]] ::VROSC::TooltipData*& dyn__toggleIntegerMode();
    // private System.Void ToggleIntegerMode(VROSC.InputDevice device, VROSC.TriggerButton button)
    // Offset: 0x191774C
    void ToggleIntegerMode(::VROSC::InputDevice* device, ::VROSC::TriggerButton button);
    // public System.Void Grab(VROSC.UISlider target, VROSC.InputDevice inputDevice, System.Boolean showVisualPopout)
    // Offset: 0x19178B0
    void Grab(::VROSC::UISlider* target, ::VROSC::InputDevice* inputDevice, bool showVisualPopout);
    // public System.Void StopGrab(VROSC.InputDevice device)
    // Offset: 0x1916A1C
    void StopGrab(::VROSC::InputDevice* device);
    // private System.Collections.IEnumerator MoveOutObject(VROSC.UISlider target, UnityEngine.Vector3 endPosition)
    // Offset: 0x1917AC0
    ::System::Collections::IEnumerator* MoveOutObject(::VROSC::UISlider* target, ::UnityEngine::Vector3 endPosition);
    // private System.Collections.IEnumerator GrabSliderRemotely(VROSC.UISlider target, VROSC.InputDevice device, System.Boolean showVisualPopout)
    // Offset: 0x1917A2C
    ::System::Collections::IEnumerator* GrabSliderRemotely(::VROSC::UISlider* target, ::VROSC::InputDevice* device, bool showVisualPopout);
    // private System.Void PlaceTargetBone(VROSC.UISlider target)
    // Offset: 0x1917B5C
    void PlaceTargetBone(::VROSC::UISlider* target);
    // public System.Void .ctor()
    // Offset: 0x1917D9C
    // Implemented from: VROSC.UISliderBase
    // Base method: System.Void UISliderBase::.ctor()
    // Base method: System.Void UIInteractable::.ctor()
    // Base method: System.Void Clickable::.ctor()
    // Base method: System.Void Interactable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UISliderHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UISliderHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UISliderHelper*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x1917544
    // Implemented from: VROSC.UISliderBase
    // Base method: System.Void UISliderBase::Awake()
    void Awake();
    // protected override System.Void OnEnable()
    // Offset: 0x1917564
    // Implemented from: VROSC.UISliderBase
    // Base method: System.Void UISliderBase::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1917658
    // Implemented from: VROSC.UISliderBase
    // Base method: System.Void UISliderBase::OnDisable()
    void OnDisable();
    // protected override UnityEngine.Vector2 GetSize()
    // Offset: 0x1917C7C
    // Implemented from: VROSC.UISliderBase
    // Base method: UnityEngine.Vector2 UISliderBase::GetSize()
    ::UnityEngine::Vector2 GetSize();
    // public override System.Void SetValue(System.Single value, System.Boolean force, System.Boolean useCallback)
    // Offset: 0x1917C88
    // Implemented from: VROSC.UISliderBase
    // Base method: System.Void UISliderBase::SetValue(System.Single value, System.Boolean force, System.Boolean useCallback)
    void SetValue(float value, bool force, bool useCallback);
  }; // VROSC.UISliderHelper
  #pragma pack(pop)
  static check_size<sizeof(UISliderHelper), 320 + sizeof(::VROSC::TooltipData*)> __VROSC_UISliderHelperSizeCheck;
  static_assert(sizeof(UISliderHelper) == 0x148);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UISliderHelper::ToggleIntegerMode
// Il2CppName: ToggleIntegerMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderHelper::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::UISliderHelper::ToggleIntegerMode)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* button = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderHelper*), "ToggleIntegerMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, button});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderHelper::Grab
// Il2CppName: Grab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderHelper::*)(::VROSC::UISlider*, ::VROSC::InputDevice*, bool)>(&VROSC::UISliderHelper::Grab)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("VROSC", "UISlider")->byval_arg;
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* showVisualPopout = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderHelper*), "Grab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, inputDevice, showVisualPopout});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderHelper::StopGrab
// Il2CppName: StopGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderHelper::*)(::VROSC::InputDevice*)>(&VROSC::UISliderHelper::StopGrab)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderHelper*), "StopGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderHelper::MoveOutObject
// Il2CppName: MoveOutObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::UISliderHelper::*)(::VROSC::UISlider*, ::UnityEngine::Vector3)>(&VROSC::UISliderHelper::MoveOutObject)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("VROSC", "UISlider")->byval_arg;
    static auto* endPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderHelper*), "MoveOutObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endPosition});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderHelper::GrabSliderRemotely
// Il2CppName: GrabSliderRemotely
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::UISliderHelper::*)(::VROSC::UISlider*, ::VROSC::InputDevice*, bool)>(&VROSC::UISliderHelper::GrabSliderRemotely)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("VROSC", "UISlider")->byval_arg;
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* showVisualPopout = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderHelper*), "GrabSliderRemotely", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, device, showVisualPopout});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderHelper::PlaceTargetBone
// Il2CppName: PlaceTargetBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderHelper::*)(::VROSC::UISlider*)>(&VROSC::UISliderHelper::PlaceTargetBone)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("VROSC", "UISlider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderHelper*), "PlaceTargetBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UISliderHelper::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderHelper::*)()>(&VROSC::UISliderHelper::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderHelper*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderHelper::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderHelper::*)()>(&VROSC::UISliderHelper::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderHelper*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderHelper::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderHelper::*)()>(&VROSC::UISliderHelper::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderHelper*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderHelper::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (VROSC::UISliderHelper::*)()>(&VROSC::UISliderHelper::GetSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderHelper*), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISliderHelper::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISliderHelper::*)(float, bool, bool)>(&VROSC::UISliderHelper::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISliderHelper*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, force, useCallback});
  }
};
