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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: NetSyncConnectionStatus
  struct NetSyncConnectionStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::NetSyncConnectionStatus, "Oculus.Platform", "NetSyncConnectionStatus");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.NetSyncConnectionStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetSyncConnectionStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetSyncConnectionStatus
    constexpr NetSyncConnectionStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x6B78B0
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Unknown
    static ::Oculus::Platform::NetSyncConnectionStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Unknown
    static void _set_Unknown(::Oculus::Platform::NetSyncConnectionStatus value);
    // [DescriptionAttribute] Offset: 0x6B78E8
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Connecting
    static constexpr const int Connecting = 1;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Connecting
    static ::Oculus::Platform::NetSyncConnectionStatus _get_Connecting();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Connecting
    static void _set_Connecting(::Oculus::Platform::NetSyncConnectionStatus value);
    // [DescriptionAttribute] Offset: 0x6B7920
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Disconnected
    static constexpr const int Disconnected = 2;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Disconnected
    static ::Oculus::Platform::NetSyncConnectionStatus _get_Disconnected();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Disconnected
    static void _set_Disconnected(::Oculus::Platform::NetSyncConnectionStatus value);
    // [DescriptionAttribute] Offset: 0x6B7958
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Connected
    static constexpr const int Connected = 3;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Connected
    static ::Oculus::Platform::NetSyncConnectionStatus _get_Connected();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Connected
    static void _set_Connected(::Oculus::Platform::NetSyncConnectionStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Oculus.Platform.NetSyncConnectionStatus
  #pragma pack(pop)
  static check_size<sizeof(NetSyncConnectionStatus), 0 + sizeof(int)> __Oculus_Platform_NetSyncConnectionStatusSizeCheck;
  static_assert(sizeof(NetSyncConnectionStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
