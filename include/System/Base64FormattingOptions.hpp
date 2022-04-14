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
// Type namespace: System
namespace System {
  // Forward declaring type: Base64FormattingOptions
  struct Base64FormattingOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Base64FormattingOptions, "System", "Base64FormattingOptions");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Base64FormattingOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: 68118C
  struct Base64FormattingOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Base64FormattingOptions
    constexpr Base64FormattingOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Base64FormattingOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Base64FormattingOptions None
    static ::System::Base64FormattingOptions _get_None();
    // Set static field: static public System.Base64FormattingOptions None
    static void _set_None(::System::Base64FormattingOptions value);
    // static field const value: static public System.Base64FormattingOptions InsertLineBreaks
    static constexpr const int InsertLineBreaks = 1;
    // Get static field: static public System.Base64FormattingOptions InsertLineBreaks
    static ::System::Base64FormattingOptions _get_InsertLineBreaks();
    // Set static field: static public System.Base64FormattingOptions InsertLineBreaks
    static void _set_InsertLineBreaks(::System::Base64FormattingOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Base64FormattingOptions
  #pragma pack(pop)
  static check_size<sizeof(Base64FormattingOptions), 0 + sizeof(int)> __System_Base64FormattingOptionsSizeCheck;
  static_assert(sizeof(Base64FormattingOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
