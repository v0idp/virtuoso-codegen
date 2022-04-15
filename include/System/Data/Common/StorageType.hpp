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
// Type namespace: System.Data.Common
namespace System::Data::Common {
  // Forward declaring type: StorageType
  struct StorageType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::StorageType, "System.Data.Common", "StorageType");
// Type namespace: System.Data.Common
namespace System::Data::Common {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Common.StorageType
  // [TokenAttribute] Offset: FFFFFFFF
  struct StorageType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StorageType
    constexpr StorageType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.Common.StorageType Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.Data.Common.StorageType Empty
    static ::System::Data::Common::StorageType _get_Empty();
    // Set static field: static public System.Data.Common.StorageType Empty
    static void _set_Empty(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Object
    static constexpr const int Object = 1;
    // Get static field: static public System.Data.Common.StorageType Object
    static ::System::Data::Common::StorageType _get_Object();
    // Set static field: static public System.Data.Common.StorageType Object
    static void _set_Object(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType DBNull
    static constexpr const int DBNull = 2;
    // Get static field: static public System.Data.Common.StorageType DBNull
    static ::System::Data::Common::StorageType _get_DBNull();
    // Set static field: static public System.Data.Common.StorageType DBNull
    static void _set_DBNull(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Boolean
    static constexpr const int Boolean = 3;
    // Get static field: static public System.Data.Common.StorageType Boolean
    static ::System::Data::Common::StorageType _get_Boolean();
    // Set static field: static public System.Data.Common.StorageType Boolean
    static void _set_Boolean(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Char
    static constexpr const int Char = 4;
    // Get static field: static public System.Data.Common.StorageType Char
    static ::System::Data::Common::StorageType _get_Char();
    // Set static field: static public System.Data.Common.StorageType Char
    static void _set_Char(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SByte
    static constexpr const int SByte = 5;
    // Get static field: static public System.Data.Common.StorageType SByte
    static ::System::Data::Common::StorageType _get_SByte();
    // Set static field: static public System.Data.Common.StorageType SByte
    static void _set_SByte(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Byte
    static constexpr const int Byte = 6;
    // Get static field: static public System.Data.Common.StorageType Byte
    static ::System::Data::Common::StorageType _get_Byte();
    // Set static field: static public System.Data.Common.StorageType Byte
    static void _set_Byte(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Int16
    static constexpr const int Int16 = 7;
    // Get static field: static public System.Data.Common.StorageType Int16
    static ::System::Data::Common::StorageType _get_Int16();
    // Set static field: static public System.Data.Common.StorageType Int16
    static void _set_Int16(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType UInt16
    static constexpr const int UInt16 = 8;
    // Get static field: static public System.Data.Common.StorageType UInt16
    static ::System::Data::Common::StorageType _get_UInt16();
    // Set static field: static public System.Data.Common.StorageType UInt16
    static void _set_UInt16(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Int32
    static constexpr const int Int32 = 9;
    // Get static field: static public System.Data.Common.StorageType Int32
    static ::System::Data::Common::StorageType _get_Int32();
    // Set static field: static public System.Data.Common.StorageType Int32
    static void _set_Int32(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType UInt32
    static constexpr const int UInt32 = 10;
    // Get static field: static public System.Data.Common.StorageType UInt32
    static ::System::Data::Common::StorageType _get_UInt32();
    // Set static field: static public System.Data.Common.StorageType UInt32
    static void _set_UInt32(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Int64
    static constexpr const int Int64 = 11;
    // Get static field: static public System.Data.Common.StorageType Int64
    static ::System::Data::Common::StorageType _get_Int64();
    // Set static field: static public System.Data.Common.StorageType Int64
    static void _set_Int64(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType UInt64
    static constexpr const int UInt64 = 12;
    // Get static field: static public System.Data.Common.StorageType UInt64
    static ::System::Data::Common::StorageType _get_UInt64();
    // Set static field: static public System.Data.Common.StorageType UInt64
    static void _set_UInt64(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Single
    static constexpr const int Single = 13;
    // Get static field: static public System.Data.Common.StorageType Single
    static ::System::Data::Common::StorageType _get_Single();
    // Set static field: static public System.Data.Common.StorageType Single
    static void _set_Single(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Double
    static constexpr const int Double = 14;
    // Get static field: static public System.Data.Common.StorageType Double
    static ::System::Data::Common::StorageType _get_Double();
    // Set static field: static public System.Data.Common.StorageType Double
    static void _set_Double(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Decimal
    static constexpr const int Decimal = 15;
    // Get static field: static public System.Data.Common.StorageType Decimal
    static ::System::Data::Common::StorageType _get_Decimal();
    // Set static field: static public System.Data.Common.StorageType Decimal
    static void _set_Decimal(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType DateTime
    static constexpr const int DateTime = 16;
    // Get static field: static public System.Data.Common.StorageType DateTime
    static ::System::Data::Common::StorageType _get_DateTime();
    // Set static field: static public System.Data.Common.StorageType DateTime
    static void _set_DateTime(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType TimeSpan
    static constexpr const int TimeSpan = 17;
    // Get static field: static public System.Data.Common.StorageType TimeSpan
    static ::System::Data::Common::StorageType _get_TimeSpan();
    // Set static field: static public System.Data.Common.StorageType TimeSpan
    static void _set_TimeSpan(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType String
    static constexpr const int String = 18;
    // Get static field: static public System.Data.Common.StorageType String
    static ::System::Data::Common::StorageType _get_String();
    // Set static field: static public System.Data.Common.StorageType String
    static void _set_String(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Guid
    static constexpr const int Guid = 19;
    // Get static field: static public System.Data.Common.StorageType Guid
    static ::System::Data::Common::StorageType _get_Guid();
    // Set static field: static public System.Data.Common.StorageType Guid
    static void _set_Guid(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType ByteArray
    static constexpr const int ByteArray = 20;
    // Get static field: static public System.Data.Common.StorageType ByteArray
    static ::System::Data::Common::StorageType _get_ByteArray();
    // Set static field: static public System.Data.Common.StorageType ByteArray
    static void _set_ByteArray(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType CharArray
    static constexpr const int CharArray = 21;
    // Get static field: static public System.Data.Common.StorageType CharArray
    static ::System::Data::Common::StorageType _get_CharArray();
    // Set static field: static public System.Data.Common.StorageType CharArray
    static void _set_CharArray(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Type
    static constexpr const int Type = 22;
    // Get static field: static public System.Data.Common.StorageType Type
    static ::System::Data::Common::StorageType _get_Type();
    // Set static field: static public System.Data.Common.StorageType Type
    static void _set_Type(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType DateTimeOffset
    static constexpr const int DateTimeOffset = 23;
    // Get static field: static public System.Data.Common.StorageType DateTimeOffset
    static ::System::Data::Common::StorageType _get_DateTimeOffset();
    // Set static field: static public System.Data.Common.StorageType DateTimeOffset
    static void _set_DateTimeOffset(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType BigInteger
    static constexpr const int BigInteger = 24;
    // Get static field: static public System.Data.Common.StorageType BigInteger
    static ::System::Data::Common::StorageType _get_BigInteger();
    // Set static field: static public System.Data.Common.StorageType BigInteger
    static void _set_BigInteger(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType Uri
    static constexpr const int Uri = 25;
    // Get static field: static public System.Data.Common.StorageType Uri
    static ::System::Data::Common::StorageType _get_Uri();
    // Set static field: static public System.Data.Common.StorageType Uri
    static void _set_Uri(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlBinary
    static constexpr const int SqlBinary = 26;
    // Get static field: static public System.Data.Common.StorageType SqlBinary
    static ::System::Data::Common::StorageType _get_SqlBinary();
    // Set static field: static public System.Data.Common.StorageType SqlBinary
    static void _set_SqlBinary(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlBoolean
    static constexpr const int SqlBoolean = 27;
    // Get static field: static public System.Data.Common.StorageType SqlBoolean
    static ::System::Data::Common::StorageType _get_SqlBoolean();
    // Set static field: static public System.Data.Common.StorageType SqlBoolean
    static void _set_SqlBoolean(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlByte
    static constexpr const int SqlByte = 28;
    // Get static field: static public System.Data.Common.StorageType SqlByte
    static ::System::Data::Common::StorageType _get_SqlByte();
    // Set static field: static public System.Data.Common.StorageType SqlByte
    static void _set_SqlByte(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlBytes
    static constexpr const int SqlBytes = 29;
    // Get static field: static public System.Data.Common.StorageType SqlBytes
    static ::System::Data::Common::StorageType _get_SqlBytes();
    // Set static field: static public System.Data.Common.StorageType SqlBytes
    static void _set_SqlBytes(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlChars
    static constexpr const int SqlChars = 30;
    // Get static field: static public System.Data.Common.StorageType SqlChars
    static ::System::Data::Common::StorageType _get_SqlChars();
    // Set static field: static public System.Data.Common.StorageType SqlChars
    static void _set_SqlChars(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlDateTime
    static constexpr const int SqlDateTime = 31;
    // Get static field: static public System.Data.Common.StorageType SqlDateTime
    static ::System::Data::Common::StorageType _get_SqlDateTime();
    // Set static field: static public System.Data.Common.StorageType SqlDateTime
    static void _set_SqlDateTime(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlDecimal
    static constexpr const int SqlDecimal = 32;
    // Get static field: static public System.Data.Common.StorageType SqlDecimal
    static ::System::Data::Common::StorageType _get_SqlDecimal();
    // Set static field: static public System.Data.Common.StorageType SqlDecimal
    static void _set_SqlDecimal(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlDouble
    static constexpr const int SqlDouble = 33;
    // Get static field: static public System.Data.Common.StorageType SqlDouble
    static ::System::Data::Common::StorageType _get_SqlDouble();
    // Set static field: static public System.Data.Common.StorageType SqlDouble
    static void _set_SqlDouble(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlGuid
    static constexpr const int SqlGuid = 34;
    // Get static field: static public System.Data.Common.StorageType SqlGuid
    static ::System::Data::Common::StorageType _get_SqlGuid();
    // Set static field: static public System.Data.Common.StorageType SqlGuid
    static void _set_SqlGuid(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlInt16
    static constexpr const int SqlInt16 = 35;
    // Get static field: static public System.Data.Common.StorageType SqlInt16
    static ::System::Data::Common::StorageType _get_SqlInt16();
    // Set static field: static public System.Data.Common.StorageType SqlInt16
    static void _set_SqlInt16(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlInt32
    static constexpr const int SqlInt32 = 36;
    // Get static field: static public System.Data.Common.StorageType SqlInt32
    static ::System::Data::Common::StorageType _get_SqlInt32();
    // Set static field: static public System.Data.Common.StorageType SqlInt32
    static void _set_SqlInt32(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlInt64
    static constexpr const int SqlInt64 = 37;
    // Get static field: static public System.Data.Common.StorageType SqlInt64
    static ::System::Data::Common::StorageType _get_SqlInt64();
    // Set static field: static public System.Data.Common.StorageType SqlInt64
    static void _set_SqlInt64(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlMoney
    static constexpr const int SqlMoney = 38;
    // Get static field: static public System.Data.Common.StorageType SqlMoney
    static ::System::Data::Common::StorageType _get_SqlMoney();
    // Set static field: static public System.Data.Common.StorageType SqlMoney
    static void _set_SqlMoney(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlSingle
    static constexpr const int SqlSingle = 39;
    // Get static field: static public System.Data.Common.StorageType SqlSingle
    static ::System::Data::Common::StorageType _get_SqlSingle();
    // Set static field: static public System.Data.Common.StorageType SqlSingle
    static void _set_SqlSingle(::System::Data::Common::StorageType value);
    // static field const value: static public System.Data.Common.StorageType SqlString
    static constexpr const int SqlString = 40;
    // Get static field: static public System.Data.Common.StorageType SqlString
    static ::System::Data::Common::StorageType _get_SqlString();
    // Set static field: static public System.Data.Common.StorageType SqlString
    static void _set_SqlString(::System::Data::Common::StorageType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Data.Common.StorageType
  #pragma pack(pop)
  static check_size<sizeof(StorageType), 0 + sizeof(int)> __System_Data_Common_StorageTypeSizeCheck;
  static_assert(sizeof(StorageType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
