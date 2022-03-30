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
// Type namespace: Facebook.WitAi.Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: JSONBinaryTag
  struct JSONBinaryTag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Lib::JSONBinaryTag, "Facebook.WitAi.Lib", "JSONBinaryTag");
// Type namespace: Facebook.WitAi.Lib
namespace Facebook::WitAi::Lib {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Lib.JSONBinaryTag
  // [TokenAttribute] Offset: FFFFFFFF
  struct JSONBinaryTag/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: JSONBinaryTag
    constexpr JSONBinaryTag(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Facebook.WitAi.Lib.JSONBinaryTag Array
    static constexpr const int Array = 1;
    // Get static field: static public Facebook.WitAi.Lib.JSONBinaryTag Array
    static ::Facebook::WitAi::Lib::JSONBinaryTag _get_Array();
    // Set static field: static public Facebook.WitAi.Lib.JSONBinaryTag Array
    static void _set_Array(::Facebook::WitAi::Lib::JSONBinaryTag value);
    // static field const value: static public Facebook.WitAi.Lib.JSONBinaryTag Class
    static constexpr const int Class = 2;
    // Get static field: static public Facebook.WitAi.Lib.JSONBinaryTag Class
    static ::Facebook::WitAi::Lib::JSONBinaryTag _get_Class();
    // Set static field: static public Facebook.WitAi.Lib.JSONBinaryTag Class
    static void _set_Class(::Facebook::WitAi::Lib::JSONBinaryTag value);
    // static field const value: static public Facebook.WitAi.Lib.JSONBinaryTag Value
    static constexpr const int Value = 3;
    // Get static field: static public Facebook.WitAi.Lib.JSONBinaryTag Value
    static ::Facebook::WitAi::Lib::JSONBinaryTag _get_Value();
    // Set static field: static public Facebook.WitAi.Lib.JSONBinaryTag Value
    static void _set_Value(::Facebook::WitAi::Lib::JSONBinaryTag value);
    // static field const value: static public Facebook.WitAi.Lib.JSONBinaryTag IntValue
    static constexpr const int IntValue = 4;
    // Get static field: static public Facebook.WitAi.Lib.JSONBinaryTag IntValue
    static ::Facebook::WitAi::Lib::JSONBinaryTag _get_IntValue();
    // Set static field: static public Facebook.WitAi.Lib.JSONBinaryTag IntValue
    static void _set_IntValue(::Facebook::WitAi::Lib::JSONBinaryTag value);
    // static field const value: static public Facebook.WitAi.Lib.JSONBinaryTag DoubleValue
    static constexpr const int DoubleValue = 5;
    // Get static field: static public Facebook.WitAi.Lib.JSONBinaryTag DoubleValue
    static ::Facebook::WitAi::Lib::JSONBinaryTag _get_DoubleValue();
    // Set static field: static public Facebook.WitAi.Lib.JSONBinaryTag DoubleValue
    static void _set_DoubleValue(::Facebook::WitAi::Lib::JSONBinaryTag value);
    // static field const value: static public Facebook.WitAi.Lib.JSONBinaryTag BoolValue
    static constexpr const int BoolValue = 6;
    // Get static field: static public Facebook.WitAi.Lib.JSONBinaryTag BoolValue
    static ::Facebook::WitAi::Lib::JSONBinaryTag _get_BoolValue();
    // Set static field: static public Facebook.WitAi.Lib.JSONBinaryTag BoolValue
    static void _set_BoolValue(::Facebook::WitAi::Lib::JSONBinaryTag value);
    // static field const value: static public Facebook.WitAi.Lib.JSONBinaryTag FloatValue
    static constexpr const int FloatValue = 7;
    // Get static field: static public Facebook.WitAi.Lib.JSONBinaryTag FloatValue
    static ::Facebook::WitAi::Lib::JSONBinaryTag _get_FloatValue();
    // Set static field: static public Facebook.WitAi.Lib.JSONBinaryTag FloatValue
    static void _set_FloatValue(::Facebook::WitAi::Lib::JSONBinaryTag value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Facebook.WitAi.Lib.JSONBinaryTag
  #pragma pack(pop)
  static check_size<sizeof(JSONBinaryTag), 16 + sizeof(int)> __Facebook_WitAi_Lib_JSONBinaryTagSizeCheck;
  static_assert(sizeof(JSONBinaryTag) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
