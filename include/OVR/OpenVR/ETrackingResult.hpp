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
  // Forward declaring type: ETrackingResult
  struct ETrackingResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackingResult, "OVR.OpenVR", "ETrackingResult");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.ETrackingResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct ETrackingResult/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: ETrackingResult
    constexpr ETrackingResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.ETrackingResult Uninitialized
    static constexpr const int Uninitialized = 1;
    // Get static field: static public OVR.OpenVR.ETrackingResult Uninitialized
    static ::OVR::OpenVR::ETrackingResult _get_Uninitialized();
    // Set static field: static public OVR.OpenVR.ETrackingResult Uninitialized
    static void _set_Uninitialized(::OVR::OpenVR::ETrackingResult value);
    // static field const value: static public OVR.OpenVR.ETrackingResult Calibrating_InProgress
    static constexpr const int Calibrating_InProgress = 100;
    // Get static field: static public OVR.OpenVR.ETrackingResult Calibrating_InProgress
    static ::OVR::OpenVR::ETrackingResult _get_Calibrating_InProgress();
    // Set static field: static public OVR.OpenVR.ETrackingResult Calibrating_InProgress
    static void _set_Calibrating_InProgress(::OVR::OpenVR::ETrackingResult value);
    // static field const value: static public OVR.OpenVR.ETrackingResult Calibrating_OutOfRange
    static constexpr const int Calibrating_OutOfRange = 101;
    // Get static field: static public OVR.OpenVR.ETrackingResult Calibrating_OutOfRange
    static ::OVR::OpenVR::ETrackingResult _get_Calibrating_OutOfRange();
    // Set static field: static public OVR.OpenVR.ETrackingResult Calibrating_OutOfRange
    static void _set_Calibrating_OutOfRange(::OVR::OpenVR::ETrackingResult value);
    // static field const value: static public OVR.OpenVR.ETrackingResult Running_OK
    static constexpr const int Running_OK = 200;
    // Get static field: static public OVR.OpenVR.ETrackingResult Running_OK
    static ::OVR::OpenVR::ETrackingResult _get_Running_OK();
    // Set static field: static public OVR.OpenVR.ETrackingResult Running_OK
    static void _set_Running_OK(::OVR::OpenVR::ETrackingResult value);
    // static field const value: static public OVR.OpenVR.ETrackingResult Running_OutOfRange
    static constexpr const int Running_OutOfRange = 201;
    // Get static field: static public OVR.OpenVR.ETrackingResult Running_OutOfRange
    static ::OVR::OpenVR::ETrackingResult _get_Running_OutOfRange();
    // Set static field: static public OVR.OpenVR.ETrackingResult Running_OutOfRange
    static void _set_Running_OutOfRange(::OVR::OpenVR::ETrackingResult value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.ETrackingResult
  #pragma pack(pop)
  static check_size<sizeof(ETrackingResult), 16 + sizeof(int)> __OVR_OpenVR_ETrackingResultSizeCheck;
  static_assert(sizeof(ETrackingResult) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
