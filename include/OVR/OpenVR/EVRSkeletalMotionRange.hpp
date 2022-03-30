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
  // Forward declaring type: EVRSkeletalMotionRange
  struct EVRSkeletalMotionRange;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRSkeletalMotionRange, "OVR.OpenVR", "EVRSkeletalMotionRange");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRSkeletalMotionRange
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRSkeletalMotionRange/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: EVRSkeletalMotionRange
    constexpr EVRSkeletalMotionRange(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRSkeletalMotionRange WithController
    static constexpr const int WithController = 0;
    // Get static field: static public OVR.OpenVR.EVRSkeletalMotionRange WithController
    static ::OVR::OpenVR::EVRSkeletalMotionRange _get_WithController();
    // Set static field: static public OVR.OpenVR.EVRSkeletalMotionRange WithController
    static void _set_WithController(::OVR::OpenVR::EVRSkeletalMotionRange value);
    // static field const value: static public OVR.OpenVR.EVRSkeletalMotionRange WithoutController
    static constexpr const int WithoutController = 1;
    // Get static field: static public OVR.OpenVR.EVRSkeletalMotionRange WithoutController
    static ::OVR::OpenVR::EVRSkeletalMotionRange _get_WithoutController();
    // Set static field: static public OVR.OpenVR.EVRSkeletalMotionRange WithoutController
    static void _set_WithoutController(::OVR::OpenVR::EVRSkeletalMotionRange value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRSkeletalMotionRange
  #pragma pack(pop)
  static check_size<sizeof(EVRSkeletalMotionRange), 16 + sizeof(int)> __OVR_OpenVR_EVRSkeletalMotionRangeSizeCheck;
  static_assert(sizeof(EVRSkeletalMotionRange) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
