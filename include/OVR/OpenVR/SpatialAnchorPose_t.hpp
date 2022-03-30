// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: SpatialAnchorPose_t
  struct SpatialAnchorPose_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::SpatialAnchorPose_t, "OVR.OpenVR", "SpatialAnchorPose_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.SpatialAnchorPose_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct SpatialAnchorPose_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVR.OpenVR.HmdMatrix34_t mAnchorToAbsoluteTracking
    // Size: 0x30
    // Offset: 0x0
    ::OVR::OpenVR::HmdMatrix34_t mAnchorToAbsoluteTracking;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::HmdMatrix34_t) == 0x30);
    public:
    // Creating value type constructor for type: SpatialAnchorPose_t
    constexpr SpatialAnchorPose_t(::OVR::OpenVR::HmdMatrix34_t mAnchorToAbsoluteTracking_ = {}) noexcept : mAnchorToAbsoluteTracking{mAnchorToAbsoluteTracking_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::OVR::OpenVR::HmdMatrix34_t
    constexpr operator ::OVR::OpenVR::HmdMatrix34_t() const noexcept {
      return mAnchorToAbsoluteTracking;
    }
    // Get instance field reference: public OVR.OpenVR.HmdMatrix34_t mAnchorToAbsoluteTracking
    ::OVR::OpenVR::HmdMatrix34_t& dyn_mAnchorToAbsoluteTracking();
  }; // OVR.OpenVR.SpatialAnchorPose_t
  #pragma pack(pop)
  static check_size<sizeof(SpatialAnchorPose_t), 0 + sizeof(::OVR::OpenVR::HmdMatrix34_t)> __OVR_OpenVR_SpatialAnchorPose_tSizeCheck;
  static_assert(sizeof(SpatialAnchorPose_t) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
