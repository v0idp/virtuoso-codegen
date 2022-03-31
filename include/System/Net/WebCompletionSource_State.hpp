// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebCompletionSource
#include "System/Net/WebCompletionSource.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebCompletionSource::State, "System.Net", "WebCompletionSource/State");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebCompletionSource/System.Net.State
  // [TokenAttribute] Offset: FFFFFFFF
  struct WebCompletionSource::State/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: State
    constexpr State(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.WebCompletionSource/System.Net.State Running
    static constexpr const int Running = 0;
    // Get static field: static public System.Net.WebCompletionSource/System.Net.State Running
    static ::System::Net::WebCompletionSource::State _get_Running();
    // Set static field: static public System.Net.WebCompletionSource/System.Net.State Running
    static void _set_Running(::System::Net::WebCompletionSource::State value);
    // static field const value: static public System.Net.WebCompletionSource/System.Net.State Completed
    static constexpr const int Completed = 1;
    // Get static field: static public System.Net.WebCompletionSource/System.Net.State Completed
    static ::System::Net::WebCompletionSource::State _get_Completed();
    // Set static field: static public System.Net.WebCompletionSource/System.Net.State Completed
    static void _set_Completed(::System::Net::WebCompletionSource::State value);
    // static field const value: static public System.Net.WebCompletionSource/System.Net.State Canceled
    static constexpr const int Canceled = 2;
    // Get static field: static public System.Net.WebCompletionSource/System.Net.State Canceled
    static ::System::Net::WebCompletionSource::State _get_Canceled();
    // Set static field: static public System.Net.WebCompletionSource/System.Net.State Canceled
    static void _set_Canceled(::System::Net::WebCompletionSource::State value);
    // static field const value: static public System.Net.WebCompletionSource/System.Net.State Faulted
    static constexpr const int Faulted = 3;
    // Get static field: static public System.Net.WebCompletionSource/System.Net.State Faulted
    static ::System::Net::WebCompletionSource::State _get_Faulted();
    // Set static field: static public System.Net.WebCompletionSource/System.Net.State Faulted
    static void _set_Faulted(::System::Net::WebCompletionSource::State value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.WebCompletionSource/System.Net.State
  #pragma pack(pop)
  static check_size<sizeof(WebCompletionSource::State), 0 + sizeof(int)> __System_Net_WebCompletionSource_StateSizeCheck;
  static_assert(sizeof(WebCompletionSource::State) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
