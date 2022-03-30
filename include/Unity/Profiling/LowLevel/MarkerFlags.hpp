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
// Type namespace: Unity.Profiling.LowLevel
namespace Unity::Profiling::LowLevel {
  // Forward declaring type: MarkerFlags
  struct MarkerFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::LowLevel::MarkerFlags, "Unity.Profiling.LowLevel", "MarkerFlags");
// Type namespace: Unity.Profiling.LowLevel
namespace Unity::Profiling::LowLevel {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Profiling.LowLevel.MarkerFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct MarkerFlags/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.UInt16 value__
    // Size: 0x2
    // Offset: 0x10
    uint16_t value;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: MarkerFlags
    constexpr MarkerFlags(uint16_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint16_t
    constexpr operator uint16_t() const noexcept {
      return value;
    }
    // static field const value: static public Unity.Profiling.LowLevel.MarkerFlags Default
    static constexpr const uint16_t Default = 0u;
    // Get static field: static public Unity.Profiling.LowLevel.MarkerFlags Default
    static ::Unity::Profiling::LowLevel::MarkerFlags _get_Default();
    // Set static field: static public Unity.Profiling.LowLevel.MarkerFlags Default
    static void _set_Default(::Unity::Profiling::LowLevel::MarkerFlags value);
    // static field const value: static public Unity.Profiling.LowLevel.MarkerFlags Script
    static constexpr const uint16_t Script = 2u;
    // Get static field: static public Unity.Profiling.LowLevel.MarkerFlags Script
    static ::Unity::Profiling::LowLevel::MarkerFlags _get_Script();
    // Set static field: static public Unity.Profiling.LowLevel.MarkerFlags Script
    static void _set_Script(::Unity::Profiling::LowLevel::MarkerFlags value);
    // static field const value: static public Unity.Profiling.LowLevel.MarkerFlags ScriptInvoke
    static constexpr const uint16_t ScriptInvoke = 32u;
    // Get static field: static public Unity.Profiling.LowLevel.MarkerFlags ScriptInvoke
    static ::Unity::Profiling::LowLevel::MarkerFlags _get_ScriptInvoke();
    // Set static field: static public Unity.Profiling.LowLevel.MarkerFlags ScriptInvoke
    static void _set_ScriptInvoke(::Unity::Profiling::LowLevel::MarkerFlags value);
    // static field const value: static public Unity.Profiling.LowLevel.MarkerFlags ScriptDeepProfiler
    static constexpr const uint16_t ScriptDeepProfiler = 64u;
    // Get static field: static public Unity.Profiling.LowLevel.MarkerFlags ScriptDeepProfiler
    static ::Unity::Profiling::LowLevel::MarkerFlags _get_ScriptDeepProfiler();
    // Set static field: static public Unity.Profiling.LowLevel.MarkerFlags ScriptDeepProfiler
    static void _set_ScriptDeepProfiler(::Unity::Profiling::LowLevel::MarkerFlags value);
    // static field const value: static public Unity.Profiling.LowLevel.MarkerFlags AvailabilityEditor
    static constexpr const uint16_t AvailabilityEditor = 4u;
    // Get static field: static public Unity.Profiling.LowLevel.MarkerFlags AvailabilityEditor
    static ::Unity::Profiling::LowLevel::MarkerFlags _get_AvailabilityEditor();
    // Set static field: static public Unity.Profiling.LowLevel.MarkerFlags AvailabilityEditor
    static void _set_AvailabilityEditor(::Unity::Profiling::LowLevel::MarkerFlags value);
    // static field const value: static public Unity.Profiling.LowLevel.MarkerFlags Warning
    static constexpr const uint16_t Warning = 16u;
    // Get static field: static public Unity.Profiling.LowLevel.MarkerFlags Warning
    static ::Unity::Profiling::LowLevel::MarkerFlags _get_Warning();
    // Set static field: static public Unity.Profiling.LowLevel.MarkerFlags Warning
    static void _set_Warning(::Unity::Profiling::LowLevel::MarkerFlags value);
    // static field const value: static public Unity.Profiling.LowLevel.MarkerFlags Counter
    static constexpr const uint16_t Counter = 128u;
    // Get static field: static public Unity.Profiling.LowLevel.MarkerFlags Counter
    static ::Unity::Profiling::LowLevel::MarkerFlags _get_Counter();
    // Set static field: static public Unity.Profiling.LowLevel.MarkerFlags Counter
    static void _set_Counter(::Unity::Profiling::LowLevel::MarkerFlags value);
    // Get instance field reference: public System.UInt16 value__
    uint16_t& dyn_value__();
  }; // Unity.Profiling.LowLevel.MarkerFlags
  #pragma pack(pop)
  static check_size<sizeof(MarkerFlags), 16 + sizeof(uint16_t)> __Unity_Profiling_LowLevel_MarkerFlagsSizeCheck;
  static_assert(sizeof(MarkerFlags) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
