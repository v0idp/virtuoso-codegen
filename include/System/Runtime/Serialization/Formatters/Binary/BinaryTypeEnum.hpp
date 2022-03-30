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
  // Forward declaring type: BinaryTypeEnum
  struct BinaryTypeEnum;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
  // [TokenAttribute] Offset: FFFFFFFF
  struct BinaryTypeEnum/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: BinaryTypeEnum
    constexpr BinaryTypeEnum(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum Primitive
    static constexpr const int Primitive = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum Primitive
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum _get_Primitive();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum Primitive
    static void _set_Primitive(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum String
    static constexpr const int String = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum String
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum _get_String();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum String
    static void _set_String(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum Object
    static constexpr const int Object = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum Object
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum _get_Object();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum Object
    static void _set_Object(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum ObjectUrt
    static constexpr const int ObjectUrt = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum ObjectUrt
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum _get_ObjectUrt();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum ObjectUrt
    static void _set_ObjectUrt(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum ObjectUser
    static constexpr const int ObjectUser = 4;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum ObjectUser
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum _get_ObjectUser();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum ObjectUser
    static void _set_ObjectUser(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum ObjectArray
    static constexpr const int ObjectArray = 5;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum ObjectArray
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum _get_ObjectArray();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum ObjectArray
    static void _set_ObjectArray(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum StringArray
    static constexpr const int StringArray = 6;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum StringArray
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum _get_StringArray();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum StringArray
    static void _set_StringArray(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum PrimitiveArray
    static constexpr const int PrimitiveArray = 7;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum PrimitiveArray
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum _get_PrimitiveArray();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum PrimitiveArray
    static void _set_PrimitiveArray(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
  #pragma pack(pop)
  static check_size<sizeof(BinaryTypeEnum), 16 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_BinaryTypeEnumSizeCheck;
  static_assert(sizeof(BinaryTypeEnum) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
