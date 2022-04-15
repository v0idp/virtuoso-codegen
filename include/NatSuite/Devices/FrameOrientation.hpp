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
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Forward declaring type: FrameOrientation
  struct FrameOrientation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::FrameOrientation, "NatSuite.Devices", "FrameOrientation");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.FrameOrientation
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocAttribute] Offset: 781AB0
  struct FrameOrientation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FrameOrientation
    constexpr FrameOrientation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DocAttribute] Offset: 0x78E7C8
    // static field const value: static public NatSuite.Devices.FrameOrientation LandscapeLeft
    static constexpr const int LandscapeLeft = 0;
    // Get static field: static public NatSuite.Devices.FrameOrientation LandscapeLeft
    static ::NatSuite::Devices::FrameOrientation _get_LandscapeLeft();
    // Set static field: static public NatSuite.Devices.FrameOrientation LandscapeLeft
    static void _set_LandscapeLeft(::NatSuite::Devices::FrameOrientation value);
    // [DocAttribute] Offset: 0x78E800
    // static field const value: static public NatSuite.Devices.FrameOrientation Portrait
    static constexpr const int Portrait = 1;
    // Get static field: static public NatSuite.Devices.FrameOrientation Portrait
    static ::NatSuite::Devices::FrameOrientation _get_Portrait();
    // Set static field: static public NatSuite.Devices.FrameOrientation Portrait
    static void _set_Portrait(::NatSuite::Devices::FrameOrientation value);
    // [DocAttribute] Offset: 0x78E838
    // static field const value: static public NatSuite.Devices.FrameOrientation LandscapeRight
    static constexpr const int LandscapeRight = 2;
    // Get static field: static public NatSuite.Devices.FrameOrientation LandscapeRight
    static ::NatSuite::Devices::FrameOrientation _get_LandscapeRight();
    // Set static field: static public NatSuite.Devices.FrameOrientation LandscapeRight
    static void _set_LandscapeRight(::NatSuite::Devices::FrameOrientation value);
    // [DocAttribute] Offset: 0x78E870
    // static field const value: static public NatSuite.Devices.FrameOrientation PortraitUpsideDown
    static constexpr const int PortraitUpsideDown = 3;
    // Get static field: static public NatSuite.Devices.FrameOrientation PortraitUpsideDown
    static ::NatSuite::Devices::FrameOrientation _get_PortraitUpsideDown();
    // Set static field: static public NatSuite.Devices.FrameOrientation PortraitUpsideDown
    static void _set_PortraitUpsideDown(::NatSuite::Devices::FrameOrientation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // NatSuite.Devices.FrameOrientation
  #pragma pack(pop)
  static check_size<sizeof(FrameOrientation), 0 + sizeof(int)> __NatSuite_Devices_FrameOrientationSizeCheck;
  static_assert(sizeof(FrameOrientation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
