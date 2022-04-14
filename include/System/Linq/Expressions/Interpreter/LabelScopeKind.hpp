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
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LabelScopeKind
  struct LabelScopeKind;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LabelScopeKind, "System.Linq.Expressions.Interpreter", "LabelScopeKind");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LabelScopeKind
  // [TokenAttribute] Offset: FFFFFFFF
  struct LabelScopeKind/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LabelScopeKind
    constexpr LabelScopeKind(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Linq.Expressions.Interpreter.LabelScopeKind Statement
    static constexpr const int Statement = 0;
    // Get static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Statement
    static ::System::Linq::Expressions::Interpreter::LabelScopeKind _get_Statement();
    // Set static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Statement
    static void _set_Statement(::System::Linq::Expressions::Interpreter::LabelScopeKind value);
    // static field const value: static public System.Linq.Expressions.Interpreter.LabelScopeKind Block
    static constexpr const int Block = 1;
    // Get static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Block
    static ::System::Linq::Expressions::Interpreter::LabelScopeKind _get_Block();
    // Set static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Block
    static void _set_Block(::System::Linq::Expressions::Interpreter::LabelScopeKind value);
    // static field const value: static public System.Linq.Expressions.Interpreter.LabelScopeKind Switch
    static constexpr const int Switch = 2;
    // Get static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Switch
    static ::System::Linq::Expressions::Interpreter::LabelScopeKind _get_Switch();
    // Set static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Switch
    static void _set_Switch(::System::Linq::Expressions::Interpreter::LabelScopeKind value);
    // static field const value: static public System.Linq.Expressions.Interpreter.LabelScopeKind Lambda
    static constexpr const int Lambda = 3;
    // Get static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Lambda
    static ::System::Linq::Expressions::Interpreter::LabelScopeKind _get_Lambda();
    // Set static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Lambda
    static void _set_Lambda(::System::Linq::Expressions::Interpreter::LabelScopeKind value);
    // static field const value: static public System.Linq.Expressions.Interpreter.LabelScopeKind Try
    static constexpr const int Try = 4;
    // Get static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Try
    static ::System::Linq::Expressions::Interpreter::LabelScopeKind _get_Try();
    // Set static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Try
    static void _set_Try(::System::Linq::Expressions::Interpreter::LabelScopeKind value);
    // static field const value: static public System.Linq.Expressions.Interpreter.LabelScopeKind Catch
    static constexpr const int Catch = 5;
    // Get static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Catch
    static ::System::Linq::Expressions::Interpreter::LabelScopeKind _get_Catch();
    // Set static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Catch
    static void _set_Catch(::System::Linq::Expressions::Interpreter::LabelScopeKind value);
    // static field const value: static public System.Linq.Expressions.Interpreter.LabelScopeKind Finally
    static constexpr const int Finally = 6;
    // Get static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Finally
    static ::System::Linq::Expressions::Interpreter::LabelScopeKind _get_Finally();
    // Set static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Finally
    static void _set_Finally(::System::Linq::Expressions::Interpreter::LabelScopeKind value);
    // static field const value: static public System.Linq.Expressions.Interpreter.LabelScopeKind Filter
    static constexpr const int Filter = 7;
    // Get static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Filter
    static ::System::Linq::Expressions::Interpreter::LabelScopeKind _get_Filter();
    // Set static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Filter
    static void _set_Filter(::System::Linq::Expressions::Interpreter::LabelScopeKind value);
    // static field const value: static public System.Linq.Expressions.Interpreter.LabelScopeKind Expression
    static constexpr const int Expression = 8;
    // Get static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Expression
    static ::System::Linq::Expressions::Interpreter::LabelScopeKind _get_Expression();
    // Set static field: static public System.Linq.Expressions.Interpreter.LabelScopeKind Expression
    static void _set_Expression(::System::Linq::Expressions::Interpreter::LabelScopeKind value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Linq.Expressions.Interpreter.LabelScopeKind
  #pragma pack(pop)
  static check_size<sizeof(LabelScopeKind), 0 + sizeof(int)> __System_Linq_Expressions_Interpreter_LabelScopeKindSizeCheck;
  static_assert(sizeof(LabelScopeKind) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
