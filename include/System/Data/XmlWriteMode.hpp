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
  // Forward declaring type: XmlWriteMode
  struct XmlWriteMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlWriteMode, "System.Data", "XmlWriteMode");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.XmlWriteMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlWriteMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlWriteMode
    constexpr XmlWriteMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.XmlWriteMode WriteSchema
    static constexpr const int WriteSchema = 0;
    // Get static field: static public System.Data.XmlWriteMode WriteSchema
    static ::System::Data::XmlWriteMode _get_WriteSchema();
    // Set static field: static public System.Data.XmlWriteMode WriteSchema
    static void _set_WriteSchema(::System::Data::XmlWriteMode value);
    // static field const value: static public System.Data.XmlWriteMode IgnoreSchema
    static constexpr const int IgnoreSchema = 1;
    // Get static field: static public System.Data.XmlWriteMode IgnoreSchema
    static ::System::Data::XmlWriteMode _get_IgnoreSchema();
    // Set static field: static public System.Data.XmlWriteMode IgnoreSchema
    static void _set_IgnoreSchema(::System::Data::XmlWriteMode value);
    // static field const value: static public System.Data.XmlWriteMode DiffGram
    static constexpr const int DiffGram = 2;
    // Get static field: static public System.Data.XmlWriteMode DiffGram
    static ::System::Data::XmlWriteMode _get_DiffGram();
    // Set static field: static public System.Data.XmlWriteMode DiffGram
    static void _set_DiffGram(::System::Data::XmlWriteMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Data.XmlWriteMode
  #pragma pack(pop)
  static check_size<sizeof(XmlWriteMode), 0 + sizeof(int)> __System_Data_XmlWriteModeSizeCheck;
  static_assert(sizeof(XmlWriteMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
