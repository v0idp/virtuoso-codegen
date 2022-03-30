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
// Type namespace: System
namespace System {
  // Forward declaring type: UInt32Enum
  struct UInt32Enum;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::UInt32Enum, "System", "UInt32Enum");
// Type namespace: System
namespace System {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.UInt32Enum
  // [TokenAttribute] Offset: FFFFFFFF
  struct UInt32Enum/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x10
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: UInt32Enum
    constexpr UInt32Enum(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // Get instance field reference: public System.UInt32 value__
    uint& dyn_value__();
  }; // System.UInt32Enum
  #pragma pack(pop)
  static check_size<sizeof(UInt32Enum), 16 + sizeof(uint)> __System_UInt32EnumSizeCheck;
  static_assert(sizeof(UInt32Enum) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"