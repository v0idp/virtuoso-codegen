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
  // Forward declaring type: LaunchType
  struct LaunchType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LaunchType, "Oculus.Platform", "LaunchType");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.LaunchType
  // [TokenAttribute] Offset: FFFFFFFF
  struct LaunchType/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: LaunchType
    constexpr LaunchType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x5A2C6C
    // static field const value: static public Oculus.Platform.LaunchType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.LaunchType Unknown
    static ::Oculus::Platform::LaunchType _get_Unknown();
    // Set static field: static public Oculus.Platform.LaunchType Unknown
    static void _set_Unknown(::Oculus::Platform::LaunchType value);
    // [DescriptionAttribute] Offset: 0x5A2CA4
    // static field const value: static public Oculus.Platform.LaunchType Normal
    static constexpr const int Normal = 1;
    // Get static field: static public Oculus.Platform.LaunchType Normal
    static ::Oculus::Platform::LaunchType _get_Normal();
    // Set static field: static public Oculus.Platform.LaunchType Normal
    static void _set_Normal(::Oculus::Platform::LaunchType value);
    // [DescriptionAttribute] Offset: 0x5A2CDC
    // static field const value: static public Oculus.Platform.LaunchType Invite
    static constexpr const int Invite = 2;
    // Get static field: static public Oculus.Platform.LaunchType Invite
    static ::Oculus::Platform::LaunchType _get_Invite();
    // Set static field: static public Oculus.Platform.LaunchType Invite
    static void _set_Invite(::Oculus::Platform::LaunchType value);
    // [DescriptionAttribute] Offset: 0x5A2D14
    // static field const value: static public Oculus.Platform.LaunchType Coordinated
    static constexpr const int Coordinated = 3;
    // Get static field: static public Oculus.Platform.LaunchType Coordinated
    static ::Oculus::Platform::LaunchType _get_Coordinated();
    // Set static field: static public Oculus.Platform.LaunchType Coordinated
    static void _set_Coordinated(::Oculus::Platform::LaunchType value);
    // [DescriptionAttribute] Offset: 0x5A2D4C
    // static field const value: static public Oculus.Platform.LaunchType Deeplink
    static constexpr const int Deeplink = 4;
    // Get static field: static public Oculus.Platform.LaunchType Deeplink
    static ::Oculus::Platform::LaunchType _get_Deeplink();
    // Set static field: static public Oculus.Platform.LaunchType Deeplink
    static void _set_Deeplink(::Oculus::Platform::LaunchType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.LaunchType
  #pragma pack(pop)
  static check_size<sizeof(LaunchType), 16 + sizeof(int)> __Oculus_Platform_LaunchTypeSizeCheck;
  static_assert(sizeof(LaunchType) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
