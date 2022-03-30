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
  // Forward declaring type: ChallengeCreationType
  struct ChallengeCreationType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeCreationType, "Oculus.Platform", "ChallengeCreationType");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.ChallengeCreationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ChallengeCreationType/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: ChallengeCreationType
    constexpr ChallengeCreationType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x5A24FC
    // static field const value: static public Oculus.Platform.ChallengeCreationType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.ChallengeCreationType Unknown
    static ::Oculus::Platform::ChallengeCreationType _get_Unknown();
    // Set static field: static public Oculus.Platform.ChallengeCreationType Unknown
    static void _set_Unknown(::Oculus::Platform::ChallengeCreationType value);
    // [DescriptionAttribute] Offset: 0x5A2534
    // static field const value: static public Oculus.Platform.ChallengeCreationType UserCreated
    static constexpr const int UserCreated = 1;
    // Get static field: static public Oculus.Platform.ChallengeCreationType UserCreated
    static ::Oculus::Platform::ChallengeCreationType _get_UserCreated();
    // Set static field: static public Oculus.Platform.ChallengeCreationType UserCreated
    static void _set_UserCreated(::Oculus::Platform::ChallengeCreationType value);
    // [DescriptionAttribute] Offset: 0x5A256C
    // static field const value: static public Oculus.Platform.ChallengeCreationType DeveloperCreated
    static constexpr const int DeveloperCreated = 2;
    // Get static field: static public Oculus.Platform.ChallengeCreationType DeveloperCreated
    static ::Oculus::Platform::ChallengeCreationType _get_DeveloperCreated();
    // Set static field: static public Oculus.Platform.ChallengeCreationType DeveloperCreated
    static void _set_DeveloperCreated(::Oculus::Platform::ChallengeCreationType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.ChallengeCreationType
  #pragma pack(pop)
  static check_size<sizeof(ChallengeCreationType), 16 + sizeof(int)> __Oculus_Platform_ChallengeCreationTypeSizeCheck;
  static_assert(sizeof(ChallengeCreationType) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
