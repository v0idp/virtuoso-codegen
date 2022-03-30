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
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Forward declaring type: AsyncOperationStatus
  struct AsyncOperationStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncOperationStatus, "Mono.Net.Security", "AsyncOperationStatus");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.AsyncOperationStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct AsyncOperationStatus/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: AsyncOperationStatus
    constexpr AsyncOperationStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Net.Security.AsyncOperationStatus Initialize
    static constexpr const int Initialize = 0;
    // Get static field: static public Mono.Net.Security.AsyncOperationStatus Initialize
    static ::Mono::Net::Security::AsyncOperationStatus _get_Initialize();
    // Set static field: static public Mono.Net.Security.AsyncOperationStatus Initialize
    static void _set_Initialize(::Mono::Net::Security::AsyncOperationStatus value);
    // static field const value: static public Mono.Net.Security.AsyncOperationStatus Continue
    static constexpr const int Continue = 1;
    // Get static field: static public Mono.Net.Security.AsyncOperationStatus Continue
    static ::Mono::Net::Security::AsyncOperationStatus _get_Continue();
    // Set static field: static public Mono.Net.Security.AsyncOperationStatus Continue
    static void _set_Continue(::Mono::Net::Security::AsyncOperationStatus value);
    // static field const value: static public Mono.Net.Security.AsyncOperationStatus ReadDone
    static constexpr const int ReadDone = 2;
    // Get static field: static public Mono.Net.Security.AsyncOperationStatus ReadDone
    static ::Mono::Net::Security::AsyncOperationStatus _get_ReadDone();
    // Set static field: static public Mono.Net.Security.AsyncOperationStatus ReadDone
    static void _set_ReadDone(::Mono::Net::Security::AsyncOperationStatus value);
    // static field const value: static public Mono.Net.Security.AsyncOperationStatus Complete
    static constexpr const int Complete = 3;
    // Get static field: static public Mono.Net.Security.AsyncOperationStatus Complete
    static ::Mono::Net::Security::AsyncOperationStatus _get_Complete();
    // Set static field: static public Mono.Net.Security.AsyncOperationStatus Complete
    static void _set_Complete(::Mono::Net::Security::AsyncOperationStatus value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Mono.Net.Security.AsyncOperationStatus
  #pragma pack(pop)
  static check_size<sizeof(AsyncOperationStatus), 16 + sizeof(int)> __Mono_Net_Security_AsyncOperationStatusSizeCheck;
  static_assert(sizeof(AsyncOperationStatus) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
