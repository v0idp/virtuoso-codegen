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
// Type namespace: Unity.IO.LowLevel.Unsafe
namespace Unity::IO::LowLevel::Unsafe {
  // Forward declaring type: Priority
  struct Priority;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::Priority, "Unity.IO.LowLevel.Unsafe", "Priority");
// Type namespace: Unity.IO.LowLevel.Unsafe
namespace Unity::IO::LowLevel::Unsafe {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.IO.LowLevel.Unsafe.Priority
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 65E600
  struct Priority/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Priority
    constexpr Priority(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.IO.LowLevel.Unsafe.Priority PriorityLow
    static constexpr const int PriorityLow = 0;
    // Get static field: static public Unity.IO.LowLevel.Unsafe.Priority PriorityLow
    static ::Unity::IO::LowLevel::Unsafe::Priority _get_PriorityLow();
    // Set static field: static public Unity.IO.LowLevel.Unsafe.Priority PriorityLow
    static void _set_PriorityLow(::Unity::IO::LowLevel::Unsafe::Priority value);
    // static field const value: static public Unity.IO.LowLevel.Unsafe.Priority PriorityHigh
    static constexpr const int PriorityHigh = 1;
    // Get static field: static public Unity.IO.LowLevel.Unsafe.Priority PriorityHigh
    static ::Unity::IO::LowLevel::Unsafe::Priority _get_PriorityHigh();
    // Set static field: static public Unity.IO.LowLevel.Unsafe.Priority PriorityHigh
    static void _set_PriorityHigh(::Unity::IO::LowLevel::Unsafe::Priority value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Unity.IO.LowLevel.Unsafe.Priority
  #pragma pack(pop)
  static check_size<sizeof(Priority), 0 + sizeof(int)> __Unity_IO_LowLevel_Unsafe_PrioritySizeCheck;
  static_assert(sizeof(Priority) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
