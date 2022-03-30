// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Including type: OVR.OpenVR.HmdVector3_t
#include "OVR/OpenVR/HmdVector3_t.hpp"
// Including type: OVR.OpenVR.ETrackingResult
#include "OVR/OpenVR/ETrackingResult.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::TrackedDevicePose_t, "OVR.OpenVR", "TrackedDevicePose_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4E
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.TrackedDevicePose_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct TrackedDevicePose_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVR.OpenVR.HmdMatrix34_t mDeviceToAbsoluteTracking
    // Size: 0x30
    // Offset: 0x0
    ::OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::HmdMatrix34_t) == 0x30);
    // public OVR.OpenVR.HmdVector3_t vVelocity
    // Size: 0xC
    // Offset: 0x30
    ::OVR::OpenVR::HmdVector3_t vVelocity;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::HmdVector3_t) == 0xC);
    // public OVR.OpenVR.HmdVector3_t vAngularVelocity
    // Size: 0xC
    // Offset: 0x3C
    ::OVR::OpenVR::HmdVector3_t vAngularVelocity;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::HmdVector3_t) == 0xC);
    // public OVR.OpenVR.ETrackingResult eTrackingResult
    // Size: 0x14
    // Offset: 0x48
    ::OVR::OpenVR::ETrackingResult eTrackingResult;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::ETrackingResult) == 0x14);
    // public System.Boolean bPoseIsValid
    // Size: 0x1
    // Offset: 0x4C
    bool bPoseIsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean bDeviceIsConnected
    // Size: 0x1
    // Offset: 0x4D
    bool bDeviceIsConnected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: TrackedDevicePose_t
    constexpr TrackedDevicePose_t(::OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking_ = {}, ::OVR::OpenVR::HmdVector3_t vVelocity_ = {}, ::OVR::OpenVR::HmdVector3_t vAngularVelocity_ = {}, ::OVR::OpenVR::ETrackingResult eTrackingResult_ = {}, bool bPoseIsValid_ = {}, bool bDeviceIsConnected_ = {}) noexcept : mDeviceToAbsoluteTracking{mDeviceToAbsoluteTracking_}, vVelocity{vVelocity_}, vAngularVelocity{vAngularVelocity_}, eTrackingResult{eTrackingResult_}, bPoseIsValid{bPoseIsValid_}, bDeviceIsConnected{bDeviceIsConnected_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVR.OpenVR.HmdMatrix34_t mDeviceToAbsoluteTracking
    ::OVR::OpenVR::HmdMatrix34_t& dyn_mDeviceToAbsoluteTracking();
    // Get instance field reference: public OVR.OpenVR.HmdVector3_t vVelocity
    ::OVR::OpenVR::HmdVector3_t& dyn_vVelocity();
    // Get instance field reference: public OVR.OpenVR.HmdVector3_t vAngularVelocity
    ::OVR::OpenVR::HmdVector3_t& dyn_vAngularVelocity();
    // Get instance field reference: public OVR.OpenVR.ETrackingResult eTrackingResult
    ::OVR::OpenVR::ETrackingResult& dyn_eTrackingResult();
    // Get instance field reference: public System.Boolean bPoseIsValid
    bool& dyn_bPoseIsValid();
    // Get instance field reference: public System.Boolean bDeviceIsConnected
    bool& dyn_bDeviceIsConnected();
  }; // OVR.OpenVR.TrackedDevicePose_t
  #pragma pack(pop)
  static check_size<sizeof(TrackedDevicePose_t), 77 + sizeof(bool)> __OVR_OpenVR_TrackedDevicePose_tSizeCheck;
  static_assert(sizeof(TrackedDevicePose_t) == 0x4E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
