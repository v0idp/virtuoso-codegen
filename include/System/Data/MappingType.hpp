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
  // Forward declaring type: MappingType
  struct MappingType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::MappingType, "System.Data", "MappingType");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.MappingType
  // [TokenAttribute] Offset: FFFFFFFF
  struct MappingType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MappingType
    constexpr MappingType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.MappingType Element
    static constexpr const int Element = 1;
    // Get static field: static public System.Data.MappingType Element
    static ::System::Data::MappingType _get_Element();
    // Set static field: static public System.Data.MappingType Element
    static void _set_Element(::System::Data::MappingType value);
    // static field const value: static public System.Data.MappingType Attribute
    static constexpr const int Attribute = 2;
    // Get static field: static public System.Data.MappingType Attribute
    static ::System::Data::MappingType _get_Attribute();
    // Set static field: static public System.Data.MappingType Attribute
    static void _set_Attribute(::System::Data::MappingType value);
    // static field const value: static public System.Data.MappingType SimpleContent
    static constexpr const int SimpleContent = 3;
    // Get static field: static public System.Data.MappingType SimpleContent
    static ::System::Data::MappingType _get_SimpleContent();
    // Set static field: static public System.Data.MappingType SimpleContent
    static void _set_SimpleContent(::System::Data::MappingType value);
    // static field const value: static public System.Data.MappingType Hidden
    static constexpr const int Hidden = 4;
    // Get static field: static public System.Data.MappingType Hidden
    static ::System::Data::MappingType _get_Hidden();
    // Set static field: static public System.Data.MappingType Hidden
    static void _set_Hidden(::System::Data::MappingType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Data.MappingType
  #pragma pack(pop)
  static check_size<sizeof(MappingType), 0 + sizeof(int)> __System_Data_MappingTypeSizeCheck;
  static_assert(sizeof(MappingType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
