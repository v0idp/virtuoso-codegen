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
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetBiosNodeType
  struct NetBiosNodeType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetBiosNodeType, "System.Net.NetworkInformation", "NetBiosNodeType");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetBiosNodeType
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetBiosNodeType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetBiosNodeType
    constexpr NetBiosNodeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.NetworkInformation.NetBiosNodeType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public System.Net.NetworkInformation.NetBiosNodeType Unknown
    static ::System::Net::NetworkInformation::NetBiosNodeType _get_Unknown();
    // Set static field: static public System.Net.NetworkInformation.NetBiosNodeType Unknown
    static void _set_Unknown(::System::Net::NetworkInformation::NetBiosNodeType value);
    // static field const value: static public System.Net.NetworkInformation.NetBiosNodeType Broadcast
    static constexpr const int Broadcast = 1;
    // Get static field: static public System.Net.NetworkInformation.NetBiosNodeType Broadcast
    static ::System::Net::NetworkInformation::NetBiosNodeType _get_Broadcast();
    // Set static field: static public System.Net.NetworkInformation.NetBiosNodeType Broadcast
    static void _set_Broadcast(::System::Net::NetworkInformation::NetBiosNodeType value);
    // static field const value: static public System.Net.NetworkInformation.NetBiosNodeType Peer2Peer
    static constexpr const int Peer2Peer = 2;
    // Get static field: static public System.Net.NetworkInformation.NetBiosNodeType Peer2Peer
    static ::System::Net::NetworkInformation::NetBiosNodeType _get_Peer2Peer();
    // Set static field: static public System.Net.NetworkInformation.NetBiosNodeType Peer2Peer
    static void _set_Peer2Peer(::System::Net::NetworkInformation::NetBiosNodeType value);
    // static field const value: static public System.Net.NetworkInformation.NetBiosNodeType Mixed
    static constexpr const int Mixed = 4;
    // Get static field: static public System.Net.NetworkInformation.NetBiosNodeType Mixed
    static ::System::Net::NetworkInformation::NetBiosNodeType _get_Mixed();
    // Set static field: static public System.Net.NetworkInformation.NetBiosNodeType Mixed
    static void _set_Mixed(::System::Net::NetworkInformation::NetBiosNodeType value);
    // static field const value: static public System.Net.NetworkInformation.NetBiosNodeType Hybrid
    static constexpr const int Hybrid = 8;
    // Get static field: static public System.Net.NetworkInformation.NetBiosNodeType Hybrid
    static ::System::Net::NetworkInformation::NetBiosNodeType _get_Hybrid();
    // Set static field: static public System.Net.NetworkInformation.NetBiosNodeType Hybrid
    static void _set_Hybrid(::System::Net::NetworkInformation::NetBiosNodeType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.NetworkInformation.NetBiosNodeType
  #pragma pack(pop)
  static check_size<sizeof(NetBiosNodeType), 0 + sizeof(int)> __System_Net_NetworkInformation_NetBiosNodeTypeSizeCheck;
  static_assert(sizeof(NetBiosNodeType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
