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
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketOptionName
  struct SocketOptionName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketOptionName, "System.Net.Sockets", "SocketOptionName");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.SocketOptionName
  // [TokenAttribute] Offset: FFFFFFFF
  struct SocketOptionName/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SocketOptionName
    constexpr SocketOptionName(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Sockets.SocketOptionName Debug
    static constexpr const int Debug = 1;
    // Get static field: static public System.Net.Sockets.SocketOptionName Debug
    static ::System::Net::Sockets::SocketOptionName _get_Debug();
    // Set static field: static public System.Net.Sockets.SocketOptionName Debug
    static void _set_Debug(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName AcceptConnection
    static constexpr const int AcceptConnection = 2;
    // Get static field: static public System.Net.Sockets.SocketOptionName AcceptConnection
    static ::System::Net::Sockets::SocketOptionName _get_AcceptConnection();
    // Set static field: static public System.Net.Sockets.SocketOptionName AcceptConnection
    static void _set_AcceptConnection(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName ReuseAddress
    static constexpr const int ReuseAddress = 4;
    // Get static field: static public System.Net.Sockets.SocketOptionName ReuseAddress
    static ::System::Net::Sockets::SocketOptionName _get_ReuseAddress();
    // Set static field: static public System.Net.Sockets.SocketOptionName ReuseAddress
    static void _set_ReuseAddress(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName KeepAlive
    static constexpr const int KeepAlive = 8;
    // Get static field: static public System.Net.Sockets.SocketOptionName KeepAlive
    static ::System::Net::Sockets::SocketOptionName _get_KeepAlive();
    // Set static field: static public System.Net.Sockets.SocketOptionName KeepAlive
    static void _set_KeepAlive(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName DontRoute
    static constexpr const int DontRoute = 16;
    // Get static field: static public System.Net.Sockets.SocketOptionName DontRoute
    static ::System::Net::Sockets::SocketOptionName _get_DontRoute();
    // Set static field: static public System.Net.Sockets.SocketOptionName DontRoute
    static void _set_DontRoute(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName Broadcast
    static constexpr const int Broadcast = 32;
    // Get static field: static public System.Net.Sockets.SocketOptionName Broadcast
    static ::System::Net::Sockets::SocketOptionName _get_Broadcast();
    // Set static field: static public System.Net.Sockets.SocketOptionName Broadcast
    static void _set_Broadcast(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName UseLoopback
    static constexpr const int UseLoopback = 64;
    // Get static field: static public System.Net.Sockets.SocketOptionName UseLoopback
    static ::System::Net::Sockets::SocketOptionName _get_UseLoopback();
    // Set static field: static public System.Net.Sockets.SocketOptionName UseLoopback
    static void _set_UseLoopback(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName Linger
    static constexpr const int Linger = 128;
    // Get static field: static public System.Net.Sockets.SocketOptionName Linger
    static ::System::Net::Sockets::SocketOptionName _get_Linger();
    // Set static field: static public System.Net.Sockets.SocketOptionName Linger
    static void _set_Linger(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName OutOfBandInline
    static constexpr const int OutOfBandInline = 256;
    // Get static field: static public System.Net.Sockets.SocketOptionName OutOfBandInline
    static ::System::Net::Sockets::SocketOptionName _get_OutOfBandInline();
    // Set static field: static public System.Net.Sockets.SocketOptionName OutOfBandInline
    static void _set_OutOfBandInline(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName DontLinger
    static constexpr const int DontLinger = -129;
    // Get static field: static public System.Net.Sockets.SocketOptionName DontLinger
    static ::System::Net::Sockets::SocketOptionName _get_DontLinger();
    // Set static field: static public System.Net.Sockets.SocketOptionName DontLinger
    static void _set_DontLinger(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName ExclusiveAddressUse
    static constexpr const int ExclusiveAddressUse = -5;
    // Get static field: static public System.Net.Sockets.SocketOptionName ExclusiveAddressUse
    static ::System::Net::Sockets::SocketOptionName _get_ExclusiveAddressUse();
    // Set static field: static public System.Net.Sockets.SocketOptionName ExclusiveAddressUse
    static void _set_ExclusiveAddressUse(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName SendBuffer
    static constexpr const int SendBuffer = 4097;
    // Get static field: static public System.Net.Sockets.SocketOptionName SendBuffer
    static ::System::Net::Sockets::SocketOptionName _get_SendBuffer();
    // Set static field: static public System.Net.Sockets.SocketOptionName SendBuffer
    static void _set_SendBuffer(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName ReceiveBuffer
    static constexpr const int ReceiveBuffer = 4098;
    // Get static field: static public System.Net.Sockets.SocketOptionName ReceiveBuffer
    static ::System::Net::Sockets::SocketOptionName _get_ReceiveBuffer();
    // Set static field: static public System.Net.Sockets.SocketOptionName ReceiveBuffer
    static void _set_ReceiveBuffer(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName SendLowWater
    static constexpr const int SendLowWater = 4099;
    // Get static field: static public System.Net.Sockets.SocketOptionName SendLowWater
    static ::System::Net::Sockets::SocketOptionName _get_SendLowWater();
    // Set static field: static public System.Net.Sockets.SocketOptionName SendLowWater
    static void _set_SendLowWater(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName ReceiveLowWater
    static constexpr const int ReceiveLowWater = 4100;
    // Get static field: static public System.Net.Sockets.SocketOptionName ReceiveLowWater
    static ::System::Net::Sockets::SocketOptionName _get_ReceiveLowWater();
    // Set static field: static public System.Net.Sockets.SocketOptionName ReceiveLowWater
    static void _set_ReceiveLowWater(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName SendTimeout
    static constexpr const int SendTimeout = 4101;
    // Get static field: static public System.Net.Sockets.SocketOptionName SendTimeout
    static ::System::Net::Sockets::SocketOptionName _get_SendTimeout();
    // Set static field: static public System.Net.Sockets.SocketOptionName SendTimeout
    static void _set_SendTimeout(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName ReceiveTimeout
    static constexpr const int ReceiveTimeout = 4102;
    // Get static field: static public System.Net.Sockets.SocketOptionName ReceiveTimeout
    static ::System::Net::Sockets::SocketOptionName _get_ReceiveTimeout();
    // Set static field: static public System.Net.Sockets.SocketOptionName ReceiveTimeout
    static void _set_ReceiveTimeout(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName Error
    static constexpr const int Error = 4103;
    // Get static field: static public System.Net.Sockets.SocketOptionName Error
    static ::System::Net::Sockets::SocketOptionName _get_Error();
    // Set static field: static public System.Net.Sockets.SocketOptionName Error
    static void _set_Error(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName Type
    static constexpr const int Type = 4104;
    // Get static field: static public System.Net.Sockets.SocketOptionName Type
    static ::System::Net::Sockets::SocketOptionName _get_Type();
    // Set static field: static public System.Net.Sockets.SocketOptionName Type
    static void _set_Type(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName ReuseUnicastPort
    static constexpr const int ReuseUnicastPort = 12295;
    // Get static field: static public System.Net.Sockets.SocketOptionName ReuseUnicastPort
    static ::System::Net::Sockets::SocketOptionName _get_ReuseUnicastPort();
    // Set static field: static public System.Net.Sockets.SocketOptionName ReuseUnicastPort
    static void _set_ReuseUnicastPort(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName MaxConnections
    static constexpr const int MaxConnections = 2147483647;
    // Get static field: static public System.Net.Sockets.SocketOptionName MaxConnections
    static ::System::Net::Sockets::SocketOptionName _get_MaxConnections();
    // Set static field: static public System.Net.Sockets.SocketOptionName MaxConnections
    static void _set_MaxConnections(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName IPOptions
    static constexpr const int IPOptions = 1;
    // Get static field: static public System.Net.Sockets.SocketOptionName IPOptions
    static ::System::Net::Sockets::SocketOptionName _get_IPOptions();
    // Set static field: static public System.Net.Sockets.SocketOptionName IPOptions
    static void _set_IPOptions(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName HeaderIncluded
    static constexpr const int HeaderIncluded = 2;
    // Get static field: static public System.Net.Sockets.SocketOptionName HeaderIncluded
    static ::System::Net::Sockets::SocketOptionName _get_HeaderIncluded();
    // Set static field: static public System.Net.Sockets.SocketOptionName HeaderIncluded
    static void _set_HeaderIncluded(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName TypeOfService
    static constexpr const int TypeOfService = 3;
    // Get static field: static public System.Net.Sockets.SocketOptionName TypeOfService
    static ::System::Net::Sockets::SocketOptionName _get_TypeOfService();
    // Set static field: static public System.Net.Sockets.SocketOptionName TypeOfService
    static void _set_TypeOfService(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName IpTimeToLive
    static constexpr const int IpTimeToLive = 4;
    // Get static field: static public System.Net.Sockets.SocketOptionName IpTimeToLive
    static ::System::Net::Sockets::SocketOptionName _get_IpTimeToLive();
    // Set static field: static public System.Net.Sockets.SocketOptionName IpTimeToLive
    static void _set_IpTimeToLive(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName MulticastInterface
    static constexpr const int MulticastInterface = 9;
    // Get static field: static public System.Net.Sockets.SocketOptionName MulticastInterface
    static ::System::Net::Sockets::SocketOptionName _get_MulticastInterface();
    // Set static field: static public System.Net.Sockets.SocketOptionName MulticastInterface
    static void _set_MulticastInterface(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName MulticastTimeToLive
    static constexpr const int MulticastTimeToLive = 10;
    // Get static field: static public System.Net.Sockets.SocketOptionName MulticastTimeToLive
    static ::System::Net::Sockets::SocketOptionName _get_MulticastTimeToLive();
    // Set static field: static public System.Net.Sockets.SocketOptionName MulticastTimeToLive
    static void _set_MulticastTimeToLive(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName MulticastLoopback
    static constexpr const int MulticastLoopback = 11;
    // Get static field: static public System.Net.Sockets.SocketOptionName MulticastLoopback
    static ::System::Net::Sockets::SocketOptionName _get_MulticastLoopback();
    // Set static field: static public System.Net.Sockets.SocketOptionName MulticastLoopback
    static void _set_MulticastLoopback(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName AddMembership
    static constexpr const int AddMembership = 12;
    // Get static field: static public System.Net.Sockets.SocketOptionName AddMembership
    static ::System::Net::Sockets::SocketOptionName _get_AddMembership();
    // Set static field: static public System.Net.Sockets.SocketOptionName AddMembership
    static void _set_AddMembership(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName DropMembership
    static constexpr const int DropMembership = 13;
    // Get static field: static public System.Net.Sockets.SocketOptionName DropMembership
    static ::System::Net::Sockets::SocketOptionName _get_DropMembership();
    // Set static field: static public System.Net.Sockets.SocketOptionName DropMembership
    static void _set_DropMembership(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName DontFragment
    static constexpr const int DontFragment = 14;
    // Get static field: static public System.Net.Sockets.SocketOptionName DontFragment
    static ::System::Net::Sockets::SocketOptionName _get_DontFragment();
    // Set static field: static public System.Net.Sockets.SocketOptionName DontFragment
    static void _set_DontFragment(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName AddSourceMembership
    static constexpr const int AddSourceMembership = 15;
    // Get static field: static public System.Net.Sockets.SocketOptionName AddSourceMembership
    static ::System::Net::Sockets::SocketOptionName _get_AddSourceMembership();
    // Set static field: static public System.Net.Sockets.SocketOptionName AddSourceMembership
    static void _set_AddSourceMembership(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName DropSourceMembership
    static constexpr const int DropSourceMembership = 16;
    // Get static field: static public System.Net.Sockets.SocketOptionName DropSourceMembership
    static ::System::Net::Sockets::SocketOptionName _get_DropSourceMembership();
    // Set static field: static public System.Net.Sockets.SocketOptionName DropSourceMembership
    static void _set_DropSourceMembership(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName BlockSource
    static constexpr const int BlockSource = 17;
    // Get static field: static public System.Net.Sockets.SocketOptionName BlockSource
    static ::System::Net::Sockets::SocketOptionName _get_BlockSource();
    // Set static field: static public System.Net.Sockets.SocketOptionName BlockSource
    static void _set_BlockSource(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName UnblockSource
    static constexpr const int UnblockSource = 18;
    // Get static field: static public System.Net.Sockets.SocketOptionName UnblockSource
    static ::System::Net::Sockets::SocketOptionName _get_UnblockSource();
    // Set static field: static public System.Net.Sockets.SocketOptionName UnblockSource
    static void _set_UnblockSource(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName PacketInformation
    static constexpr const int PacketInformation = 19;
    // Get static field: static public System.Net.Sockets.SocketOptionName PacketInformation
    static ::System::Net::Sockets::SocketOptionName _get_PacketInformation();
    // Set static field: static public System.Net.Sockets.SocketOptionName PacketInformation
    static void _set_PacketInformation(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName HopLimit
    static constexpr const int HopLimit = 21;
    // Get static field: static public System.Net.Sockets.SocketOptionName HopLimit
    static ::System::Net::Sockets::SocketOptionName _get_HopLimit();
    // Set static field: static public System.Net.Sockets.SocketOptionName HopLimit
    static void _set_HopLimit(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName IPProtectionLevel
    static constexpr const int IPProtectionLevel = 23;
    // Get static field: static public System.Net.Sockets.SocketOptionName IPProtectionLevel
    static ::System::Net::Sockets::SocketOptionName _get_IPProtectionLevel();
    // Set static field: static public System.Net.Sockets.SocketOptionName IPProtectionLevel
    static void _set_IPProtectionLevel(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName IPv6Only
    static constexpr const int IPv6Only = 27;
    // Get static field: static public System.Net.Sockets.SocketOptionName IPv6Only
    static ::System::Net::Sockets::SocketOptionName _get_IPv6Only();
    // Set static field: static public System.Net.Sockets.SocketOptionName IPv6Only
    static void _set_IPv6Only(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName NoDelay
    static constexpr const int NoDelay = 1;
    // Get static field: static public System.Net.Sockets.SocketOptionName NoDelay
    static ::System::Net::Sockets::SocketOptionName _get_NoDelay();
    // Set static field: static public System.Net.Sockets.SocketOptionName NoDelay
    static void _set_NoDelay(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName BsdUrgent
    static constexpr const int BsdUrgent = 2;
    // Get static field: static public System.Net.Sockets.SocketOptionName BsdUrgent
    static ::System::Net::Sockets::SocketOptionName _get_BsdUrgent();
    // Set static field: static public System.Net.Sockets.SocketOptionName BsdUrgent
    static void _set_BsdUrgent(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName Expedited
    static constexpr const int Expedited = 2;
    // Get static field: static public System.Net.Sockets.SocketOptionName Expedited
    static ::System::Net::Sockets::SocketOptionName _get_Expedited();
    // Set static field: static public System.Net.Sockets.SocketOptionName Expedited
    static void _set_Expedited(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName NoChecksum
    static constexpr const int NoChecksum = 1;
    // Get static field: static public System.Net.Sockets.SocketOptionName NoChecksum
    static ::System::Net::Sockets::SocketOptionName _get_NoChecksum();
    // Set static field: static public System.Net.Sockets.SocketOptionName NoChecksum
    static void _set_NoChecksum(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName ChecksumCoverage
    static constexpr const int ChecksumCoverage = 20;
    // Get static field: static public System.Net.Sockets.SocketOptionName ChecksumCoverage
    static ::System::Net::Sockets::SocketOptionName _get_ChecksumCoverage();
    // Set static field: static public System.Net.Sockets.SocketOptionName ChecksumCoverage
    static void _set_ChecksumCoverage(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName UpdateAcceptContext
    static constexpr const int UpdateAcceptContext = 28683;
    // Get static field: static public System.Net.Sockets.SocketOptionName UpdateAcceptContext
    static ::System::Net::Sockets::SocketOptionName _get_UpdateAcceptContext();
    // Set static field: static public System.Net.Sockets.SocketOptionName UpdateAcceptContext
    static void _set_UpdateAcceptContext(::System::Net::Sockets::SocketOptionName value);
    // static field const value: static public System.Net.Sockets.SocketOptionName UpdateConnectContext
    static constexpr const int UpdateConnectContext = 28688;
    // Get static field: static public System.Net.Sockets.SocketOptionName UpdateConnectContext
    static ::System::Net::Sockets::SocketOptionName _get_UpdateConnectContext();
    // Set static field: static public System.Net.Sockets.SocketOptionName UpdateConnectContext
    static void _set_UpdateConnectContext(::System::Net::Sockets::SocketOptionName value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Net.Sockets.SocketOptionName
  #pragma pack(pop)
  static check_size<sizeof(SocketOptionName), 0 + sizeof(int)> __System_Net_Sockets_SocketOptionNameSizeCheck;
  static_assert(sizeof(SocketOptionName) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
