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
  // Forward declaring type: EDualAnalogWhich
  struct EDualAnalogWhich;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EDualAnalogWhich, "OVR.OpenVR", "EDualAnalogWhich");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EDualAnalogWhich
  // [TokenAttribute] Offset: FFFFFFFF
  struct EDualAnalogWhich/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EDualAnalogWhich
    constexpr EDualAnalogWhich(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EDualAnalogWhich k_EDualAnalog_Left
    static constexpr const int k_EDualAnalog_Left = 0;
    // Get static field: static public OVR.OpenVR.EDualAnalogWhich k_EDualAnalog_Left
    static ::OVR::OpenVR::EDualAnalogWhich _get_k_EDualAnalog_Left();
    // Set static field: static public OVR.OpenVR.EDualAnalogWhich k_EDualAnalog_Left
    static void _set_k_EDualAnalog_Left(::OVR::OpenVR::EDualAnalogWhich value);
    // static field const value: static public OVR.OpenVR.EDualAnalogWhich k_EDualAnalog_Right
    static constexpr const int k_EDualAnalog_Right = 1;
    // Get static field: static public OVR.OpenVR.EDualAnalogWhich k_EDualAnalog_Right
    static ::OVR::OpenVR::EDualAnalogWhich _get_k_EDualAnalog_Right();
    // Set static field: static public OVR.OpenVR.EDualAnalogWhich k_EDualAnalog_Right
    static void _set_k_EDualAnalog_Right(::OVR::OpenVR::EDualAnalogWhich value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // OVR.OpenVR.EDualAnalogWhich
  #pragma pack(pop)
  static check_size<sizeof(EDualAnalogWhich), 0 + sizeof(int)> __OVR_OpenVR_EDualAnalogWhichSizeCheck;
  static_assert(sizeof(EDualAnalogWhich) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
