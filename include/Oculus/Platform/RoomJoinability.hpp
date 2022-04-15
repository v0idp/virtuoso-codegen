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
  // Forward declaring type: RoomJoinability
  struct RoomJoinability;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomJoinability, "Oculus.Platform", "RoomJoinability");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.RoomJoinability
  // [TokenAttribute] Offset: FFFFFFFF
  struct RoomJoinability/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RoomJoinability
    constexpr RoomJoinability(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x6B8488
    // static field const value: static public Oculus.Platform.RoomJoinability Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.RoomJoinability Unknown
    static ::Oculus::Platform::RoomJoinability _get_Unknown();
    // Set static field: static public Oculus.Platform.RoomJoinability Unknown
    static void _set_Unknown(::Oculus::Platform::RoomJoinability value);
    // [DescriptionAttribute] Offset: 0x6B84C0
    // static field const value: static public Oculus.Platform.RoomJoinability AreIn
    static constexpr const int AreIn = 1;
    // Get static field: static public Oculus.Platform.RoomJoinability AreIn
    static ::Oculus::Platform::RoomJoinability _get_AreIn();
    // Set static field: static public Oculus.Platform.RoomJoinability AreIn
    static void _set_AreIn(::Oculus::Platform::RoomJoinability value);
    // [DescriptionAttribute] Offset: 0x6B84F8
    // static field const value: static public Oculus.Platform.RoomJoinability AreKicked
    static constexpr const int AreKicked = 2;
    // Get static field: static public Oculus.Platform.RoomJoinability AreKicked
    static ::Oculus::Platform::RoomJoinability _get_AreKicked();
    // Set static field: static public Oculus.Platform.RoomJoinability AreKicked
    static void _set_AreKicked(::Oculus::Platform::RoomJoinability value);
    // [DescriptionAttribute] Offset: 0x6B8530
    // static field const value: static public Oculus.Platform.RoomJoinability CanJoin
    static constexpr const int CanJoin = 3;
    // Get static field: static public Oculus.Platform.RoomJoinability CanJoin
    static ::Oculus::Platform::RoomJoinability _get_CanJoin();
    // Set static field: static public Oculus.Platform.RoomJoinability CanJoin
    static void _set_CanJoin(::Oculus::Platform::RoomJoinability value);
    // [DescriptionAttribute] Offset: 0x6B8568
    // static field const value: static public Oculus.Platform.RoomJoinability IsFull
    static constexpr const int IsFull = 4;
    // Get static field: static public Oculus.Platform.RoomJoinability IsFull
    static ::Oculus::Platform::RoomJoinability _get_IsFull();
    // Set static field: static public Oculus.Platform.RoomJoinability IsFull
    static void _set_IsFull(::Oculus::Platform::RoomJoinability value);
    // [DescriptionAttribute] Offset: 0x6B85A0
    // static field const value: static public Oculus.Platform.RoomJoinability NoViewer
    static constexpr const int NoViewer = 5;
    // Get static field: static public Oculus.Platform.RoomJoinability NoViewer
    static ::Oculus::Platform::RoomJoinability _get_NoViewer();
    // Set static field: static public Oculus.Platform.RoomJoinability NoViewer
    static void _set_NoViewer(::Oculus::Platform::RoomJoinability value);
    // [DescriptionAttribute] Offset: 0x6B85D8
    // static field const value: static public Oculus.Platform.RoomJoinability PolicyPrevents
    static constexpr const int PolicyPrevents = 6;
    // Get static field: static public Oculus.Platform.RoomJoinability PolicyPrevents
    static ::Oculus::Platform::RoomJoinability _get_PolicyPrevents();
    // Set static field: static public Oculus.Platform.RoomJoinability PolicyPrevents
    static void _set_PolicyPrevents(::Oculus::Platform::RoomJoinability value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.RoomJoinability
  #pragma pack(pop)
  static check_size<sizeof(RoomJoinability), 0 + sizeof(int)> __Oculus_Platform_RoomJoinabilitySizeCheck;
  static_assert(sizeof(RoomJoinability) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
