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
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebExceptionInternalStatus
  struct WebExceptionInternalStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebExceptionInternalStatus, "System.Net", "WebExceptionInternalStatus");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebExceptionInternalStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct WebExceptionInternalStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WebExceptionInternalStatus
    constexpr WebExceptionInternalStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.WebExceptionInternalStatus RequestFatal
    static constexpr const int RequestFatal = 0;
    // Get static field: static public System.Net.WebExceptionInternalStatus RequestFatal
    static ::System::Net::WebExceptionInternalStatus _get_RequestFatal();
    // Set static field: static public System.Net.WebExceptionInternalStatus RequestFatal
    static void _set_RequestFatal(::System::Net::WebExceptionInternalStatus value);
    // static field const value: static public System.Net.WebExceptionInternalStatus ServicePointFatal
    static constexpr const int ServicePointFatal = 1;
    // Get static field: static public System.Net.WebExceptionInternalStatus ServicePointFatal
    static ::System::Net::WebExceptionInternalStatus _get_ServicePointFatal();
    // Set static field: static public System.Net.WebExceptionInternalStatus ServicePointFatal
    static void _set_ServicePointFatal(::System::Net::WebExceptionInternalStatus value);
    // static field const value: static public System.Net.WebExceptionInternalStatus Recoverable
    static constexpr const int Recoverable = 2;
    // Get static field: static public System.Net.WebExceptionInternalStatus Recoverable
    static ::System::Net::WebExceptionInternalStatus _get_Recoverable();
    // Set static field: static public System.Net.WebExceptionInternalStatus Recoverable
    static void _set_Recoverable(::System::Net::WebExceptionInternalStatus value);
    // static field const value: static public System.Net.WebExceptionInternalStatus Isolated
    static constexpr const int Isolated = 3;
    // Get static field: static public System.Net.WebExceptionInternalStatus Isolated
    static ::System::Net::WebExceptionInternalStatus _get_Isolated();
    // Set static field: static public System.Net.WebExceptionInternalStatus Isolated
    static void _set_Isolated(::System::Net::WebExceptionInternalStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Net.WebExceptionInternalStatus
  #pragma pack(pop)
  static check_size<sizeof(WebExceptionInternalStatus), 0 + sizeof(int)> __System_Net_WebExceptionInternalStatusSizeCheck;
  static_assert(sizeof(WebExceptionInternalStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
