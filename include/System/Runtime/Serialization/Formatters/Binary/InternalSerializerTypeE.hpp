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
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: InternalSerializerTypeE
  struct InternalSerializerTypeE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalSerializerTypeE");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE
  // [TokenAttribute] Offset: FFFFFFFF
  struct InternalSerializerTypeE/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: InternalSerializerTypeE
    constexpr InternalSerializerTypeE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE Soap
    static constexpr const int Soap = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE Soap
    static ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE _get_Soap();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE Soap
    static void _set_Soap(::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE Binary
    static constexpr const int Binary = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE Binary
    static ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE _get_Binary();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE Binary
    static void _set_Binary(::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE
  #pragma pack(pop)
  static check_size<sizeof(InternalSerializerTypeE), 16 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_InternalSerializerTypeESizeCheck;
  static_assert(sizeof(InternalSerializerTypeE) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"