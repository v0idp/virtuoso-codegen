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
  // Forward declaring type: NetSyncDisconnectReason
  struct NetSyncDisconnectReason;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::NetSyncDisconnectReason, "Oculus.Platform", "NetSyncDisconnectReason");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.NetSyncDisconnectReason
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetSyncDisconnectReason/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetSyncDisconnectReason
    constexpr NetSyncDisconnectReason(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x6B7990
    // static field const value: static public Oculus.Platform.NetSyncDisconnectReason Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.NetSyncDisconnectReason Unknown
    static ::Oculus::Platform::NetSyncDisconnectReason _get_Unknown();
    // Set static field: static public Oculus.Platform.NetSyncDisconnectReason Unknown
    static void _set_Unknown(::Oculus::Platform::NetSyncDisconnectReason value);
    // [DescriptionAttribute] Offset: 0x6B79C8
    // static field const value: static public Oculus.Platform.NetSyncDisconnectReason LocalTerminated
    static constexpr const int LocalTerminated = 1;
    // Get static field: static public Oculus.Platform.NetSyncDisconnectReason LocalTerminated
    static ::Oculus::Platform::NetSyncDisconnectReason _get_LocalTerminated();
    // Set static field: static public Oculus.Platform.NetSyncDisconnectReason LocalTerminated
    static void _set_LocalTerminated(::Oculus::Platform::NetSyncDisconnectReason value);
    // [DescriptionAttribute] Offset: 0x6B7A00
    // static field const value: static public Oculus.Platform.NetSyncDisconnectReason ServerTerminated
    static constexpr const int ServerTerminated = 2;
    // Get static field: static public Oculus.Platform.NetSyncDisconnectReason ServerTerminated
    static ::Oculus::Platform::NetSyncDisconnectReason _get_ServerTerminated();
    // Set static field: static public Oculus.Platform.NetSyncDisconnectReason ServerTerminated
    static void _set_ServerTerminated(::Oculus::Platform::NetSyncDisconnectReason value);
    // [DescriptionAttribute] Offset: 0x6B7A38
    // static field const value: static public Oculus.Platform.NetSyncDisconnectReason Failed
    static constexpr const int Failed = 3;
    // Get static field: static public Oculus.Platform.NetSyncDisconnectReason Failed
    static ::Oculus::Platform::NetSyncDisconnectReason _get_Failed();
    // Set static field: static public Oculus.Platform.NetSyncDisconnectReason Failed
    static void _set_Failed(::Oculus::Platform::NetSyncDisconnectReason value);
    // [DescriptionAttribute] Offset: 0x6B7A70
    // static field const value: static public Oculus.Platform.NetSyncDisconnectReason Lost
    static constexpr const int Lost = 4;
    // Get static field: static public Oculus.Platform.NetSyncDisconnectReason Lost
    static ::Oculus::Platform::NetSyncDisconnectReason _get_Lost();
    // Set static field: static public Oculus.Platform.NetSyncDisconnectReason Lost
    static void _set_Lost(::Oculus::Platform::NetSyncDisconnectReason value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Oculus.Platform.NetSyncDisconnectReason
  #pragma pack(pop)
  static check_size<sizeof(NetSyncDisconnectReason), 0 + sizeof(int)> __Oculus_Platform_NetSyncDisconnectReasonSizeCheck;
  static_assert(sizeof(NetSyncDisconnectReason) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
