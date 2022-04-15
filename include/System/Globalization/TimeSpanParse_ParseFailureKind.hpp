// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.TimeSpanParse
#include "System/Globalization/TimeSpanParse.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse::ParseFailureKind, "System.Globalization", "TimeSpanParse/ParseFailureKind");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeSpanParse::ParseFailureKind/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParseFailureKind
    constexpr ParseFailureKind(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind None
    static constexpr const int None = 0;
    // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind None
    static ::System::Globalization::TimeSpanParse::ParseFailureKind _get_None();
    // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind None
    static void _set_None(::System::Globalization::TimeSpanParse::ParseFailureKind value);
    // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind ArgumentNull
    static constexpr const int ArgumentNull = 1;
    // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind ArgumentNull
    static ::System::Globalization::TimeSpanParse::ParseFailureKind _get_ArgumentNull();
    // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind ArgumentNull
    static void _set_ArgumentNull(::System::Globalization::TimeSpanParse::ParseFailureKind value);
    // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind Format
    static constexpr const int Format = 2;
    // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind Format
    static ::System::Globalization::TimeSpanParse::ParseFailureKind _get_Format();
    // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind Format
    static void _set_Format(::System::Globalization::TimeSpanParse::ParseFailureKind value);
    // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind FormatWithParameter
    static constexpr const int FormatWithParameter = 3;
    // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind FormatWithParameter
    static ::System::Globalization::TimeSpanParse::ParseFailureKind _get_FormatWithParameter();
    // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind FormatWithParameter
    static void _set_FormatWithParameter(::System::Globalization::TimeSpanParse::ParseFailureKind value);
    // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind Overflow
    static constexpr const int Overflow = 4;
    // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind Overflow
    static ::System::Globalization::TimeSpanParse::ParseFailureKind _get_Overflow();
    // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind Overflow
    static void _set_Overflow(::System::Globalization::TimeSpanParse::ParseFailureKind value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind
  #pragma pack(pop)
  static check_size<sizeof(TimeSpanParse::ParseFailureKind), 0 + sizeof(int)> __System_Globalization_TimeSpanParse_ParseFailureKindSizeCheck;
  static_assert(sizeof(TimeSpanParse::ParseFailureKind) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
