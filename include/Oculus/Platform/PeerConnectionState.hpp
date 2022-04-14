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
  // Forward declaring type: PeerConnectionState
  struct PeerConnectionState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PeerConnectionState, "Oculus.Platform", "PeerConnectionState");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.PeerConnectionState
  // [TokenAttribute] Offset: FFFFFFFF
  struct PeerConnectionState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PeerConnectionState
    constexpr PeerConnectionState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x6B7D10
    // static field const value: static public Oculus.Platform.PeerConnectionState Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.PeerConnectionState Unknown
    static ::Oculus::Platform::PeerConnectionState _get_Unknown();
    // Set static field: static public Oculus.Platform.PeerConnectionState Unknown
    static void _set_Unknown(::Oculus::Platform::PeerConnectionState value);
    // [DescriptionAttribute] Offset: 0x6B7D48
    // static field const value: static public Oculus.Platform.PeerConnectionState Connected
    static constexpr const int Connected = 1;
    // Get static field: static public Oculus.Platform.PeerConnectionState Connected
    static ::Oculus::Platform::PeerConnectionState _get_Connected();
    // Set static field: static public Oculus.Platform.PeerConnectionState Connected
    static void _set_Connected(::Oculus::Platform::PeerConnectionState value);
    // [DescriptionAttribute] Offset: 0x6B7D80
    // static field const value: static public Oculus.Platform.PeerConnectionState Timeout
    static constexpr const int Timeout = 2;
    // Get static field: static public Oculus.Platform.PeerConnectionState Timeout
    static ::Oculus::Platform::PeerConnectionState _get_Timeout();
    // Set static field: static public Oculus.Platform.PeerConnectionState Timeout
    static void _set_Timeout(::Oculus::Platform::PeerConnectionState value);
    // [DescriptionAttribute] Offset: 0x6B7DB8
    // static field const value: static public Oculus.Platform.PeerConnectionState Closed
    static constexpr const int Closed = 3;
    // Get static field: static public Oculus.Platform.PeerConnectionState Closed
    static ::Oculus::Platform::PeerConnectionState _get_Closed();
    // Set static field: static public Oculus.Platform.PeerConnectionState Closed
    static void _set_Closed(::Oculus::Platform::PeerConnectionState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Oculus.Platform.PeerConnectionState
  #pragma pack(pop)
  static check_size<sizeof(PeerConnectionState), 0 + sizeof(int)> __Oculus_Platform_PeerConnectionStateSizeCheck;
  static_assert(sizeof(PeerConnectionState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
