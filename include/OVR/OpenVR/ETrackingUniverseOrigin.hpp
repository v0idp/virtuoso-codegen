// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackingUniverseOrigin, "OVR.OpenVR", "ETrackingUniverseOrigin");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.ETrackingUniverseOrigin
  // [TokenAttribute] Offset: FFFFFFFF
  struct ETrackingUniverseOrigin/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x10
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ETrackingUniverseOrigin
    constexpr ETrackingUniverseOrigin(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseSeated
    static constexpr const int TrackingUniverseSeated = 0;
    // Get static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseSeated
    static ::OVR::OpenVR::ETrackingUniverseOrigin _get_TrackingUniverseSeated();
    // Set static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseSeated
    static void _set_TrackingUniverseSeated(::OVR::OpenVR::ETrackingUniverseOrigin value);
    // static field const value: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseStanding
    static constexpr const int TrackingUniverseStanding = 1;
    // Get static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseStanding
    static ::OVR::OpenVR::ETrackingUniverseOrigin _get_TrackingUniverseStanding();
    // Set static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseStanding
    static void _set_TrackingUniverseStanding(::OVR::OpenVR::ETrackingUniverseOrigin value);
    // static field const value: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static constexpr const int TrackingUniverseRawAndUncalibrated = 2;
    // Get static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static ::OVR::OpenVR::ETrackingUniverseOrigin _get_TrackingUniverseRawAndUncalibrated();
    // Set static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static void _set_TrackingUniverseRawAndUncalibrated(::OVR::OpenVR::ETrackingUniverseOrigin value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.ETrackingUniverseOrigin
  #pragma pack(pop)
  static check_size<sizeof(ETrackingUniverseOrigin), 16 + sizeof(int)> __OVR_OpenVR_ETrackingUniverseOriginSizeCheck;
  static_assert(sizeof(ETrackingUniverseOrigin) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
