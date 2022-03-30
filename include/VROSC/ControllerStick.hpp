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
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ControllerStick
  class ControllerStick;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ControllerStick);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerStick*, "VROSC", "ControllerStick");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ControllerStick
  // [TokenAttribute] Offset: FFFFFFFF
  class ControllerStick : public ::UnityEngine::MonoBehaviour {
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
    // private System.Single _limits
    // Size: 0x4
    // Offset: 0x18
    float limits;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: limits and: device
    char __padding0[0x4] = {};
    // private VROSC.InputDevice _device
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::InputDevice* device;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private UnityEngine.Quaternion _startRotation
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Quaternion startRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _limits
    float& dyn__limits();
    // Get instance field reference: private VROSC.InputDevice _device
    ::VROSC::InputDevice*& dyn__device();
    // Get instance field reference: private UnityEngine.Quaternion _startRotation
    ::UnityEngine::Quaternion& dyn__startRotation();
    // private System.Void OnEnable()
    // Offset: 0x133A7A0
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x133A8B0
    void OnDisable();
    // private System.Void EvaluateThumbstickInput(VROSC.InputDevice device, UnityEngine.Vector2 vector)
    // Offset: 0x133A99C
    void EvaluateThumbstickInput(::VROSC::InputDevice* device, ::UnityEngine::Vector2 vector);
    // public System.Void .ctor()
    // Offset: 0x133AAC8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControllerStick* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ControllerStick::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControllerStick*, creationType>()));
    }
  }; // VROSC.ControllerStick
  #pragma pack(pop)
  static check_size<sizeof(ControllerStick), 40 + sizeof(::UnityEngine::Quaternion)> __VROSC_ControllerStickSizeCheck;
  static_assert(sizeof(ControllerStick) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ControllerStick::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerStick::*)()>(&VROSC::ControllerStick::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerStick*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerStick::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerStick::*)()>(&VROSC::ControllerStick::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerStick*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerStick::EvaluateThumbstickInput
// Il2CppName: EvaluateThumbstickInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerStick::*)(::VROSC::InputDevice*, ::UnityEngine::Vector2)>(&VROSC::ControllerStick::EvaluateThumbstickInput)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerStick*), "EvaluateThumbstickInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, vector});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerStick::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
