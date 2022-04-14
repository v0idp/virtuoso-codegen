// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.BeatCounterUI
#include "VROSC/BeatCounterUI.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BeatCounterUI::SyncToggleSource, "VROSC", "BeatCounterUI/SyncToggleSource");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.BeatCounterUI/VROSC.SyncToggleSource
  // [TokenAttribute] Offset: FFFFFFFF
  struct BeatCounterUI::SyncToggleSource/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SyncToggleSource
    constexpr SyncToggleSource(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource ToggleButton
    static constexpr const int ToggleButton = 0;
    // Get static field: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource ToggleButton
    static ::VROSC::BeatCounterUI::SyncToggleSource _get_ToggleButton();
    // Set static field: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource ToggleButton
    static void _set_ToggleButton(::VROSC::BeatCounterUI::SyncToggleSource value);
    // static field const value: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource DataLoad
    static constexpr const int DataLoad = 1;
    // Get static field: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource DataLoad
    static ::VROSC::BeatCounterUI::SyncToggleSource _get_DataLoad();
    // Set static field: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource DataLoad
    static void _set_DataLoad(::VROSC::BeatCounterUI::SyncToggleSource value);
    // static field const value: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource Slider
    static constexpr const int Slider = 2;
    // Get static field: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource Slider
    static ::VROSC::BeatCounterUI::SyncToggleSource _get_Slider();
    // Set static field: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource Slider
    static void _set_Slider(::VROSC::BeatCounterUI::SyncToggleSource value);
    // static field const value: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource Reset
    static constexpr const int Reset = 3;
    // Get static field: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource Reset
    static ::VROSC::BeatCounterUI::SyncToggleSource _get_Reset();
    // Set static field: static public VROSC.BeatCounterUI/VROSC.SyncToggleSource Reset
    static void _set_Reset(::VROSC::BeatCounterUI::SyncToggleSource value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // VROSC.BeatCounterUI/VROSC.SyncToggleSource
  #pragma pack(pop)
  static check_size<sizeof(BeatCounterUI::SyncToggleSource), 0 + sizeof(int)> __VROSC_BeatCounterUI_SyncToggleSourceSizeCheck;
  static_assert(sizeof(BeatCounterUI::SyncToggleSource) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
