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
// Type namespace: Firebase
namespace Firebase {
  // Forward declaring type: InitResult
  struct InitResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Firebase::InitResult, "Firebase", "InitResult");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.InitResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct InitResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InitResult
    constexpr InitResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Firebase.InitResult Success
    static constexpr const int Success = 0;
    // Get static field: static public Firebase.InitResult Success
    static ::Firebase::InitResult _get_Success();
    // Set static field: static public Firebase.InitResult Success
    static void _set_Success(::Firebase::InitResult value);
    // static field const value: static public Firebase.InitResult FailedMissingDependency
    static constexpr const int FailedMissingDependency = 1;
    // Get static field: static public Firebase.InitResult FailedMissingDependency
    static ::Firebase::InitResult _get_FailedMissingDependency();
    // Set static field: static public Firebase.InitResult FailedMissingDependency
    static void _set_FailedMissingDependency(::Firebase::InitResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Firebase.InitResult
  #pragma pack(pop)
  static check_size<sizeof(InitResult), 0 + sizeof(int)> __Firebase_InitResultSizeCheck;
  static_assert(sizeof(InitResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
