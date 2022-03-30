// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.DashboardSpawnPoint
#include "VROSC/DashboardSpawnPoint.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DashboardSpawnPoint::TriggerCondition, "VROSC", "DashboardSpawnPoint/TriggerCondition");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.DashboardSpawnPoint/VROSC.TriggerCondition
  // [TokenAttribute] Offset: FFFFFFFF
  struct DashboardSpawnPoint::TriggerCondition/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: TriggerCondition
    constexpr TriggerCondition(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition Position
    static constexpr const int Position = 0;
    // Get static field: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition Position
    static ::VROSC::DashboardSpawnPoint::TriggerCondition _get_Position();
    // Set static field: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition Position
    static void _set_Position(::VROSC::DashboardSpawnPoint::TriggerCondition value);
    // static field const value: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition Direction
    static constexpr const int Direction = 1;
    // Get static field: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition Direction
    static ::VROSC::DashboardSpawnPoint::TriggerCondition _get_Direction();
    // Set static field: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition Direction
    static void _set_Direction(::VROSC::DashboardSpawnPoint::TriggerCondition value);
    // static field const value: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition MenuButton
    static constexpr const int MenuButton = 2;
    // Get static field: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition MenuButton
    static ::VROSC::DashboardSpawnPoint::TriggerCondition _get_MenuButton();
    // Set static field: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition MenuButton
    static void _set_MenuButton(::VROSC::DashboardSpawnPoint::TriggerCondition value);
    // static field const value: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition SpaceBar
    static constexpr const int SpaceBar = 3;
    // Get static field: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition SpaceBar
    static ::VROSC::DashboardSpawnPoint::TriggerCondition _get_SpaceBar();
    // Set static field: static public VROSC.DashboardSpawnPoint/VROSC.TriggerCondition SpaceBar
    static void _set_SpaceBar(::VROSC::DashboardSpawnPoint::TriggerCondition value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // VROSC.DashboardSpawnPoint/VROSC.TriggerCondition
  #pragma pack(pop)
  static check_size<sizeof(DashboardSpawnPoint::TriggerCondition), 16 + sizeof(int)> __VROSC_DashboardSpawnPoint_TriggerConditionSizeCheck;
  static_assert(sizeof(DashboardSpawnPoint::TriggerCondition) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
