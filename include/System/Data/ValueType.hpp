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
  // Forward declaring type: ValueType
  struct ValueType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ValueType, "System.Data", "ValueType");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.ValueType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ValueType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ValueType
    constexpr ValueType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.ValueType Unknown
    static constexpr const int Unknown = -1;
    // Get static field: static public System.Data.ValueType Unknown
    static ::System::Data::ValueType _get_Unknown();
    // Set static field: static public System.Data.ValueType Unknown
    static void _set_Unknown(::System::Data::ValueType value);
    // static field const value: static public System.Data.ValueType Null
    static constexpr const int Null = 0;
    // Get static field: static public System.Data.ValueType Null
    static ::System::Data::ValueType _get_Null();
    // Set static field: static public System.Data.ValueType Null
    static void _set_Null(::System::Data::ValueType value);
    // static field const value: static public System.Data.ValueType Bool
    static constexpr const int Bool = 1;
    // Get static field: static public System.Data.ValueType Bool
    static ::System::Data::ValueType _get_Bool();
    // Set static field: static public System.Data.ValueType Bool
    static void _set_Bool(::System::Data::ValueType value);
    // static field const value: static public System.Data.ValueType Numeric
    static constexpr const int Numeric = 2;
    // Get static field: static public System.Data.ValueType Numeric
    static ::System::Data::ValueType _get_Numeric();
    // Set static field: static public System.Data.ValueType Numeric
    static void _set_Numeric(::System::Data::ValueType value);
    // static field const value: static public System.Data.ValueType Str
    static constexpr const int Str = 3;
    // Get static field: static public System.Data.ValueType Str
    static ::System::Data::ValueType _get_Str();
    // Set static field: static public System.Data.ValueType Str
    static void _set_Str(::System::Data::ValueType value);
    // static field const value: static public System.Data.ValueType Float
    static constexpr const int Float = 4;
    // Get static field: static public System.Data.ValueType Float
    static ::System::Data::ValueType _get_Float();
    // Set static field: static public System.Data.ValueType Float
    static void _set_Float(::System::Data::ValueType value);
    // static field const value: static public System.Data.ValueType Decimal
    static constexpr const int Decimal = 5;
    // Get static field: static public System.Data.ValueType Decimal
    static ::System::Data::ValueType _get_Decimal();
    // Set static field: static public System.Data.ValueType Decimal
    static void _set_Decimal(::System::Data::ValueType value);
    // static field const value: static public System.Data.ValueType Object
    static constexpr const int Object = 6;
    // Get static field: static public System.Data.ValueType Object
    static ::System::Data::ValueType _get_Object();
    // Set static field: static public System.Data.ValueType Object
    static void _set_Object(::System::Data::ValueType value);
    // static field const value: static public System.Data.ValueType Date
    static constexpr const int Date = 7;
    // Get static field: static public System.Data.ValueType Date
    static ::System::Data::ValueType _get_Date();
    // Set static field: static public System.Data.ValueType Date
    static void _set_Date(::System::Data::ValueType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Data.ValueType
  #pragma pack(pop)
  static check_size<sizeof(ValueType), 0 + sizeof(int)> __System_Data_ValueTypeSizeCheck;
  static_assert(sizeof(ValueType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
