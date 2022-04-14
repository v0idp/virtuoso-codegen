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
  // Forward declaring type: UpdateType
  struct UpdateType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::UpdateType, "DG.Tweening", "UpdateType");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.UpdateType
  // [TokenAttribute] Offset: FFFFFFFF
  struct UpdateType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UpdateType
    constexpr UpdateType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DG.Tweening.UpdateType Normal
    static constexpr const int Normal = 0;
    // Get static field: static public DG.Tweening.UpdateType Normal
    static ::DG::Tweening::UpdateType _get_Normal();
    // Set static field: static public DG.Tweening.UpdateType Normal
    static void _set_Normal(::DG::Tweening::UpdateType value);
    // static field const value: static public DG.Tweening.UpdateType Late
    static constexpr const int Late = 1;
    // Get static field: static public DG.Tweening.UpdateType Late
    static ::DG::Tweening::UpdateType _get_Late();
    // Set static field: static public DG.Tweening.UpdateType Late
    static void _set_Late(::DG::Tweening::UpdateType value);
    // static field const value: static public DG.Tweening.UpdateType Fixed
    static constexpr const int Fixed = 2;
    // Get static field: static public DG.Tweening.UpdateType Fixed
    static ::DG::Tweening::UpdateType _get_Fixed();
    // Set static field: static public DG.Tweening.UpdateType Fixed
    static void _set_Fixed(::DG::Tweening::UpdateType value);
    // static field const value: static public DG.Tweening.UpdateType Manual
    static constexpr const int Manual = 3;
    // Get static field: static public DG.Tweening.UpdateType Manual
    static ::DG::Tweening::UpdateType _get_Manual();
    // Set static field: static public DG.Tweening.UpdateType Manual
    static void _set_Manual(::DG::Tweening::UpdateType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // DG.Tweening.UpdateType
  #pragma pack(pop)
  static check_size<sizeof(UpdateType), 0 + sizeof(int)> __DG_Tweening_UpdateTypeSizeCheck;
  static_assert(sizeof(UpdateType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
