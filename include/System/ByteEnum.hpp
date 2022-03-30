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
  // Forward declaring type: ByteEnum
  struct ByteEnum;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ByteEnum, "System", "ByteEnum");
// Type namespace: System
namespace System {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.ByteEnum
  // [TokenAttribute] Offset: FFFFFFFF
  struct ByteEnum/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x10
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ByteEnum
    constexpr ByteEnum(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // System.ByteEnum
  #pragma pack(pop)
  static check_size<sizeof(ByteEnum), 16 + sizeof(uint8_t)> __System_ByteEnumSizeCheck;
  static_assert(sizeof(ByteEnum) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
