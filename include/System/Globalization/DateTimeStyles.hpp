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
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeStyles
  struct DateTimeStyles;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DateTimeStyles, "System.Globalization", "DateTimeStyles");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.DateTimeStyles
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 683848
  // [FlagsAttribute] Offset: FFFFFFFF
  struct DateTimeStyles/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DateTimeStyles
    constexpr DateTimeStyles(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.DateTimeStyles None
    static constexpr const int None = 0;
    // Get static field: static public System.Globalization.DateTimeStyles None
    static ::System::Globalization::DateTimeStyles _get_None();
    // Set static field: static public System.Globalization.DateTimeStyles None
    static void _set_None(::System::Globalization::DateTimeStyles value);
    // static field const value: static public System.Globalization.DateTimeStyles AllowLeadingWhite
    static constexpr const int AllowLeadingWhite = 1;
    // Get static field: static public System.Globalization.DateTimeStyles AllowLeadingWhite
    static ::System::Globalization::DateTimeStyles _get_AllowLeadingWhite();
    // Set static field: static public System.Globalization.DateTimeStyles AllowLeadingWhite
    static void _set_AllowLeadingWhite(::System::Globalization::DateTimeStyles value);
    // static field const value: static public System.Globalization.DateTimeStyles AllowTrailingWhite
    static constexpr const int AllowTrailingWhite = 2;
    // Get static field: static public System.Globalization.DateTimeStyles AllowTrailingWhite
    static ::System::Globalization::DateTimeStyles _get_AllowTrailingWhite();
    // Set static field: static public System.Globalization.DateTimeStyles AllowTrailingWhite
    static void _set_AllowTrailingWhite(::System::Globalization::DateTimeStyles value);
    // static field const value: static public System.Globalization.DateTimeStyles AllowInnerWhite
    static constexpr const int AllowInnerWhite = 4;
    // Get static field: static public System.Globalization.DateTimeStyles AllowInnerWhite
    static ::System::Globalization::DateTimeStyles _get_AllowInnerWhite();
    // Set static field: static public System.Globalization.DateTimeStyles AllowInnerWhite
    static void _set_AllowInnerWhite(::System::Globalization::DateTimeStyles value);
    // static field const value: static public System.Globalization.DateTimeStyles AllowWhiteSpaces
    static constexpr const int AllowWhiteSpaces = 7;
    // Get static field: static public System.Globalization.DateTimeStyles AllowWhiteSpaces
    static ::System::Globalization::DateTimeStyles _get_AllowWhiteSpaces();
    // Set static field: static public System.Globalization.DateTimeStyles AllowWhiteSpaces
    static void _set_AllowWhiteSpaces(::System::Globalization::DateTimeStyles value);
    // static field const value: static public System.Globalization.DateTimeStyles NoCurrentDateDefault
    static constexpr const int NoCurrentDateDefault = 8;
    // Get static field: static public System.Globalization.DateTimeStyles NoCurrentDateDefault
    static ::System::Globalization::DateTimeStyles _get_NoCurrentDateDefault();
    // Set static field: static public System.Globalization.DateTimeStyles NoCurrentDateDefault
    static void _set_NoCurrentDateDefault(::System::Globalization::DateTimeStyles value);
    // static field const value: static public System.Globalization.DateTimeStyles AdjustToUniversal
    static constexpr const int AdjustToUniversal = 16;
    // Get static field: static public System.Globalization.DateTimeStyles AdjustToUniversal
    static ::System::Globalization::DateTimeStyles _get_AdjustToUniversal();
    // Set static field: static public System.Globalization.DateTimeStyles AdjustToUniversal
    static void _set_AdjustToUniversal(::System::Globalization::DateTimeStyles value);
    // static field const value: static public System.Globalization.DateTimeStyles AssumeLocal
    static constexpr const int AssumeLocal = 32;
    // Get static field: static public System.Globalization.DateTimeStyles AssumeLocal
    static ::System::Globalization::DateTimeStyles _get_AssumeLocal();
    // Set static field: static public System.Globalization.DateTimeStyles AssumeLocal
    static void _set_AssumeLocal(::System::Globalization::DateTimeStyles value);
    // static field const value: static public System.Globalization.DateTimeStyles AssumeUniversal
    static constexpr const int AssumeUniversal = 64;
    // Get static field: static public System.Globalization.DateTimeStyles AssumeUniversal
    static ::System::Globalization::DateTimeStyles _get_AssumeUniversal();
    // Set static field: static public System.Globalization.DateTimeStyles AssumeUniversal
    static void _set_AssumeUniversal(::System::Globalization::DateTimeStyles value);
    // static field const value: static public System.Globalization.DateTimeStyles RoundtripKind
    static constexpr const int RoundtripKind = 128;
    // Get static field: static public System.Globalization.DateTimeStyles RoundtripKind
    static ::System::Globalization::DateTimeStyles _get_RoundtripKind();
    // Set static field: static public System.Globalization.DateTimeStyles RoundtripKind
    static void _set_RoundtripKind(::System::Globalization::DateTimeStyles value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Globalization.DateTimeStyles
  #pragma pack(pop)
  static check_size<sizeof(DateTimeStyles), 0 + sizeof(int)> __System_Globalization_DateTimeStylesSizeCheck;
  static_assert(sizeof(DateTimeStyles) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
