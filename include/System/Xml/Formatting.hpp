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
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: Formatting
  struct Formatting;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Formatting, "System.Xml", "Formatting");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Formatting
  // [TokenAttribute] Offset: FFFFFFFF
  struct Formatting/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Formatting
    constexpr Formatting(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Formatting None
    static constexpr const int None = 0;
    // Get static field: static public System.Xml.Formatting None
    static ::System::Xml::Formatting _get_None();
    // Set static field: static public System.Xml.Formatting None
    static void _set_None(::System::Xml::Formatting value);
    // static field const value: static public System.Xml.Formatting Indented
    static constexpr const int Indented = 1;
    // Get static field: static public System.Xml.Formatting Indented
    static ::System::Xml::Formatting _get_Indented();
    // Set static field: static public System.Xml.Formatting Indented
    static void _set_Indented(::System::Xml::Formatting value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Xml.Formatting
  #pragma pack(pop)
  static check_size<sizeof(Formatting), 0 + sizeof(int)> __System_Xml_FormattingSizeCheck;
  static_assert(sizeof(Formatting) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"