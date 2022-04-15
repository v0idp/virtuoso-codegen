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
// Type namespace: DG.Tweening.Core.Enums
namespace DG::Tweening::Core::Enums {
  // Forward declaring type: SpecialStartupMode
  struct SpecialStartupMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Enums::SpecialStartupMode, "DG.Tweening.Core.Enums", "SpecialStartupMode");
// Type namespace: DG.Tweening.Core.Enums
namespace DG::Tweening::Core::Enums {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Core.Enums.SpecialStartupMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct SpecialStartupMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SpecialStartupMode
    constexpr SpecialStartupMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DG.Tweening.Core.Enums.SpecialStartupMode None
    static constexpr const int None = 0;
    // Get static field: static public DG.Tweening.Core.Enums.SpecialStartupMode None
    static ::DG::Tweening::Core::Enums::SpecialStartupMode _get_None();
    // Set static field: static public DG.Tweening.Core.Enums.SpecialStartupMode None
    static void _set_None(::DG::Tweening::Core::Enums::SpecialStartupMode value);
    // static field const value: static public DG.Tweening.Core.Enums.SpecialStartupMode SetLookAt
    static constexpr const int SetLookAt = 1;
    // Get static field: static public DG.Tweening.Core.Enums.SpecialStartupMode SetLookAt
    static ::DG::Tweening::Core::Enums::SpecialStartupMode _get_SetLookAt();
    // Set static field: static public DG.Tweening.Core.Enums.SpecialStartupMode SetLookAt
    static void _set_SetLookAt(::DG::Tweening::Core::Enums::SpecialStartupMode value);
    // static field const value: static public DG.Tweening.Core.Enums.SpecialStartupMode SetShake
    static constexpr const int SetShake = 2;
    // Get static field: static public DG.Tweening.Core.Enums.SpecialStartupMode SetShake
    static ::DG::Tweening::Core::Enums::SpecialStartupMode _get_SetShake();
    // Set static field: static public DG.Tweening.Core.Enums.SpecialStartupMode SetShake
    static void _set_SetShake(::DG::Tweening::Core::Enums::SpecialStartupMode value);
    // static field const value: static public DG.Tweening.Core.Enums.SpecialStartupMode SetPunch
    static constexpr const int SetPunch = 3;
    // Get static field: static public DG.Tweening.Core.Enums.SpecialStartupMode SetPunch
    static ::DG::Tweening::Core::Enums::SpecialStartupMode _get_SetPunch();
    // Set static field: static public DG.Tweening.Core.Enums.SpecialStartupMode SetPunch
    static void _set_SetPunch(::DG::Tweening::Core::Enums::SpecialStartupMode value);
    // static field const value: static public DG.Tweening.Core.Enums.SpecialStartupMode SetCameraShakePosition
    static constexpr const int SetCameraShakePosition = 4;
    // Get static field: static public DG.Tweening.Core.Enums.SpecialStartupMode SetCameraShakePosition
    static ::DG::Tweening::Core::Enums::SpecialStartupMode _get_SetCameraShakePosition();
    // Set static field: static public DG.Tweening.Core.Enums.SpecialStartupMode SetCameraShakePosition
    static void _set_SetCameraShakePosition(::DG::Tweening::Core::Enums::SpecialStartupMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // DG.Tweening.Core.Enums.SpecialStartupMode
  #pragma pack(pop)
  static check_size<sizeof(SpecialStartupMode), 0 + sizeof(int)> __DG_Tweening_Core_Enums_SpecialStartupModeSizeCheck;
  static_assert(sizeof(SpecialStartupMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
