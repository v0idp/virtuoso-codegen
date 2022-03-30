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
  // Forward declaring type: ProtocolType
  struct ProtocolType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::ProtocolType, "System.Net.Sockets", "ProtocolType");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.ProtocolType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ProtocolType/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: ProtocolType
    constexpr ProtocolType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Sockets.ProtocolType IP
    static constexpr const int IP = 0;
    // Get static field: static public System.Net.Sockets.ProtocolType IP
    static ::System::Net::Sockets::ProtocolType _get_IP();
    // Set static field: static public System.Net.Sockets.ProtocolType IP
    static void _set_IP(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType IPv6HopByHopOptions
    static constexpr const int IPv6HopByHopOptions = 0;
    // Get static field: static public System.Net.Sockets.ProtocolType IPv6HopByHopOptions
    static ::System::Net::Sockets::ProtocolType _get_IPv6HopByHopOptions();
    // Set static field: static public System.Net.Sockets.ProtocolType IPv6HopByHopOptions
    static void _set_IPv6HopByHopOptions(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Icmp
    static constexpr const int Icmp = 1;
    // Get static field: static public System.Net.Sockets.ProtocolType Icmp
    static ::System::Net::Sockets::ProtocolType _get_Icmp();
    // Set static field: static public System.Net.Sockets.ProtocolType Icmp
    static void _set_Icmp(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Igmp
    static constexpr const int Igmp = 2;
    // Get static field: static public System.Net.Sockets.ProtocolType Igmp
    static ::System::Net::Sockets::ProtocolType _get_Igmp();
    // Set static field: static public System.Net.Sockets.ProtocolType Igmp
    static void _set_Igmp(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Ggp
    static constexpr const int Ggp = 3;
    // Get static field: static public System.Net.Sockets.ProtocolType Ggp
    static ::System::Net::Sockets::ProtocolType _get_Ggp();
    // Set static field: static public System.Net.Sockets.ProtocolType Ggp
    static void _set_Ggp(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType IPv4
    static constexpr const int IPv4 = 4;
    // Get static field: static public System.Net.Sockets.ProtocolType IPv4
    static ::System::Net::Sockets::ProtocolType _get_IPv4();
    // Set static field: static public System.Net.Sockets.ProtocolType IPv4
    static void _set_IPv4(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Tcp
    static constexpr const int Tcp = 6;
    // Get static field: static public System.Net.Sockets.ProtocolType Tcp
    static ::System::Net::Sockets::ProtocolType _get_Tcp();
    // Set static field: static public System.Net.Sockets.ProtocolType Tcp
    static void _set_Tcp(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Pup
    static constexpr const int Pup = 12;
    // Get static field: static public System.Net.Sockets.ProtocolType Pup
    static ::System::Net::Sockets::ProtocolType _get_Pup();
    // Set static field: static public System.Net.Sockets.ProtocolType Pup
    static void _set_Pup(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Udp
    static constexpr const int Udp = 17;
    // Get static field: static public System.Net.Sockets.ProtocolType Udp
    static ::System::Net::Sockets::ProtocolType _get_Udp();
    // Set static field: static public System.Net.Sockets.ProtocolType Udp
    static void _set_Udp(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Idp
    static constexpr const int Idp = 22;
    // Get static field: static public System.Net.Sockets.ProtocolType Idp
    static ::System::Net::Sockets::ProtocolType _get_Idp();
    // Set static field: static public System.Net.Sockets.ProtocolType Idp
    static void _set_Idp(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType IPv6
    static constexpr const int IPv6 = 41;
    // Get static field: static public System.Net.Sockets.ProtocolType IPv6
    static ::System::Net::Sockets::ProtocolType _get_IPv6();
    // Set static field: static public System.Net.Sockets.ProtocolType IPv6
    static void _set_IPv6(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType IPv6RoutingHeader
    static constexpr const int IPv6RoutingHeader = 43;
    // Get static field: static public System.Net.Sockets.ProtocolType IPv6RoutingHeader
    static ::System::Net::Sockets::ProtocolType _get_IPv6RoutingHeader();
    // Set static field: static public System.Net.Sockets.ProtocolType IPv6RoutingHeader
    static void _set_IPv6RoutingHeader(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType IPv6FragmentHeader
    static constexpr const int IPv6FragmentHeader = 44;
    // Get static field: static public System.Net.Sockets.ProtocolType IPv6FragmentHeader
    static ::System::Net::Sockets::ProtocolType _get_IPv6FragmentHeader();
    // Set static field: static public System.Net.Sockets.ProtocolType IPv6FragmentHeader
    static void _set_IPv6FragmentHeader(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType IPSecEncapsulatingSecurityPayload
    static constexpr const int IPSecEncapsulatingSecurityPayload = 50;
    // Get static field: static public System.Net.Sockets.ProtocolType IPSecEncapsulatingSecurityPayload
    static ::System::Net::Sockets::ProtocolType _get_IPSecEncapsulatingSecurityPayload();
    // Set static field: static public System.Net.Sockets.ProtocolType IPSecEncapsulatingSecurityPayload
    static void _set_IPSecEncapsulatingSecurityPayload(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType IPSecAuthenticationHeader
    static constexpr const int IPSecAuthenticationHeader = 51;
    // Get static field: static public System.Net.Sockets.ProtocolType IPSecAuthenticationHeader
    static ::System::Net::Sockets::ProtocolType _get_IPSecAuthenticationHeader();
    // Set static field: static public System.Net.Sockets.ProtocolType IPSecAuthenticationHeader
    static void _set_IPSecAuthenticationHeader(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType IcmpV6
    static constexpr const int IcmpV6 = 58;
    // Get static field: static public System.Net.Sockets.ProtocolType IcmpV6
    static ::System::Net::Sockets::ProtocolType _get_IcmpV6();
    // Set static field: static public System.Net.Sockets.ProtocolType IcmpV6
    static void _set_IcmpV6(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType IPv6NoNextHeader
    static constexpr const int IPv6NoNextHeader = 59;
    // Get static field: static public System.Net.Sockets.ProtocolType IPv6NoNextHeader
    static ::System::Net::Sockets::ProtocolType _get_IPv6NoNextHeader();
    // Set static field: static public System.Net.Sockets.ProtocolType IPv6NoNextHeader
    static void _set_IPv6NoNextHeader(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType IPv6DestinationOptions
    static constexpr const int IPv6DestinationOptions = 60;
    // Get static field: static public System.Net.Sockets.ProtocolType IPv6DestinationOptions
    static ::System::Net::Sockets::ProtocolType _get_IPv6DestinationOptions();
    // Set static field: static public System.Net.Sockets.ProtocolType IPv6DestinationOptions
    static void _set_IPv6DestinationOptions(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType ND
    static constexpr const int ND = 77;
    // Get static field: static public System.Net.Sockets.ProtocolType ND
    static ::System::Net::Sockets::ProtocolType _get_ND();
    // Set static field: static public System.Net.Sockets.ProtocolType ND
    static void _set_ND(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Raw
    static constexpr const int Raw = 255;
    // Get static field: static public System.Net.Sockets.ProtocolType Raw
    static ::System::Net::Sockets::ProtocolType _get_Raw();
    // Set static field: static public System.Net.Sockets.ProtocolType Raw
    static void _set_Raw(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Unspecified
    static constexpr const int Unspecified = 0;
    // Get static field: static public System.Net.Sockets.ProtocolType Unspecified
    static ::System::Net::Sockets::ProtocolType _get_Unspecified();
    // Set static field: static public System.Net.Sockets.ProtocolType Unspecified
    static void _set_Unspecified(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Ipx
    static constexpr const int Ipx = 1000;
    // Get static field: static public System.Net.Sockets.ProtocolType Ipx
    static ::System::Net::Sockets::ProtocolType _get_Ipx();
    // Set static field: static public System.Net.Sockets.ProtocolType Ipx
    static void _set_Ipx(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Spx
    static constexpr const int Spx = 1256;
    // Get static field: static public System.Net.Sockets.ProtocolType Spx
    static ::System::Net::Sockets::ProtocolType _get_Spx();
    // Set static field: static public System.Net.Sockets.ProtocolType Spx
    static void _set_Spx(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType SpxII
    static constexpr const int SpxII = 1257;
    // Get static field: static public System.Net.Sockets.ProtocolType SpxII
    static ::System::Net::Sockets::ProtocolType _get_SpxII();
    // Set static field: static public System.Net.Sockets.ProtocolType SpxII
    static void _set_SpxII(::System::Net::Sockets::ProtocolType value);
    // static field const value: static public System.Net.Sockets.ProtocolType Unknown
    static constexpr const int Unknown = -1;
    // Get static field: static public System.Net.Sockets.ProtocolType Unknown
    static ::System::Net::Sockets::ProtocolType _get_Unknown();
    // Set static field: static public System.Net.Sockets.ProtocolType Unknown
    static void _set_Unknown(::System::Net::Sockets::ProtocolType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.Sockets.ProtocolType
  #pragma pack(pop)
  static check_size<sizeof(ProtocolType), 16 + sizeof(int)> __System_Net_Sockets_ProtocolTypeSizeCheck;
  static_assert(sizeof(ProtocolType) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
