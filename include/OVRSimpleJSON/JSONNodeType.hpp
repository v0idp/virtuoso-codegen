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
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNodeType, "OVRSimpleJSON", "JSONNodeType");
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONNodeType
  // [TokenAttribute] Offset: FFFFFFFF
  struct JSONNodeType/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x10
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: JSONNodeType
    constexpr JSONNodeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRSimpleJSON.JSONNodeType Array
    static constexpr const int Array = 1;
    // Get static field: static public OVRSimpleJSON.JSONNodeType Array
    static ::OVRSimpleJSON::JSONNodeType _get_Array();
    // Set static field: static public OVRSimpleJSON.JSONNodeType Array
    static void _set_Array(::OVRSimpleJSON::JSONNodeType value);
    // static field const value: static public OVRSimpleJSON.JSONNodeType Object
    static constexpr const int Object = 2;
    // Get static field: static public OVRSimpleJSON.JSONNodeType Object
    static ::OVRSimpleJSON::JSONNodeType _get_Object();
    // Set static field: static public OVRSimpleJSON.JSONNodeType Object
    static void _set_Object(::OVRSimpleJSON::JSONNodeType value);
    // static field const value: static public OVRSimpleJSON.JSONNodeType String
    static constexpr const int String = 3;
    // Get static field: static public OVRSimpleJSON.JSONNodeType String
    static ::OVRSimpleJSON::JSONNodeType _get_String();
    // Set static field: static public OVRSimpleJSON.JSONNodeType String
    static void _set_String(::OVRSimpleJSON::JSONNodeType value);
    // static field const value: static public OVRSimpleJSON.JSONNodeType Number
    static constexpr const int Number = 4;
    // Get static field: static public OVRSimpleJSON.JSONNodeType Number
    static ::OVRSimpleJSON::JSONNodeType _get_Number();
    // Set static field: static public OVRSimpleJSON.JSONNodeType Number
    static void _set_Number(::OVRSimpleJSON::JSONNodeType value);
    // static field const value: static public OVRSimpleJSON.JSONNodeType NullValue
    static constexpr const int NullValue = 5;
    // Get static field: static public OVRSimpleJSON.JSONNodeType NullValue
    static ::OVRSimpleJSON::JSONNodeType _get_NullValue();
    // Set static field: static public OVRSimpleJSON.JSONNodeType NullValue
    static void _set_NullValue(::OVRSimpleJSON::JSONNodeType value);
    // static field const value: static public OVRSimpleJSON.JSONNodeType Boolean
    static constexpr const int Boolean = 6;
    // Get static field: static public OVRSimpleJSON.JSONNodeType Boolean
    static ::OVRSimpleJSON::JSONNodeType _get_Boolean();
    // Set static field: static public OVRSimpleJSON.JSONNodeType Boolean
    static void _set_Boolean(::OVRSimpleJSON::JSONNodeType value);
    // static field const value: static public OVRSimpleJSON.JSONNodeType None
    static constexpr const int None = 7;
    // Get static field: static public OVRSimpleJSON.JSONNodeType None
    static ::OVRSimpleJSON::JSONNodeType _get_None();
    // Set static field: static public OVRSimpleJSON.JSONNodeType None
    static void _set_None(::OVRSimpleJSON::JSONNodeType value);
    // static field const value: static public OVRSimpleJSON.JSONNodeType Custom
    static constexpr const int Custom = 255;
    // Get static field: static public OVRSimpleJSON.JSONNodeType Custom
    static ::OVRSimpleJSON::JSONNodeType _get_Custom();
    // Set static field: static public OVRSimpleJSON.JSONNodeType Custom
    static void _set_Custom(::OVRSimpleJSON::JSONNodeType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRSimpleJSON.JSONNodeType
  #pragma pack(pop)
  static check_size<sizeof(JSONNodeType), 16 + sizeof(int)> __OVRSimpleJSON_JSONNodeTypeSizeCheck;
  static_assert(sizeof(JSONNodeType) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
