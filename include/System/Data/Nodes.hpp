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
  // Forward declaring type: Nodes
  struct Nodes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Nodes, "System.Data", "Nodes");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Nodes
  // [TokenAttribute] Offset: FFFFFFFF
  struct Nodes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Nodes
    constexpr Nodes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.Nodes Noop
    static constexpr const int Noop = 0;
    // Get static field: static public System.Data.Nodes Noop
    static ::System::Data::Nodes _get_Noop();
    // Set static field: static public System.Data.Nodes Noop
    static void _set_Noop(::System::Data::Nodes value);
    // static field const value: static public System.Data.Nodes Unop
    static constexpr const int Unop = 1;
    // Get static field: static public System.Data.Nodes Unop
    static ::System::Data::Nodes _get_Unop();
    // Set static field: static public System.Data.Nodes Unop
    static void _set_Unop(::System::Data::Nodes value);
    // static field const value: static public System.Data.Nodes UnopSpec
    static constexpr const int UnopSpec = 2;
    // Get static field: static public System.Data.Nodes UnopSpec
    static ::System::Data::Nodes _get_UnopSpec();
    // Set static field: static public System.Data.Nodes UnopSpec
    static void _set_UnopSpec(::System::Data::Nodes value);
    // static field const value: static public System.Data.Nodes Binop
    static constexpr const int Binop = 3;
    // Get static field: static public System.Data.Nodes Binop
    static ::System::Data::Nodes _get_Binop();
    // Set static field: static public System.Data.Nodes Binop
    static void _set_Binop(::System::Data::Nodes value);
    // static field const value: static public System.Data.Nodes BinopSpec
    static constexpr const int BinopSpec = 4;
    // Get static field: static public System.Data.Nodes BinopSpec
    static ::System::Data::Nodes _get_BinopSpec();
    // Set static field: static public System.Data.Nodes BinopSpec
    static void _set_BinopSpec(::System::Data::Nodes value);
    // static field const value: static public System.Data.Nodes Zop
    static constexpr const int Zop = 5;
    // Get static field: static public System.Data.Nodes Zop
    static ::System::Data::Nodes _get_Zop();
    // Set static field: static public System.Data.Nodes Zop
    static void _set_Zop(::System::Data::Nodes value);
    // static field const value: static public System.Data.Nodes Call
    static constexpr const int Call = 6;
    // Get static field: static public System.Data.Nodes Call
    static ::System::Data::Nodes _get_Call();
    // Set static field: static public System.Data.Nodes Call
    static void _set_Call(::System::Data::Nodes value);
    // static field const value: static public System.Data.Nodes Const
    static constexpr const int Const = 7;
    // Get static field: static public System.Data.Nodes Const
    static ::System::Data::Nodes _get_Const();
    // Set static field: static public System.Data.Nodes Const
    static void _set_Const(::System::Data::Nodes value);
    // static field const value: static public System.Data.Nodes Name
    static constexpr const int Name = 8;
    // Get static field: static public System.Data.Nodes Name
    static ::System::Data::Nodes _get_Name();
    // Set static field: static public System.Data.Nodes Name
    static void _set_Name(::System::Data::Nodes value);
    // static field const value: static public System.Data.Nodes Paren
    static constexpr const int Paren = 9;
    // Get static field: static public System.Data.Nodes Paren
    static ::System::Data::Nodes _get_Paren();
    // Set static field: static public System.Data.Nodes Paren
    static void _set_Paren(::System::Data::Nodes value);
    // static field const value: static public System.Data.Nodes Conv
    static constexpr const int Conv = 10;
    // Get static field: static public System.Data.Nodes Conv
    static ::System::Data::Nodes _get_Conv();
    // Set static field: static public System.Data.Nodes Conv
    static void _set_Conv(::System::Data::Nodes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Data.Nodes
  #pragma pack(pop)
  static check_size<sizeof(Nodes), 0 + sizeof(int)> __System_Data_NodesSizeCheck;
  static_assert(sizeof(Nodes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
