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
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Forward declaring type: LinkBehaviour
  struct LinkBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::LinkBehaviour, "DG.Tweening", "LinkBehaviour");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.LinkBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  struct LinkBehaviour/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: LinkBehaviour
    constexpr LinkBehaviour(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DG.Tweening.LinkBehaviour PauseOnDisable
    static constexpr const int PauseOnDisable = 0;
    // Get static field: static public DG.Tweening.LinkBehaviour PauseOnDisable
    static ::DG::Tweening::LinkBehaviour _get_PauseOnDisable();
    // Set static field: static public DG.Tweening.LinkBehaviour PauseOnDisable
    static void _set_PauseOnDisable(::DG::Tweening::LinkBehaviour value);
    // static field const value: static public DG.Tweening.LinkBehaviour PauseOnDisablePlayOnEnable
    static constexpr const int PauseOnDisablePlayOnEnable = 1;
    // Get static field: static public DG.Tweening.LinkBehaviour PauseOnDisablePlayOnEnable
    static ::DG::Tweening::LinkBehaviour _get_PauseOnDisablePlayOnEnable();
    // Set static field: static public DG.Tweening.LinkBehaviour PauseOnDisablePlayOnEnable
    static void _set_PauseOnDisablePlayOnEnable(::DG::Tweening::LinkBehaviour value);
    // static field const value: static public DG.Tweening.LinkBehaviour PauseOnDisableRestartOnEnable
    static constexpr const int PauseOnDisableRestartOnEnable = 2;
    // Get static field: static public DG.Tweening.LinkBehaviour PauseOnDisableRestartOnEnable
    static ::DG::Tweening::LinkBehaviour _get_PauseOnDisableRestartOnEnable();
    // Set static field: static public DG.Tweening.LinkBehaviour PauseOnDisableRestartOnEnable
    static void _set_PauseOnDisableRestartOnEnable(::DG::Tweening::LinkBehaviour value);
    // static field const value: static public DG.Tweening.LinkBehaviour PlayOnEnable
    static constexpr const int PlayOnEnable = 3;
    // Get static field: static public DG.Tweening.LinkBehaviour PlayOnEnable
    static ::DG::Tweening::LinkBehaviour _get_PlayOnEnable();
    // Set static field: static public DG.Tweening.LinkBehaviour PlayOnEnable
    static void _set_PlayOnEnable(::DG::Tweening::LinkBehaviour value);
    // static field const value: static public DG.Tweening.LinkBehaviour RestartOnEnable
    static constexpr const int RestartOnEnable = 4;
    // Get static field: static public DG.Tweening.LinkBehaviour RestartOnEnable
    static ::DG::Tweening::LinkBehaviour _get_RestartOnEnable();
    // Set static field: static public DG.Tweening.LinkBehaviour RestartOnEnable
    static void _set_RestartOnEnable(::DG::Tweening::LinkBehaviour value);
    // static field const value: static public DG.Tweening.LinkBehaviour KillOnDisable
    static constexpr const int KillOnDisable = 5;
    // Get static field: static public DG.Tweening.LinkBehaviour KillOnDisable
    static ::DG::Tweening::LinkBehaviour _get_KillOnDisable();
    // Set static field: static public DG.Tweening.LinkBehaviour KillOnDisable
    static void _set_KillOnDisable(::DG::Tweening::LinkBehaviour value);
    // static field const value: static public DG.Tweening.LinkBehaviour KillOnDestroy
    static constexpr const int KillOnDestroy = 6;
    // Get static field: static public DG.Tweening.LinkBehaviour KillOnDestroy
    static ::DG::Tweening::LinkBehaviour _get_KillOnDestroy();
    // Set static field: static public DG.Tweening.LinkBehaviour KillOnDestroy
    static void _set_KillOnDestroy(::DG::Tweening::LinkBehaviour value);
    // static field const value: static public DG.Tweening.LinkBehaviour CompleteOnDisable
    static constexpr const int CompleteOnDisable = 7;
    // Get static field: static public DG.Tweening.LinkBehaviour CompleteOnDisable
    static ::DG::Tweening::LinkBehaviour _get_CompleteOnDisable();
    // Set static field: static public DG.Tweening.LinkBehaviour CompleteOnDisable
    static void _set_CompleteOnDisable(::DG::Tweening::LinkBehaviour value);
    // static field const value: static public DG.Tweening.LinkBehaviour CompleteAndKillOnDisable
    static constexpr const int CompleteAndKillOnDisable = 8;
    // Get static field: static public DG.Tweening.LinkBehaviour CompleteAndKillOnDisable
    static ::DG::Tweening::LinkBehaviour _get_CompleteAndKillOnDisable();
    // Set static field: static public DG.Tweening.LinkBehaviour CompleteAndKillOnDisable
    static void _set_CompleteAndKillOnDisable(::DG::Tweening::LinkBehaviour value);
    // static field const value: static public DG.Tweening.LinkBehaviour RewindOnDisable
    static constexpr const int RewindOnDisable = 9;
    // Get static field: static public DG.Tweening.LinkBehaviour RewindOnDisable
    static ::DG::Tweening::LinkBehaviour _get_RewindOnDisable();
    // Set static field: static public DG.Tweening.LinkBehaviour RewindOnDisable
    static void _set_RewindOnDisable(::DG::Tweening::LinkBehaviour value);
    // static field const value: static public DG.Tweening.LinkBehaviour RewindAndKillOnDisable
    static constexpr const int RewindAndKillOnDisable = 10;
    // Get static field: static public DG.Tweening.LinkBehaviour RewindAndKillOnDisable
    static ::DG::Tweening::LinkBehaviour _get_RewindAndKillOnDisable();
    // Set static field: static public DG.Tweening.LinkBehaviour RewindAndKillOnDisable
    static void _set_RewindAndKillOnDisable(::DG::Tweening::LinkBehaviour value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // DG.Tweening.LinkBehaviour
  #pragma pack(pop)
  static check_size<sizeof(LinkBehaviour), 16 + sizeof(int)> __DG_Tweening_LinkBehaviourSizeCheck;
  static_assert(sizeof(LinkBehaviour) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
