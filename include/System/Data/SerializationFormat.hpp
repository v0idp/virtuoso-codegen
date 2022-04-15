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
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: SerializationFormat
  struct SerializationFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SerializationFormat, "System.Data", "SerializationFormat");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.SerializationFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct SerializationFormat/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SerializationFormat
    constexpr SerializationFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.SerializationFormat Xml
    static constexpr const int Xml = 0;
    // Get static field: static public System.Data.SerializationFormat Xml
    static ::System::Data::SerializationFormat _get_Xml();
    // Set static field: static public System.Data.SerializationFormat Xml
    static void _set_Xml(::System::Data::SerializationFormat value);
    // static field const value: static public System.Data.SerializationFormat Binary
    static constexpr const int Binary = 1;
    // Get static field: static public System.Data.SerializationFormat Binary
    static ::System::Data::SerializationFormat _get_Binary();
    // Set static field: static public System.Data.SerializationFormat Binary
    static void _set_Binary(::System::Data::SerializationFormat value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Data.SerializationFormat
  #pragma pack(pop)
  static check_size<sizeof(SerializationFormat), 0 + sizeof(int)> __System_Data_SerializationFormatSizeCheck;
  static_assert(sizeof(SerializationFormat) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
