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
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: AttributeMatchState
  struct AttributeMatchState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::AttributeMatchState, "System.Xml.Schema", "AttributeMatchState");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.AttributeMatchState
  // [TokenAttribute] Offset: FFFFFFFF
  struct AttributeMatchState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AttributeMatchState
    constexpr AttributeMatchState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Schema.AttributeMatchState AttributeFound
    static constexpr const int AttributeFound = 0;
    // Get static field: static public System.Xml.Schema.AttributeMatchState AttributeFound
    static ::System::Xml::Schema::AttributeMatchState _get_AttributeFound();
    // Set static field: static public System.Xml.Schema.AttributeMatchState AttributeFound
    static void _set_AttributeFound(::System::Xml::Schema::AttributeMatchState value);
    // static field const value: static public System.Xml.Schema.AttributeMatchState AnyIdAttributeFound
    static constexpr const int AnyIdAttributeFound = 1;
    // Get static field: static public System.Xml.Schema.AttributeMatchState AnyIdAttributeFound
    static ::System::Xml::Schema::AttributeMatchState _get_AnyIdAttributeFound();
    // Set static field: static public System.Xml.Schema.AttributeMatchState AnyIdAttributeFound
    static void _set_AnyIdAttributeFound(::System::Xml::Schema::AttributeMatchState value);
    // static field const value: static public System.Xml.Schema.AttributeMatchState UndeclaredElementAndAttribute
    static constexpr const int UndeclaredElementAndAttribute = 2;
    // Get static field: static public System.Xml.Schema.AttributeMatchState UndeclaredElementAndAttribute
    static ::System::Xml::Schema::AttributeMatchState _get_UndeclaredElementAndAttribute();
    // Set static field: static public System.Xml.Schema.AttributeMatchState UndeclaredElementAndAttribute
    static void _set_UndeclaredElementAndAttribute(::System::Xml::Schema::AttributeMatchState value);
    // static field const value: static public System.Xml.Schema.AttributeMatchState UndeclaredAttribute
    static constexpr const int UndeclaredAttribute = 3;
    // Get static field: static public System.Xml.Schema.AttributeMatchState UndeclaredAttribute
    static ::System::Xml::Schema::AttributeMatchState _get_UndeclaredAttribute();
    // Set static field: static public System.Xml.Schema.AttributeMatchState UndeclaredAttribute
    static void _set_UndeclaredAttribute(::System::Xml::Schema::AttributeMatchState value);
    // static field const value: static public System.Xml.Schema.AttributeMatchState AnyAttributeLax
    static constexpr const int AnyAttributeLax = 4;
    // Get static field: static public System.Xml.Schema.AttributeMatchState AnyAttributeLax
    static ::System::Xml::Schema::AttributeMatchState _get_AnyAttributeLax();
    // Set static field: static public System.Xml.Schema.AttributeMatchState AnyAttributeLax
    static void _set_AnyAttributeLax(::System::Xml::Schema::AttributeMatchState value);
    // static field const value: static public System.Xml.Schema.AttributeMatchState AnyAttributeSkip
    static constexpr const int AnyAttributeSkip = 5;
    // Get static field: static public System.Xml.Schema.AttributeMatchState AnyAttributeSkip
    static ::System::Xml::Schema::AttributeMatchState _get_AnyAttributeSkip();
    // Set static field: static public System.Xml.Schema.AttributeMatchState AnyAttributeSkip
    static void _set_AnyAttributeSkip(::System::Xml::Schema::AttributeMatchState value);
    // static field const value: static public System.Xml.Schema.AttributeMatchState ProhibitedAnyAttribute
    static constexpr const int ProhibitedAnyAttribute = 6;
    // Get static field: static public System.Xml.Schema.AttributeMatchState ProhibitedAnyAttribute
    static ::System::Xml::Schema::AttributeMatchState _get_ProhibitedAnyAttribute();
    // Set static field: static public System.Xml.Schema.AttributeMatchState ProhibitedAnyAttribute
    static void _set_ProhibitedAnyAttribute(::System::Xml::Schema::AttributeMatchState value);
    // static field const value: static public System.Xml.Schema.AttributeMatchState ProhibitedAttribute
    static constexpr const int ProhibitedAttribute = 7;
    // Get static field: static public System.Xml.Schema.AttributeMatchState ProhibitedAttribute
    static ::System::Xml::Schema::AttributeMatchState _get_ProhibitedAttribute();
    // Set static field: static public System.Xml.Schema.AttributeMatchState ProhibitedAttribute
    static void _set_ProhibitedAttribute(::System::Xml::Schema::AttributeMatchState value);
    // static field const value: static public System.Xml.Schema.AttributeMatchState AttributeNameMismatch
    static constexpr const int AttributeNameMismatch = 8;
    // Get static field: static public System.Xml.Schema.AttributeMatchState AttributeNameMismatch
    static ::System::Xml::Schema::AttributeMatchState _get_AttributeNameMismatch();
    // Set static field: static public System.Xml.Schema.AttributeMatchState AttributeNameMismatch
    static void _set_AttributeNameMismatch(::System::Xml::Schema::AttributeMatchState value);
    // static field const value: static public System.Xml.Schema.AttributeMatchState ValidateAttributeInvalidCall
    static constexpr const int ValidateAttributeInvalidCall = 9;
    // Get static field: static public System.Xml.Schema.AttributeMatchState ValidateAttributeInvalidCall
    static ::System::Xml::Schema::AttributeMatchState _get_ValidateAttributeInvalidCall();
    // Set static field: static public System.Xml.Schema.AttributeMatchState ValidateAttributeInvalidCall
    static void _set_ValidateAttributeInvalidCall(::System::Xml::Schema::AttributeMatchState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Xml.Schema.AttributeMatchState
  #pragma pack(pop)
  static check_size<sizeof(AttributeMatchState), 0 + sizeof(int)> __System_Xml_Schema_AttributeMatchStateSizeCheck;
  static_assert(sizeof(AttributeMatchState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
