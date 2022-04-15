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
  // Forward declaring type: Tokens
  struct Tokens;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Tokens, "System.Data", "Tokens");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Tokens
  // [TokenAttribute] Offset: FFFFFFFF
  struct Tokens/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Tokens
    constexpr Tokens(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.Tokens None
    static constexpr const int None = 0;
    // Get static field: static public System.Data.Tokens None
    static ::System::Data::Tokens _get_None();
    // Set static field: static public System.Data.Tokens None
    static void _set_None(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens Name
    static constexpr const int Name = 1;
    // Get static field: static public System.Data.Tokens Name
    static ::System::Data::Tokens _get_Name();
    // Set static field: static public System.Data.Tokens Name
    static void _set_Name(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens Numeric
    static constexpr const int Numeric = 2;
    // Get static field: static public System.Data.Tokens Numeric
    static ::System::Data::Tokens _get_Numeric();
    // Set static field: static public System.Data.Tokens Numeric
    static void _set_Numeric(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens Decimal
    static constexpr const int Decimal = 3;
    // Get static field: static public System.Data.Tokens Decimal
    static ::System::Data::Tokens _get_Decimal();
    // Set static field: static public System.Data.Tokens Decimal
    static void _set_Decimal(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens Float
    static constexpr const int Float = 4;
    // Get static field: static public System.Data.Tokens Float
    static ::System::Data::Tokens _get_Float();
    // Set static field: static public System.Data.Tokens Float
    static void _set_Float(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens BinaryConst
    static constexpr const int BinaryConst = 5;
    // Get static field: static public System.Data.Tokens BinaryConst
    static ::System::Data::Tokens _get_BinaryConst();
    // Set static field: static public System.Data.Tokens BinaryConst
    static void _set_BinaryConst(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens StringConst
    static constexpr const int StringConst = 6;
    // Get static field: static public System.Data.Tokens StringConst
    static ::System::Data::Tokens _get_StringConst();
    // Set static field: static public System.Data.Tokens StringConst
    static void _set_StringConst(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens Date
    static constexpr const int Date = 7;
    // Get static field: static public System.Data.Tokens Date
    static ::System::Data::Tokens _get_Date();
    // Set static field: static public System.Data.Tokens Date
    static void _set_Date(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens ListSeparator
    static constexpr const int ListSeparator = 8;
    // Get static field: static public System.Data.Tokens ListSeparator
    static ::System::Data::Tokens _get_ListSeparator();
    // Set static field: static public System.Data.Tokens ListSeparator
    static void _set_ListSeparator(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens LeftParen
    static constexpr const int LeftParen = 9;
    // Get static field: static public System.Data.Tokens LeftParen
    static ::System::Data::Tokens _get_LeftParen();
    // Set static field: static public System.Data.Tokens LeftParen
    static void _set_LeftParen(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens RightParen
    static constexpr const int RightParen = 10;
    // Get static field: static public System.Data.Tokens RightParen
    static ::System::Data::Tokens _get_RightParen();
    // Set static field: static public System.Data.Tokens RightParen
    static void _set_RightParen(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens ZeroOp
    static constexpr const int ZeroOp = 11;
    // Get static field: static public System.Data.Tokens ZeroOp
    static ::System::Data::Tokens _get_ZeroOp();
    // Set static field: static public System.Data.Tokens ZeroOp
    static void _set_ZeroOp(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens UnaryOp
    static constexpr const int UnaryOp = 12;
    // Get static field: static public System.Data.Tokens UnaryOp
    static ::System::Data::Tokens _get_UnaryOp();
    // Set static field: static public System.Data.Tokens UnaryOp
    static void _set_UnaryOp(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens BinaryOp
    static constexpr const int BinaryOp = 13;
    // Get static field: static public System.Data.Tokens BinaryOp
    static ::System::Data::Tokens _get_BinaryOp();
    // Set static field: static public System.Data.Tokens BinaryOp
    static void _set_BinaryOp(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens Child
    static constexpr const int Child = 14;
    // Get static field: static public System.Data.Tokens Child
    static ::System::Data::Tokens _get_Child();
    // Set static field: static public System.Data.Tokens Child
    static void _set_Child(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens Parent
    static constexpr const int Parent = 15;
    // Get static field: static public System.Data.Tokens Parent
    static ::System::Data::Tokens _get_Parent();
    // Set static field: static public System.Data.Tokens Parent
    static void _set_Parent(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens Dot
    static constexpr const int Dot = 16;
    // Get static field: static public System.Data.Tokens Dot
    static ::System::Data::Tokens _get_Dot();
    // Set static field: static public System.Data.Tokens Dot
    static void _set_Dot(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens Unknown
    static constexpr const int Unknown = 17;
    // Get static field: static public System.Data.Tokens Unknown
    static ::System::Data::Tokens _get_Unknown();
    // Set static field: static public System.Data.Tokens Unknown
    static void _set_Unknown(::System::Data::Tokens value);
    // static field const value: static public System.Data.Tokens EOS
    static constexpr const int EOS = 18;
    // Get static field: static public System.Data.Tokens EOS
    static ::System::Data::Tokens _get_EOS();
    // Set static field: static public System.Data.Tokens EOS
    static void _set_EOS(::System::Data::Tokens value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Data.Tokens
  #pragma pack(pop)
  static check_size<sizeof(Tokens), 0 + sizeof(int)> __System_Data_TokensSizeCheck;
  static_assert(sizeof(Tokens) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
