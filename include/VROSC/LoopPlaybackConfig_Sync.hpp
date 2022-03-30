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
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackConfig::Sync, "VROSC", "LoopPlaybackConfig/Sync");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlaybackConfig/VROSC.Sync
  // [TokenAttribute] Offset: FFFFFFFF
  struct LoopPlaybackConfig::Sync/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: Sync
    constexpr Sync(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.LoopPlaybackConfig/VROSC.Sync PlayFromStart
    static constexpr const int PlayFromStart = 0;
    // Get static field: static public VROSC.LoopPlaybackConfig/VROSC.Sync PlayFromStart
    static ::VROSC::LoopPlaybackConfig::Sync _get_PlayFromStart();
    // Set static field: static public VROSC.LoopPlaybackConfig/VROSC.Sync PlayFromStart
    static void _set_PlayFromStart(::VROSC::LoopPlaybackConfig::Sync value);
    // static field const value: static public VROSC.LoopPlaybackConfig/VROSC.Sync Global
    static constexpr const int Global = 1;
    // Get static field: static public VROSC.LoopPlaybackConfig/VROSC.Sync Global
    static ::VROSC::LoopPlaybackConfig::Sync _get_Global();
    // Set static field: static public VROSC.LoopPlaybackConfig/VROSC.Sync Global
    static void _set_Global(::VROSC::LoopPlaybackConfig::Sync value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // VROSC.LoopPlaybackConfig/VROSC.Sync
  #pragma pack(pop)
  static check_size<sizeof(LoopPlaybackConfig::Sync), 16 + sizeof(int)> __VROSC_LoopPlaybackConfig_SyncSizeCheck;
  static_assert(sizeof(LoopPlaybackConfig::Sync) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
