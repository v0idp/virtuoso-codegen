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
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: MemberBindingType
  struct MemberBindingType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MemberBindingType, "System.Linq.Expressions", "MemberBindingType");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.MemberBindingType
  // [TokenAttribute] Offset: FFFFFFFF
  struct MemberBindingType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MemberBindingType
    constexpr MemberBindingType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Linq.Expressions.MemberBindingType Assignment
    static constexpr const int Assignment = 0;
    // Get static field: static public System.Linq.Expressions.MemberBindingType Assignment
    static ::System::Linq::Expressions::MemberBindingType _get_Assignment();
    // Set static field: static public System.Linq.Expressions.MemberBindingType Assignment
    static void _set_Assignment(::System::Linq::Expressions::MemberBindingType value);
    // static field const value: static public System.Linq.Expressions.MemberBindingType MemberBinding
    static constexpr const int MemberBinding = 1;
    // Get static field: static public System.Linq.Expressions.MemberBindingType MemberBinding
    static ::System::Linq::Expressions::MemberBindingType _get_MemberBinding();
    // Set static field: static public System.Linq.Expressions.MemberBindingType MemberBinding
    static void _set_MemberBinding(::System::Linq::Expressions::MemberBindingType value);
    // static field const value: static public System.Linq.Expressions.MemberBindingType ListBinding
    static constexpr const int ListBinding = 2;
    // Get static field: static public System.Linq.Expressions.MemberBindingType ListBinding
    static ::System::Linq::Expressions::MemberBindingType _get_ListBinding();
    // Set static field: static public System.Linq.Expressions.MemberBindingType ListBinding
    static void _set_ListBinding(::System::Linq::Expressions::MemberBindingType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Linq.Expressions.MemberBindingType
  #pragma pack(pop)
  static check_size<sizeof(MemberBindingType), 0 + sizeof(int)> __System_Linq_Expressions_MemberBindingTypeSizeCheck;
  static_assert(sizeof(MemberBindingType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
