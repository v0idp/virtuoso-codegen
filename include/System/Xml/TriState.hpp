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
  // Forward declaring type: TriState
  struct TriState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TriState, "System.Xml", "TriState");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.TriState
  // [TokenAttribute] Offset: FFFFFFFF
  struct TriState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TriState
    constexpr TriState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.TriState Unknown
    static constexpr const int Unknown = -1;
    // Get static field: static public System.Xml.TriState Unknown
    static ::System::Xml::TriState _get_Unknown();
    // Set static field: static public System.Xml.TriState Unknown
    static void _set_Unknown(::System::Xml::TriState value);
    // static field const value: static public System.Xml.TriState False
    static constexpr const int False = 0;
    // Get static field: static public System.Xml.TriState False
    static ::System::Xml::TriState _get_False();
    // Set static field: static public System.Xml.TriState False
    static void _set_False(::System::Xml::TriState value);
    // static field const value: static public System.Xml.TriState True
    static constexpr const int True = 1;
    // Get static field: static public System.Xml.TriState True
    static ::System::Xml::TriState _get_True();
    // Set static field: static public System.Xml.TriState True
    static void _set_True(::System::Xml::TriState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Xml.TriState
  #pragma pack(pop)
  static check_size<sizeof(TriState), 0 + sizeof(int)> __System_Xml_TriStateSizeCheck;
  static_assert(sizeof(TriState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
