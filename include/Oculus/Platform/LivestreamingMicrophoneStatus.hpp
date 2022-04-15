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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: LivestreamingMicrophoneStatus
  struct LivestreamingMicrophoneStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LivestreamingMicrophoneStatus, "Oculus.Platform", "LivestreamingMicrophoneStatus");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.LivestreamingMicrophoneStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct LivestreamingMicrophoneStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LivestreamingMicrophoneStatus
    constexpr LivestreamingMicrophoneStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x6B71D8
    // static field const value: static public Oculus.Platform.LivestreamingMicrophoneStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.LivestreamingMicrophoneStatus Unknown
    static ::Oculus::Platform::LivestreamingMicrophoneStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.LivestreamingMicrophoneStatus Unknown
    static void _set_Unknown(::Oculus::Platform::LivestreamingMicrophoneStatus value);
    // [DescriptionAttribute] Offset: 0x6B7210
    // static field const value: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOn
    static constexpr const int MicrophoneOn = 1;
    // Get static field: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOn
    static ::Oculus::Platform::LivestreamingMicrophoneStatus _get_MicrophoneOn();
    // Set static field: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOn
    static void _set_MicrophoneOn(::Oculus::Platform::LivestreamingMicrophoneStatus value);
    // [DescriptionAttribute] Offset: 0x6B7248
    // static field const value: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOff
    static constexpr const int MicrophoneOff = 2;
    // Get static field: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOff
    static ::Oculus::Platform::LivestreamingMicrophoneStatus _get_MicrophoneOff();
    // Set static field: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOff
    static void _set_MicrophoneOff(::Oculus::Platform::LivestreamingMicrophoneStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.LivestreamingMicrophoneStatus
  #pragma pack(pop)
  static check_size<sizeof(LivestreamingMicrophoneStatus), 0 + sizeof(int)> __Oculus_Platform_LivestreamingMicrophoneStatusSizeCheck;
  static_assert(sizeof(LivestreamingMicrophoneStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
