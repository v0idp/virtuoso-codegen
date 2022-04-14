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
  // Forward declaring type: LaunchResult
  struct LaunchResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LaunchResult, "Oculus.Platform", "LaunchResult");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.LaunchResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct LaunchResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LaunchResult
    constexpr LaunchResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x6B6C98
    // static field const value: static public Oculus.Platform.LaunchResult Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.LaunchResult Unknown
    static ::Oculus::Platform::LaunchResult _get_Unknown();
    // Set static field: static public Oculus.Platform.LaunchResult Unknown
    static void _set_Unknown(::Oculus::Platform::LaunchResult value);
    // [DescriptionAttribute] Offset: 0x6B6CD0
    // static field const value: static public Oculus.Platform.LaunchResult Success
    static constexpr const int Success = 1;
    // Get static field: static public Oculus.Platform.LaunchResult Success
    static ::Oculus::Platform::LaunchResult _get_Success();
    // Set static field: static public Oculus.Platform.LaunchResult Success
    static void _set_Success(::Oculus::Platform::LaunchResult value);
    // [DescriptionAttribute] Offset: 0x6B6D08
    // static field const value: static public Oculus.Platform.LaunchResult FailedRoomFull
    static constexpr const int FailedRoomFull = 2;
    // Get static field: static public Oculus.Platform.LaunchResult FailedRoomFull
    static ::Oculus::Platform::LaunchResult _get_FailedRoomFull();
    // Set static field: static public Oculus.Platform.LaunchResult FailedRoomFull
    static void _set_FailedRoomFull(::Oculus::Platform::LaunchResult value);
    // [DescriptionAttribute] Offset: 0x6B6D40
    // static field const value: static public Oculus.Platform.LaunchResult FailedGameAlreadyStarted
    static constexpr const int FailedGameAlreadyStarted = 3;
    // Get static field: static public Oculus.Platform.LaunchResult FailedGameAlreadyStarted
    static ::Oculus::Platform::LaunchResult _get_FailedGameAlreadyStarted();
    // Set static field: static public Oculus.Platform.LaunchResult FailedGameAlreadyStarted
    static void _set_FailedGameAlreadyStarted(::Oculus::Platform::LaunchResult value);
    // [DescriptionAttribute] Offset: 0x6B6D78
    // static field const value: static public Oculus.Platform.LaunchResult FailedRoomNotFound
    static constexpr const int FailedRoomNotFound = 4;
    // Get static field: static public Oculus.Platform.LaunchResult FailedRoomNotFound
    static ::Oculus::Platform::LaunchResult _get_FailedRoomNotFound();
    // Set static field: static public Oculus.Platform.LaunchResult FailedRoomNotFound
    static void _set_FailedRoomNotFound(::Oculus::Platform::LaunchResult value);
    // [DescriptionAttribute] Offset: 0x6B6DB0
    // static field const value: static public Oculus.Platform.LaunchResult FailedUserDeclined
    static constexpr const int FailedUserDeclined = 5;
    // Get static field: static public Oculus.Platform.LaunchResult FailedUserDeclined
    static ::Oculus::Platform::LaunchResult _get_FailedUserDeclined();
    // Set static field: static public Oculus.Platform.LaunchResult FailedUserDeclined
    static void _set_FailedUserDeclined(::Oculus::Platform::LaunchResult value);
    // [DescriptionAttribute] Offset: 0x6B6DE8
    // static field const value: static public Oculus.Platform.LaunchResult FailedOtherReason
    static constexpr const int FailedOtherReason = 6;
    // Get static field: static public Oculus.Platform.LaunchResult FailedOtherReason
    static ::Oculus::Platform::LaunchResult _get_FailedOtherReason();
    // Set static field: static public Oculus.Platform.LaunchResult FailedOtherReason
    static void _set_FailedOtherReason(::Oculus::Platform::LaunchResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Oculus.Platform.LaunchResult
  #pragma pack(pop)
  static check_size<sizeof(LaunchResult), 0 + sizeof(int)> __Oculus_Platform_LaunchResultSizeCheck;
  static_assert(sizeof(LaunchResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
