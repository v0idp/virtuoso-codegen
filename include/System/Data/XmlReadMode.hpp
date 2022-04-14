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
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: XmlReadMode
  struct XmlReadMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlReadMode, "System.Data", "XmlReadMode");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.XmlReadMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlReadMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlReadMode
    constexpr XmlReadMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.XmlReadMode Auto
    static constexpr const int Auto = 0;
    // Get static field: static public System.Data.XmlReadMode Auto
    static ::System::Data::XmlReadMode _get_Auto();
    // Set static field: static public System.Data.XmlReadMode Auto
    static void _set_Auto(::System::Data::XmlReadMode value);
    // static field const value: static public System.Data.XmlReadMode ReadSchema
    static constexpr const int ReadSchema = 1;
    // Get static field: static public System.Data.XmlReadMode ReadSchema
    static ::System::Data::XmlReadMode _get_ReadSchema();
    // Set static field: static public System.Data.XmlReadMode ReadSchema
    static void _set_ReadSchema(::System::Data::XmlReadMode value);
    // static field const value: static public System.Data.XmlReadMode IgnoreSchema
    static constexpr const int IgnoreSchema = 2;
    // Get static field: static public System.Data.XmlReadMode IgnoreSchema
    static ::System::Data::XmlReadMode _get_IgnoreSchema();
    // Set static field: static public System.Data.XmlReadMode IgnoreSchema
    static void _set_IgnoreSchema(::System::Data::XmlReadMode value);
    // static field const value: static public System.Data.XmlReadMode InferSchema
    static constexpr const int InferSchema = 3;
    // Get static field: static public System.Data.XmlReadMode InferSchema
    static ::System::Data::XmlReadMode _get_InferSchema();
    // Set static field: static public System.Data.XmlReadMode InferSchema
    static void _set_InferSchema(::System::Data::XmlReadMode value);
    // static field const value: static public System.Data.XmlReadMode DiffGram
    static constexpr const int DiffGram = 4;
    // Get static field: static public System.Data.XmlReadMode DiffGram
    static ::System::Data::XmlReadMode _get_DiffGram();
    // Set static field: static public System.Data.XmlReadMode DiffGram
    static void _set_DiffGram(::System::Data::XmlReadMode value);
    // static field const value: static public System.Data.XmlReadMode Fragment
    static constexpr const int Fragment = 5;
    // Get static field: static public System.Data.XmlReadMode Fragment
    static ::System::Data::XmlReadMode _get_Fragment();
    // Set static field: static public System.Data.XmlReadMode Fragment
    static void _set_Fragment(::System::Data::XmlReadMode value);
    // static field const value: static public System.Data.XmlReadMode InferTypedSchema
    static constexpr const int InferTypedSchema = 6;
    // Get static field: static public System.Data.XmlReadMode InferTypedSchema
    static ::System::Data::XmlReadMode _get_InferTypedSchema();
    // Set static field: static public System.Data.XmlReadMode InferTypedSchema
    static void _set_InferTypedSchema(::System::Data::XmlReadMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Data.XmlReadMode
  #pragma pack(pop)
  static check_size<sizeof(XmlReadMode), 0 + sizeof(int)> __System_Data_XmlReadModeSizeCheck;
  static_assert(sizeof(XmlReadMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
