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
  // Forward declaring type: UnicodeCategory
  struct UnicodeCategory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::UnicodeCategory, "System.Globalization", "UnicodeCategory");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.UnicodeCategory
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 683948
  struct UnicodeCategory/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UnicodeCategory
    constexpr UnicodeCategory(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.UnicodeCategory UppercaseLetter
    static constexpr const int UppercaseLetter = 0;
    // Get static field: static public System.Globalization.UnicodeCategory UppercaseLetter
    static ::System::Globalization::UnicodeCategory _get_UppercaseLetter();
    // Set static field: static public System.Globalization.UnicodeCategory UppercaseLetter
    static void _set_UppercaseLetter(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory LowercaseLetter
    static constexpr const int LowercaseLetter = 1;
    // Get static field: static public System.Globalization.UnicodeCategory LowercaseLetter
    static ::System::Globalization::UnicodeCategory _get_LowercaseLetter();
    // Set static field: static public System.Globalization.UnicodeCategory LowercaseLetter
    static void _set_LowercaseLetter(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory TitlecaseLetter
    static constexpr const int TitlecaseLetter = 2;
    // Get static field: static public System.Globalization.UnicodeCategory TitlecaseLetter
    static ::System::Globalization::UnicodeCategory _get_TitlecaseLetter();
    // Set static field: static public System.Globalization.UnicodeCategory TitlecaseLetter
    static void _set_TitlecaseLetter(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory ModifierLetter
    static constexpr const int ModifierLetter = 3;
    // Get static field: static public System.Globalization.UnicodeCategory ModifierLetter
    static ::System::Globalization::UnicodeCategory _get_ModifierLetter();
    // Set static field: static public System.Globalization.UnicodeCategory ModifierLetter
    static void _set_ModifierLetter(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory OtherLetter
    static constexpr const int OtherLetter = 4;
    // Get static field: static public System.Globalization.UnicodeCategory OtherLetter
    static ::System::Globalization::UnicodeCategory _get_OtherLetter();
    // Set static field: static public System.Globalization.UnicodeCategory OtherLetter
    static void _set_OtherLetter(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory NonSpacingMark
    static constexpr const int NonSpacingMark = 5;
    // Get static field: static public System.Globalization.UnicodeCategory NonSpacingMark
    static ::System::Globalization::UnicodeCategory _get_NonSpacingMark();
    // Set static field: static public System.Globalization.UnicodeCategory NonSpacingMark
    static void _set_NonSpacingMark(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory SpacingCombiningMark
    static constexpr const int SpacingCombiningMark = 6;
    // Get static field: static public System.Globalization.UnicodeCategory SpacingCombiningMark
    static ::System::Globalization::UnicodeCategory _get_SpacingCombiningMark();
    // Set static field: static public System.Globalization.UnicodeCategory SpacingCombiningMark
    static void _set_SpacingCombiningMark(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory EnclosingMark
    static constexpr const int EnclosingMark = 7;
    // Get static field: static public System.Globalization.UnicodeCategory EnclosingMark
    static ::System::Globalization::UnicodeCategory _get_EnclosingMark();
    // Set static field: static public System.Globalization.UnicodeCategory EnclosingMark
    static void _set_EnclosingMark(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory DecimalDigitNumber
    static constexpr const int DecimalDigitNumber = 8;
    // Get static field: static public System.Globalization.UnicodeCategory DecimalDigitNumber
    static ::System::Globalization::UnicodeCategory _get_DecimalDigitNumber();
    // Set static field: static public System.Globalization.UnicodeCategory DecimalDigitNumber
    static void _set_DecimalDigitNumber(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory LetterNumber
    static constexpr const int LetterNumber = 9;
    // Get static field: static public System.Globalization.UnicodeCategory LetterNumber
    static ::System::Globalization::UnicodeCategory _get_LetterNumber();
    // Set static field: static public System.Globalization.UnicodeCategory LetterNumber
    static void _set_LetterNumber(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory OtherNumber
    static constexpr const int OtherNumber = 10;
    // Get static field: static public System.Globalization.UnicodeCategory OtherNumber
    static ::System::Globalization::UnicodeCategory _get_OtherNumber();
    // Set static field: static public System.Globalization.UnicodeCategory OtherNumber
    static void _set_OtherNumber(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory SpaceSeparator
    static constexpr const int SpaceSeparator = 11;
    // Get static field: static public System.Globalization.UnicodeCategory SpaceSeparator
    static ::System::Globalization::UnicodeCategory _get_SpaceSeparator();
    // Set static field: static public System.Globalization.UnicodeCategory SpaceSeparator
    static void _set_SpaceSeparator(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory LineSeparator
    static constexpr const int LineSeparator = 12;
    // Get static field: static public System.Globalization.UnicodeCategory LineSeparator
    static ::System::Globalization::UnicodeCategory _get_LineSeparator();
    // Set static field: static public System.Globalization.UnicodeCategory LineSeparator
    static void _set_LineSeparator(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory ParagraphSeparator
    static constexpr const int ParagraphSeparator = 13;
    // Get static field: static public System.Globalization.UnicodeCategory ParagraphSeparator
    static ::System::Globalization::UnicodeCategory _get_ParagraphSeparator();
    // Set static field: static public System.Globalization.UnicodeCategory ParagraphSeparator
    static void _set_ParagraphSeparator(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory Control
    static constexpr const int Control = 14;
    // Get static field: static public System.Globalization.UnicodeCategory Control
    static ::System::Globalization::UnicodeCategory _get_Control();
    // Set static field: static public System.Globalization.UnicodeCategory Control
    static void _set_Control(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory Format
    static constexpr const int Format = 15;
    // Get static field: static public System.Globalization.UnicodeCategory Format
    static ::System::Globalization::UnicodeCategory _get_Format();
    // Set static field: static public System.Globalization.UnicodeCategory Format
    static void _set_Format(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory Surrogate
    static constexpr const int Surrogate = 16;
    // Get static field: static public System.Globalization.UnicodeCategory Surrogate
    static ::System::Globalization::UnicodeCategory _get_Surrogate();
    // Set static field: static public System.Globalization.UnicodeCategory Surrogate
    static void _set_Surrogate(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory PrivateUse
    static constexpr const int PrivateUse = 17;
    // Get static field: static public System.Globalization.UnicodeCategory PrivateUse
    static ::System::Globalization::UnicodeCategory _get_PrivateUse();
    // Set static field: static public System.Globalization.UnicodeCategory PrivateUse
    static void _set_PrivateUse(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory ConnectorPunctuation
    static constexpr const int ConnectorPunctuation = 18;
    // Get static field: static public System.Globalization.UnicodeCategory ConnectorPunctuation
    static ::System::Globalization::UnicodeCategory _get_ConnectorPunctuation();
    // Set static field: static public System.Globalization.UnicodeCategory ConnectorPunctuation
    static void _set_ConnectorPunctuation(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory DashPunctuation
    static constexpr const int DashPunctuation = 19;
    // Get static field: static public System.Globalization.UnicodeCategory DashPunctuation
    static ::System::Globalization::UnicodeCategory _get_DashPunctuation();
    // Set static field: static public System.Globalization.UnicodeCategory DashPunctuation
    static void _set_DashPunctuation(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory OpenPunctuation
    static constexpr const int OpenPunctuation = 20;
    // Get static field: static public System.Globalization.UnicodeCategory OpenPunctuation
    static ::System::Globalization::UnicodeCategory _get_OpenPunctuation();
    // Set static field: static public System.Globalization.UnicodeCategory OpenPunctuation
    static void _set_OpenPunctuation(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory ClosePunctuation
    static constexpr const int ClosePunctuation = 21;
    // Get static field: static public System.Globalization.UnicodeCategory ClosePunctuation
    static ::System::Globalization::UnicodeCategory _get_ClosePunctuation();
    // Set static field: static public System.Globalization.UnicodeCategory ClosePunctuation
    static void _set_ClosePunctuation(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory InitialQuotePunctuation
    static constexpr const int InitialQuotePunctuation = 22;
    // Get static field: static public System.Globalization.UnicodeCategory InitialQuotePunctuation
    static ::System::Globalization::UnicodeCategory _get_InitialQuotePunctuation();
    // Set static field: static public System.Globalization.UnicodeCategory InitialQuotePunctuation
    static void _set_InitialQuotePunctuation(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory FinalQuotePunctuation
    static constexpr const int FinalQuotePunctuation = 23;
    // Get static field: static public System.Globalization.UnicodeCategory FinalQuotePunctuation
    static ::System::Globalization::UnicodeCategory _get_FinalQuotePunctuation();
    // Set static field: static public System.Globalization.UnicodeCategory FinalQuotePunctuation
    static void _set_FinalQuotePunctuation(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory OtherPunctuation
    static constexpr const int OtherPunctuation = 24;
    // Get static field: static public System.Globalization.UnicodeCategory OtherPunctuation
    static ::System::Globalization::UnicodeCategory _get_OtherPunctuation();
    // Set static field: static public System.Globalization.UnicodeCategory OtherPunctuation
    static void _set_OtherPunctuation(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory MathSymbol
    static constexpr const int MathSymbol = 25;
    // Get static field: static public System.Globalization.UnicodeCategory MathSymbol
    static ::System::Globalization::UnicodeCategory _get_MathSymbol();
    // Set static field: static public System.Globalization.UnicodeCategory MathSymbol
    static void _set_MathSymbol(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory CurrencySymbol
    static constexpr const int CurrencySymbol = 26;
    // Get static field: static public System.Globalization.UnicodeCategory CurrencySymbol
    static ::System::Globalization::UnicodeCategory _get_CurrencySymbol();
    // Set static field: static public System.Globalization.UnicodeCategory CurrencySymbol
    static void _set_CurrencySymbol(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory ModifierSymbol
    static constexpr const int ModifierSymbol = 27;
    // Get static field: static public System.Globalization.UnicodeCategory ModifierSymbol
    static ::System::Globalization::UnicodeCategory _get_ModifierSymbol();
    // Set static field: static public System.Globalization.UnicodeCategory ModifierSymbol
    static void _set_ModifierSymbol(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory OtherSymbol
    static constexpr const int OtherSymbol = 28;
    // Get static field: static public System.Globalization.UnicodeCategory OtherSymbol
    static ::System::Globalization::UnicodeCategory _get_OtherSymbol();
    // Set static field: static public System.Globalization.UnicodeCategory OtherSymbol
    static void _set_OtherSymbol(::System::Globalization::UnicodeCategory value);
    // static field const value: static public System.Globalization.UnicodeCategory OtherNotAssigned
    static constexpr const int OtherNotAssigned = 29;
    // Get static field: static public System.Globalization.UnicodeCategory OtherNotAssigned
    static ::System::Globalization::UnicodeCategory _get_OtherNotAssigned();
    // Set static field: static public System.Globalization.UnicodeCategory OtherNotAssigned
    static void _set_OtherNotAssigned(::System::Globalization::UnicodeCategory value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Globalization.UnicodeCategory
  #pragma pack(pop)
  static check_size<sizeof(UnicodeCategory), 0 + sizeof(int)> __System_Globalization_UnicodeCategorySizeCheck;
  static_assert(sizeof(UnicodeCategory) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
