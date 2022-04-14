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
  // Forward declaring type: XmlSchemaUse
  struct XmlSchemaUse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaUse, "System.Xml.Schema", "XmlSchemaUse");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaUse
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlSchemaUse/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlSchemaUse
    constexpr XmlSchemaUse(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Schema.XmlSchemaUse None
    static constexpr const int None = 0;
    // Get static field: static public System.Xml.Schema.XmlSchemaUse None
    static ::System::Xml::Schema::XmlSchemaUse _get_None();
    // Set static field: static public System.Xml.Schema.XmlSchemaUse None
    static void _set_None(::System::Xml::Schema::XmlSchemaUse value);
    // [XmlEnumAttribute] Offset: 0x6A4CF4
    // static field const value: static public System.Xml.Schema.XmlSchemaUse Optional
    static constexpr const int Optional = 1;
    // Get static field: static public System.Xml.Schema.XmlSchemaUse Optional
    static ::System::Xml::Schema::XmlSchemaUse _get_Optional();
    // Set static field: static public System.Xml.Schema.XmlSchemaUse Optional
    static void _set_Optional(::System::Xml::Schema::XmlSchemaUse value);
    // [XmlEnumAttribute] Offset: 0x6A4D2C
    // static field const value: static public System.Xml.Schema.XmlSchemaUse Prohibited
    static constexpr const int Prohibited = 2;
    // Get static field: static public System.Xml.Schema.XmlSchemaUse Prohibited
    static ::System::Xml::Schema::XmlSchemaUse _get_Prohibited();
    // Set static field: static public System.Xml.Schema.XmlSchemaUse Prohibited
    static void _set_Prohibited(::System::Xml::Schema::XmlSchemaUse value);
    // [XmlEnumAttribute] Offset: 0x6A4D64
    // static field const value: static public System.Xml.Schema.XmlSchemaUse Required
    static constexpr const int Required = 3;
    // Get static field: static public System.Xml.Schema.XmlSchemaUse Required
    static ::System::Xml::Schema::XmlSchemaUse _get_Required();
    // Set static field: static public System.Xml.Schema.XmlSchemaUse Required
    static void _set_Required(::System::Xml::Schema::XmlSchemaUse value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Xml.Schema.XmlSchemaUse
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaUse), 0 + sizeof(int)> __System_Xml_Schema_XmlSchemaUseSizeCheck;
  static_assert(sizeof(XmlSchemaUse) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
