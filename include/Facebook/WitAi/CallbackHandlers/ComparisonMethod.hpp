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
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Forward declaring type: ComparisonMethod
  struct ComparisonMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::CallbackHandlers::ComparisonMethod, "Facebook.WitAi.CallbackHandlers", "ComparisonMethod");
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.CallbackHandlers.ComparisonMethod
  // [TokenAttribute] Offset: FFFFFFFF
  struct ComparisonMethod/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ComparisonMethod
    constexpr ComparisonMethod(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod Equals
    static constexpr const int Equals = 0;
    // Get static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod Equals
    static ::Facebook::WitAi::CallbackHandlers::ComparisonMethod _get_Equals();
    // Set static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod Equals
    static void _set_Equals(::Facebook::WitAi::CallbackHandlers::ComparisonMethod value);
    // static field const value: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod NotEquals
    static constexpr const int NotEquals = 1;
    // Get static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod NotEquals
    static ::Facebook::WitAi::CallbackHandlers::ComparisonMethod _get_NotEquals();
    // Set static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod NotEquals
    static void _set_NotEquals(::Facebook::WitAi::CallbackHandlers::ComparisonMethod value);
    // static field const value: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod Greater
    static constexpr const int Greater = 2;
    // Get static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod Greater
    static ::Facebook::WitAi::CallbackHandlers::ComparisonMethod _get_Greater();
    // Set static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod Greater
    static void _set_Greater(::Facebook::WitAi::CallbackHandlers::ComparisonMethod value);
    // static field const value: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod GreaterThanOrEqualTo
    static constexpr const int GreaterThanOrEqualTo = 3;
    // Get static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod GreaterThanOrEqualTo
    static ::Facebook::WitAi::CallbackHandlers::ComparisonMethod _get_GreaterThanOrEqualTo();
    // Set static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod GreaterThanOrEqualTo
    static void _set_GreaterThanOrEqualTo(::Facebook::WitAi::CallbackHandlers::ComparisonMethod value);
    // static field const value: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod Less
    static constexpr const int Less = 4;
    // Get static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod Less
    static ::Facebook::WitAi::CallbackHandlers::ComparisonMethod _get_Less();
    // Set static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod Less
    static void _set_Less(::Facebook::WitAi::CallbackHandlers::ComparisonMethod value);
    // static field const value: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod LessThanOrEqualTo
    static constexpr const int LessThanOrEqualTo = 5;
    // Get static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod LessThanOrEqualTo
    static ::Facebook::WitAi::CallbackHandlers::ComparisonMethod _get_LessThanOrEqualTo();
    // Set static field: static public Facebook.WitAi.CallbackHandlers.ComparisonMethod LessThanOrEqualTo
    static void _set_LessThanOrEqualTo(::Facebook::WitAi::CallbackHandlers::ComparisonMethod value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Facebook.WitAi.CallbackHandlers.ComparisonMethod
  #pragma pack(pop)
  static check_size<sizeof(ComparisonMethod), 0 + sizeof(int)> __Facebook_WitAi_CallbackHandlers_ComparisonMethodSizeCheck;
  static_assert(sizeof(ComparisonMethod) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
