// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_ControllerMode_State_t, "OVR.OpenVR", "RenderModel_ControllerMode_State_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x1
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.RenderModel_ControllerMode_State_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderModel_ControllerMode_State_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Boolean bScrollWheelVisible
    // Size: 0x1
    // Offset: 0x0
    bool bScrollWheelVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: RenderModel_ControllerMode_State_t
    constexpr RenderModel_ControllerMode_State_t(bool bScrollWheelVisible_ = {}) noexcept : bScrollWheelVisible{bScrollWheelVisible_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return bScrollWheelVisible;
    }
    // Get instance field reference: public System.Boolean bScrollWheelVisible
    bool& dyn_bScrollWheelVisible();
  }; // OVR.OpenVR.RenderModel_ControllerMode_State_t
  #pragma pack(pop)
  static check_size<sizeof(RenderModel_ControllerMode_State_t), 0 + sizeof(bool)> __OVR_OpenVR_RenderModel_ControllerMode_State_tSizeCheck;
  static_assert(sizeof(RenderModel_ControllerMode_State_t) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
