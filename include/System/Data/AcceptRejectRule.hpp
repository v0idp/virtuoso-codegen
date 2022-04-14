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
  // Forward declaring type: AcceptRejectRule
  struct AcceptRejectRule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::AcceptRejectRule, "System.Data", "AcceptRejectRule");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.AcceptRejectRule
  // [TokenAttribute] Offset: FFFFFFFF
  struct AcceptRejectRule/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AcceptRejectRule
    constexpr AcceptRejectRule(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.AcceptRejectRule None
    static constexpr const int None = 0;
    // Get static field: static public System.Data.AcceptRejectRule None
    static ::System::Data::AcceptRejectRule _get_None();
    // Set static field: static public System.Data.AcceptRejectRule None
    static void _set_None(::System::Data::AcceptRejectRule value);
    // static field const value: static public System.Data.AcceptRejectRule Cascade
    static constexpr const int Cascade = 1;
    // Get static field: static public System.Data.AcceptRejectRule Cascade
    static ::System::Data::AcceptRejectRule _get_Cascade();
    // Set static field: static public System.Data.AcceptRejectRule Cascade
    static void _set_Cascade(::System::Data::AcceptRejectRule value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Data.AcceptRejectRule
  #pragma pack(pop)
  static check_size<sizeof(AcceptRejectRule), 0 + sizeof(int)> __System_Data_AcceptRejectRuleSizeCheck;
  static_assert(sizeof(AcceptRejectRule) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
