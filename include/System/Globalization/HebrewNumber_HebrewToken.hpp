// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.HebrewNumber
#include "System/Globalization/HebrewNumber.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumber::HebrewToken, "System.Globalization", "HebrewNumber/HebrewToken");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.HebrewNumber/System.Globalization.HebrewToken
  // [TokenAttribute] Offset: FFFFFFFF
  struct HebrewNumber::HebrewToken/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HebrewToken
    constexpr HebrewToken(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Invalid
    static constexpr const int Invalid = -1;
    // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Invalid
    static ::System::Globalization::HebrewNumber::HebrewToken _get_Invalid();
    // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Invalid
    static void _set_Invalid(::System::Globalization::HebrewNumber::HebrewToken value);
    // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit400
    static constexpr const int Digit400 = 0;
    // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit400
    static ::System::Globalization::HebrewNumber::HebrewToken _get_Digit400();
    // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit400
    static void _set_Digit400(::System::Globalization::HebrewNumber::HebrewToken value);
    // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit200_300
    static constexpr const int Digit200_300 = 1;
    // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit200_300
    static ::System::Globalization::HebrewNumber::HebrewToken _get_Digit200_300();
    // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit200_300
    static void _set_Digit200_300(::System::Globalization::HebrewNumber::HebrewToken value);
    // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit100
    static constexpr const int Digit100 = 2;
    // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit100
    static ::System::Globalization::HebrewNumber::HebrewToken _get_Digit100();
    // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit100
    static void _set_Digit100(::System::Globalization::HebrewNumber::HebrewToken value);
    // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit10
    static constexpr const int Digit10 = 3;
    // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit10
    static ::System::Globalization::HebrewNumber::HebrewToken _get_Digit10();
    // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit10
    static void _set_Digit10(::System::Globalization::HebrewNumber::HebrewToken value);
    // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit1
    static constexpr const int Digit1 = 4;
    // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit1
    static ::System::Globalization::HebrewNumber::HebrewToken _get_Digit1();
    // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit1
    static void _set_Digit1(::System::Globalization::HebrewNumber::HebrewToken value);
    // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit6_7
    static constexpr const int Digit6_7 = 5;
    // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit6_7
    static ::System::Globalization::HebrewNumber::HebrewToken _get_Digit6_7();
    // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit6_7
    static void _set_Digit6_7(::System::Globalization::HebrewNumber::HebrewToken value);
    // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit7
    static constexpr const int Digit7 = 6;
    // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit7
    static ::System::Globalization::HebrewNumber::HebrewToken _get_Digit7();
    // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit7
    static void _set_Digit7(::System::Globalization::HebrewNumber::HebrewToken value);
    // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit9
    static constexpr const int Digit9 = 7;
    // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit9
    static ::System::Globalization::HebrewNumber::HebrewToken _get_Digit9();
    // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken Digit9
    static void _set_Digit9(::System::Globalization::HebrewNumber::HebrewToken value);
    // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken SingleQuote
    static constexpr const int SingleQuote = 8;
    // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken SingleQuote
    static ::System::Globalization::HebrewNumber::HebrewToken _get_SingleQuote();
    // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken SingleQuote
    static void _set_SingleQuote(::System::Globalization::HebrewNumber::HebrewToken value);
    // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken DoubleQuote
    static constexpr const int DoubleQuote = 9;
    // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken DoubleQuote
    static ::System::Globalization::HebrewNumber::HebrewToken _get_DoubleQuote();
    // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HebrewToken DoubleQuote
    static void _set_DoubleQuote(::System::Globalization::HebrewNumber::HebrewToken value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Globalization.HebrewNumber/System.Globalization.HebrewToken
  #pragma pack(pop)
  static check_size<sizeof(HebrewNumber::HebrewToken), 0 + sizeof(int)> __System_Globalization_HebrewNumber_HebrewTokenSizeCheck;
  static_assert(sizeof(HebrewNumber::HebrewToken) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
