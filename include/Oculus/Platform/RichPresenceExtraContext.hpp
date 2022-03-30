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
  // Forward declaring type: RichPresenceExtraContext
  struct RichPresenceExtraContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RichPresenceExtraContext, "Oculus.Platform", "RichPresenceExtraContext");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.RichPresenceExtraContext
  // [TokenAttribute] Offset: FFFFFFFF
  struct RichPresenceExtraContext/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: RichPresenceExtraContext
    constexpr RichPresenceExtraContext(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x5A4034
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext Unknown
    static ::Oculus::Platform::RichPresenceExtraContext _get_Unknown();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext Unknown
    static void _set_Unknown(::Oculus::Platform::RichPresenceExtraContext value);
    // [DescriptionAttribute] Offset: 0x5A406C
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext None
    static constexpr const int None = 1;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext None
    static ::Oculus::Platform::RichPresenceExtraContext _get_None();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext None
    static void _set_None(::Oculus::Platform::RichPresenceExtraContext value);
    // [DescriptionAttribute] Offset: 0x5A40A4
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext CurrentCapacity
    static constexpr const int CurrentCapacity = 2;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext CurrentCapacity
    static ::Oculus::Platform::RichPresenceExtraContext _get_CurrentCapacity();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext CurrentCapacity
    static void _set_CurrentCapacity(::Oculus::Platform::RichPresenceExtraContext value);
    // [DescriptionAttribute] Offset: 0x5A40DC
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext StartedAgo
    static constexpr const int StartedAgo = 3;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext StartedAgo
    static ::Oculus::Platform::RichPresenceExtraContext _get_StartedAgo();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext StartedAgo
    static void _set_StartedAgo(::Oculus::Platform::RichPresenceExtraContext value);
    // [DescriptionAttribute] Offset: 0x5A4114
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext EndingIn
    static constexpr const int EndingIn = 4;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext EndingIn
    static ::Oculus::Platform::RichPresenceExtraContext _get_EndingIn();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext EndingIn
    static void _set_EndingIn(::Oculus::Platform::RichPresenceExtraContext value);
    // [DescriptionAttribute] Offset: 0x5A414C
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext LookingForAMatch
    static constexpr const int LookingForAMatch = 5;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext LookingForAMatch
    static ::Oculus::Platform::RichPresenceExtraContext _get_LookingForAMatch();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext LookingForAMatch
    static void _set_LookingForAMatch(::Oculus::Platform::RichPresenceExtraContext value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.RichPresenceExtraContext
  #pragma pack(pop)
  static check_size<sizeof(RichPresenceExtraContext), 16 + sizeof(int)> __Oculus_Platform_RichPresenceExtraContextSizeCheck;
  static_assert(sizeof(RichPresenceExtraContext) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
