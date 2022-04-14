// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopPlaybackConfig
#include "VROSC/LoopPlaybackConfig.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackConfig::LoopMode, "VROSC", "LoopPlaybackConfig/LoopMode");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlaybackConfig/VROSC.LoopMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct LoopPlaybackConfig::LoopMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LoopMode
    constexpr LoopMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.LoopPlaybackConfig/VROSC.LoopMode Loop
    static constexpr const int Loop = 0;
    // Get static field: static public VROSC.LoopPlaybackConfig/VROSC.LoopMode Loop
    static ::VROSC::LoopPlaybackConfig::LoopMode _get_Loop();
    // Set static field: static public VROSC.LoopPlaybackConfig/VROSC.LoopMode Loop
    static void _set_Loop(::VROSC::LoopPlaybackConfig::LoopMode value);
    // static field const value: static public VROSC.LoopPlaybackConfig/VROSC.LoopMode Once
    static constexpr const int Once = 1;
    // Get static field: static public VROSC.LoopPlaybackConfig/VROSC.LoopMode Once
    static ::VROSC::LoopPlaybackConfig::LoopMode _get_Once();
    // Set static field: static public VROSC.LoopPlaybackConfig/VROSC.LoopMode Once
    static void _set_Once(::VROSC::LoopPlaybackConfig::LoopMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // VROSC.LoopPlaybackConfig/VROSC.LoopMode
  #pragma pack(pop)
  static check_size<sizeof(LoopPlaybackConfig::LoopMode), 0 + sizeof(int)> __VROSC_LoopPlaybackConfig_LoopModeSizeCheck;
  static_assert(sizeof(LoopPlaybackConfig::LoopMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
