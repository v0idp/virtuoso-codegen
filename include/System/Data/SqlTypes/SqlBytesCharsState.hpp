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
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlBytesCharsState
  struct SqlBytesCharsState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlBytesCharsState, "System.Data.SqlTypes", "SqlBytesCharsState");
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.SqlTypes.SqlBytesCharsState
  // [TokenAttribute] Offset: FFFFFFFF
  struct SqlBytesCharsState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SqlBytesCharsState
    constexpr SqlBytesCharsState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.SqlTypes.SqlBytesCharsState Null
    static constexpr const int Null = 0;
    // Get static field: static public System.Data.SqlTypes.SqlBytesCharsState Null
    static ::System::Data::SqlTypes::SqlBytesCharsState _get_Null();
    // Set static field: static public System.Data.SqlTypes.SqlBytesCharsState Null
    static void _set_Null(::System::Data::SqlTypes::SqlBytesCharsState value);
    // static field const value: static public System.Data.SqlTypes.SqlBytesCharsState Buffer
    static constexpr const int Buffer = 1;
    // Get static field: static public System.Data.SqlTypes.SqlBytesCharsState Buffer
    static ::System::Data::SqlTypes::SqlBytesCharsState _get_Buffer();
    // Set static field: static public System.Data.SqlTypes.SqlBytesCharsState Buffer
    static void _set_Buffer(::System::Data::SqlTypes::SqlBytesCharsState value);
    // static field const value: static public System.Data.SqlTypes.SqlBytesCharsState Stream
    static constexpr const int Stream = 3;
    // Get static field: static public System.Data.SqlTypes.SqlBytesCharsState Stream
    static ::System::Data::SqlTypes::SqlBytesCharsState _get_Stream();
    // Set static field: static public System.Data.SqlTypes.SqlBytesCharsState Stream
    static void _set_Stream(::System::Data::SqlTypes::SqlBytesCharsState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Data.SqlTypes.SqlBytesCharsState
  #pragma pack(pop)
  static check_size<sizeof(SqlBytesCharsState), 0 + sizeof(int)> __System_Data_SqlTypes_SqlBytesCharsStateSizeCheck;
  static_assert(sizeof(SqlBytesCharsState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
