// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.PointingLaser
#include "VROSC/PointingLaser.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Ray
  struct Ray;
}
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: UIInputHandHovering
  class UIInputHandHovering;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TriggerButton
  struct TriggerButton;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: Grabable
  class Grabable;
  // Forward declaring type: Clickable
  class Clickable;
  // Forward declaring type: InputSettings
  class InputSettings;
}
// Completed forward declares
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Forward declaring type: UIInputHand
  class UIInputHand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::UIInputHand);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIInputHand*, "VROSC.UI", "UIInputHand");
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.UIInputHand
  // [TokenAttribute] Offset: FFFFFFFF
  class UIInputHand : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.Transform _rayPoint
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* rayPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private VROSC.UI.UIInputHandHovering _hovering
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UI::UIInputHandHovering* hovering;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UIInputHandHovering*) == 0x8);
    // private VROSC.PointingLaser _pointingLaser
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::PointingLaser* pointingLaser;
    // Field size check
    static_assert(sizeof(::VROSC::PointingLaser*) == 0x8);
    // private VROSC.InputDevice _device
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::InputDevice* device;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private VROSC.Grabable _currentlyGrabbing
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::Grabable* currentlyGrabbing;
    // Field size check
    static_assert(sizeof(::VROSC::Grabable*) == 0x8);
    // private VROSC.Clickable _currentlyPressing
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::Clickable* currentlyPressing;
    // Field size check
    static_assert(sizeof(::VROSC::Clickable*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _rayPoint
    ::UnityEngine::Transform*& dyn__rayPoint();
    // Get instance field reference: private VROSC.UI.UIInputHandHovering _hovering
    ::VROSC::UI::UIInputHandHovering*& dyn__hovering();
    // Get instance field reference: private VROSC.PointingLaser _pointingLaser
    ::VROSC::PointingLaser*& dyn__pointingLaser();
    // Get instance field reference: private VROSC.InputDevice _device
    ::VROSC::InputDevice*& dyn__device();
    // Get instance field reference: private VROSC.Grabable _currentlyGrabbing
    ::VROSC::Grabable*& dyn__currentlyGrabbing();
    // Get instance field reference: private VROSC.Clickable _currentlyPressing
    ::VROSC::Clickable*& dyn__currentlyPressing();
    // public VROSC.PointingLaser get_PointingLaser()
    // Offset: 0x139D0E8
    ::VROSC::PointingLaser* get_PointingLaser();
    // public UnityEngine.Ray get_Ray()
    // Offset: 0x139D0F0
    ::UnityEngine::Ray get_Ray();
    // public UnityEngine.Transform get_RayStartTransform()
    // Offset: 0x139D178
    ::UnityEngine::Transform* get_RayStartTransform();
    // public System.Boolean get_LaserIsHovering()
    // Offset: 0x139D180
    bool get_LaserIsHovering();
    // public System.Void Setup(VROSC.InputSettings inputSettings, VROSC.InputDevice inputDevice)
    // Offset: 0x139D19C
    void Setup(::VROSC::InputSettings* inputSettings, ::VROSC::InputDevice* inputDevice);
    // private System.Void OnDestroy()
    // Offset: 0x139D458
    void OnDestroy();
    // private System.Void PointingDisabledChanged(System.Boolean disabled, VROSC.PointingLaser/VROSC.DisablingReason reason)
    // Offset: 0x139D5B0
    void PointingDisabledChanged(bool disabled, ::VROSC::PointingLaser::DisablingReason reason);
    // System.Void SetLaserDimmedByMallets(System.Boolean dimLaser)
    // Offset: 0x139D60C
    void SetLaserDimmedByMallets(bool dimLaser);
    // private System.Void ButtonBegin(VROSC.InputDevice device, VROSC.TriggerButton button)
    // Offset: 0x139D684
    void ButtonBegin(::VROSC::InputDevice* device, ::VROSC::TriggerButton button);
    // private System.Void ButtonEnd(VROSC.InputDevice device, VROSC.TriggerButton button)
    // Offset: 0x139DA54
    void ButtonEnd(::VROSC::InputDevice* device, ::VROSC::TriggerButton button);
    // private System.Void LateUpdate()
    // Offset: 0x139DCE8
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x139DDB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIInputHand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::UIInputHand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIInputHand*, creationType>()));
    }
  }; // VROSC.UI.UIInputHand
  #pragma pack(pop)
  static check_size<sizeof(UIInputHand), 64 + sizeof(::VROSC::Clickable*)> __VROSC_UI_UIInputHandSizeCheck;
  static_assert(sizeof(UIInputHand) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::get_PointingLaser
// Il2CppName: get_PointingLaser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PointingLaser* (VROSC::UI::UIInputHand::*)()>(&VROSC::UI::UIInputHand::get_PointingLaser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHand*), "get_PointingLaser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::get_Ray
// Il2CppName: get_Ray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ray (VROSC::UI::UIInputHand::*)()>(&VROSC::UI::UIInputHand::get_Ray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHand*), "get_Ray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::get_RayStartTransform
// Il2CppName: get_RayStartTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (VROSC::UI::UIInputHand::*)()>(&VROSC::UI::UIInputHand::get_RayStartTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHand*), "get_RayStartTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::get_LaserIsHovering
// Il2CppName: get_LaserIsHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UI::UIInputHand::*)()>(&VROSC::UI::UIInputHand::get_LaserIsHovering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHand*), "get_LaserIsHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHand::*)(::VROSC::InputSettings*, ::VROSC::InputDevice*)>(&VROSC::UI::UIInputHand::Setup)> {
  static const MethodInfo* get() {
    static auto* inputSettings = &::il2cpp_utils::GetClassFromName("VROSC", "InputSettings")->byval_arg;
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHand*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputSettings, inputDevice});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHand::*)()>(&VROSC::UI::UIInputHand::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHand*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::PointingDisabledChanged
// Il2CppName: PointingDisabledChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHand::*)(bool, ::VROSC::PointingLaser::DisablingReason)>(&VROSC::UI::UIInputHand::PointingDisabledChanged)> {
  static const MethodInfo* get() {
    static auto* disabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* reason = &::il2cpp_utils::GetClassFromName("VROSC", "PointingLaser/DisablingReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHand*), "PointingDisabledChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disabled, reason});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::SetLaserDimmedByMallets
// Il2CppName: SetLaserDimmedByMallets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHand::*)(bool)>(&VROSC::UI::UIInputHand::SetLaserDimmedByMallets)> {
  static const MethodInfo* get() {
    static auto* dimLaser = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHand*), "SetLaserDimmedByMallets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dimLaser});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::ButtonBegin
// Il2CppName: ButtonBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHand::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::UI::UIInputHand::ButtonBegin)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* button = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHand*), "ButtonBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, button});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::ButtonEnd
// Il2CppName: ButtonEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHand::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::UI::UIInputHand::ButtonEnd)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* button = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHand*), "ButtonEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, button});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHand::*)()>(&VROSC::UI::UIInputHand::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHand*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
