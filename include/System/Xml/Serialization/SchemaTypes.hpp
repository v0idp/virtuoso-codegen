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
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: SchemaTypes
  struct SchemaTypes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::SchemaTypes, "System.Xml.Serialization", "SchemaTypes");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.SchemaTypes
  // [TokenAttribute] Offset: FFFFFFFF
  struct SchemaTypes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SchemaTypes
    constexpr SchemaTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Serialization.SchemaTypes NotSet
    static constexpr const int NotSet = 0;
    // Get static field: static public System.Xml.Serialization.SchemaTypes NotSet
    static ::System::Xml::Serialization::SchemaTypes _get_NotSet();
    // Set static field: static public System.Xml.Serialization.SchemaTypes NotSet
    static void _set_NotSet(::System::Xml::Serialization::SchemaTypes value);
    // static field const value: static public System.Xml.Serialization.SchemaTypes Primitive
    static constexpr const int Primitive = 1;
    // Get static field: static public System.Xml.Serialization.SchemaTypes Primitive
    static ::System::Xml::Serialization::SchemaTypes _get_Primitive();
    // Set static field: static public System.Xml.Serialization.SchemaTypes Primitive
    static void _set_Primitive(::System::Xml::Serialization::SchemaTypes value);
    // static field const value: static public System.Xml.Serialization.SchemaTypes Enum
    static constexpr const int Enum = 2;
    // Get static field: static public System.Xml.Serialization.SchemaTypes Enum
    static ::System::Xml::Serialization::SchemaTypes _get_Enum();
    // Set static field: static public System.Xml.Serialization.SchemaTypes Enum
    static void _set_Enum(::System::Xml::Serialization::SchemaTypes value);
    // static field const value: static public System.Xml.Serialization.SchemaTypes Array
    static constexpr const int Array = 3;
    // Get static field: static public System.Xml.Serialization.SchemaTypes Array
    static ::System::Xml::Serialization::SchemaTypes _get_Array();
    // Set static field: static public System.Xml.Serialization.SchemaTypes Array
    static void _set_Array(::System::Xml::Serialization::SchemaTypes value);
    // static field const value: static public System.Xml.Serialization.SchemaTypes Class
    static constexpr const int Class = 4;
    // Get static field: static public System.Xml.Serialization.SchemaTypes Class
    static ::System::Xml::Serialization::SchemaTypes _get_Class();
    // Set static field: static public System.Xml.Serialization.SchemaTypes Class
    static void _set_Class(::System::Xml::Serialization::SchemaTypes value);
    // static field const value: static public System.Xml.Serialization.SchemaTypes XmlSerializable
    static constexpr const int XmlSerializable = 5;
    // Get static field: static public System.Xml.Serialization.SchemaTypes XmlSerializable
    static ::System::Xml::Serialization::SchemaTypes _get_XmlSerializable();
    // Set static field: static public System.Xml.Serialization.SchemaTypes XmlSerializable
    static void _set_XmlSerializable(::System::Xml::Serialization::SchemaTypes value);
    // static field const value: static public System.Xml.Serialization.SchemaTypes XmlNode
    static constexpr const int XmlNode = 6;
    // Get static field: static public System.Xml.Serialization.SchemaTypes XmlNode
    static ::System::Xml::Serialization::SchemaTypes _get_XmlNode();
    // Set static field: static public System.Xml.Serialization.SchemaTypes XmlNode
    static void _set_XmlNode(::System::Xml::Serialization::SchemaTypes value);
    // static field const value: static public System.Xml.Serialization.SchemaTypes Void
    static constexpr const int Void = 7;
    // Get static field: static public System.Xml.Serialization.SchemaTypes Void
    static ::System::Xml::Serialization::SchemaTypes _get_Void();
    // Set static field: static public System.Xml.Serialization.SchemaTypes Void
    static void _set_Void(::System::Xml::Serialization::SchemaTypes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Xml.Serialization.SchemaTypes
  #pragma pack(pop)
  static check_size<sizeof(SchemaTypes), 0 + sizeof(int)> __System_Xml_Serialization_SchemaTypesSizeCheck;
  static_assert(sizeof(SchemaTypes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"