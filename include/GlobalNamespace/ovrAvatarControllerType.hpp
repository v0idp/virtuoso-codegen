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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarControllerType
  struct ovrAvatarControllerType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarControllerType, "", "ovrAvatarControllerType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ovrAvatarControllerType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarControllerType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ovrAvatarControllerType
    constexpr ovrAvatarControllerType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ovrAvatarControllerType Touch
    static constexpr const int Touch = 0;
    // Get static field: static public ovrAvatarControllerType Touch
    static ::GlobalNamespace::ovrAvatarControllerType _get_Touch();
    // Set static field: static public ovrAvatarControllerType Touch
    static void _set_Touch(::GlobalNamespace::ovrAvatarControllerType value);
    // static field const value: static public ovrAvatarControllerType Malibu
    static constexpr const int Malibu = 1;
    // Get static field: static public ovrAvatarControllerType Malibu
    static ::GlobalNamespace::ovrAvatarControllerType _get_Malibu();
    // Set static field: static public ovrAvatarControllerType Malibu
    static void _set_Malibu(::GlobalNamespace::ovrAvatarControllerType value);
    // static field const value: static public ovrAvatarControllerType Go
    static constexpr const int Go = 2;
    // Get static field: static public ovrAvatarControllerType Go
    static ::GlobalNamespace::ovrAvatarControllerType _get_Go();
    // Set static field: static public ovrAvatarControllerType Go
    static void _set_Go(::GlobalNamespace::ovrAvatarControllerType value);
    // static field const value: static public ovrAvatarControllerType Quest
    static constexpr const int Quest = 3;
    // Get static field: static public ovrAvatarControllerType Quest
    static ::GlobalNamespace::ovrAvatarControllerType _get_Quest();
    // Set static field: static public ovrAvatarControllerType Quest
    static void _set_Quest(::GlobalNamespace::ovrAvatarControllerType value);
    // static field const value: static public ovrAvatarControllerType Count
    static constexpr const int Count = 4;
    // Get static field: static public ovrAvatarControllerType Count
    static ::GlobalNamespace::ovrAvatarControllerType _get_Count();
    // Set static field: static public ovrAvatarControllerType Count
    static void _set_Count(::GlobalNamespace::ovrAvatarControllerType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // ovrAvatarControllerType
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarControllerType), 0 + sizeof(int)> __GlobalNamespace_ovrAvatarControllerTypeSizeCheck;
  static_assert(sizeof(ovrAvatarControllerType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
