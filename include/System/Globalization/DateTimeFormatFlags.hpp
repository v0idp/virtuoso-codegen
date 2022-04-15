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
  // Forward declaring type: DateTimeFormatFlags
  struct DateTimeFormatFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DateTimeFormatFlags, "System.Globalization", "DateTimeFormatFlags");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.DateTimeFormatFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct DateTimeFormatFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DateTimeFormatFlags
    constexpr DateTimeFormatFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.DateTimeFormatFlags None
    static constexpr const int None = 0;
    // Get static field: static public System.Globalization.DateTimeFormatFlags None
    static ::System::Globalization::DateTimeFormatFlags _get_None();
    // Set static field: static public System.Globalization.DateTimeFormatFlags None
    static void _set_None(::System::Globalization::DateTimeFormatFlags value);
    // static field const value: static public System.Globalization.DateTimeFormatFlags UseGenitiveMonth
    static constexpr const int UseGenitiveMonth = 1;
    // Get static field: static public System.Globalization.DateTimeFormatFlags UseGenitiveMonth
    static ::System::Globalization::DateTimeFormatFlags _get_UseGenitiveMonth();
    // Set static field: static public System.Globalization.DateTimeFormatFlags UseGenitiveMonth
    static void _set_UseGenitiveMonth(::System::Globalization::DateTimeFormatFlags value);
    // static field const value: static public System.Globalization.DateTimeFormatFlags UseLeapYearMonth
    static constexpr const int UseLeapYearMonth = 2;
    // Get static field: static public System.Globalization.DateTimeFormatFlags UseLeapYearMonth
    static ::System::Globalization::DateTimeFormatFlags _get_UseLeapYearMonth();
    // Set static field: static public System.Globalization.DateTimeFormatFlags UseLeapYearMonth
    static void _set_UseLeapYearMonth(::System::Globalization::DateTimeFormatFlags value);
    // static field const value: static public System.Globalization.DateTimeFormatFlags UseSpacesInMonthNames
    static constexpr const int UseSpacesInMonthNames = 4;
    // Get static field: static public System.Globalization.DateTimeFormatFlags UseSpacesInMonthNames
    static ::System::Globalization::DateTimeFormatFlags _get_UseSpacesInMonthNames();
    // Set static field: static public System.Globalization.DateTimeFormatFlags UseSpacesInMonthNames
    static void _set_UseSpacesInMonthNames(::System::Globalization::DateTimeFormatFlags value);
    // static field const value: static public System.Globalization.DateTimeFormatFlags UseHebrewRule
    static constexpr const int UseHebrewRule = 8;
    // Get static field: static public System.Globalization.DateTimeFormatFlags UseHebrewRule
    static ::System::Globalization::DateTimeFormatFlags _get_UseHebrewRule();
    // Set static field: static public System.Globalization.DateTimeFormatFlags UseHebrewRule
    static void _set_UseHebrewRule(::System::Globalization::DateTimeFormatFlags value);
    // static field const value: static public System.Globalization.DateTimeFormatFlags UseSpacesInDayNames
    static constexpr const int UseSpacesInDayNames = 16;
    // Get static field: static public System.Globalization.DateTimeFormatFlags UseSpacesInDayNames
    static ::System::Globalization::DateTimeFormatFlags _get_UseSpacesInDayNames();
    // Set static field: static public System.Globalization.DateTimeFormatFlags UseSpacesInDayNames
    static void _set_UseSpacesInDayNames(::System::Globalization::DateTimeFormatFlags value);
    // static field const value: static public System.Globalization.DateTimeFormatFlags UseDigitPrefixInTokens
    static constexpr const int UseDigitPrefixInTokens = 32;
    // Get static field: static public System.Globalization.DateTimeFormatFlags UseDigitPrefixInTokens
    static ::System::Globalization::DateTimeFormatFlags _get_UseDigitPrefixInTokens();
    // Set static field: static public System.Globalization.DateTimeFormatFlags UseDigitPrefixInTokens
    static void _set_UseDigitPrefixInTokens(::System::Globalization::DateTimeFormatFlags value);
    // static field const value: static public System.Globalization.DateTimeFormatFlags NotInitialized
    static constexpr const int NotInitialized = -1;
    // Get static field: static public System.Globalization.DateTimeFormatFlags NotInitialized
    static ::System::Globalization::DateTimeFormatFlags _get_NotInitialized();
    // Set static field: static public System.Globalization.DateTimeFormatFlags NotInitialized
    static void _set_NotInitialized(::System::Globalization::DateTimeFormatFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Globalization.DateTimeFormatFlags
  #pragma pack(pop)
  static check_size<sizeof(DateTimeFormatFlags), 0 + sizeof(int)> __System_Globalization_DateTimeFormatFlagsSizeCheck;
  static_assert(sizeof(DateTimeFormatFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
