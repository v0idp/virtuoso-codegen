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
  // Forward declaring type: EVRApplicationType
  struct EVRApplicationType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRApplicationType, "OVR.OpenVR", "EVRApplicationType");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRApplicationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRApplicationType/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: EVRApplicationType
    constexpr EVRApplicationType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRApplicationType VRApplication_Other
    static constexpr const int VRApplication_Other = 0;
    // Get static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Other
    static ::OVR::OpenVR::EVRApplicationType _get_VRApplication_Other();
    // Set static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Other
    static void _set_VRApplication_Other(::OVR::OpenVR::EVRApplicationType value);
    // static field const value: static public OVR.OpenVR.EVRApplicationType VRApplication_Scene
    static constexpr const int VRApplication_Scene = 1;
    // Get static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Scene
    static ::OVR::OpenVR::EVRApplicationType _get_VRApplication_Scene();
    // Set static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Scene
    static void _set_VRApplication_Scene(::OVR::OpenVR::EVRApplicationType value);
    // static field const value: static public OVR.OpenVR.EVRApplicationType VRApplication_Overlay
    static constexpr const int VRApplication_Overlay = 2;
    // Get static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Overlay
    static ::OVR::OpenVR::EVRApplicationType _get_VRApplication_Overlay();
    // Set static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Overlay
    static void _set_VRApplication_Overlay(::OVR::OpenVR::EVRApplicationType value);
    // static field const value: static public OVR.OpenVR.EVRApplicationType VRApplication_Background
    static constexpr const int VRApplication_Background = 3;
    // Get static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Background
    static ::OVR::OpenVR::EVRApplicationType _get_VRApplication_Background();
    // Set static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Background
    static void _set_VRApplication_Background(::OVR::OpenVR::EVRApplicationType value);
    // static field const value: static public OVR.OpenVR.EVRApplicationType VRApplication_Utility
    static constexpr const int VRApplication_Utility = 4;
    // Get static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Utility
    static ::OVR::OpenVR::EVRApplicationType _get_VRApplication_Utility();
    // Set static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Utility
    static void _set_VRApplication_Utility(::OVR::OpenVR::EVRApplicationType value);
    // static field const value: static public OVR.OpenVR.EVRApplicationType VRApplication_VRMonitor
    static constexpr const int VRApplication_VRMonitor = 5;
    // Get static field: static public OVR.OpenVR.EVRApplicationType VRApplication_VRMonitor
    static ::OVR::OpenVR::EVRApplicationType _get_VRApplication_VRMonitor();
    // Set static field: static public OVR.OpenVR.EVRApplicationType VRApplication_VRMonitor
    static void _set_VRApplication_VRMonitor(::OVR::OpenVR::EVRApplicationType value);
    // static field const value: static public OVR.OpenVR.EVRApplicationType VRApplication_SteamWatchdog
    static constexpr const int VRApplication_SteamWatchdog = 6;
    // Get static field: static public OVR.OpenVR.EVRApplicationType VRApplication_SteamWatchdog
    static ::OVR::OpenVR::EVRApplicationType _get_VRApplication_SteamWatchdog();
    // Set static field: static public OVR.OpenVR.EVRApplicationType VRApplication_SteamWatchdog
    static void _set_VRApplication_SteamWatchdog(::OVR::OpenVR::EVRApplicationType value);
    // static field const value: static public OVR.OpenVR.EVRApplicationType VRApplication_Bootstrapper
    static constexpr const int VRApplication_Bootstrapper = 7;
    // Get static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Bootstrapper
    static ::OVR::OpenVR::EVRApplicationType _get_VRApplication_Bootstrapper();
    // Set static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Bootstrapper
    static void _set_VRApplication_Bootstrapper(::OVR::OpenVR::EVRApplicationType value);
    // static field const value: static public OVR.OpenVR.EVRApplicationType VRApplication_Max
    static constexpr const int VRApplication_Max = 8;
    // Get static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Max
    static ::OVR::OpenVR::EVRApplicationType _get_VRApplication_Max();
    // Set static field: static public OVR.OpenVR.EVRApplicationType VRApplication_Max
    static void _set_VRApplication_Max(::OVR::OpenVR::EVRApplicationType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRApplicationType
  #pragma pack(pop)
  static check_size<sizeof(EVRApplicationType), 16 + sizeof(int)> __OVR_OpenVR_EVRApplicationTypeSizeCheck;
  static_assert(sizeof(EVRApplicationType) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"