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
  // Forward declaring type: EVRNotificationError
  struct EVRNotificationError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRNotificationError, "OVR.OpenVR", "EVRNotificationError");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRNotificationError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRNotificationError/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: EVRNotificationError
    constexpr EVRNotificationError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRNotificationError OK
    static constexpr const int OK = 0;
    // Get static field: static public OVR.OpenVR.EVRNotificationError OK
    static ::OVR::OpenVR::EVRNotificationError _get_OK();
    // Set static field: static public OVR.OpenVR.EVRNotificationError OK
    static void _set_OK(::OVR::OpenVR::EVRNotificationError value);
    // static field const value: static public OVR.OpenVR.EVRNotificationError InvalidNotificationId
    static constexpr const int InvalidNotificationId = 100;
    // Get static field: static public OVR.OpenVR.EVRNotificationError InvalidNotificationId
    static ::OVR::OpenVR::EVRNotificationError _get_InvalidNotificationId();
    // Set static field: static public OVR.OpenVR.EVRNotificationError InvalidNotificationId
    static void _set_InvalidNotificationId(::OVR::OpenVR::EVRNotificationError value);
    // static field const value: static public OVR.OpenVR.EVRNotificationError NotificationQueueFull
    static constexpr const int NotificationQueueFull = 101;
    // Get static field: static public OVR.OpenVR.EVRNotificationError NotificationQueueFull
    static ::OVR::OpenVR::EVRNotificationError _get_NotificationQueueFull();
    // Set static field: static public OVR.OpenVR.EVRNotificationError NotificationQueueFull
    static void _set_NotificationQueueFull(::OVR::OpenVR::EVRNotificationError value);
    // static field const value: static public OVR.OpenVR.EVRNotificationError InvalidOverlayHandle
    static constexpr const int InvalidOverlayHandle = 102;
    // Get static field: static public OVR.OpenVR.EVRNotificationError InvalidOverlayHandle
    static ::OVR::OpenVR::EVRNotificationError _get_InvalidOverlayHandle();
    // Set static field: static public OVR.OpenVR.EVRNotificationError InvalidOverlayHandle
    static void _set_InvalidOverlayHandle(::OVR::OpenVR::EVRNotificationError value);
    // static field const value: static public OVR.OpenVR.EVRNotificationError SystemWithUserValueAlreadyExists
    static constexpr const int SystemWithUserValueAlreadyExists = 103;
    // Get static field: static public OVR.OpenVR.EVRNotificationError SystemWithUserValueAlreadyExists
    static ::OVR::OpenVR::EVRNotificationError _get_SystemWithUserValueAlreadyExists();
    // Set static field: static public OVR.OpenVR.EVRNotificationError SystemWithUserValueAlreadyExists
    static void _set_SystemWithUserValueAlreadyExists(::OVR::OpenVR::EVRNotificationError value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRNotificationError
  #pragma pack(pop)
  static check_size<sizeof(EVRNotificationError), 16 + sizeof(int)> __OVR_OpenVR_EVRNotificationErrorSizeCheck;
  static_assert(sizeof(EVRNotificationError) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
