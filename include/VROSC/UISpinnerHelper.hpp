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
  // Forward declaring type: TextSpinner
  class TextSpinner;
  // Forward declaring type: UIHelperPositioning
  class UIHelperPositioning;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: UISpinner
  class UISpinner;
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
  // Forward declaring type: UISpinnerHelper
  class UISpinnerHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UISpinnerHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISpinnerHelper*, "VROSC", "UISpinnerHelper");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UISpinnerHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class UISpinnerHelper : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::UISpinnerHelper::$GrabSpinnerRemotely$d__14
    class $GrabSpinnerRemotely$d__14;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.TextSpinner _spinner
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::TextSpinner* spinner;
    // Field size check
    static_assert(sizeof(::VROSC::TextSpinner*) == 0x8);
    // [HeaderAttribute] Offset: 0x674884
    // private TMPro.TextMeshPro _name
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshPro* name;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // [HeaderAttribute] Offset: 0x6748D0
    // private System.Single _inputHeightPerTick
    // Size: 0x4
    // Offset: 0x28
    float inputHeightPerTick;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _thumbStickInputSpeed
    // Size: 0x4
    // Offset: 0x2C
    float thumbStickInputSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _continuous
    // Size: 0x1
    // Offset: 0x30
    bool continuous;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: continuous and: visual
    char __padding4[0x7] = {};
    // [HeaderAttribute] Offset: 0x67493C
    // private UnityEngine.GameObject _visual
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* visual;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private VROSC.UIHelperPositioning _positioning
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::UIHelperPositioning* positioning;
    // Field size check
    static_assert(sizeof(::VROSC::UIHelperPositioning*) == 0x8);
    // private VROSC.InputDevice _grabbingDevice
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::InputDevice* grabbingDevice;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private System.Single _thumbstickInput
    // Size: 0x4
    // Offset: 0x50
    float thumbstickInput;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.TextSpinner _spinner
    ::VROSC::TextSpinner*& dyn__spinner();
    // Get instance field reference: private TMPro.TextMeshPro _name
    ::TMPro::TextMeshPro*& dyn__name();
    // Get instance field reference: private System.Single _inputHeightPerTick
    float& dyn__inputHeightPerTick();
    // Get instance field reference: private System.Single _thumbStickInputSpeed
    float& dyn__thumbStickInputSpeed();
    // Get instance field reference: private System.Boolean _continuous
    bool& dyn__continuous();
    // Get instance field reference: private UnityEngine.GameObject _visual
    ::UnityEngine::GameObject*& dyn__visual();
    // Get instance field reference: private VROSC.UIHelperPositioning _positioning
    ::VROSC::UIHelperPositioning*& dyn__positioning();
    // Get instance field reference: private VROSC.InputDevice _grabbingDevice
    ::VROSC::InputDevice*& dyn__grabbingDevice();
    // Get instance field reference: private System.Single _thumbstickInput
    float& dyn__thumbstickInput();
    // private System.Void Awake()
    // Offset: 0x13A4DC4
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x13A4DE4
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x13A4ED4
    void OnDisable();
    // public System.Void Grab(VROSC.UISpinner target, VROSC.InputDevice inputDevice)
    // Offset: 0x13A4FC0
    void Grab(::VROSC::UISpinner* target, ::VROSC::InputDevice* inputDevice);
    // public System.Void StopGrab(VROSC.InputDevice device)
    // Offset: 0x13A4A00
    void StopGrab(::VROSC::InputDevice* device);
    // private System.Collections.IEnumerator GrabSpinnerRemotely(VROSC.UISpinner target, VROSC.InputDevice device)
    // Offset: 0x13A5034
    ::System::Collections::IEnumerator* GrabSpinnerRemotely(::VROSC::UISpinner* target, ::VROSC::InputDevice* device);
    // private System.Void EvaluateThumbstickInput(VROSC.InputDevice device, UnityEngine.Vector2 vector)
    // Offset: 0x13A50B4
    void EvaluateThumbstickInput(::VROSC::InputDevice* device, ::UnityEngine::Vector2 vector);
    // public System.Void .ctor()
    // Offset: 0x13A5160
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UISpinnerHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UISpinnerHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UISpinnerHelper*, creationType>()));
    }
  }; // VROSC.UISpinnerHelper
  #pragma pack(pop)
  static check_size<sizeof(UISpinnerHelper), 80 + sizeof(float)> __VROSC_UISpinnerHelperSizeCheck;
  static_assert(sizeof(UISpinnerHelper) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UISpinnerHelper::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinnerHelper::*)()>(&VROSC::UISpinnerHelper::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinnerHelper*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinnerHelper::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinnerHelper::*)()>(&VROSC::UISpinnerHelper::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinnerHelper*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinnerHelper::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinnerHelper::*)()>(&VROSC::UISpinnerHelper::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinnerHelper*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinnerHelper::Grab
// Il2CppName: Grab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinnerHelper::*)(::VROSC::UISpinner*, ::VROSC::InputDevice*)>(&VROSC::UISpinnerHelper::Grab)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("VROSC", "UISpinner")->byval_arg;
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinnerHelper*), "Grab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, inputDevice});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinnerHelper::StopGrab
// Il2CppName: StopGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinnerHelper::*)(::VROSC::InputDevice*)>(&VROSC::UISpinnerHelper::StopGrab)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinnerHelper*), "StopGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinnerHelper::GrabSpinnerRemotely
// Il2CppName: GrabSpinnerRemotely
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::UISpinnerHelper::*)(::VROSC::UISpinner*, ::VROSC::InputDevice*)>(&VROSC::UISpinnerHelper::GrabSpinnerRemotely)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("VROSC", "UISpinner")->byval_arg;
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinnerHelper*), "GrabSpinnerRemotely", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, device});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinnerHelper::EvaluateThumbstickInput
// Il2CppName: EvaluateThumbstickInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UISpinnerHelper::*)(::VROSC::InputDevice*, ::UnityEngine::Vector2)>(&VROSC::UISpinnerHelper::EvaluateThumbstickInput)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UISpinnerHelper*), "EvaluateThumbstickInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, vector});
  }
};
// Writing MetadataGetter for method: VROSC::UISpinnerHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
